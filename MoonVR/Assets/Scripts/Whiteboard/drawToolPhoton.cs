using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class drawToolPhoton : MonoBehaviour
{
    public Transform rayOrigin;
    public GameObject splinePrefab;
    public GameObject splineToHide;
    public GameObject whiteboardObjectParent;
    public int lastSplineID;
    private PhotonView PV;
    private GameObject currentSpline;
    private objectID objectID;
    public PhotonMessageInfo Info;


    public bool drawingMode;

    // Start is called before the first frame update
    void Start()
    {
        PV = GetComponent<PhotonView>();
        whiteboardObjectParent = GameObject.Find("WhiteboardObjectParent");
        drawingMode = true;
        lastSplineID = 0;       //Initialize SplineID at 0
    }

    // Update is called once per frame
    void Update()
    {
        //Spawn Transparent Sphere on Left Click only if drawingMode is true
        if(Input.GetMouseButton(0) && drawingMode == true){
            updateSplinePen();
        }
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

    //RPC call to draw a spline sphere point
    [PunRPC]
    void SplineDraw( Vector3 position, Quaternion rotation, int SplineID, PhotonMessageInfo info )
    {
        double timestamp = PhotonNetwork.Time;
        timestamp = info.SentServerTime;
        //Spawn Spline sphere
        currentSpline = Instantiate(splinePrefab, position, rotation, whiteboardObjectParent.transform);
        Debug.Log(SplineID);
        //Get objectID component from spline sphere and assign lastSplineID
        objectID = currentSpline.GetComponent(typeof(objectID)) as objectID;
        objectID.ID = SplineID;
    }

    void updateSplinePen(){
        // Instead of having a different PhotonView for each
        //     sphere, such as in the RPC_Laser_Sphere() function
        //     I should have all of the spheres be a component
        //     part of the networked user's PhotonView so
        //     that I don't run out of PhotonView IDs
        lastSplineID++;         //Increment lastSplineID by 1

        if( PhotonNetwork.OfflineMode == true)
        {
            //SplineDraw() Offline Mode
            SplineDraw( (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                      , Quaternion.Euler(Random.Range(0, 360), Random.Range(0, 360), Random.Range(0, 360))
                      , lastSplineID
                      , Info );
        }
        else
        {
            //SplineDraw() RPC Online Mode
            PV.RPC( "SplineDraw"
                          , RpcTarget.All
                          , new object[] { (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                                         , Quaternion.Euler(Random.Range(0, 360), Random.Range(0, 360), Random.Range(0, 360))
                                         , lastSplineID
                                         }
                          );
        }
    }
}
