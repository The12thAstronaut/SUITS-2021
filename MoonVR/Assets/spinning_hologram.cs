using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;
using Microsoft.MixedReality.Toolkit.UI;


namespace SpinningHologram
{
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


        public void Spin()
        {

            posOffset = Hologram.transform.position;

            //rotate around z axis

            transform.Rotate(Vector3.up, rotateSpeed * Time.deltaTime, Space.World);

            //sin wave
            tempPos = posOffset;
            tempPos.y += Mathf.Sin(Time.fixedTime * Mathf.PI * 0.25f) * 0.0002f;

            Hologram.transform.position = tempPos;
        }


        // Update is called once per frame
        void Update()

        {

            Spin();




        }
    }
}

