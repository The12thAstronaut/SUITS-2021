using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandAnimation : MonoBehaviour {

    private Animator _anim;
    private HandGrabbing _handGrab;
 

	// Use this for initialization
	void Start ()
    {
        _anim = GetComponentInChildren<Animator>();
        _handGrab = GetComponent<HandGrabbing>();
	}
	
	// Update is called once per frame
	void Update ()
    {
		//if we are pressing grab, set animator bool IsGrabbing to true
        if (Input.GetKeyDown("space"))
        {
            //Check if hand is closed
            if (_anim.GetBool("IsClosed"))
            {
                //Reverse Grabbing Animation
                _anim.SetBool("IsGrabbing", false);
                _anim.SetBool("IsClosed", false);
                //Open State
            }

            else 
            {
                //Play Grabbing Animation
                _anim.SetBool("IsGrabbing", true);
                _anim.SetBool("IsClosed", true);
                //Closed State
            }
        }

	}
}
