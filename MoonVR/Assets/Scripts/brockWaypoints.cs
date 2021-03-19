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
        print(waypointOne.transform.position);
        print(waypointTwo.transform.position);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
