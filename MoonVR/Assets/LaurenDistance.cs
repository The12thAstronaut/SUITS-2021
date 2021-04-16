using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using TMPro;

public class LaurenDistance : MonoBehaviour
{
    public GameObject lander;
    public GameObject geology;
    public GameObject rover;

    public GameObject camera;
    public GameObject compassNeedle;

    private Transform target;
    float lockPos = 0;

    public Interactable landerButton;
    public Interactable geoButton;
    public Interactable roverButton;

    public TextMeshPro waypointName;
    public TextMeshPro waypointDist;

    private string text;
    
    // Start is called before the first frame update
    void Start()
    {
        landerButton.OnClick.AddListener(() => StartLanderNav());
        geoButton.OnClick.AddListener(() => StartGeoNav());
        roverButton.OnClick.AddListener(() => StartRoverNav());
    }
    public void StartLanderNav()
    {
        InvokeRepeating("LanderNav", 0.1f, 0.5f);
        text = "Lander";
        target = lander.transform;
    }

    public void StartGeoNav()
    {
        InvokeRepeating("GeoNav", 0.1f, 0.5f);

        text = "Geology";
        target = geology.transform;
    }

    public void StartRoverNav()
    {
        InvokeRepeating("RoverNav", 0.1f, 0.5f);

        text = "Rover";
        target = rover.transform;
    }

    private void LanderNav()
    {
        float distance = Vector3.Distance(camera.transform.position, lander.transform.position);

        waypointDist.SetText(distance.ToString("0.#") + " m");
    }

    private void GeoNav()
    {
        float distance = Vector3.Distance(camera.transform.position, geology.transform.position);

        waypointDist.SetText(distance.ToString("0.#") + " m");
    }

    private void RoverNav()
    {
        float distance = Vector3.Distance(camera.transform.position, rover.transform.position);

        waypointDist.SetText(distance.ToString("0.#") + " m");
    }


    // Update is called once per frame
    void Update()
    {
        waypointName.SetText(text);

        compassNeedle.transform.LookAt(target);

    }
}
