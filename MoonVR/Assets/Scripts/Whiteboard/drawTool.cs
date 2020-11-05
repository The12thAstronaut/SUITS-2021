using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class drawTool : MonoBehaviour
{
    public Transform rayOrigin;
    public GameObject splinePrefab;
    public GameObject splineToHide;
    public int lastSplineID;

    private GameObject currentSpline;
    private objectID objectID;

    public bool drawingMode;

    // Start is called before the first frame update
    void Start()
    {
        drawingMode = true;
    }

    // Update is called once per frame
    void Update()
    {
        //Spawn Transparent Sphere on Left Click only if drawingMode is true
        if(Input.GetMouseButton(0) && drawingMode == true){
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
        // Debug.Log(SplineID);
                //Get objectID component from spline sphere and assign lastSplineID
        objectID = currentSpline.GetComponent(typeof(objectID)) as objectID;
        objectID.ID = SplineID;
        currentSpline.gameObject.name = "Spline " +  objectID.ID.ToString();
    }

    public void toggleDrawingMode()
    {
        drawingMode = !drawingMode;
        Debug.Log("Drawing Mode: " + drawingMode);
    }

    //Hides the mesh renderers of the 5 most recent spawned splines
    public void undoDrawing()
    {
        for (int i = 0; i < 5; i++) 
        {
            //Hide most recentSpline Object, then decrement lastSplineID by 1
            splineToHide = GameObject.Find("Spline " + lastSplineID.ToString());
            Debug.Log("Hiding Spline " + lastSplineID.ToString());
            splineToHide.GetComponent<Renderer>().enabled = false;
            lastSplineID--;
            //WIP - Implement Minimum Spline ID
        }
    }

    //Reveals the mesh renderers of the 5 most recently hidden splines
    public void redoDrawing()
    {
        for (int i = 0; i < 5; i++) 
        {
            //Increment lastSplineID by 1, then reveal most recent hidden splineToHide Object
            lastSplineID++;
            splineToHide = GameObject.Find("Spline " + lastSplineID.ToString());
            Debug.Log("Revealing Spline " + lastSplineID.ToString());
            splineToHide.GetComponent<Renderer>().enabled = true;
            //WIP - Implement Maximum Spline ID
        }
    }
}
