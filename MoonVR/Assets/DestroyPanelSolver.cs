using System;
using System.Collections;
using Microsoft.MixedReality.Toolkit.Utilities;
using Microsoft.MixedReality.Toolkit.Utilities.Solvers;
using Microsoft.MixedReality.Toolkit.UI;
using UnityEngine;
using UnityEngine.Events;
using TMPro;
using System.Collections.Generic;

public class DestroyPanelSolver : MonoBehaviour
{

    public GameObject[] panels;
    public Interactable[] buttons;
    public Interactable[] SolverButton;
    public Interactable[] FollowToggle;
    private Solver currentSolver;
    private Solver prevSolver;

    private List<bool> solverToggles = new List<bool>();
    private List<bool> solverToggles1 = new List<bool>();
    private List<bool> solverToggles2 = new List<bool>();

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < buttons.Length; i++)
        {
            int closureIndex = i;
            buttons[closureIndex].OnClick.AddListener(() => SetRadialView(closureIndex));
        }
        for (int i = 0; i < SolverButton.Length; i++)
        {
            int closureIndex1 = i;
            SolverButton[closureIndex1].OnClick.AddListener(() => ChangeSolver(closureIndex1));
        }
        for (int i = 0; i < FollowToggle.Length; i++)
        {
            int closureIndex2 = i;
            FollowToggle[closureIndex2].OnClick.AddListener(() => NoSolver(closureIndex2));
        }

        for (int i = 0; i < panels.Length; i++)
        {
            solverToggles.Add(false);
            solverToggles1.Add(false);
            solverToggles2.Add(false);
        }
    }

    IEnumerator PanelFixedVertical(RadialView radialView)
    {
        radialView.UseFixedVerticalPosition = true;
        radialView.FixedVerticalPosition = 0.015f;
        yield return new WaitForSeconds(3);
        radialView.UseFixedVerticalPosition = false;
    }

    void ChangeSolver(int i)
    {
        solverToggles1[i] = !solverToggles1[i];

        if (solverToggles1[i] == true)
        {
            SetSurfaceMagnetism(i);
        }

        else
        {
            SetRadialView1(i);
            currentSolver = panels[i].GetComponent<Solver>();
        }


    }

    void NoSolver(int i)
    {

        solverToggles2[i] = !solverToggles2[i];

        if (solverToggles2[i] == true)
        {
            currentSolver = panels[i].GetComponent<Solver>();
            DestroySolver(currentSolver);

        }

        else
        {
            SetRadialView1(i);


        }

    }

    public void SetRadialView(int i)
    {
        solverToggles[i] = !solverToggles[i];

        if (solverToggles[i] == true)
        {
            currentSolver = panels[i].GetComponent<Solver>();
            DestroySolver(currentSolver);

            AddSolver<RadialView>(i);

            var radialView = currentSolver as RadialView;
            StartCoroutine(PanelFixedVertical(radialView));
            radialView.MinDistance = 0.5f;
            radialView.MaxDistance = 0.6f;
            radialView.MoveLerpTime = 0.30f;
            radialView.RotateLerpTime = 0.30f;
            radialView.MaxViewDegrees = 30;


        }

    }

    public void SetRadialView1(int i)
    {


        currentSolver = panels[i].GetComponent<Solver>();
        DestroySolver(currentSolver);

        AddSolver<RadialView>(i);

        var radialView = currentSolver as RadialView;
        radialView.MinDistance = 0.5f;
        radialView.MaxDistance = 0.6f;
        radialView.MoveLerpTime = 0.30f;
        radialView.RotateLerpTime = 0.30f;
        radialView.MaxViewDegrees = 30;

    }

    public void SetSurfaceMagnetism(int i)
    {

        currentSolver = panels[i].GetComponent<Solver>();
        DestroySolver(currentSolver);

        AddSolver<SurfaceMagnetism>(i);

        // Modify properties of solver custom to this example
        var surfaceMagnetism = currentSolver as SurfaceMagnetism;
        surfaceMagnetism.SurfaceNormalOffset = 0.01f;
        surfaceMagnetism.CurrentOrientationMode = SurfaceMagnetism.OrientationMode.SurfaceNormal;
        surfaceMagnetism.MaxRaycastDistance = 5f;
        surfaceMagnetism.MoveLerpTime = 2f;

    }

    private void AddSolver<T>(int i) where T : Solver
    {
        currentSolver = panels[i].AddComponent<T>();
    }


    public void DestroySolver(Solver currentSolver)
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
        for (int i = 0; i < panels.Length; i++)
        {
            

            if (panels[i].activeInHierarchy == false)

            {

                currentSolver = panels[i].GetComponent<Solver>();
                DestroySolver(currentSolver);
                
            }


        }

        

    }
}
