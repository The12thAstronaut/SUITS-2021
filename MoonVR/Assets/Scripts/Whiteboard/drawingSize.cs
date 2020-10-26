using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.UI;

public class drawingSize : MonoBehaviour
{
    [SerializeField]
    public GameObject drawPrefab;

    public void splineSizeChanger(SliderEventData eventData)
    {
        drawPrefab.transform.localScale = new Vector3(0.1f * eventData.NewValue, 0.1f * eventData.NewValue, 0.1f * eventData.NewValue);
    }
}
