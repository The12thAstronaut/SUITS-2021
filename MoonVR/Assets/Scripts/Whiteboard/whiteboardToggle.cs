using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class whiteboardToggle : MonoBehaviour
{

    public GameObject whiteboardObjectGroup;
    public bool toggleState;

    // Start is called before the first frame update
    void Start()
    {
        toggleState = true;

    }

    public void toggleWhiteboard()
    {
        toggleState = !toggleState;
        whiteboardObjectGroup.SetActive(toggleState);
    }
}
