using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Microsoft.MixedReality.Toolkit.UI;

public class LaurenSuitEmergencyChecker : MonoBehaviour
{
    public GameObject emergencyPanel;

    public AudioSource warningSound;

    private TelemetryStream tS;
    bool isEmergency;

    string emergencyText;

    private List<string> errorList = new List<string>();

    private List<bool> emergencyList = new List<bool>();

    public GameObject[] errorBack;


    
    // Start is called before the first frame update
    void Start()
    {

        tS = FindObjectOfType<TelemetryStream>();

        InvokeRepeating("checkForEmergencies", 1f, 3f);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void checkForEmergencies()
    {
        if (tS.GetBpmText() != null)
        {

            //checkPrimaryOxygen();
            //checkSecondaryOxygen();
            checkHeartRate();
            checkExternalPressure();
            checkSuitPressure();
            checkTemperature();
            checkFanTachometer();
            checkOxygenPressure();
            checkOxygenRate();
            checkBatteryCapacity();
            checkH2OGasPressure();
            checkH2OLiquidPressure();
            checkSOPPressure();
            checkSOPRate();
            checkTimeLeftBattery();
            checkTimeLeftOxygen();
            checkTimeLeftWater();

            for (int i = 0; i < emergencyList.Count; i++)
            {
                if (emergencyList[i] == false)
                {
                    var errorColor = errorBack[i].GetComponent<Renderer>().material;
                    errorColor.SetColor("_Color", new Color(0.4392157f, 0.7490196f, 0.2117647f, 1f));

                }

                else
                {
                    emergencyPanel.SetActive(true);
                    var errorColor = errorBack[i].GetComponent<Renderer>().material;
                    errorColor.SetColor("_Color", Color.red);
                    warningSound.Play();
                }

            }

            emergencyList.Clear();
            errorList.Clear();
        }
    }

    //Do these 2 need emergency checks?
    void checkPrimaryOxygen()
    {


    }

    void checkSecondaryOxygen()
    {


    }

    void checkHeartRate()
    {
        float data = float.Parse(tS.GetBpmText());
        if (data < 80)
        {
            emergencyText = emergencyText + "Low Heart Rate: " + data + "bpm\n";
            isEmergency = true;
        }
        else if (data > 100)
        {
            emergencyText = emergencyText + "High Heart Rate: " + data + "bpm\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Heart Rate: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkExternalPressure()
    {
        float data = float.Parse(tS.GetPSubText());
        if (data < 2)
        {
            emergencyText = emergencyText + "Low External Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 4)
        {
            emergencyText = emergencyText + "High External Pressure: " + data + "psia\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "External Pressure: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkSuitPressure()
    {
        float data = float.Parse(tS.GetPSuitText());
        if (data < 2)
        {
            emergencyText = emergencyText + "Low Suit Pressure: " + data + "psid\n";
            isEmergency = true;
        }
        else if (data > 4)
        {
            emergencyText = emergencyText + "High Suit Pressure: " + data + "psid\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Suit Pressure: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    //TODO: What are standard Temperatures?
    void checkTemperature()
    {
        float data = float.Parse(tS.GetTSubText());
        if (data < 28.0)
        {
            emergencyText = emergencyText + "Low Temperature: " + data + "F\n";
            isEmergency = true;
        }
        else if (data > 35.0)
        {
            emergencyText = emergencyText + "High Temperature: " + data + "F\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Temperature: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkFanTachometer()
    {
        float data = float.Parse(tS.GetVFanText());
        if (data < 10000)
        {
            emergencyText = emergencyText + "Low Cooling Fan Speed: " + data + "rpm\n";
            isEmergency = true;
            
        }
        else if (data > 40000)
        {
            emergencyText = emergencyText + "High Cooling Fan Speed: " + data + "rpm\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Fan: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkOxygenPressure()
    {
        float data = float.Parse(tS.GetPO2Text());
        if (data < 750)
        {
            emergencyText = emergencyText + "Low Oxygen Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 950)
        {
            emergencyText = emergencyText + "High Oxygen Pressure: " + data + "psia\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Oxygen Pressure: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkOxygenRate()
    {
        float data = float.Parse(tS.GetRO2Text());
        if (data < 0.5)
        {
            emergencyText = emergencyText + "Low Oxygen Rate: " + data + "psi\n";
            isEmergency = true;
        }
        else if (data > 1)
        {
            emergencyText = emergencyText + "High Oxygen Rate: " + data + "psi\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Oxygen Rate: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    //TODO Get Battery Capacity?
    void checkBatteryCapacity()
    {
        float data = float.Parse(tS.GetBattCapText());
        if (data < 0)
        {
            emergencyText = emergencyText + "Low Battery Capacity: " + data + "amp-hr\n";
            isEmergency = true;
        }
        else if (data > 30)
        {
            emergencyText = emergencyText + "High Battery Capacity: " + data + "amp-hr\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Battery Capacity: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkH2OGasPressure()
    {
        float data = float.Parse(tS.GetPH2OGText());
        if (data < 14)
        {
            emergencyText = emergencyText + "Low H2O Gas Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 16)
        {
            emergencyText = emergencyText + "High H2O Gas Pressure: " + data + "psia\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "H20 Gas Pressure: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkH2OLiquidPressure()
    {
        float data = float.Parse(tS.GetPH2OLText());
        if (data < 14)
        {
            emergencyText = emergencyText + "Low H2O Liquid Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 16)
        {
            emergencyText = emergencyText + "High H2O Liquid Pressure: " + data + "psia\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "H20 Liquid Pressure: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkSOPPressure()
    {
        float data = float.Parse(tS.GetPSOPText());
        if (data < 750)
        {
            emergencyText = emergencyText + "Low SOP Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 950)
        {
            emergencyText = emergencyText + "High SOP Pressure: " + data + "psia\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "SOP Pressure: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    //TODO Get Sop Rate?
    void checkSOPRate()
    {
        float data = float.Parse(tS.GetRSOPText());
        if (data < 0.5)
        {
            emergencyText = emergencyText + "Low SOP Rate: " + data + "psi/min\n";
            isEmergency = true;
        }
        else if (data > 1)
        {
            emergencyText = emergencyText + "High SOP Rate: " + data + "psi/min\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "SOP Rate: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkTimeLeftBattery()
    {
        System.DateTime time = System.DateTime.Parse(tS.GetBatLifeText());
        float data = time.Hour * 60 + time.Minute + time.Second / 60f;
        if (data < 30)
        {
            emergencyText = emergencyText + "Low Battery Time: " + data + "mins\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Battery time left: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkTimeLeftOxygen()
    {
        System.DateTime time = System.DateTime.Parse(tS.GetOxLifeText());
        float data = time.Hour * 60 + time.Minute + time.Second / 60f;
        if (data < 30)
        {
            emergencyText = emergencyText + "Low Oxygen Time: " + data + "mins\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Oxygen time left: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }

    void checkTimeLeftWater()
    {
        System.DateTime time = System.DateTime.Parse(tS.GetH2OLifeText());
        float data = time.Hour * 60 + time.Minute + time.Second / 60f;
        if (data < 30)
        {
            emergencyText = emergencyText + "Low Water Time: " + data + "mins\n";
            isEmergency = true;
        }

        else
        {
            emergencyText = "Water time left: None";
            isEmergency = false;
        }

        errorList.Add(emergencyText);
        emergencyList.Add(isEmergency);
    }
}
