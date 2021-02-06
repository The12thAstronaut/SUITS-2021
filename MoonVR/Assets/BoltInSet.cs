using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class BoltInSet : MonoBehaviour
{
    public GameObject[] boltSet;
    public GameObject[] hologramSet;
    private GameObject hologram;
    public GameObject button1;
    public GameObject button2;
    public Interactable nextButton;
    public Interactable prevButton;
    public int rotateSpeed;
    private int i = 0;


    // Start is called before the first frame update
    void Start()
    {
        nextButton.OnClick.AddListener(() => nextBolt());
        prevButton.OnClick.AddListener(() => prevBolt());

        button1.SetActive(true);
        button2.SetActive(false);


        for (int i = 1; i < hologramSet.Length; i++)
        {
            hologramSet[i].SetActive(false);
        }


    }

    void nextBolt()
    {
        i++;
        i = i % boltSet.Length;

        if (i == 0)
        {
            button1.SetActive(true);
            button2.SetActive(false);
            
        }

        if (i == boltSet.Length -1)
        {
            button2.SetActive(true);
            button1.SetActive(false);
        }

        for (int j = 0; j < hologramSet.Length; j++)
        {
            if (j == i)
            {
                hologramSet[i].SetActive(true);
            }

            else
            {
                hologramSet[j].SetActive(false);
            }
        }

    }

    void prevBolt()
    {
        i--;
        i = Mathf.Abs(i) % boltSet.Length;

        if (i == 0)
        {
            button1.SetActive(true);
            button2.SetActive(false);

        }

        if (i == boltSet.Length - 1)
        {
            button2.SetActive(true);
            button1.SetActive(false);
        }

        for (int j = 0; j < hologramSet.Length; j++)
        {
            if (j == i)
            {
                hologramSet[i].SetActive(true);
            }

            else
            {
                hologramSet[j].SetActive(false);
            }
        }

    }


    // Update is called once per frame
    void Update()
    {
        

        if (Input.GetKey(KeyCode.I))
        {
            boltSet[i].transform.Rotate(Vector3.left, rotateSpeed * Time.deltaTime, Space.World);
            boltSet[i].transform.Translate(0, -0.05f * Time.deltaTime, 0);
        }

        if (Input.GetKey(KeyCode.O))
        {
            boltSet[i].transform.Rotate(Vector3.right, rotateSpeed * Time.deltaTime, Space.World);
            boltSet[i].transform.Translate(0, 0.05f * Time.deltaTime, 0);
        }
    }
}
