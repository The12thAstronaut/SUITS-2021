using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class drawTool : MonoBehaviour
{
    public Transform rayOrigin;
    public GameObject splinePrefab;
    public int lastSplineID;

    private GameObject currentSpline;
    private objectID objectID;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //Spawn Transparent Sphere on Left Click
        if(Input.GetMouseButton(0))        {
            updateSplinePen();
        }
    }

    //Instantiate splinePrefab with an ID in front of the camera
    void updateSplinePen(){

        lastSplineID++;         //Increment lastSplineID by 1
        SplineDraw( (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                    , Quaternion.Euler(Random.Range(0, 360), Random.Range(0, 360), Random.Range(0, 360))
                    , lastSplineID);
    }

    void SplineDraw( Vector3 position, Quaternion rotation, int SplineID)
    {
        currentSpline = Instantiate(splinePrefab, position, rotation);
        Debug.Log(SplineID);
        //Get objectID component from spline sphere and assign lastSplineID
        objectID = currentSpline.GetComponent(typeof(objectID)) as objectID;
        objectID.ID = SplineID;
    }

}
