using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Uduino;

public class joystickReadings : MonoBehaviour
{
    public Slider sliderX;
    public Slider sliderY;
    UduinoManager manager; 
    
    // Start is called before the first frame update
    void Start()
    {
        manager = UduinoManager.Instance;

        manager.pinMode(AnalogPin.A0, PinMode.Input);
        manager.pinMode(AnalogPin.A1, PinMode.Input);
    }

    // Update is called once per frame
    void Update()
    {
        int analogValueX = manager.analogRead(AnalogPin.A0);
        sliderX.value = (float)analogValueX/1024.0f;

        int analogValueY = manager.analogRead(AnalogPin.A1);
        sliderY.value = (float)analogValueY/1024.0f;
    }
}
