

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;
using Uduino;


public class ArduinoTrial1 : MonoBehaviour
{
    
    public GameObject Panel;
    
    // Start is called before the first frame update
    void Start()
    {
        UduinoManager.Instance.pinMode(2, PinMode.Input_pullup);
        Panel.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
       int buttonValue = UduinoManager.Instance.digitalRead(2);
        
        if (buttonValue == 0)
        {
            Panel.SetActive(true);
        }
        else
        {
            Panel.SetActive(false);
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