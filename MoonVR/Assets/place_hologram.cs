using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;
using Microsoft.MixedReality.Toolkit.UI;

public class place_hologram : MonoBehaviour
{
    public GameObject hologram;
    public GameObject item;

    Vector3 posOffset = new Vector3();
    Vector3 tempPos = new Vector3();

    // Start is called before the first frame update
    void Start()
    {
        hologram.SetActive(true);
        posOffset = hologram.transform.position;


    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
