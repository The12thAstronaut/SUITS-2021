using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// [NOTE] : Current script that is being used. V 2.0.1
// Still need to translate in order to add comments [French to English]
public class DirectionalArrow : MonoBehaviour
{
    [SerializeField]
    private Transform target;
    float lockPos = 0;

    private void Update()
    {
        Vector3 targetPosition = target.transform.position;
        targetPosition.y = transform.position.y;

        // Chooses which gameobject the script will point towards (currently stuck with looking with Z axis of pointer)
        transform.LookAt(targetPosition);
        transform.rotation = Quaternion.Euler(lockPos, transform.rotation.eulerAngles.y, lockPos);
    }
}
