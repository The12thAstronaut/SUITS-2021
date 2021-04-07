using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.Windows.WebCam;
using MRTK.Tutorials.AzureCloudServices.Scripts.Dtos;
using Newtonsoft.Json;
using UnityEngine.Networking;
using Microsoft.MixedReality.Toolkit.UI;
using TMPro;

public class LaurenCustomVision : MonoBehaviour
{
    [SerializeField]
    private string _liveDataUrl = "<your custom vision app url here>";

    [SerializeField]
    private string _predictionKey = "<your prediction key here>";

    public Interactable startButton;
    public Interactable stopButton;


    public TextMeshPro tagText;
    public TextMeshPro probabilityText;
    public TextMeshPro[] boundsText;

    private PhotoCapture photoCapture = null;

    private const string FILE_NAME = @"cognitive_analysis.jpg";


    void Start()
    {
        startButton.OnClick.AddListener(() => PhotoStart());
        stopButton.OnClick.AddListener(() => PhotoStop());

    }

    public void PhotoStart()
    {
        InvokeRepeating("Analyze", 5f, 5f);
    }

    public void PhotoStop()
    {
        CancelInvoke("Analyze");
        
    }


    // This method request to create a PhotoCapture object.
    // When its finish created, call the OnPhotoCreated method.
    private void Analyze()
    {
        PhotoCapture.CreateAsync(false, this.OnPhotoCreated);
        
    }

    // This method store the PhotoCapture object just created and retrieve the high quality
    // available for the camera and then request to start capturing the photo with the
    // given camera parameters.
    private void OnPhotoCreated(PhotoCapture captureObject)
    {
        this.photoCapture = captureObject;

        Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();

        CameraParameters c = new CameraParameters()
        {
            hologramOpacity = 0.0f,
            cameraResolutionWidth = cameraResolution.width,
            cameraResolutionHeight = cameraResolution.height,
            pixelFormat = CapturePixelFormat.BGRA32
        };
        captureObject.StartPhotoModeAsync(c, this.OnPhotoModeStarted);
    }

    // This method is called when we have access to the camera and can take photo with it.
    // We request to take the photo and store it in the storage.
    private void OnPhotoModeStarted(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
            string filename = string.Format(FILE_NAME);
            string filePath = Path.Combine(Application.persistentDataPath, filename);
            this.photoCapture.TakePhotoAsync(filePath, PhotoCaptureFileOutputFormat.JPG, this.OnCapturedPhotoToDisk);
        }
        else
        {
            Debug.LogError("Unable to start photo mode.");
        }
    }

    // This method is called when the photo is finish taked (or not, so check the succes property)
    // We can read the file from disk and do anything we need with it.
    // Finally, we request to stop the photo mode to free the resource.
    private void OnCapturedPhotoToDisk(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
            string filename = string.Format(FILE_NAME);
            string filePath = Path.Combine(Application.persistentDataPath, filename);

            byte[] image = File.ReadAllBytes(filePath);

            // We have the photo taken.
            Debug.Log(filePath);
            StartCoroutine(RecognizeObjectsInternal(image));
        }
        else
        {
            Debug.LogError("Failed to save Photo to disk.");
        }
        this.photoCapture.StopPhotoModeAsync(this.OnStoppedPhotoMode);
    }

    // This method is called when the photo mode is stopped and we can dispose the resources allocated.
    private void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result)
    {
        this.photoCapture.Dispose();
        this.photoCapture = null;
    }


    private IEnumerator RecognizeObjectsInternal(IEnumerable<byte> image)
    {
        var request = UnityWebRequest.Post(_liveDataUrl, string.Empty);
        request.SetRequestHeader("Prediction-Key", _predictionKey);
        request.SetRequestHeader("Content-Type", "application/octet-stream");
        request.uploadHandler = new UploadHandlerRaw(image.ToArray());
        yield return request.SendWebRequest();
        var text = request.downloadHandler.text;
        var result = JsonConvert.DeserializeObject<ImageQuicktestResult>(text);


        if (result != null)
        {
            var name = new List<string>();
            var prob = new List<double>();
            var boundL = new List<double>();
            var boundT = new List<double>();
            var boundW = new List<double>();
            var boundH = new List<double>();

            var maxProb = 0d;
            var maxTag = "";
            var bounds = new List<double>();


            foreach (var p in result.Predictions)
            {
                name.Add(p.TagName);
                prob.Add(p.Probability);
                boundL.Add(p.BoundingBox["left"]);
                boundT.Add(p.BoundingBox["top"]);
                boundW.Add(p.BoundingBox["width"]);
                boundH.Add(p.BoundingBox["height"]);


            }

            for (int i = 0; i < prob.Count; i++)
            {

                if (prob[i] < 0.8d)
                {
                    prob.Remove(prob[i]);
                    name.Remove(name[i]);
                    boundL.Remove(boundL[i]);
                    boundT.Remove(boundT[i]);
                    boundW.Remove(boundW[i]);
                    boundH.Remove(boundH[i]);
                }

                else
                {
                    if (prob[i] > maxProb)
                    {
                        bounds.Clear();
                        maxProb = prob[i];
                        maxTag = name[i];
                        bounds.Add(boundL[i]);
                        bounds.Add(boundT[i]);
                        bounds.Add(boundW[i]);
                        bounds.Add(boundH[i]);

                    }
                }

            }

            if (maxTag != "")
            {
                tagText.SetText(maxTag);
                probabilityText.SetText(maxProb.ToString());

                for (int i = 0; i < bounds.Count; i++)
                {
                    boundsText[i].SetText(bounds[i].ToString());
                }
            }

            else
            {
                tagText.SetText("none");
                probabilityText.SetText("<80%");

                for (int i = 0; i < bounds.Count; i++)
                {
                    boundsText[i].SetText("none");
                }
            }


        }
        else
        {
            Debug.Log("Predictions is null");
        }
    }

}
