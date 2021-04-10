using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HologramSpawner : MonoBehaviour
{

    public GameObject hologram;
    public GameObject panel;
    int count;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }


    public void MakeCopy()
    {
        if (count == 0)
        {
            GameObject hologramCopy = Instantiate(hologram, panel.transform);
            hologram.transform.parent = null;
            count++;
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
