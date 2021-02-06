using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class easterEgg : MonoBehaviour
{
    public GameObject easterEggCube;

    // Start is called before the first frame update
    void Start()
    {
        easterEggCube.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKey(KeyCode.P))
        {
            easterEggCube.SetActive(true);
        }
    
    }
}
