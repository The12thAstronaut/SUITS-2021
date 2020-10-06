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

    private List<Destination> destinations = new List<Destination>();

    void OnEnable()
    {
        current = this;
    }

    void Update()
    {
        Destination currentDestination;
        if ((currentDestination = CurrentDestination()) != null)
        {
            float distanceToTarget = Vector3.Distance(Camera.main.transform.position, currentDestination.GetPosition());
            Debug.Log("Distance to " + currentDestination.GetName() + ": " + distanceToTarget);
        }
    }

    public Destination[] GetDestinations()
    {
        return destinations.ToArray();
    }

    public Destination CurrentDestination()
    {
        if (destinations.Count > 0)
        {
            return destinations[destinations.Count - 1];
        }
        return null;
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
        destinations.RemoveAt(i);
        if (onRemoveDestination != null)
        {
            onRemoveDestination.Invoke(destinations[i]);
        }
    }

    public void SwapDestinations(int i1, int i2)
    {
        // Swap the destinations.
        Destination tmp = destinations[i1];
        destinations[i1] = destinations[i2];
        destinations[i2] = tmp;

        if (onReorderDestination != null)
        {
            onReorderDestination.Invoke(destinations.ToArray());
        }
    }

    public Destination[] GetActiveDestinations()
    {
        List<Destination> activeDestinations = new List<Destination>();
        foreach (Destination d in destinations)
        {
            if (d.GetActive())
            {
                activeDestinations.Add(d);
            }
        }

        return activeDestinations.ToArray();
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
