using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class pulsing_light : MonoBehaviour

{
    public GameObject hologramMat;

    // Start is called before the first frame update
    void Start()
    {
        var material = hologramMat.GetComponent<Renderer>().material;
        material.SetColor("_EmissionColor", Color.cyan);
    }

    // Update is called once per frame
    void Update()
    {
        var material = hologramMat.GetComponent<Renderer>().material;
        material.SetColor("_EmissionColor", Color.cyan * (1 + Mathf.Sin(Time.fixedTime * Mathf.PI * 1f) * .5f));


    }
}
