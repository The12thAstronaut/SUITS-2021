using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class vrMovement : MonoBehaviour
{
    public GameObject MR_Origin;
    public GameObject Main_Camera;
    public Vector3 forwardDirection;
    public Vector3 rightDirection;
    public float speed;
    public float moveFB;
    public float moveLR;

    // Start is called before the first frame update
    void Start()
    {
        // Get VR character and camera
        MR_Origin = GameObject.Find("MixedRealityPlayspace");
        Main_Camera = GameObject.Find("Main Camera");
        if(speed == null)
        {
            speed = 1;
        }
    }

    // Update is called once per frame
    void Update()
    {
        // Move left or right based on VR controller thumbstick
        moveFB = Input.GetAxis("VR_Forward") * -1 * speed;
        moveLR = Input.GetAxis("VR_Right") * speed;

        if(moveFB != 0)
        {
            MoveForward();
        }

        if(moveLR != 0)
        {
            MoveRight();
        }
    }

    void MoveForward()
    {
        // Get Camera forward vector and set up movement vector
        forwardDirection = Main_Camera.transform.forward;
        //Translate character forward or backward
        MR_Origin.transform.Translate(forwardDirection*moveFB);
    }

    void MoveRight()
    {
        // Get Camera forward vector and set up movement vector
        rightDirection = Main_Camera.transform.right;
        //Translate character left or right
        MR_Origin.transform.Translate(rightDirection*moveLR);
    }
}
