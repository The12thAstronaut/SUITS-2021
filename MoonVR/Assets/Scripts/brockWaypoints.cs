using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class brockWaypoints : MonoBehaviour
{

    public GameObject waypointOne;
    public GameObject waypointTwo;

    // Start is called before the first frame update
    void Start()
    {
        print("Waypoint One's Location is: " + waypointOne.transform.position);
        print("Waypoint Two's Location is: " + waypointTwo.transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
