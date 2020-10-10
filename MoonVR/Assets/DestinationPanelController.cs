using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestinationPanelController : MonoBehaviour
{
    public GridObjectCollection destinationList;
    public GameObject destinationPrefab;

    private DestinationManager dm;

    private void Start()
    {
        dm = DestinationManager.current;
        dm.onAddDestination.AddListener((d) => OnAddDestination(d));
        dm.onRemoveDestination.AddListener((d) => OnRemoveDestination(d));
        dm.onReorderDestination.AddListener((ds) => OnReorderDestination(ds));

    }

    private void OnAddDestination(Destination destination)
    {
        GameObject newElement = GameObject.Instantiate(destinationPrefab);
        DestinationElement destinationElement = newElement.GetComponent<DestinationElement>();

        destinationElement.destinationName.SetText(destination.GetName());
        destinationElement.distance.SetText(destination.GetDistance().ToString("F1") + "m");
        destinationElement.closeButton.OnClick.AddListener(() => dm.RemoveDestination(destination));
        destinationElement.checkBox.OnClick.AddListener(() => destination.SetActive(destinationElement.checkBox.IsToggled));
        destination.destinationElement = destinationElement;

        // Add the list item to the list.
        newElement.transform.parent = destinationList.transform;
        destinationList.UpdateCollection();
    }

    private void OnRemoveDestination(Destination destination)
    {
        destination.Destroy();
        destinationList.UpdateCollection();
    }

    private void OnReorderDestination(Destination[] destination)
    {

    }
}
