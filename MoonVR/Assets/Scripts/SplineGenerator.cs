using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(LineRenderer))]
public class SplineGenerator : MonoBehaviour
{

    public float distanceFromGround = 0.3f;
    public float reachedThreshhold = 8;
    public int splineResolution = 30;

    private DestinationManager dm;
    private LineRenderer line;


    void Start()
    {
        // Get the line at the start and disable it
        line = GetComponent<LineRenderer>();
        line.enabled = false;

        dm = DestinationManager.current;
        dm.onAddDestination.AddListener((d) => UpdateSpline());
        dm.onRemoveDestination.AddListener((d) => UpdateSpline());
        dm.onReorderDestination.AddListener((d) => UpdateSpline());
        dm.onChangeActive.AddListener((d) => UpdateSpline());

        UpdateSpline();
    }

    void UpdateSpline()
    {
        Vector3[] waypoints = GetCorePoints();
       
        
        if (waypoints.Length > 2)
        {
            line.enabled = true;
            line.positionCount = splineResolution * (waypoints.Length - 1);
            

            line.SetPositions(GetSplinePoints(waypoints));
        }
        else
        {
            line.enabled = false;
        }
    }

    public float GetSplineDistance(Vector3[] waypoints)
    {
        Vector3[] points = GetSplinePoints(waypoints);
        float distance = 0;


        for (int i = 0; i < points.Length - 1; i++)
        {
            distance += (points[i] - points[i + 1]).magnitude;
        }

        return distance;
    }

    public Vector3[] GetSplinePoints(Vector3[] points)
    {
        List<Vector3> outputPoints = new List<Vector3>();

        for (int i = 0; i < points.Length - 1; i++)
        {
            for (int t = 0; t < splineResolution; t++)
            {
                Vector3 tmpPos = GetCatmullRomPosition(t / (float)splineResolution,
                                points[Mathf.Clamp(i - 1, 0, points.Length - 1)],
                                points[Mathf.Clamp(i + 0, 0, points.Length - 1)],
                                points[Mathf.Clamp(i + 1, 0, points.Length - 1)],
                                points[Mathf.Clamp(i + 2, 0, points.Length - 1)]);

                Ray ray = new Ray(tmpPos + Vector3.up * 100, Vector3.down);
                RaycastHit hit;
                if (Physics.Raycast(ray, out hit))
                {
                    outputPoints.Add(hit.point + Vector3.up * distanceFromGround);
                }
                else
                {
                    outputPoints.Add(tmpPos);
                }
            }
        }

        return outputPoints.ToArray();
    }

    public Vector3[] GetCorePoints()
    {
        Destination[] activeDestinations = dm.GetActiveDestinations();

        List<Vector3> waypoints = new List<Vector3>();

        foreach (Destination dest in activeDestinations)
        {
            waypoints.Add(dest.GetPosition());
        }

        return waypoints.ToArray();
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
