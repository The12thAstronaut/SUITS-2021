using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UpdateText : MonoBehaviour
{

    public TextMeshPro bpmText;
    public TextMeshPro evaTimeText;
    public TextMeshPro batLifeText;
    public TextMeshPro tSubText;

    public void onBpmTextChanged(TelemetryStream bpm)
    {
        bpmText.text = "Heart BPM: " + bpm.GetBpmText();
        evaTimeText.text = "EVA Time: " + bpm.GetEvaTimeText();
        batLifeText.text = "Battery Life: " + bpm.GetBatLifeText();
        tSubText.text = "External Temp: " + bpm.GetTSubText() + " F";
    }

    

}

