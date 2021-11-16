using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class vrMovement : MonoBehaviour
{
    public GameObject MR_Origin;
    public float speed;
    // Start is called before the first frame update
    void Start()
    {
        // Get VR character
        MR_Origin = GameObject.Find("MixedRealityPlayspace");
        if(speed == null)
        {
            speed = 1;
        }
    }

    // Update is called once per frame
    void Update()
    {
        float moveFB = Input.GetAxis("VR_Forward") * speed;
        float moveLR = Input.GetAxis("VR_Right") * speed;

        //Translate character
        MR_Origin.transform.Translate(moveFB,0,moveLR);
    }
}
