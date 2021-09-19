using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class TextFollow : MonoBehaviour
{

    public TextMeshPro[] waypointName;
    public GameObject camera;
    float lockPos = 0;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        for (int i = 0; i < waypointName.Length; i++)
        {
            if (waypointName[i].IsActive())
            {
                waypointName[i].transform.LookAt(camera.transform);
                waypointName[i].transform.rotation = Quaternion.Euler(lockPos, waypointName[i].transform.rotation.eulerAngles.y + 180, lockPos);
            }
        }
    }
}
