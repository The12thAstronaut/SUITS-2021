using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Microsoft.MixedReality.Toolkit.UI
{
    public class MenuScript : MonoBehaviour
    {
        public GameObject[] panels;
        public Interactable[] buttons;
        // Start is called before the first frame update
        void Start()
        {
            DisablePanels();
            for (int i = 0; i < buttons.Length; i++)
            {
                // Scope inside closures: https://stackoverflow.com/questions/750486/javascript-closure-inside-loops-simple-practical-example
                int j = i;
                buttons[j].OnClick.AddListener(() => {
                    DisableAllExcept(j);
                    panels[j].SetActive(buttons[j].IsToggled);
                });
            }
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
                buttons[i].IsToggled = false;
            }
        }

        public void DisableAll()
        {
            DisablePanels();
            DisableButtons();
        }

        public void DisableAllExcept(int i)
        {
            for (int j = 0; j < buttons.Length; ++j)
            {
                if (i != j)
                {
                    buttons[j].IsToggled = false;
                    panels[j].SetActive(false);
                }
            }
        }
    }
}

