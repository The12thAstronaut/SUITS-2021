using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TelemetryStream : MonoBehaviour
{
    public Text bpmText;
    public Text psubText;
    public Text psuitText;
    public Text tsubText;
    public Text vfanText;
    public Text po2Text;
    public Text ro2Text;
    public Text ph2ogText;
    public Text ph2olText;
    public Text psopText;
    public Text batlifeText;
    public Text oxlifeText;
    public Text h2olifeText;
    public Text dateText;

    public void DisplayTelemData(string heart_bpm, string p_sub, string p_suit, string t_sub, string v_fan, string p_o2, string rate_o2, string p_h2o_g, string p_h2o_l, string p_sop, string t_battery, string t_oxygen, string t_water, string create_date)
    {
        bpmText.text = heart_bpm;
        psubText.text = p_sub;
        psuitText.text = p_suit;
        tsubText.text = t_sub;
        vfanText.text = v_fan;
        po2Text.text = p_o2;
        ro2Text.text = rate_o2;
        ph2ogText.text = p_h2o_g;
        ph2olText.text = p_h2o_l;
        psopText.text = p_sop;
        batlifeText.text = t_battery;
        oxlifeText.text = t_oxygen;
        h2olifeText.text = t_water;
        dateText.text = create_date;

}
}
