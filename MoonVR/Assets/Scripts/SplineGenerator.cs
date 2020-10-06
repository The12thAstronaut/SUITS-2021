using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class SplineGenerator : MonoBehaviour
{
    public float reachedThreshhold = 8;
    public int splineResolution = 30;
    public int waypointResolution = 30;

    private DestinationManager dm;
    private LineRenderer line;

    private const float distanceFromGround = 0.3f;

    void Start()
    {
        line = GetComponent<LineRenderer>();

        dm = DestinationManager.current;
        dm.onAddDestination.AddListener((d) => UpdateSpline());

        UpdateSpline();
    }

    void UpdateSpline()
    {
        Vector3[] waypoints = GetWaypoints(waypointResolution);
        Vector3[] points;

        if (waypoints.Length > 2)
        {
            points = new Vector3[splineResolution * (waypoints.Length - 1)];
            line.positionCount = splineResolution * (waypoints.Length - 1);
            for (int i = 0; i < waypoints.Length - 1; i++)
            {
                for (int t = 0; t < splineResolution; t++)
                {

                    points[(i * splineResolution) + t] = GetCatmullRomPosition(t / (float)splineResolution,
                                waypoints[Mathf.Clamp(i - 1, 0, waypoints.Length - 1)],
                                waypoints[Mathf.Clamp(i + 0, 0, waypoints.Length - 1)],
                                waypoints[Mathf.Clamp(i + 1, 0, waypoints.Length - 1)],
                                waypoints[Mathf.Clamp(i + 2, 0, waypoints.Length - 1)]);
                }
            }

            line.SetPositions(points);
        }
    }

    public Vector3[] GetWaypoints(int n)
    {
        Destination[] activeDestinations = dm.GetActiveDestinations();
        List<Vector3> waypoints = new List<Vector3>();

        for (int i = 0; i < activeDestinations.Length - 1; ++i)
        {
            waypoints.Add(activeDestinations[i].GetPosition());

            Vector3 p1 = activeDestinations[i].GetPosition();
            Vector3 p2 = activeDestinations[i + 1].GetPosition();
            float length = (p1 - p2).magnitude;
            float stepSize = length / (n + 1);

            for (int j = 1; j <= n; ++j)
            {
                Vector3 lerp = Vector3.Lerp(p1, p2, stepSize * j / length);

                // Cast a ray from the ceiling to the floor so that the spline
                // will render along the floor and not through it.
                Ray ray = new Ray(lerp + Vector3.up * 100, Vector3.down);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit))
                {
                    waypoints.Add(hit.point + Vector3.up * distanceFromGround);
                }
                else
                {
                    waypoints.Add(lerp);
                }
            }
        }

        if (activeDestinations.Length > 0)
        {
            waypoints.Add(activeDestinations[activeDestinations.Length - 1].GetPosition());
        }

        foreach (Vector3 v in waypoints)
        {
            Debug.DrawLine(v, v + Vector3.up * 5, Color.red, 20);
        }

        return waypoints.ToArray();
    }

    public void AddLookPoint()
    {
        Camera currentCamera = Camera.main;
        Ray ray = new Ray(currentCamera.transform.position, currentCamera.transform.forward);
        RaycastHit hit;

        bool hitSomething = Physics.Raycast(ray, out hit);
        if (hitSomething)
        {
            DestinationManager.current.AddDestination(new Destination("destination!!", hit.point, true, true));
        }
    }

    //Returns a position between 4 Vector3 with Catmull-Rom spline algorithm
    //http://www.iquilezles.org/www/articles/minispline/minispline.htm
    Vector3 GetCatmullRomPosition(float t, Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3)
    {
        //The coefficients of the cubic polynomial (except the 0.5f * which I added later for performance)
        Vector3 a = 2f * p1;
        Vector3 b = p2 - p0;
        Vector3 c = 2f * p0 - 5f * p1 + 4f * p2 - p3;
        Vector3 d = -p0 + 3f * p1 - 3f * p2 + p3;

        //The cubic polynomial: a + b * t + c * t^2 + d * t^3
        Vector3 pos = 0.5f * (a + (b * t) + (c * t * t) + (d * t * t * t));

        return pos;
    }
}
