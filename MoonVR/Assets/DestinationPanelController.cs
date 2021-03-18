using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestinationPanelController : MonoBehaviour
{
    public GridObjectCollection destinationList;
    public GameObject destinationPrefab;
    public List<DestinationElement> destElementList;

    public DestinationManager dm;

    private void Start()
    {
        dm = DestinationManager.current;
        dm.onAddDestination.AddListener((d) => OnAddDestination(d));
        dm.onRemoveDestination.AddListener((d) => OnRemoveDestination(d));
        dm.onReorderDestination.AddListener((ds) => OnReorderDestination(ds));
        dm.updatePlayerDistance.AddListener((dme) => UpdatePlayerDistance(dme));
    }

    private void OnAddDestination(Destination destination)
    {
        GameObject newElement = GameObject.Instantiate(destinationPrefab);
        DestinationElement destinationElement = newElement.GetComponent<DestinationElement>();
        destElementList.Add(destinationElement);

        if (dm.GetDestinations().Length == 1)
        {
            destinationElement.distance.SetText(destination.GetPlayerDistance().ToString("F1") + "m");
        } else
        {
            print(destination.GetLastPointDistance());
            destinationElement.distance.SetText(destination.GetLastPointDistance().ToString("F1") + "m");
        }

        destinationElement.destinationName.SetText(destination.GetName());
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

    private void UpdatePlayerDistance(DestinationManager dme)
    {
        float playerDistance = (dme.GetDestinations()[0].GetPosition() - Camera.main.transform.position).magnitude;
        destElementList[0].distance.SetText(playerDistance.ToString("F1") + "m");
    }

    private void OnReorderDestination(Destination[] destination)
    {

    }
}
