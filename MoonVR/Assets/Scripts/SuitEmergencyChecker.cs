using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SuitEmergencyChecker : MonoBehaviour
{

    private TelemetryStream tS;

    bool isEmergency;
    string emergencyText;

    
    // Start is called before the first frame update
    void Start()
    {
        tS = FindObjectOfType<TelemetryStream>();
    }

    // Update is called once per frame
    void Update()
    {
       
    }

    public void checkForEmergencies() {
        if (tS != null) {
            isEmergency = false;
            emergencyText = "";

            //checkPrimaryOxygen();
            //checkSecondaryOxygen();
            checkHeartRate();
            checkExternalPressure();
            checkSuitPressure();
            checkTemperature();
            checkFanTachometer();
            checkOxygenPressure();
            checkOxygenRate();
            //checkBatteryCapacity();
            checkH2OGasPressure();
            checkH2OLiquidPressure();
            checkSOPPressure();
            //checkSOPRate();
            checkTimeLeftBattery();
            checkTimeLeftOxygen();
            checkTimeLeftWater();

            if (isEmergency) {
                Debug.Log(emergencyText);
            }
        }
    }

    //Do these 2 need emergency checks?
    void checkPrimaryOxygen() {
       

    }

    void checkSecondaryOxygen() {


    }

    void checkHeartRate() {
        float data = float.Parse(tS.GetBpmText());
        if (data < 80) {
            emergencyText = emergencyText + "Low Heart Rate: " + data + "bpm\n";
            isEmergency = true;
        } else if (data > 100) {
            emergencyText = emergencyText + "High Heart Rate: " + data + "bpm\n";
            isEmergency = true;
        }
    }

    void checkExternalPressure() {
        float data = float.Parse(tS.GetPSubText());
        if (data < 2) {
            emergencyText = emergencyText + "Low External Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 4) {
            emergencyText = emergencyText + "High External Pressure: " + data + "psia\n";
            isEmergency = true;
        }
    }

    void checkSuitPressure() {
        float data = float.Parse(tS.GetPSuitText());
        if (data < 2) {
            emergencyText = emergencyText + "Low Suit Pressure: " + data + "psid\n";
            isEmergency = true;
        }
        else if (data > 4) {
            emergencyText = emergencyText + "High Suit Pressure: " + data + "psid\n";
            isEmergency = true;
        }
    }

    //TODO: What are standard Temperatures?
    void checkTemperature() {
        float data = float.Parse(tS.GetTSubText());
        if (data < 44.6) {
            emergencyText = emergencyText + "Low Temperature: " + data + "F\n";
            isEmergency = true;
        }
        else if (data > 50) {
            emergencyText = emergencyText + "High Temperature: " + data + "F\n";
            isEmergency = true;
        }
    }

    void checkFanTachometer() {
        float data = float.Parse(tS.GetVFanText());
        if (data < 10000) {
            emergencyText = emergencyText + "Low Cooling Fan Speed: " + data + "rpm\n";
            isEmergency = true;
        }
        else if (data > 40000) {
            emergencyText = emergencyText + "High Cooling Fan Speed: " + data + "rpm\n";
            isEmergency = true;
        }
    }

    void checkOxygenPressure() {
        float data = float.Parse(tS.GetPO2Text());
        if (data < 750) {
            emergencyText = emergencyText + "Low Oxygen Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 950) {
            emergencyText = emergencyText + "High Oxygen Pressure: " + data + "psia\n";
            isEmergency = true;
        }
    }

    void checkOxygenRate() {
        float data = float.Parse(tS.GetRO2Text());
        if (data < 0.5) {
            emergencyText = emergencyText + "Low Oxygen Rate: " + data + "psi\n";
            isEmergency = true;
        }
        else if (data > 1) {
            emergencyText = emergencyText + "High Oxygen Rate: " + data + "psi\n";
            isEmergency = true;
        }
    }

    //TODO Get Battery Capacity?
    void checkBatteryCapacity() {
        float data = float.Parse(tS.GetPH2OGText());
        if (data < 0) {
            emergencyText = emergencyText + "Low Battery Capacity: " + data + "amp-hr\n";
            isEmergency = true;
        }
        else if (data > 30) {
            emergencyText = emergencyText + "High Battery Capacity: " + data + "amp-hr\n";
            isEmergency = true;
        }
    }

    void checkH2OGasPressure() {
        float data = float.Parse(tS.GetPH2OGText());
        if (data < 14) {
            emergencyText = emergencyText + "Low H2O Gas Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 16) {
            emergencyText = emergencyText + "High H2O Gas Pressure: " + data + "psia\n";
            isEmergency = true;
        }
    }

    void checkH2OLiquidPressure() {
        float data = float.Parse(tS.GetPH2OLText());
        if (data < 14) {
            emergencyText = emergencyText + "Low H2O Liquid Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 16) {
            emergencyText = emergencyText + "High H2O Liquid Pressure: " + data + "psia\n";
            isEmergency = true;
        }
    }

    void checkSOPPressure() {
        float data = float.Parse(tS.GetPSOPText());
        if (data < 750) {
            emergencyText = emergencyText + "Low SOP Pressure: " + data + "psia\n";
            isEmergency = true;
        }
        else if (data > 950) {
            emergencyText = emergencyText + "High SOP Pressure: " + data + "psia\n";
            isEmergency = true;
        }
    }

    //TODO Get Sop Rate?
    void checkSOPRate() {
        float data = float.Parse(tS.GetVFanText());
        if (data < 0.5) {
            emergencyText = emergencyText + "Low SOP Rate: " + data + "psi/min\n";
            isEmergency = true;
        }
        else if (data > 1) {
            emergencyText = emergencyText + "High SOP Rate: " + data + "psi/min\n";
            isEmergency = true;
        }
    }

    void checkTimeLeftBattery() {
        System.DateTime time = System.DateTime.Parse(tS.GetBatLifeText());
        float data = time.Hour * 60 + time.Minute + time.Second/60f;
        if (data < 30) {
            emergencyText = emergencyText + "Low Battery Time: " + data + "mins\n";
            isEmergency = true;
        }
    }

    void checkTimeLeftOxygen() {
        System.DateTime time = System.DateTime.Parse(tS.GetOxLifeText());
        float data = time.Hour * 60 + time.Minute + time.Second / 60f;
        if (data < 30) {
            emergencyText = emergencyText + "Low Oxygen Time: " + data + "mins\n";
            isEmergency = true;
        }
    }

    void checkTimeLeftWater() {
        System.DateTime time = System.DateTime.Parse(tS.GetH2OLifeText());
        float data = time.Hour * 60 + time.Minute + time.Second / 60f;
        if (data < 30) {
            emergencyText = emergencyText + "Low Water Time: " + data + "mins\n";
            isEmergency = true;
        }
    }
}
