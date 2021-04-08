using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Events;

public class TelemetryStream : MonoBehaviour
{
    private string bpmText;
    private string psubText;
    private string psuitText;
    private string tsubText = " ";
    private string vfanText;
    private string po2Text;
    private string ro2Text;
    private string ph2ogText;
    private string ph2olText;
    private string psopText;
    private string rsopText;
    private string batlifeText;
    private string oxlifeText;
    private string h2olifeText;
    private string dateText;
    private string evaTimeText;
    private string oxPrimaryText;
    private string oxSecondaryText;
    private string battCapText;

    public UnityEvent onBpmTextChanged;
    public UnityEvent onPSubTextChanged;
    public UnityEvent onPSuitTextChanged;
    public UnityEvent onTSubTextChanged;
    public UnityEvent onVFanTextChanged;
    public UnityEvent onPO2TextChanged;
    public UnityEvent onRO2TextChanged;
    public UnityEvent onPH2OGTextChanged;
    public UnityEvent onPH2OLTextChanged;
    public UnityEvent onPSOPTextChanged;
    public UnityEvent onBatLifeTextChanged;
    public UnityEvent onOxLifeTextChanged;
    public UnityEvent onH2OLifeTextChanged;
    public UnityEvent onDateTextChanged;
    public UnityEvent onEvaTimeTextChanged;

    public string GetBpmText()
    {
        return bpmText;
    }

    public string GetPSubText()
    {
        return psubText;
    }

    public string GetPSuitText()
    {
        return psuitText;
    }

    public string GetTSubText()
    {
        return tsubText;
    }

    public string GetVFanText()
    {
        return vfanText;
    }

    public string GetPO2Text()
    {
        return po2Text;
    }

    public string GetRO2Text()
    {
        return ro2Text;
    }

    public string GetPH2OGText()
    {
        return ph2ogText;
    }

    public string GetPH2OLText()
    {
        return ph2olText;
    }

    public string GetPSOPText()
    {
        return psopText;
    }

    public string GetBatLifeText()
    {
        return batlifeText;
    }

    public string GetOxLifeText()
    {
        return oxlifeText;
    }

    public string GetH2OLifeText()
    {
        return h2olifeText;
    }

    public string GetDateText()
    {
        return dateText;
    }

    public string GetEvaTimeText()
    {
        return evaTimeText;
    }

    public string GetO2PrimText()
    {
        return oxPrimaryText;
    }

    public string GetO2SecondaryText()
    {
        return oxSecondaryText;
    }

    public string GetRSOPText()
    {
        return rsopText;
    }

    public string GetBattCapText()
    {
        return battCapText;
    }

    public void SetBpmText(string newText)
    {
        bpmText = newText;
        if (onBpmTextChanged != null)
        {
            onBpmTextChanged.Invoke();
        }
    }

    public void SetPSubText(string newText)
    {
        psubText = newText;
        if (onPSubTextChanged != null)
        {
            onPSubTextChanged.Invoke();
        }
    }

    public void SetPSuitText(string newText)
    {
        psuitText = newText;
        if (onPSuitTextChanged != null)
        {
            onPSuitTextChanged.Invoke();
        }
    }

    public void SetTSubText(string newText)
    {
        tsubText = newText;
        if (onTSubTextChanged != null)
        {
            onTSubTextChanged.Invoke();
        }
    }

    public void SetVFanText(string newText)
    {
        vfanText = newText;
        if (onVFanTextChanged != null)
        {
            onVFanTextChanged.Invoke();
        }
    }

    public void SetPO2Text(string newText)
    {
        po2Text = newText;
        if (onPO2TextChanged != null)
        {
            onPO2TextChanged.Invoke();
        }
    }

    public void SetRO2Text(string newText)
    {
        ro2Text = newText;
        if (onRO2TextChanged != null)
        {
            onRO2TextChanged.Invoke();
        }
    }

    public void SetPH2OGText(string newText)
    {
        ph2ogText = newText;
        if (onPH2OGTextChanged != null)
        {
            onPH2OGTextChanged.Invoke();
        }
    }

    public void SetPH2OLText(string newText)
    {
        ph2olText = newText;
        if (onPH2OLTextChanged != null)
        {
            onPH2OLTextChanged.Invoke();
        }
    }

    public void SetPSOPText(string newText)
    {
        psopText = newText;
        if (onPSOPTextChanged != null)
        {
            onPSOPTextChanged.Invoke();
        }
    }

    public void SetBatLifeText(string newText)
    {
        batlifeText = newText;
        if (onBatLifeTextChanged != null)
        {
            onBatLifeTextChanged.Invoke();
        }
    }

    public void SetOxLifeText(string newText)
    {
        oxlifeText = newText;
        if (onOxLifeTextChanged != null)
        {
            onOxLifeTextChanged.Invoke();
        }
    }

    public void SetH2OLifeText(string newText)
    {
        h2olifeText = newText;
        if (onH2OLifeTextChanged != null)
        {
            onH2OLifeTextChanged.Invoke();
        }
    }

    public void SetDateText(string newText)
    {
        dateText = newText;
        if (onDateTextChanged != null)
        {
            onBpmTextChanged.Invoke();
        }
    }

    public void SetEvaTimeText(string newText)
    {
        evaTimeText = newText;
        if (onDateTextChanged != null)
        {
            onEvaTimeTextChanged.Invoke();
        }
    }

    public void SetPrimO2Text(string newText)
    {
        oxPrimaryText = newText;
    }

    public void SetSecondaryO2Text(string newText)
    {
        oxSecondaryText = newText;
    }

    public void SetRSOPText(string newText)
    {
        rsopText = newText;
    }

    public void SetBattCapText(string newText)
    {
        battCapText = newText;
    }

    public void Start()
    {

    }

    public void DisplayTelemData(string heart_bpm, string p_sub, string p_suit, string t_sub, string v_fan, string p_o2, string rate_o2, string p_h2o_g, string p_h2o_l, string p_sop, string t_battery, string t_oxygen, string t_water, string create_date)
    {
        bpmText = heart_bpm;
        psubText = p_sub;
        psuitText = p_suit;
        tsubText = t_sub;
        vfanText = v_fan;
        po2Text = p_o2;
        ro2Text = rate_o2;
        ph2ogText = p_h2o_g;
        ph2olText = p_h2o_l;
        psopText = p_sop;
        batlifeText = t_battery;
        oxlifeText = t_oxygen;
        h2olifeText = t_water;
        dateText = create_date;

    }
}
