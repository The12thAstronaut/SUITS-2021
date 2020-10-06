using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class NavigationController : MonoBehaviour
{
    public float reachedThreshhold = 8;
    public int splineResolution = 30;
    public int waypointResolution = 30;

    private List<Vector3> waypoints = new List<Vector3>();
    private Vector3[] points;
    private LineRenderer line;
    void Start()
    {
        line = GetComponent<LineRenderer>();

        DestinationManager dm = DestinationManager.current;
        dm.onAddDestination.AddListener((a) => AddDestination(a));

        // dm.AddDestination(new Destination("destination1", new Vector3(0, 0, 0), true, true));
        // dm.AddDestination(new Destination("destination2", new Vector3(10, 0, 10), true, true));
        // dm.AddDestination(new Destination("destination3", new Vector3(0, 0, 20), true, true));

        UpdateSpline();
    }

    void AddDestination(Destination newDestination)
    {
        waypoints.Clear();
        waypoints.AddRange(DestinationManager.current.GetWaypoints(waypointResolution));
        Debug.Log("Waypoints.Count = " + waypoints.Count);

        UpdateSpline();
        Debug.Log(newDestination.GetName());
    }

    void UpdateSpline()
    {
        if (waypoints.Count > 2)
        {
            points = new Vector3[splineResolution * (waypoints.Count - 1)];
            line.positionCount = splineResolution * (waypoints.Count - 1);
            for (int i = 0; i < waypoints.Count - 1; i++)
            {
                for (int t = 0; t < splineResolution; t++)
                {

                    points[(i * splineResolution) + t] = GetCatmullRomPosition(t / (float)splineResolution,
                                waypoints[Mathf.Clamp(i - 1, 0, waypoints.Count - 1)],
                                waypoints[Mathf.Clamp(i + 0, 0, waypoints.Count - 1)],
                                waypoints[Mathf.Clamp(i + 1, 0, waypoints.Count - 1)],
                                waypoints[Mathf.Clamp(i + 2, 0, waypoints.Count - 1)]);
                }
            }

            line.SetPositions(points);
        }
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
