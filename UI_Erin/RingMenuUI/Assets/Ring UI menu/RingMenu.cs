using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RingMenu : MonoBehaviour
{
    public Ring Data;
    public RingCakePiece RingCakePiecePrefab;
    public float GapWidthDegree = 1f;
    public Action<string> callback;
    protected RingCakePiece[] Pieces;
    // protected RingMenu Parent;
    public string Path;

    // Start is called before the first frame update
    void Start()
    {
        var stepLength = 360f / Data.Elements.Length;

        //Position
        Pieces = new RingCakePiece[Data.Elements.Length];
        for (int i = 0; i < Data.Elements.Length; i++)
        { 
            Pieces[i] = Instantiate(RingCakePiecePrefab, transform);
            //set root element
            Pieces[i].transform.localPosition = Vector3.zero;
            Pieces[i].transform.localRotation = Quaternion.identity;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
