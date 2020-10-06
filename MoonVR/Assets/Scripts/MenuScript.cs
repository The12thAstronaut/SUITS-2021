using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.UI
{
    public class MenuScript : MonoBehaviour
    {
        public GameObject[] panels;
        public GameObject[] buttons;
        // Start is called before the first frame update
        void Start()
        {
            DisablePanels();
        }

        public void DisablePanels()
        {
            for (int i = 0; i < panels.Length; i++)
            {
                panels[i].SetActive(false);
            }
        }

        public void DisableButtons()
        {
            for (int i = 0; i < buttons.Length; i++)
            {
                buttons[i].GetComponent<Interactable>().IsToggled = false;
            }
        }

        public void DisableAll()
        {
            DisablePanels();
            DisableButtons();
        }

        // Update is called once per frame
        void Update()
        {

        }
    }
}

