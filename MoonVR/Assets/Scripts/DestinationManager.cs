using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine;

[System.Serializable]
public class DestinationEvent : UnityEvent<Destination>
{
}

[System.Serializable]
public class DestinationsEvent : UnityEvent<Destination[]>
{
}

public class DestinationManager : MonoBehaviour
{
    public static DestinationManager current;

    public GameObject destinationPrefab;

    public DestinationEvent onAddDestination = new DestinationEvent();
    public DestinationEvent onRemoveDestination = new DestinationEvent();
    public DestinationsEvent onReorderDestination = new DestinationsEvent();
    public float distanceFromGround = 0.3f;

    private List<Destination> destinations = new List<Destination>();

    void OnEnable()
    {
        current = this;
    }
    
    public Destination[] GetDestinations()
    {
        return destinations.ToArray();
    }

    
    public void AddDestination(Destination destination)
    {
        destinations.Add(destination);
        if (onAddDestination != null)
        {
            onAddDestination.Invoke(destination);
        }
    }
    public void RemoveDestination(int i)
    {
        i = (int) Mathf.Clamp((float)i, 0, (float)destinations.Count);
        destinations.RemoveAt(i);
        if (onRemoveDestination != null)
        {
            onRemoveDestination.Invoke(destinations[i]);
        }
    }

    public void SwapDestinations(int i1, int i2)
    {
        // Clamp the indices to valid values.
        i1 = (int) Mathf.Clamp((float)i1, 0, (float)destinations.Count);
        i2 = (int) Mathf.Clamp((float)i2, 0, (float)destinations.Count);

        // Swap the destinations.
        Destination tmp = destinations[i1];
        destinations[i1] = destinations[i2];
        destinations[i2] = tmp;

        if (onReorderDestination != null)
        {
            onReorderDestination.Invoke(destinations.ToArray());
        }
    }

    public Vector3[] GetWaypoints(int n)
    {
        List<Destination> activeDestinations = new List<Destination>();
        foreach (Destination d in destinations)
        {
            if (d.GetActive())
            {
                activeDestinations.Add(d);
            }
        }

        List<Vector3> waypoints = new List<Vector3>();
        for (int i = 0; i < activeDestinations.Count - 1; ++i)
        {
            waypoints.Add(activeDestinations[i].GetPosition());

            Vector3 p1 = activeDestinations[i].GetPosition();
            Vector3 p2 = activeDestinations[i + 1].GetPosition();
            float length = (p1 - p2).magnitude;
            float stepSize = length / (n + 1);

            for (int j = 1; j <= n; ++j)
            {
                Vector3 lerp = Vector3.Lerp(p1, p2, stepSize * j / length);

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

        waypoints.Add(activeDestinations[activeDestinations.Count - 1].GetPosition());

        foreach (Vector3 v in waypoints)
        {
            Debug.DrawLine(v, v + Vector3.up * 5, Color.red, 20);
        }

        return waypoints.ToArray();
    }
}

public class Destination 
{
    private string name;
    private Vector3 position;
    private bool isActive, isVisited;

    // The actual game object the player sees.
    public GameObject visualObject;
    
    public Destination(string newName, Vector3 pos, bool active = false, bool visited = false)
    {
        name = newName;
        position = pos;
        isActive = active;
        isVisited = visited;

        // Place the destination marker.
        visualObject = Object.Instantiate(DestinationManager.current.destinationPrefab);
        visualObject.transform.position = position; 
        visualObject.SetActive(true);
    }

    public string GetName() 
    {
        return name;
    }

    public Vector3 GetPosition()
    {
        return position;
    } 

    public void SetName(string newName)
    {
        name = newName;
    }

    public void SetPosition(Vector3 newPos)
    {
        position = newPos;
    }

    public bool GetActive()
    {
        return isActive;
    }

    public void SetActive(bool active)
    {
        isActive = active;             
    }

    public void SetVisited(bool visited)
    {
        isVisited = visited;
    }

}
