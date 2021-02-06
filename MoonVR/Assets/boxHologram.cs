using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boxHologram : MonoBehaviour
{
    
    private BoundingBox bbox;
    
    // Start is called before the first frame update
    void Start()
    {

        GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        bbox = cube.AddComponent<BoundingBox>();

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
