using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UpdateText : MonoBehaviour
{
    public TextMeshPro evaTimeText;
    public TextMeshPro primaryOxText;
    public TextMeshPro secondaryOxText;
    public TextMeshPro heartRateText;
    public TextMeshPro subPressureText;
    public TextMeshPro suitPressureText;
    public TextMeshPro tempText;
    public TextMeshPro fanText;
    public TextMeshPro oxPressureText;
    public TextMeshPro oxRateText;
    public TextMeshPro battCapText;
    public TextMeshPro h2oGPressureText;
    public TextMeshPro h2oLPressureText;
    public TextMeshPro SOPPressureText;
    public TextMeshPro SOPRateText;
    public TextMeshPro timeLeftBattText;
    public TextMeshPro oxLifeText;
    public TextMeshPro h2oLifeText;

    public void onBpmTextChanged(TelemetryStream tS)
    {
        evaTimeText.text = tS.GetEvaTimeText();
        primaryOxText.text = tS.GetO2PrimText() + " %";
        secondaryOxText.text = tS.GetO2SecondaryText() + " %";
        heartRateText.text = tS.GetBpmText() + " bpm";
        subPressureText.text = tS.GetPSubText() + " psia";
        suitPressureText.text = tS.GetPSuitText() + " psid";
        tempText.text = tS.GetTSubText() + " F";
        fanText.text = tS.GetVFanText() + " rpm";
        oxPressureText.text = tS.GetPO2Text() + " psia";
        oxRateText.text = tS.GetRO2Text() + " psi/min";
        battCapText.text = tS.GetBattCapText() + " amp-hr";
        h2oGPressureText.text = tS.GetPH2OGText() + " psia";
        h2oLPressureText.text = tS.GetPH2OLText() + " psia";
        SOPPressureText.text = tS.GetPSOPText() + " psia";
        SOPRateText.text = tS.GetRSOPText() + " psi/min";
        timeLeftBattText.text = tS.GetBatLifeText();
        oxLifeText.text = tS.GetOxLifeText();
        h2oLifeText.text = tS.GetH2OLifeText();
    }

    

}

