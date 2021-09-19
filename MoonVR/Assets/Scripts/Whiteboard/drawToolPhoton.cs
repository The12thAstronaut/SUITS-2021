using Photon.Pun;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using SpinningHologram;

public class drawToolPhoton : MonoBehaviour
{
    public Transform rayOrigin;
    public GameObject splinePrefab;

    public GameObject hologramBox;

    public GameObject hologramBoxSpin;

    public GameObject hologramArrow;

    public GameObject hologramArrowSpin;


    public GameObject splineToHide;
    public GameObject whiteboardObjectParent;
    public int lastSplineID;
    private PhotonView PV;
    private GameObject currentSpline;
    private objectID objectID;
    public PhotonMessageInfo Info;

    private spinning_hologram spinningArrow;


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
        if(Input.GetMouseButton(0) && drawingMode == true)
        {
            updateSplinePen();
        }

        if(Input.GetKeyDown(KeyCode.Alpha1) && drawingMode == true)
        {
            updateHologramBox();
        }

        if(Input.GetKeyDown(KeyCode.Alpha2) && drawingMode == true)
        {
            updateHologramBoxSpin();
        }

        if(Input.GetKeyDown(KeyCode.Alpha3) && drawingMode == true)
        {
            updateHologramArrow();

            spinningArrow.Hologram = gameObject;
            spinningArrow.rotateSpeed = 10;
            spinningArrow.Spin();


        }

        if(Input.GetKeyDown(KeyCode.Alpha4) && drawingMode == true)
        {
            updateHologramArrowSpin();
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

    [PunRPC]
    void HologramBoxDraw( Vector3 position, Quaternion rotation, int SplineID, PhotonMessageInfo info )
    {
        double timestamp = PhotonNetwork.Time;
        timestamp = info.SentServerTime;
        //Spawn Spline sphere
        currentSpline = Instantiate(hologramBox, position, rotation, whiteboardObjectParent.transform);
        Debug.Log(SplineID);
        //Get objectID component from spline sphere and assign lastSplineID
        objectID = currentSpline.GetComponent(typeof(objectID)) as objectID;
        objectID.ID = SplineID;
    }


    [PunRPC]
    void HologramBoxSpinDraw( Vector3 position, Quaternion rotation, int SplineID, PhotonMessageInfo info )
    {
        double timestamp = PhotonNetwork.Time;
        timestamp = info.SentServerTime;
        //Spawn Spline sphere
        currentSpline = Instantiate(hologramBoxSpin, position, rotation, whiteboardObjectParent.transform);
        Debug.Log(SplineID);
        //Get objectID component from spline sphere and assign lastSplineID
        objectID = currentSpline.GetComponent(typeof(objectID)) as objectID;
        objectID.ID = SplineID;
    }

    [PunRPC]
    void HologramArrowDraw( Vector3 position, Quaternion rotation, int SplineID, PhotonMessageInfo info )
    {
        double timestamp = PhotonNetwork.Time;
        timestamp = info.SentServerTime;
        //Spawn Spline sphere
        currentSpline = Instantiate(hologramArrow, position, rotation, whiteboardObjectParent.transform);
        Debug.Log(SplineID);
        //Get objectID component from spline sphere and assign lastSplineID
        objectID = currentSpline.GetComponent(typeof(objectID)) as objectID;
        objectID.ID = SplineID;
    }

    [PunRPC]
    void HologramArrowSpinDraw( Vector3 position, Quaternion rotation, int SplineID, PhotonMessageInfo info )
    {
        double timestamp = PhotonNetwork.Time;
        timestamp = info.SentServerTime;
        //Spawn Spline sphere
        currentSpline = Instantiate(hologramArrowSpin, position, rotation, whiteboardObjectParent.transform);
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


    void updateHologramBox()
    {
        // Instead of having a different PhotonView for each
        //     sphere, such as in the RPC_Laser_Sphere() function
        //     I should have all of the spheres be a component
        //     part of the networked user's PhotonView so
        //     that I don't run out of PhotonView IDs
        lastSplineID++;         //Increment lastSplineID by 1

        if( PhotonNetwork.OfflineMode == true)
        {
            //SplineDraw() Offline Mode
            HologramBoxDraw( (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                      , Quaternion.Euler(0,0,0)
                      , lastSplineID
                      , Info );
        }
        else
        {
            //SplineDraw() RPC Online Mode
            PV.RPC( "HologramBoxDraw"
                          , RpcTarget.All
                          , new object[] { (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                                         , Quaternion.Euler(0,0,0)
                                         , lastSplineID
                                         }
                          );
        }
    }

    void updateHologramBoxSpin()
    {
        // Instead of having a different PhotonView for each
        //     sphere, such as in the RPC_Laser_Sphere() function
        //     I should have all of the spheres be a component
        //     part of the networked user's PhotonView so
        //     that I don't run out of PhotonView IDs
        lastSplineID++;         //Increment lastSplineID by 1

        if( PhotonNetwork.OfflineMode == true)
        {
            //SplineDraw() Offline Mode
            HologramBoxSpinDraw( (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                      , Quaternion.Euler(0,0,0)
                      , lastSplineID
                      , Info );
        }
        else
        {
            //SplineDraw() RPC Online Mode
            PV.RPC( "HologramBoxSpinDraw"
                          , RpcTarget.All
                          , new object[] { (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                                         , Quaternion.Euler(0,0,0)
                                         , lastSplineID
                                         }
                          );
        }
    }

    void updateHologramArrow()
    {
        // Instead of having a different PhotonView for each
        //     sphere, such as in the RPC_Laser_Sphere() function
        //     I should have all of the spheres be a component
        //     part of the networked user's PhotonView so
        //     that I don't run out of PhotonView IDs
        lastSplineID++;         //Increment lastSplineID by 1

        if( PhotonNetwork.OfflineMode == true)
        {
            //SplineDraw() Offline Mode
            HologramArrowDraw( (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                      , Quaternion.Euler(0,0,0)
                      , lastSplineID
                      , Info );
        }
        else
        {
            //SplineDraw() RPC Online Mode
            PV.RPC( "HologramArrowDraw"
                          , RpcTarget.All
                          , new object[] { (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                                         , Quaternion.Euler(0,0,0)
                                         , lastSplineID
                                         }
                          );
        }
    }



    void updateHologramArrowSpin()
    {
        // Instead of having a different PhotonView for each
        //     sphere, such as in the RPC_Laser_Sphere() function
        //     I should have all of the spheres be a component
        //     part of the networked user's PhotonView so
        //     that I don't run out of PhotonView IDs
        lastSplineID++;         //Increment lastSplineID by 1

        if( PhotonNetwork.OfflineMode == true)
        {
            //SplineDraw() Offline Mode
            HologramArrowSpinDraw( (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                      , Quaternion.Euler(0,0,0)
                      , lastSplineID
                      , Info );
        }
        else
        {
            //SplineDraw() RPC Online Mode
            PV.RPC( "HologramArrowSpinDraw"
                          , RpcTarget.All
                          , new object[] { (rayOrigin.position + (rayOrigin.TransformDirection(Vector3.forward)*2))
                                         , Quaternion.Euler(0,0,0)
                                         , lastSplineID
                                         }
                          );
        }
    }


}
