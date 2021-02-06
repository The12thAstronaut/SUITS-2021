using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class boxMover : MonoBehaviour
{
    public GameObject lightCube;
    public GameObject position1;
    public GameObject position2;
    public GameObject position3;
    public GameObject position4;
    Vector3 lightCubePos;
    Vector3 initPos;
    Vector3 finalPos;

    // Start is called before the first frame update
    void Start()
    {
        initPos = position1.transform.position;
        finalPos = position2.transform.position;
        lightCube.transform.position = initPos;
    }

    // Update is called once per frame
    void Update()
    {

        if (lightCube.transform.position == position1.transform.position)
        {
            initPos = position1.transform.position;
            finalPos = position2.transform.position;
            lightCube.transform.Rotate(0, 0, 90);
        }

        else if (lightCube.transform.position == position2.transform.position)
        {
            initPos = position2.transform.position;
            finalPos = position3.transform.position;
            lightCube.transform.Rotate(0, 0, 90);

        }

        else if (lightCube.transform.position == position3.transform.position)
        {
            initPos = position3.transform.position;
            finalPos = position4.transform.position;
            lightCube.transform.Rotate(0, 0, 90);

        }


        else if (lightCube.transform.position == position4.transform.position)
        {
            initPos = position4.transform.position;
            finalPos = position1.transform.position;
            lightCube.transform.Rotate(0, 0, 90);

        }



        lightCube.transform.position = Vector3.MoveTowards(lightCube.transform.position, finalPos, 0.05f * Time.deltaTime);
        

        //Debug.Log(lightCube.transform.position);


    }
}
