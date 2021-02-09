using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class TaskManager : MonoBehaviour
{
    public GameObject[] taskSet;
    public Interactable[] taskButtons;

    private int count = 0;

    // Start is called before the first frame update
    void Start()
    {
        foreach (var task in taskSet)
        {
            task.SetActive(false);
        }

        for (int i = 0; i < taskButtons.Length; i++)
        {
            int closureIndex = i; 
            taskButtons[closureIndex].OnClick.AddListener(() => TaskOnClick(closureIndex));
        }

    }


    public void TaskOnClick(int buttonIndex)
    {
        count++;

        foreach (var task in taskSet)
        {
            task.SetActive(false);
        }

        if (count % 2 == 0)
        {
            taskSet[buttonIndex].SetActive(false);
        }

        else
        {
            taskSet[buttonIndex].SetActive(true);
        }
        
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
