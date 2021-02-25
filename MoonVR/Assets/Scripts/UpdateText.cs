using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UpdateText : MonoBehaviour
{

    public TextMeshPro bpmText;
    public TextMeshPro oxRateText;
    public TextMeshPro batPercentText;
    public TextMeshPro oxTimeText;

    public void onBpmTextChanged(TelemetryStream bpm)
    {
        bpmText.text = "Heart BPM: " + bpm.GetBpmText();
        oxRateText.text = "Oxygen Rate: " + bpm.GetRO2Text();
        batPercentText.text = "Battery Percent: " + bpm.GetBatLifeText();
        oxTimeText.text = "Oxygen Time: " + bpm.GetOxLifeText();
    }

    

}

