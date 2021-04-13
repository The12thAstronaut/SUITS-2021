using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;

public class settingScript : MonoBehaviour
{

    public Interactable[] sizeButtons;

    public Interactable spatMesh;

    public Interactable cursorButton;

    public GameObject wristPanel;

    public TextMeshPro cursorText;

    public TextMeshPro spatText;

    private Vector3 initScale;

    private bool toggle;
    private bool cursorToggle;
    
    // Start is called before the first frame update
    void Start()
    {
        initScale = wristPanel.transform.lossyScale;

        toggle = false;
        cursorToggle = false;

        for (int i = 0; i < sizeButtons.Length; i++)
        {
            int closureIndex = i;
            sizeButtons[closureIndex].OnClick.AddListener(() => ChangePanelSize(closureIndex));
        }

        spatMesh.OnClick.AddListener(() => SpatialMeshDisplay());

        cursorButton.OnClick.AddListener(() => CursorDisplay());

    }


    public void ChangePanelSize(int buttonIndex)
    {
        if (buttonIndex == 0)
        {
            wristPanel.transform.localScale = initScale - new Vector3(0.2f, 0.2f, 0.2f);
        }

        if (buttonIndex == 1)
        {
            wristPanel.transform.localScale = initScale;
        }

        if (buttonIndex == 2)
        {
            wristPanel.transform.localScale = initScale + new Vector3(0.2f, 0.2f, 0.2f);
        }
    }


    public void CursorDisplay()
    {
        cursorToggle = !cursorToggle;

        if (cursorToggle == true)
        {
            PointerUtils.SetGazePointerBehavior(PointerBehavior.AlwaysOff);
            cursorText.SetText("Eye Cursor Hidden");

        }

        else
        {
            PointerUtils.SetGazePointerBehavior(PointerBehavior.AlwaysOn);
            cursorText.SetText("Eye Cursor Visible");

        }
        
    }


    public void SpatialMeshDisplay()
    {

        toggle = !toggle;

        // Get the first Mesh Observer available, generally we have only one registered
        var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();


        if (toggle == false)
        {
            // Suspends observation of spatial mesh data
            //observer.Suspend();
            // Set to not visible
            spatText.SetText("Spatial Mesh Hidden");
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;

        }
        
        
        else
        {
            // Resumes observation of spatial mesh data
            //observer.Resume();
            // Set to not visible
            spatText.SetText("Spatial Mesh Visible");
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;

        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
