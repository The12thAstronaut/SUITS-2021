using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// [NOTE] : Current script that is being used. V 2.0.1

public class DirectionalArrow : MonoBehaviour
{
    [SerializeField]
    private Transform target;
    float lockPos = 0;

    private void Update()
    {
        Vector3 targetPosition = target.transform.position;
        targetPosition.y = transform.position.y;

        // Chooses which gameobject the script will point towards z axis
        transform.LookAt(targetPosition);
        transform.rotation = Quaternion.Euler(lockPos, transform.rotation.eulerAngles.y, lockPos);
    }
}
