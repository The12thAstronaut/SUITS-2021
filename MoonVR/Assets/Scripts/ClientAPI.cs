using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Events;

public class ClientAPI : MonoBehaviour
{
    public TelemetryStream telemetryStream;
    public string url;

    IEnumerator Start()
    {
        while (true)
        {
            yield return new WaitForSeconds(1.0f);
            StartCoroutine(Get(url));
        }
    }

    public IEnumerator Get(string url)
    {
        using (UnityWebRequest www = UnityWebRequest.Get(url))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError)
            {
                Debug.Log(www.error);
            }
            else
            {
                if (www.isDone)
                {
                    // handle the result
                    string result = System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);
                    //Debug.Log(result);     //used to see if values are being registered 

                    result = "{\"result\":[" + result + "]}";

                    List<Suit> data = JsonHelper.FromJson<Suit>(result);

                    Suit suit_data = data[0];

                    telemetryStream.SetBpmText(suit_data.heart_bpm);
                    telemetryStream.SetPSubText(suit_data.p_sub);
                    telemetryStream.SetPSuitText(suit_data.p_suit);
                    telemetryStream.SetTSubText(suit_data.t_sub); // temperature
                    telemetryStream.SetVFanText(suit_data.v_fan);
                    telemetryStream.SetPO2Text(suit_data.p_o2);
                    telemetryStream.SetRO2Text(suit_data.rate_o2);
                    telemetryStream.SetPH2OGText(suit_data.p_h2o_g);
                    telemetryStream.SetPH2OLText(suit_data.p_h2o_l);
                    telemetryStream.SetPSOPText(suit_data.p_sop);
                    telemetryStream.SetBatLifeText(suit_data.t_battery);
                    telemetryStream.SetOxLifeText(suit_data.t_oxygen);
                    telemetryStream.SetH2OLifeText(suit_data.t_water);
                    telemetryStream.SetDateText(suit_data.create_date);
                    telemetryStream.SetEvaTimeText(suit_data.timer);
                    telemetryStream.SetPrimO2Text(suit_data.ox_primary);
                    telemetryStream.SetSecondaryO2Text(suit_data.ox_secondary);
                    telemetryStream.SetRSOPText(suit_data.rate_sop);
                    telemetryStream.SetBattCapText(suit_data.cap_battery);


                }
                else
                {
                    //handle the problem
                    Debug.Log("Error! data couldn't get.");
                }
            }
        }
    }

    void TelemetryUpdate()
    {
        Debug.Log("Updated telemetry stream.");
    }
}