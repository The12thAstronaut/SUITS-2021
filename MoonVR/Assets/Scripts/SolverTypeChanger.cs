using System;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;
using UnityEngine.Events;

public class SolverTypeChanger : MonoBehaviour
{
    public Interactable SolverButton;
    public GameObject Panel;
    private Solver currentSolver;



    private int i = 0;


    // Start is called before the first frame update
    void Start()
    {
        SetRadialView();
        
        SolverButton.OnClick.AddListener(() => ChangeSolver());
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


    public void SetRadialView()
    {
        DestroySolver();

        AddSolver<RadialView>();

        var radialView = currentSolver as RadialView;
        radialView.MinDistance = 0.4f;
        radialView.MaxDistance = 0.5f;
        radialView.MoveLerpTime = 0.5f;
        radialView.RotateLerpTime = 0.5f;
        radialView.MaxViewDegrees = 25;
    }

    public void SetSurfaceMagnetism()
    {
        DestroySolver();

        AddSolver<SurfaceMagnetism>();

        // Modify properties of solver custom to this example
        var surfaceMagnetism = currentSolver as SurfaceMagnetism;
        surfaceMagnetism.SurfaceNormalOffset = 0.2f;


    }

    private void AddSolver<T>() where T : Solver
    {
        currentSolver = gameObject.AddComponent<T>();
    }

    private void DestroySolver()
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
