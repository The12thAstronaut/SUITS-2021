using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchLock : MonoBehaviour
{
    public GameObject hologramSwitch;
    public GameObject switchUp;
    public GameObject switchDown;
    Quaternion downPos;
    Quaternion upPos;

    // Start is called before the first frame update
    void Start()
    {
        downPos = switchDown.transform.rotation;
        upPos = switchUp.transform.rotation;
    }

    void LockRotoation()
    {

        hologramSwitch.transform.rotation = Quaternion.Euler(0, 0, Mathf.Clamp(transform.rotation.z, -50, 50));
    }

    // Update is called once per frame
    void Update()
    {
        



    }
}
