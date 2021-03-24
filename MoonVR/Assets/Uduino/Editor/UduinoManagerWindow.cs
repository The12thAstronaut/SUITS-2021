using System;
using System.IO;
using Uduino;
using UnityEditor;
using UnityEngine;
using System.Collections.Generic;

public class UduinoManagerWindow : EditorWindow
{

    // Scroll position
    public Vector2 scrollPos = Vector2.zero;

    [MenuItem("Uduino/Uduino Manager")]
    public static void ShowWindow()
    {
        UduinoManagerWindow w = (UduinoManagerWindow)EditorWindow.GetWindow<UduinoManagerWindow>();
        Texture icon = AssetDatabase.LoadAssetAtPath<Texture>("Assets/Uduino/Editor/Resources/uduino-editor-logo-small.png");
        GUIContent titleContent = new GUIContent("Uduino Manager");
        if (icon != null)
            titleContent = new GUIContent(" Uduino Manager", icon );
        w.titleContent = titleContent;
        w.Show();
    }

    void OnGUI()
    {
        GUILayout.BeginVertical();
        scrollPos = GUILayout.BeginScrollView(scrollPos, false, true);

        try
        {
            if (UduinoManagerEditor.Instance != null)
            {
                UduinoManagerEditor.Instance.OnInspectorGUI();
            }
            else
            {
                UduinoManagerEditor.Instance.DrawOnInspectorGUI();
            }
        } catch(Exception)
        {
            GUILayout.Label("Loading Uduino Manager...", EditorStyles.boldLabel);
        }
        GUILayout.EndScrollView();
        GUILayout.EndVertical();
    }


}