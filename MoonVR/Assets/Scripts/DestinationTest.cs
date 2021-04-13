using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestinationTest : MonoBehaviour
{
    DestinationManager dm;
    public Camera currentCamera;

    // Start is called before the first frame update
    void Start()
    {
        dm = DestinationManager.current;
    }

    // Update is called once per frame
    void Update()
    {
        Destination currentDestination;
        if ((currentDestination = dm.CurrentDestination()) != null)
        {
            //float distanceToTarget = Vector3.Distance(Camera.main.transform.position, currentDestination.GetPosition());
            //Debug.Log("Distance to " + currentDestination.GetName() + ": " + distanceToTarget);
        }
    }

    public void AddLookPoint()
    {
        //Camera currentCamera = Camera.main;
        Ray ray = new Ray(currentCamera.transform.position, currentCamera.transform.forward);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit))
        {
            dm.AddDestination(new Destination("destination " + dm.GetDestinations().Length, hit.point, true, true));
        }
    }
}
