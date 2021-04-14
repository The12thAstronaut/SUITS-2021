using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class DistanceFromObject : MonoBehaviour
{
    // Reference to checkpoint
    [SerializeField]
    private Transform checkpoint;

    // Reference to UI text that shows the distance value
    [SerializeField]
    private TextMeshPro distanceText;

    // Calculated distance value
    private float distance;

    // Update is called oncer per frame
    private void Update()
    {
        // Caluclated distance value between character and checkpoint
        distance = (checkpoint.transform.position - transform.position).magnitude;

        // Display distance value via UI text
        // distance.ToString("F1") shows value with 1 digit after period
        // so 12.234 will be shown as 12.2 for example
        // distance.ToString("F2") will show 12.21 in this case
        distanceText.text = "Houston\n" + distance.ToString("F1") + "meters";
    }
}
