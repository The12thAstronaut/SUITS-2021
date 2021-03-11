using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchHologram : MonoBehaviour
{
    public GameObject hologramSwitch;
    public GameObject switchUp;
    public GameObject switchDown;
    Quaternion downPos;
    Quaternion upPos;
    bool switchFlip = false;

    // Start is called before the first frame update
    void Start()
    {

        
        hologramSwitch.SetActive(true);
        switchUp.SetActive(false);

        downPos = switchDown.transform.rotation;
        upPos = switchUp.transform.rotation;

    }

    IEnumerator SwitchAnimator()
    {

        yield return new WaitForSeconds(1);
        switchDown.transform.rotation = downPos;

       
    }

    //Update is called once per frame
    void Update()
    {


        if (Mathf.Abs(Quaternion.Angle(hologramSwitch.transform.rotation, upPos)) > 5) 
        {
                       
            switchDown.transform.rotation = Quaternion.RotateTowards(switchDown.transform.rotation, upPos, 50 * Time.deltaTime);


            if (switchDown.transform.rotation == upPos)
            {
                StartCoroutine (SwitchAnimator());

            }

        }


        else
        {
            switchDown.SetActive(false);

            hologramSwitch.transform.rotation = upPos;

        }

    }
}
