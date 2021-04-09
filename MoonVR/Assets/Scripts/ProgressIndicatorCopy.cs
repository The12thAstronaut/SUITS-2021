// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using Microsoft.MixedReality.Toolkit.UI;
using System.Threading.Tasks;
using UnityEngine;



    /// <summary>
    /// Demo class for IProgressIndicator examples
    /// </summary>
    public class ProgressIndicatorCopy : MonoBehaviour
    {
        [SerializeField, Header("Indicators")]
       
        
        private GameObject progressIndicatorRotatingOrbsGo = null;


        private KeyCode toggleOrbsKey = KeyCode.Alpha3;

        [SerializeField, Header("Settings")]


        [Range(1f, 10f)]
        private float loadingTime = 5f;


        private IProgressIndicator progressIndicatorRotatingOrbs;



        /// <summary>
        /// Target method for demo button
        /// </summary>
        public void OnClickOrbs()
        {
            HandleButtonClick(progressIndicatorRotatingOrbs);
        }

        private async void HandleButtonClick(IProgressIndicator indicator)
        {
            // If the indicator is opening or closing, wait for that to finish before trying to open / close it
            // Otherwise the indicator will display an error and take no action
            await indicator.AwaitTransitionAsync();

            switch (indicator.State)
            {
                case ProgressIndicatorState.Closed:
                    OpenProgressIndicator(indicator);
                    break;

                case ProgressIndicatorState.Open:
                    await indicator.CloseAsync();
                    break;
            }
        }

        private void OnEnable()
        {
            progressIndicatorRotatingOrbs = progressIndicatorRotatingOrbsGo.GetComponent<IProgressIndicator>();
        }

        private void Update()
        {

            if (UnityEngine.Input.GetKeyDown(toggleOrbsKey))
            {
                HandleButtonClick(progressIndicatorRotatingOrbs);
            }
        }

        private async void OpenProgressIndicator(IProgressIndicator indicator)
        {
            await indicator.OpenAsync();

            float timeStarted = Time.time;
            while (Time.time < timeStarted + loadingTime)
            {
                float normalizedProgress = Mathf.Clamp01((Time.time - timeStarted) / loadingTime);
                indicator.Progress = normalizedProgress;

                await Task.Yield();

                switch (indicator.State)
                {
                    case ProgressIndicatorState.Open:
                        break;

                    default:
                        // The indicator was closed
                        return;
                }
            }

            await indicator.CloseAsync();
        }
    }

