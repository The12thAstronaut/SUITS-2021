using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RecordNotes : MonoBehaviour
{
    public GameObject LogPanel;
    public GameObject SamplePanel;
    public GameObject LunarpediaPanel;
    public TextMeshPro LogDescriptionText;
    public TextMeshPro SampleDescriptionText;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void CreateLogPanel(string textLog)
    {
        LogDescriptionText.text = textLog;
        GameObject logPanel = Instantiate(LogPanel);
        logPanel.transform.SetParent(LunarpediaPanel.transform);
    }

    void CreateSamplePanel(string textSample, Material picture)
    {
        SampleDescriptionText.text = textSample;

        GameObject samplePanel = Instantiate(LogPanel);
        LogPanel.transform.SetParent(LunarpediaPanel.transform);

    }


}
