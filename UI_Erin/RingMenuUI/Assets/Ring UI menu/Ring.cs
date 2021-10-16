using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "Ring", menuName = "RingMenu/Ring", order = 1)]
public class Ring : ScriptableObject
{
    // Start is called before the first frame update
    public RingElement[] Elements;
}
