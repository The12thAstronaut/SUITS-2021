using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.Windows.WebCam;
using CustomVision;
using Newtonsoft.Json;
using UnityEngine.Networking;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialAwareness;
using TMPro;

public class LaurenCustomVision : MonoBehaviour
{
    [SerializeField]
    private string _liveDataUrl = "<your custom vision app url here>";

    [SerializeField]
    private string _predictionKey = "<your prediction key here>";

    [SerializeField]
    private GameObject _labelObject;

    [SerializeField]
    private GameObject _labelContainer;

    public Interactable startButton;
    public Interactable stopButton;

    public TextMeshPro tagName;

    private PhotoCapture photoCapture = null;
    private Resolution _cameraResolution;

    private const string FILE_NAME = @"cognitive_analysis.jpg";

    private List<GameObject> _createdObjects = new List<GameObject>();
    private static int _meshPhysicsLayer = 0;


    void Start()
    {
        startButton.OnClick.AddListener(() => PhotoStart());
        stopButton.OnClick.AddListener(() => PhotoStop());

        _cameraResolution =
            PhotoCapture.SupportedResolutions.OrderByDescending(res => res.width * res.height).First();

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

        CameraParameters c = new CameraParameters()
        {
            hologramOpacity = 0.0f,
            cameraResolutionWidth = _cameraResolution.width,
            cameraResolutionHeight = _cameraResolution.height,
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
            StartCoroutine(RecognizeObjectsInternal(image, _cameraResolution, CopyCameraTransForm()));
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

    private Transform CopyCameraTransForm()
    {
        var g = new GameObject();
        g.transform.position = Camera.main.transform.position;
        g.transform.rotation = Camera.main.transform.rotation;
        g.transform.localScale = Camera.main.transform.localScale;
        return g.transform;
    }


    private IEnumerator RecognizeObjectsInternal(IEnumerable<byte> image, Resolution cameraResolution, Transform cameraTransform)
    {
        var request = UnityWebRequest.Post(_liveDataUrl, string.Empty);
        request.SetRequestHeader("Prediction-Key", _predictionKey);
        request.SetRequestHeader("Content-Type", "application/octet-stream");
        request.uploadHandler = new UploadHandlerRaw(image.ToArray());
        yield return request.SendWebRequest();
        var text = request.downloadHandler.text;
        var result = JsonConvert.DeserializeObject<CustomVisionResult>(text);

        if (result != null)
        {

            result.Predictions.RemoveAll(p => p.Probability < 0.8);
            tagName.SetText("#Predictions = " + result.Predictions.Count());

            LabelObjects(result.Predictions, cameraResolution, cameraTransform);

        }
        else
        {
            tagName.SetText("Predictions is null");
        }


    }

    public virtual void LabelObjects(IList<Prediction> predictions,
        Resolution cameraResolution, Transform cameraTransform)
    {
        ClearLabels();
        var heightFactor = cameraResolution.height / cameraResolution.width;
        var topCorner = cameraTransform.position + cameraTransform.forward -
                        cameraTransform.right / 2f +
                        cameraTransform.up * heightFactor / 2f;
        foreach (var prediction in predictions)
        {
            var _labelText = prediction.TagName;
            var center = prediction.GetCenter();
            var recognizedPos = topCorner + cameraTransform.right * center.x -
                                cameraTransform.up * center.y * heightFactor;

            _createdObjects.Add(CreateLabel(_labelText, recognizedPos));

            var labelPos = DoRaycastOnSpatialMap(cameraTransform, recognizedPos);

            if (labelPos != null)
            {
                _createdObjects.Add(CreateLabel(_labelText, labelPos.Value));
            }
        }

        Destroy(cameraTransform.gameObject);
    }

    private Vector3? DoRaycastOnSpatialMap(Transform cameraTransform, Vector3 recognitionCenterPos)
    {
        RaycastHit hitInfo;

        var spatialMappingConfig =
            CoreServices.SpatialAwarenessSystem.ConfigurationProfile as
                MixedRealitySpatialAwarenessSystemProfile;

        if (spatialMappingConfig != null && Physics.Raycast(cameraTransform.position, (recognitionCenterPos - cameraTransform.position),
                out hitInfo, 10, GetSpatialMeshMask()))
        {
            return hitInfo.point;
        }
        return null;
    }

    private static int GetSpatialMeshMask()
    {
        if (_meshPhysicsLayer == 0)
        {
            var spatialMappingConfig =
              CoreServices.SpatialAwarenessSystem.ConfigurationProfile as
                MixedRealitySpatialAwarenessSystemProfile;
            if (spatialMappingConfig != null)
            {
                foreach (var config in spatialMappingConfig.ObserverConfigurations)
                {
                    var observerProfile = config.ObserverProfile
                        as MixedRealitySpatialAwarenessMeshObserverProfile;
                    if (observerProfile != null)
                    {
                        _meshPhysicsLayer |= (1 << observerProfile.MeshPhysicsLayer);
                    }
                }
            }
        }

        return _meshPhysicsLayer;
    }

    private void ClearLabels()
    {
        foreach (var label in _createdObjects)
        {
            Destroy(label);
        }
        _createdObjects.Clear();
    }

    private GameObject CreateLabel(string text, Vector3 location)
    {
        var labelObject = Instantiate(_labelObject);
        var toolTip = labelObject.GetComponent<ToolTip>();
        toolTip.ShowBackground = true;
        toolTip.ToolTipText = text;
        toolTip.transform.position = location + Vector3.up * 0.2f;
        toolTip.transform.parent = _labelContainer.transform;
        toolTip.AttachPointPosition = location;
        toolTip.ContentParentTransform.localScale = new Vector3(0.1f, 0.1f, 0.1f);
        var connector = toolTip.GetComponent<ToolTipConnector>();
        connector.PivotDirectionOrient = ConnectorOrientType.OrientToCamera;
        connector.Target = labelObject;
        return labelObject;
    }



}

