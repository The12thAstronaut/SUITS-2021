using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowUser : MonoBehaviour
{
    public GameObject userCamera;
    void Update()
    {
        //Get position of user's camera
        Vector3 targ = userCamera.transform.position;
        targ.y = 0f;

        //Get position of this gameobject
        Vector3 objectPos = transform.position;
        targ.x = targ.x - objectPos.x;
        targ.z = targ.z - objectPos.z;

        //Change the rotation of this gameobject so it faces the target
        float angle = Mathf.Atan2(targ.z, targ.x) * Mathf.Rad2Deg;
        transform.rotation = Quaternion.Euler(new Vector3(0, (-angle-90), 0));
    }
}
