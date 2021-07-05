using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO; 
using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;
using Microsoft.WindowsAzure.Storage;
using Microsoft.WindowsAzure.Storage.Blob;
using Microsoft.WindowsAzure.Storage.File; 

public class BlobModel : MonoBehaviour
{
    private String fileName, cont, cxnstr;
    private CloudBlockBlob blob;

    public BlobModel(String fname, String container, String connection)
    {
        fileName = fname;
        cont = container;
        cxnstr = connection;

        Debug.Log("Searching model using " + cxnstr);

        CloudStorageAccount act = CloudStorageAccount.Parse(cxnstr); 
        CloudBlobClient client = act.CreateCloudBlobClient();

        var c = client.GetContainerReference(cont);
        c.CreateIfNotExistsAsync().Wait();

        blob = c.GetBlockBlobReference(fileName);
    }

    /**
     * ./ = root directory
     * Downloads file to ./Assets/Resources/
     */
    public async Task download(String saveAs) 
    {
        if (saveAs == null) saveAs = fileName;

        await blob.DownloadToFileAsync(string.Format("./Assets/Resources/{0}", saveAs), FileMode.Create);
    }

    public async Task downloadTo(String directory, String saveAs)
    {
        if (saveAs == null) saveAs = fileName;
        await blob.DownloadToFileAsync(string.Format(directory + "/{0}", fileName), FileMode.Create);
    }

    public async Task<bool> exists()
    {
        return await blob.ExistsAsync();
    }

    public async Task<String> getText()
    {
        return await blob.DownloadTextAsync(); 
    }

    public void retryConnection()
    {
        Debug.Log("Retrying connection using " + cxnstr);

        CloudStorageAccount act = CloudStorageAccount.Parse(cxnstr);
        CloudBlobClient client = act.CreateCloudBlobClient();

        var c = client.GetContainerReference(cont);
        c.CreateIfNotExistsAsync().Wait();

        blob = c.GetBlockBlobReference(fileName);
    }

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
