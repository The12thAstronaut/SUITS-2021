using System.Collections;
using System.Collections.Generic;
using UnityEngine;


// [NOTE] : THIS SCRIPT WILL BE TRASHED
public class compassScript : MonoBehaviour
{
    public Transform playerTransform; //access to player
    Vector3 dir; // Vector3 = dir(x,y, dir.z)

    private void Update()
    {
        // dir.z = playerTrasform.eulerAngles.z --- player input in z direction will change the eulerAngles in y direction of object?
        dir.z = playerTransform.eulerAngles.y;

        // ???
        transform.localEulerAngles = dir;
    }


    // the script needs to be attached to the actual compass image
    // If attached to the rover it will rotate based on where the viewer is located
}
