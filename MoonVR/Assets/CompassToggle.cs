using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class CompassToggle : MonoBehaviour
{
    public Interactable button;
    public GameObject compassRing;

    private bool buttonToggle = true;

    // Start is called before the first frame update
    void Start()
    {
        button.OnClick.AddListener(() => ToggleCompass());
    }

    public void ToggleCompass()
    {
        buttonToggle = !buttonToggle;

        if (buttonToggle == false)
        {
            compassRing.SetActive(false);
        }

        else
        {
            compassRing.SetActive(true);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
