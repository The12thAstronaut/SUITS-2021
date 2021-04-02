

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Uduino;


public class ArduinoTrial1 : MonoBehaviour
{
    
    public GameObject panelOne;
    public GameObject panelTwo;
    public GameObject panelThree;
    
    // Start is called before the first frame update
    void Start()
    {
        UduinoManager.Instance.pinMode(2, PinMode.Input_pullup);
        UduinoManager.Instance.pinMode(4, PinMode.Input_pullup);
        UduinoManager.Instance.pinMode(6, PinMode.Input_pullup);
        panelOne.SetActive(false);
        panelTwo.SetActive(false);
        panelThree.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
       int buttonValuePin2 = UduinoManager.Instance.digitalRead(2);
       int buttonValuePin4 = UduinoManager.Instance.digitalRead(4);
       int buttonValuePin6 = UduinoManager.Instance.digitalRead(6);
        
        if (buttonValuePin2 == 1)
        {
            panelOne.SetActive(true);
        }
        else
        {
            panelOne.SetActive(false);
        } 


        if (buttonValuePin4 == 1)
        {
            panelTwo.SetActive(true);
        }
        else
        {
            panelTwo.SetActive(false);
        } 


        if (buttonValuePin6 == 1)
        {
            panelThree.SetActive(true);
        }
        else
        {
            panelThree.SetActive(false);
        } 
    }
}


/*

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Button = UnityEngine.UI.Button;
using TMPro;
using Uduino;


public class ArduinoTrial1 : MonoBehaviour
{
    
    public TMP_Text textZone;

    // Start is called before the first frame update
    void Start()
    {
        UduinoManager.Instance.pinMode(2, PinMode.Input_pullup);
    }

    // Update is called once per frame
    void Update()
    {
        int buttonValue = UduinoManager.Instance.digitalRead(2);

        if (buttonValue == 0)
        {
            textZone.text = "Down";
        }
        else
        {
            textZone.text = "Up";
        }
    }
}

*/