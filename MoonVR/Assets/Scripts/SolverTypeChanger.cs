using System;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;
using UnityEngine.Events;
using TMPro;

public class SolverTypeChanger : MonoBehaviour
{
    public Interactable SolverButton;
    public Interactable FollowToggle;
    public GameObject Panel;
    private Solver currentSolver;
    public Microsoft.MixedReality.Toolkit.Utilities.Solvers.SurfaceMagnetism.OrientationMode CurrentOrientationMode { get; set; }

    
    



    private int i = 0;
    private int j = 0;


    // Start is called before the first frame update
    void Start()
    {
        SetRadialView();
        
        SolverButton.OnClick.AddListener(() => ChangeSolver());
        FollowToggle.OnClick.AddListener(() => NoSolver());
    }

    void ChangeSolver()
    {

        i++;

        if (i % 2 != 0)
        {

            SetSurfaceMagnetism();
            
        }

        else
        {
            
            SetRadialView();
            
        }
  

    }

    void NoSolver()
    {
        j++;

        if (j % 2 != 0)
        {

            DestroySolver();

        }

        else
        {

            SetRadialView();

        }

    }


    public void SetRadialView()
    {
        DestroySolver();

        AddSolver<RadialView>();

        var radialView = currentSolver as RadialView;
        radialView.MinDistance = 0.4f;
        radialView.MaxDistance = 0.5f;
        radialView.MoveLerpTime = 0.5f;
        radialView.RotateLerpTime = 0.5f;
        radialView.MaxViewDegrees = 55;
    }

    public void SetSurfaceMagnetism()
    {
        DestroySolver();

        AddSolver<SurfaceMagnetism>();

        // Modify properties of solver custom to this example
        var surfaceMagnetism = currentSolver as SurfaceMagnetism;
        surfaceMagnetism.SurfaceNormalOffset = 0.01f;
        surfaceMagnetism.CurrentOrientationMode = SurfaceMagnetism.OrientationMode.SurfaceNormal;
        surfaceMagnetism.MaxRaycastDistance = 5f;
        surfaceMagnetism.MoveLerpTime = 2f;


    }

    private void AddSolver<T>() where T : Solver
    {
        currentSolver = gameObject.AddComponent<T>();
    }

    public void DestroySolver()
    {
        
        if (currentSolver != null)
        {
            Destroy(currentSolver);
            currentSolver = null;
        }
    }

    // Update is called once per frame
    void Update()
    {

    }
}
