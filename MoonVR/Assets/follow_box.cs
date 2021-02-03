using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class follow_box : MonoBehaviour
{
    public GameObject boxHandler;
    public GameObject Hologram;

    // Start is called before the first frame update
    void Start()
    {
        Hologram.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        Hologram.transform.position = boxHandler.transform.position;
        Hologram.transform.rotation = boxHandler.transform.rotation;

    }
}