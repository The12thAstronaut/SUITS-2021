using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class changeColor : MonoBehaviour
{
    [SerializeField]
    public Renderer drawPrefab;

    public void OnSliderUpdatedRed(SliderEventData eventData)
    {
        drawPrefab = GetComponentInChildren<Renderer>();
        drawPrefab.material.color = new Color(eventData.NewValue, drawPrefab.sharedMaterial.color.g, drawPrefab.sharedMaterial.color.b);
    }
}
