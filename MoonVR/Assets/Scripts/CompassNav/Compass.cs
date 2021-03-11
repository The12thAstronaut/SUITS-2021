using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Compass : MonoBehaviour


    // [NOTE] : THIS SCRIPT WILL BE TRASHED
{
    public Transform playerTransform; //access to player
    //direction of player -- Vector 3 is Z direction which currently marks the inital camera position as true north

    Vector3 dir; // (4) changed from Vector3 to Vector1, to see if this will make the cube rotate based on X axis
    // (5) Vector1 doesnt exist so lets try Vector2 --- "Error Vector2 does not contain a definition for 'z' "

    private void Update()
    {
        // (2) changed dir.z to dir.y so see if the cube rotates in x direction based on the z direction of the main camera 
        // (3) doesnt change anything -- reverted back to normal (z)
        // (6) change end of .z to .y -- doesnt do anything
        dir.z = playerTransform.eulerAngles.y;
        // (1) changing the above line from .z to .y makes the cube rotate based on the viwers camera in the Y position, so we will return to Z
        transform.localEulerAngles = dir;
    }


    // the script needs to be attached to the actual compass image
    // If attached to the rover it will rotate based on where the viewer is located
}
