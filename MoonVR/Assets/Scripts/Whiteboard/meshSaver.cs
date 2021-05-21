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
        //Starting at time 2, save mesh every 10 seconds
        // InvokeRepeating("SaveData", 2.0f, 10.0f);
        bStorage.BlobStorageTest();
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
}
