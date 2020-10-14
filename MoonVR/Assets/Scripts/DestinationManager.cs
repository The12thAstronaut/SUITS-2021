using System.Collections;
using System.Collections.Generic;
using UnityEngine.Events;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

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

    public GameObject markerPrefab;

    public DestinationEvent onAddDestination = new DestinationEvent();
    public DestinationEvent onRemoveDestination = new DestinationEvent();
    public DestinationEvent onChangeActive = new DestinationEvent();
    public DestinationsEvent onReorderDestination = new DestinationsEvent();

    private List<Destination> destinations = new List<Destination>();

    void OnEnable()
    {
        current = this;
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

    public void RemoveDestination(Destination destination)
    {
        destinations.Remove(destination);
        if (onRemoveDestination != null)
        {
            onRemoveDestination.Invoke(destination);
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
    private DestinationManager dm;

    // The actual game object the player sees.
    public GameObject marker;
    public DestinationElement destinationElement;

    public Destination(string newName, Vector3 pos, bool active = false, bool visited = false)
    {
        dm = DestinationManager.current;
        name = newName;
        position = pos;
        isActive = active;
        isVisited = visited;

        // Place the destination marker.
        marker = Object.Instantiate(dm.markerPrefab);
        MoveVisualObject();
        marker.SetActive(true);
    }

    public void Destroy()
    {
        destinationElement.closeButton.OnClick.RemoveAllListeners();
        marker.transform.parent = null;
        destinationElement.gameObject.transform.parent = null;
        GameObject.Destroy(marker);
        GameObject.Destroy(destinationElement.gameObject);
    }

    private void MoveVisualObject()
    {
        Renderer visRend = marker.GetComponent<Renderer>();

        marker.transform.position = position + visRend.bounds.extents.y * Vector3.up;
    }

    public void SetName(string newName)
    {
        name = newName;
    }

    public string GetName()
    {
        return name;
    }

    public void SetPosition(Vector3 newPos)
    {
        position = newPos;
    }

    public Vector3 GetPosition()
    {
        return position;
    }

    public void SetActive(bool active)
    {
        isActive = active;
        if (destinationElement.checkBox != null)
        {
            destinationElement.checkBox.IsToggled = isActive;
            marker.SetActive(active);
            dm.onChangeActive.Invoke(this);
        }
    }

    public bool GetActive()
    {
        return isActive;
    }

    public void SetVisited(bool visited)
    {
        isVisited = visited;
    }
    public bool GetVisited()
    {
        return isVisited;
    }

    public float GetDistance()
    {
        // TODO
        return 1;
    }
}
