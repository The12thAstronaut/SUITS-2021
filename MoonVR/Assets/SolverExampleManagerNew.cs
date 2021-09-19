// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.Examples.Demos
{
    
    public class SolverExampleManagerNew : MonoBehaviour
    {
        [SerializeField]
        

        private SolverHandler handler;
        private Solver currentSolver;
        public Interactable Button;
        private int counter = 0;

        private TrackedObjectType trackedType = TrackedObjectType.Head;
        public TrackedObjectType TrackedType
        {
            get => trackedType;
            set
            {
                if (trackedType != value)
                {
                    trackedType = value;
                    RefreshSolverHandler();
                    Button.OnClick.AddListener(() => SetSolver());
                }
            }
        }

        private readonly Vector3 HandJointRotationFix = new Vector3(90f, 0f, 0f);

        private void Awake()
        {
            SetRadialView();
        }

        public void SetTrackedHead()
        {
            TrackedType = TrackedObjectType.Head;
        }

        public void SetTrackedController()
        {
            TrackedType = TrackedObjectType.ControllerRay;
        }

        public void SetTrackedHands()
        {
            TrackedType = TrackedObjectType.HandJoint;
        }

        public void SetTrackedCustom()
        {
            TrackedType = TrackedObjectType.CustomOverride;
        }

        public void SetRadialView()
        {
            DestroySolver();

            AddSolver<RadialView>();
        }

        public void SetOrbital()
        {
            DestroySolver();

            AddSolver<Orbital>();

            // Modify properties of solver custom to this example
            var orbital = currentSolver as Orbital;
            orbital.LocalOffset = new Vector3(0.0f, -0.5f, 1.0f);
        }

        public void SetSurfaceMagnetism()
        {
            DestroySolver();

            AddSolver<SurfaceMagnetism>();

            // Modify properties of solver custom to this example
            var surfaceMagnetism = currentSolver as SurfaceMagnetism;
            surfaceMagnetism.SurfaceNormalOffset = 0.05f;
        }

        private void AddSolver<T>() where T : Solver
        {
            currentSolver = gameObject.AddComponent<T>();
            handler = GetComponent<SolverHandler>();
            RefreshSolverHandler();
        }

        private void RefreshSolverHandler()
        {
            if (handler != null)
            {
                handler.TrackedTargetType = TrackedType;

#if WINDOWS_UWP || UNITY_EDITOR
                // If using input simulation in editor or on Windows Mixed Reality platform, forward vector points through the fingers, not the palm.
                // Apply additional rotation to correct this so that forward will be through the palm and outward
                handler.AdditionalRotation = (TrackedType == TrackedObjectType.HandJoint) ? HandJointRotationFix : Vector3.zero;
#endif


            }
        }


        void SetSolver()
        {

            counter++;

            if (counter % 2 != 0)
            {
                SetSurfaceMagnetism();
            }
            else
            {
                SetRadialView();
            }


        }

        private void DestroySolver()
        {
            if (currentSolver != null)
            {
                Destroy(currentSolver);
                currentSolver = null;
            }
        }
    }
}