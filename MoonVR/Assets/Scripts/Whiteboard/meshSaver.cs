using UnityEngine;
using UnityEngine.Events;
using Microsoft.MixedReality.SceneUnderstanding.Samples.Unity;

public class meshSaver : MonoBehaviour
{

    public SceneUnderstandingManager SuManager;
    public BlobStorage bStorage;

    // Start is called before the first frame update
    void Start()
    {
        //Starting at time 2 seconds, save mesh every 10 seconds
        InvokeRepeating("SaveData", 2.0f, 10.0f);
        //Starting at time 4 seconds, upload mesh to blob every 60 seconds
        InvokeRepeating("UploadToBlob", 4.0f, 60.0f);
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void SaveData()
    {
        var bytes = SuManager.SaveBytesToDiskAsync();
        var objs = SuManager.SaveObjsToDiskAsync();
    }

    private void UploadToBlob()
    {
        print("Uploading spatial mesh to blob");
        bStorage.BlobStorageTest();

    }
}
