using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class setBoxMaterials : MonoBehaviour
{
    public GameObject hologramCube;
    

    // Start is called before the first frame update
    void Start()
    {
        var HologramCubeMat = hologramCube.GetComponent<Renderer>().material;
        
        HologramCubeMat.SetColor("_EmissionColor", 1 * Color.white);
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
