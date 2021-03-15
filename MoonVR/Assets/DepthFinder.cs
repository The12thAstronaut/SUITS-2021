using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class DepthFinder : MonoBehaviour
{

    public Camera camera;

    public TextMeshProUGUI distanceText;


    void Update() {
        if (Input.GetMouseButtonDown(0)) {
            // Bit shift the index of the layer (31) to only get spatial objects
            int layerMask = 1 << 31;

            RaycastHit hit;
            // Does the ray intersect any objects
            Ray ray = camera.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out hit, Mathf.Infinity, layerMask)) {
                float dist = hit.distance;
                dist = ((int)(dist * 100)) / 100f;
                distanceText.text = dist + "M";
                Debug.Log("Did Hit " + hit.distance);
            }
            else {
                distanceText.text = "No Object Detected";
                Debug.Log("Did not Hit");
            }
        }
    }
}
