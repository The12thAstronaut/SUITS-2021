using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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

        }

        else
        {
            PointerUtils.SetGazePointerBehavior(PointerBehavior.AlwaysOn);

        }
        
    }


    public void SpatialMeshDisplay()
    {

        toggle = !toggle;
        
        // Get the first Mesh Observer available, generally we have only one registered
        var observer = CoreServices.GetSpatialAwarenessSystemDataProvider<IMixedRealitySpatialAwarenessMeshObserver>();

        if (toggle == false)
        {
            // Set to not visible
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.None;
            
        }
        
        
        else
        {
            // Set to visible and the Occlusion material
            observer.DisplayOption = SpatialAwarenessMeshDisplayOptions.Visible;
           
        }
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
