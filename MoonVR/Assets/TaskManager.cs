using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.Events;

public class TaskManager : MonoBehaviour
{

    public TextMeshPro titleLabel;

    public UnityEvent onChangedTask;
    private Task currentTask;
    private List<Task> tasks = new List<Task>();


    // Start is called before the first frame update
    void Start()
    {

        if (titleLabel != null)
        {
            titleLabel.SetText("Hello world");
        }

    }
}

public class Task
{
    public string taskName;
    public string text;
    public Destination taskDestination;
}
