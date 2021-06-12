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
    public Interactable doneButton;

    public GameObject previousTaskIcon;
    public GameObject nextTaskIcon;
    public GameObject doneIcon;

    public List<string> taskList = new List<string>();
    public List<string> title = new List<string>();
    public GameObject UIA;
    public GameObject DCU;
    public GameObject[] switches;
    public GameObject dcuBatt;
    private int counter = 0;

    // Start is called before the first frame update
    void Start()
    {
        DCU.SetActive(false);

        previousTaskIcon.SetActive(false);
        nextTask.OnClick.AddListener(() => ButtonPressed());
        previousTask.OnClick.AddListener(() => ReverseTask());
        doneButton.OnClick.AddListener(() => TaskDone());


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
        doneIcon.SetActive(true);

        counter = counter + 1;
        if (counter < taskList.Count - 1)
        {
            currentTask.SetText(taskList[counter]);
            doneIcon.SetActive(false);
        }

        else
        {
            nextTaskIcon.SetActive(false);
            doneIcon.SetActive(true);
            currentTask.SetText(taskList[taskList.Count - 1]);
            counter = taskList.Count -1;
        }

    }

    public void ReverseTask()
    {

        nextTaskIcon.SetActive(true);
        previousTaskIcon.SetActive(true);
        doneIcon.SetActive(true);

        counter = counter - 1;
        if (1 <= counter && counter < taskList.Count)
        {
            currentTask.SetText(taskList[counter]);
            doneIcon.SetActive(false);
        }

        else if (counter < 1)
        {
            previousTaskIcon.SetActive(false);
            doneIcon.SetActive(false);
            currentTask.SetText(taskList[0]);
            counter = 0;
        }

        else
        {
            nextTaskIcon.SetActive(false);
            currentTask.SetText(taskList[taskList.Count -1]);
            counter = taskList.Count -1;
            doneIcon.SetActive(false);
        }
    }

    public void TaskDone()
    {
        counter = 0;
        currentTask.SetText(taskList[counter]);
        nextTaskIcon.SetActive(true);
        doneIcon.SetActive(false);
        previousTaskIcon.SetActive(false);

    }

    // Update is called once per frame
    void Update()
    {

        for (int i = 0; i < switches.Length; i++)
        {
            if (counter == 0)
            {
                if (i == 0 || i == 5)
                {
                    switches[i].SetActive(true);
                    
                    switches[i].GetComponent<SwitchHologram>().enabled = false;
                  

                }

                else
                {
                    switches[i].SetActive(false);
                }

            }

            else if (counter == 1)
            {
                if (i == 1 || i == 3)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = false;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }

            else if (counter == 2)
            {
                if (i == 6 || i == 7)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = false;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }

            else if (counter == 3)
            {
                if (i == 8)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = true;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }


            else if (counter == 4)
            {
                if (i == 8)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = false;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }


            else if (counter == 5)
            {
                if (i == 8)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = false;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }

            else if (counter == 6)
            {
                if (i == 6)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = true;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }

            else if (counter == 7)
            {
                if (i == 6)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = false;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }

            else if (counter == 8)
            {
                if (i == 8)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = true;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }

            else if (counter == 9)
            {
                if (i == 8)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = false;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }


            else if (counter == 10)
            {
                if (i == 6)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = true;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }

            else if (counter == 11)
            {
                if (i == 6)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = false;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }

            else if (counter == 12)
            {
                UIA.SetActive(true);
                DCU.SetActive(false);

                if (i == 0)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = false;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }

            else if (counter == 13)
            {

                UIA.SetActive(false);
                switches[i].SetActive(false);
                DCU.SetActive(true);
                dcuBatt.SetActive(true);

            }

            else if (counter == 14)
            {

                UIA.SetActive(true);
                DCU.SetActive(false);

                if (i == 0)
                {
                    switches[i].SetActive(true);
                    switches[i].GetComponent<SwitchHologram>().enabled = true;

                }

                else
                {
                    switches[i].SetActive(false);
                }
            }


        }
    }
}
