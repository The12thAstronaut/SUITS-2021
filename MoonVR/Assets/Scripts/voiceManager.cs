using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Windows.Speech;
using Microsoft.MixedReality.Toolkit.UI;

public class voiceManager : MonoBehaviour
{
    public string[] keywords;
    public ConfidenceLevel confidence = ConfidenceLevel.Medium;
    public float speed = 1;

    public bool isScoutActivated;
    public GameObject buttonCollection;
    public GameObject[] menuButtons;
    public GameObject ScoutModel;
    public GameObject ScoutLight;
    public GameObject wristPanelContent;

    protected PhraseRecognizer recognizer;
    protected string word = "none";

    private void Start()
    {
        if (keywords != null)
        {
            recognizer = new KeywordRecognizer(keywords, confidence);
            recognizer.OnPhraseRecognized += Recognizer_OnPhraseRecognized;
            recognizer.Start();
            Debug.Log( recognizer.IsRunning );
        }

        foreach (var device in Microphone.devices)
        {
            Debug.Log("Name: " + device);
        }

        //Set Scout Activated boolean to false
        isScoutActivated = false;
        //Instantiate menuButton array with empty values
        menuButtons = new GameObject[8];        

        //Get all the buttons on the wrist menu
        int i = 0;
        foreach (Transform child in buttonCollection.transform)
        {
             print("Foreach loop: " + child.gameObject);
             menuButtons[i] = child.gameObject;
             i++;
        }
    }

    private void Recognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        word = args.text;
        print("You said: <b>" + word + "</b>");
    }

    private void Update()
    {
        //Set boolean to true if "Hey Scout" is said
        if (word == "Hey Scout" && isScoutActivated == false)
        {
            isScoutActivated = true;
            ScoutModel.SetActive(true);
            ScoutLight.SetActive(true);
        }

        //If "Hey Scout" has been said, listen for menu name keywords
        if (isScoutActivated)
        {
            switch (word)
            {
                //If keyword is recognized, open panel and reset word and isScoutActivated boolean
                case "Communication":
                    print("Opening Comms Panel");
                    menuButtons[0].GetComponent<PressableButtonHoloLens2>().ButtonPressed.Invoke();
                    word = "none";
                    break;
                case "Settings":
                    print("Opening Settings Panel");
                    menuButtons[2].GetComponent<PressableButtonHoloLens2>().ButtonPressed.Invoke();
                    word = "none";
                    break;
                case "Task":
                    print("Opening Tasks Panel");
                    menuButtons[4].GetComponent<PressableButtonHoloLens2>().ButtonPressed.Invoke();
                    word = "none";
                    break;
                case "Science":
                    print("Opening Science Panel");
                    menuButtons[1].GetComponent<PressableButtonHoloLens2>().ButtonPressed.Invoke();
                    word = "none";
                    break;
                case "Navigation":
                    print("Opening Navigation Panel");
                    menuButtons[5].GetComponent<PressableButtonHoloLens2>().ButtonPressed.Invoke();
                    word = "none";
                    break;
                case "Lunarpedia":
                    print("Opening Lunarpedia Panel");
                    menuButtons[6].GetComponent<PressableButtonHoloLens2>().ButtonPressed.Invoke();
                    word = "none";
                    break;
                case "Whiteboard":
                    print("Opening Whiteboard Panel");
                    menuButtons[3].GetComponent<PressableButtonHoloLens2>().ButtonPressed.Invoke();
                    word = "none";
                    break;
                case "Suit":
                    print("Opening Suit Panel");
                    menuButtons[7].GetComponent<PressableButtonHoloLens2>().ButtonPressed.Invoke();
                    word = "none";
                    break;
                case "Show Menu":
                    print("Turning On Menu");
                    wristPanelContent.SetActive(true);
                    word = "none";
                    break;
                case "Hide Menu":
                    print("Turning Off Menu");
                    wristPanelContent.SetActive(false);
                    word = "none";
                    break;
                case "Bye Scout":
                    print("Deactivating Scout");
                    isScoutActivated = false;
                    ScoutModel.SetActive(false);
                    ScoutLight.SetActive(false);
                    word = "none";
                    break;
            }
        }

    }

    private void OnApplicationQuit()
    {
        if (recognizer != null && recognizer.IsRunning)
        {
            recognizer.OnPhraseRecognized -= Recognizer_OnPhraseRecognized;
            recognizer.Stop();
        }
    }
}
