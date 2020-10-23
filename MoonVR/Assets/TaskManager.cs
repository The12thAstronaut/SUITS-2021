using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;
using Microsoft.MixedReality.Toolkit.UI;

public class TaskManager : MonoBehaviour
{

    public TextMeshPro titleLabel;
    public Interactable button1;

    public UnityEvent onChangedTask;
    private Task currentTask;
    private List<Task> tasks = new List<Task>();


    // Start is called before the first frame update
    void Start()
    {
        button1.OnClick.AddListener(() => ButtonPressed());

        if (titleLabel != null)
        {
            titleLabel.SetText("Hello world");
        }

    }

    public void ButtonPressed()
    {
        Debug.Log("I pressed a button");
    }
}

public class Task
{
    public string taskName;
    public string text;
    public Destination taskDestination;
}
