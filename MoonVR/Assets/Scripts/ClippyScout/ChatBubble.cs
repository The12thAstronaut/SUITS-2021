using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ChatBubble : MonoBehaviour
{

    private SpriteRenderer backgroundSpriteRenderer;
    private SpriteRenderer iconSpriteRenderer;
    private TextMeshPro textMeshPro;

    public string timeString;


    // When this class begins, find references to chat bubble variables
    private void Awake()
    {
        backgroundSpriteRenderer = transform.Find("Background").GetComponent<SpriteRenderer>();
        iconSpriteRenderer = transform.Find("Icon").GetComponent<SpriteRenderer>();
        textMeshPro = transform.Find("Text").GetComponent<TextMeshPro>();
    }

    private void Setup(string text)
    {
        textMeshPro.SetText("The current time is: " + text);
        textMeshPro.ForceMeshUpdate();           //Force text to update instantly
        Vector2 textSize = textMeshPro.GetRenderedValues(false);

        Vector2 padding = new Vector2(4f, 2f);   //Create padding around text
        backgroundSpriteRenderer.size = textSize + padding;   //Resize background bubble to match text
    }

    private void Update()
    {
        timeString = string.Format("{0:hh:mm:ss tt}", DateTime.Now);
        Setup(timeString);
    }
}
