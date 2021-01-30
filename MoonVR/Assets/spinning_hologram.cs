﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;
using Microsoft.MixedReality.Toolkit.UI;


public class spinning_hologram : MonoBehaviour
{
    public GameObject Hologram;
    public float rotateSpeed;

    //position variables
    Vector3 posOffset = new Vector3();
    Vector3 tempPos = new Vector3();


    // Start is called before the first frame update
    void Start()
    {
        Hologram.SetActive(true);

        //initial position
        posOffset = Hologram.transform.position;

    }

    // Update is called once per frame
    void Update()

    {
        //rotate around z axis

        transform.Rotate(Vector3.up, rotateSpeed * Time.deltaTime, Space.World);

        //sin wave
        tempPos = posOffset;
        tempPos.y += Mathf.Sin(Time.fixedTime * Mathf.PI * 0.5f) * 0.02f;

        Hologram.transform.position = tempPos;





    }
}