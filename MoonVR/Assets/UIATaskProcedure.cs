using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Events;

public class UIATaskProcedure : MonoBehaviour
{
    public TextMeshPro currentTask;
    public TextMeshPro titleLabel;
    public Interactable previousTask;
    public Interactable nextTask;

    public GameObject previousTaskIcon;
    public GameObject nextTaskIcon;

    public List<string> taskList = new List<string>();
    public List<string> title = new List<string>();
    public GameObject UIA;
    public GameObject[] switches;
    private int counter = 0;

    // Start is called before the first frame update
    void Start()
    {


        previousTaskIcon.SetActive(false);
        nextTask.OnClick.AddListener(() => ButtonPressed());
        previousTask.OnClick.AddListener(() => ReverseTask());


        if (titleLabel != null)
        {
            titleLabel.SetText(title[0]);
        }

        currentTask.SetText(taskList[0]);
    }


    public void ButtonPressed()
    {
        nextTaskIcon.SetActive(true);
        previousTaskIcon.SetActive(true);

        counter = counter + 1;
        if (counter < taskList.Count - 1)
        {
            currentTask.SetText(taskList[counter]);
        }

        else
        {
            nextTaskIcon.SetActive(false);
            currentTask.SetText(taskList[taskList.Count - 1]);
            counter = taskList.Count -1;
        }

     
    }

    public void ReverseTask()
    {

        nextTaskIcon.SetActive(true);
        previousTaskIcon.SetActive(true);

        counter = counter - 1;
        if (1 <= counter && counter < taskList.Count)
        {
            currentTask.SetText(taskList[counter]);
        }

        else if (counter < 1)
        {
            previousTaskIcon.SetActive(false);
            currentTask.SetText(taskList[0]);
            counter = 0;
        }

        else
        {
            nextTaskIcon.SetActive(false);
            currentTask.SetText(taskList[taskList.Count -1]);
            counter = taskList.Count -1;
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
