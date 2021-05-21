using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class meshLoader : MonoBehaviour
{

public string BlobConnectionString;

    // Start is called before the first frame update
    void Start()
    {
        loadMesh(BlobConnectionString);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public async void loadMesh(string cxnstr)
    {
        BlobModel bm = new BlobModel("cow.obj", "obj", cxnstr);
        if (await bm.exists())
        {
            await bm.download("cow.obj"); 
            Debug.Log("Downloaded.");

            Mesh meshHold = new Mesh();
            ObjImporter newMesh = new ObjImporter();
            meshHold = newMesh.ImportFile("./Assets/Resources/cow.obj");
            Debug.Log("Imported");

            GameObject myCat = new GameObject();
            MeshRenderer meshRenderer = myCat.AddComponent<MeshRenderer>();
            MeshFilter filter = myCat.AddComponent<MeshFilter>();
            filter.mesh = meshHold;
            //./Assets/Resources/metal01.mat
            Material catMaterial = Resources.Load("metal01", typeof(Material)) as Material;
            myCat.GetComponent<MeshRenderer>().material = catMaterial;

            Instantiate(myCat);
            myCat.transform.position = new Vector3(0, 200, 0);

            Debug.Log("Done");
        }
    }
}
