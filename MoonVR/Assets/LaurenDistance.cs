using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using TMPro;

public class LaurenDistance : MonoBehaviour
{
    public GameObject[] target;

    public GameObject camera;
    public GameObject compassRing;
    public GameObject[] compassNeedle;

    float lockPos = 0;

    public Interactable landerButton;
    public Interactable geoButton;
    public Interactable roverButton;

    public TextMeshPro[] waypointDist;
    public TextMeshPro[] waypointName;

    private bool landerToggle = false;
    private bool geoToggle = false;
    private bool roverToggle = false;

    // Start is called before the first frame update
    void Start()
    {
        landerButton.OnClick.AddListener(() => StartLanderNav());
        geoButton.OnClick.AddListener(() => StartGeoNav());
        roverButton.OnClick.AddListener(() => StartRoverNav());

        foreach (var needle in compassNeedle)
        {
            needle.SetActive(false);
        }
    }
    public void StartLanderNav()
    {
        landerToggle = !landerToggle;

        if (landerToggle == true)
        {
            InvokeRepeating("LanderNav", 0.1f, 0.5f);

            if (compassRing.activeInHierarchy)
            {
                compassNeedle[0].SetActive(true);
            }
            
        }

        else
        {
            waypointDist[0].SetText("");
            compassNeedle[0].SetActive(false);
        }

       
    }

    public void StartGeoNav()
    {
        geoToggle = !geoToggle;

        if (geoToggle == true)
        {
            InvokeRepeating("GeoNav", 0.1f, 0.5f);
            if (compassRing.activeInHierarchy)
            {
                compassNeedle[1].SetActive(true);
            }
        }
        else
        {
            waypointDist[1].SetText("");
            compassNeedle[1].SetActive(false);
        }

        

    }

    public void StartRoverNav()
    {
        roverToggle = !roverToggle;

        if (roverToggle == true)
        {
            InvokeRepeating("RoverNav", 0.1f, 0.5f);
            if (compassRing.activeInHierarchy)
            {
                compassNeedle[2].SetActive(true);
            }
        }

        else
        {
            waypointDist[2].SetText("");
            compassNeedle[2].SetActive(false);
        }

        

    }

    private void LanderNav()
    {
        float distance = Vector3.Distance(camera.transform.position, target[0].transform.position);

        waypointDist[0].SetText(distance.ToString("0.#") + " m");
    }

    private void GeoNav()
    {
        float distance = Vector3.Distance(camera.transform.position, target[1].transform.position);

        waypointDist[1].SetText(distance.ToString("0.#") + " m");
    }

    private void RoverNav()
    {
        float distance = Vector3.Distance(camera.transform.position, target[2].transform.position);

        waypointDist[2].SetText(distance.ToString("0.#") + " m");
    }


    // Update is called once per frame
    void Update()
    {

        for (int i = 0; i < compassNeedle.Length; i++)
        {

            compassNeedle[i].transform.LookAt(target[i].transform);
            compassNeedle[i].transform.rotation = Quaternion.Euler(lockPos, compassNeedle[i].transform.rotation.eulerAngles.y, lockPos);

        }

        for (int i = 0; i < waypointName.Length; i++)
        {
            if (waypointName[i].IsActive())
            {
                waypointName[i].transform.LookAt(camera.transform);
                waypointName[i].transform.rotation = Quaternion.Euler(lockPos, waypointName[i].transform.rotation.eulerAngles.y +180, lockPos);
            }
        }

        for (int i = 0; i < waypointDist.Length; i++)
        {
            if (waypointName[i].IsActive())
            {
                waypointDist[i].transform.LookAt(camera.transform);
                waypointDist[i].transform.rotation = Quaternion.Euler(lockPos, waypointDist[i].transform.rotation.eulerAngles.y + 180, lockPos);
            }
        }

        if (landerToggle == true)
        {
            if (compassRing.activeInHierarchy)
            {
                compassNeedle[0].SetActive(true);
            }

            else
            {
                compassNeedle[0].SetActive(false);
            }
        }

        if (geoToggle == true)
        {
            if (compassRing.activeInHierarchy)
            {
                compassNeedle[1].SetActive(true);
            }

            else
            {
                compassNeedle[1].SetActive(false);
            }
        }

        if (roverToggle == true)
        {
            if (compassRing.activeInHierarchy)
            {
                compassNeedle[2].SetActive(true);
            }

            else
            {
                compassNeedle[2].SetActive(false);
            }
        }


        compassRing.transform.rotation = Quaternion.Euler(-90, lockPos, lockPos);

    }
}
