using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.Events;

public class ClientAPI : MonoBehaviour
{
    public string url;
    public TelemetryStream telemetryStream;

    
    

    void Update()
    {
        StartCoroutine(Get(url));
    }

    public IEnumerator Get(string url)
    {
        using (UnityWebRequest www = UnityWebRequest.Get(url))
        {
            yield return www.SendWebRequest();

            if (www.isNetworkError)
            {
                //Debug.Log(www.error);
            }
            else
            {
                if (www.isDone)
                {
                    // handle the result
                    var result = System.Text.Encoding.UTF8.GetString(www.downloadHandler.data);
                    result = "{\"result\":" + result + "}";
                    var data = JsonHelper.FromJson<Suit>(result);

                    var item = data[0];

                    telemetryStream.SetBpmText(item.heart_bpm);
                    telemetryStream.SetPSubText(item.p_sub);
                    telemetryStream.SetPSuitText(item.p_suit);
                    telemetryStream.SetTSubText(item.t_sub);
                    telemetryStream.SetVFanText(item.v_fan);
                    telemetryStream.SetPO2Text(item.p_o2);
                    telemetryStream.SetRO2Text(item.rate_o2);
                    telemetryStream.SetPH2OGText(item.p_h2o_g);
                    telemetryStream.SetPH2OLText(item.p_h2o_l);
                    telemetryStream.SetPSOPText(item.p_sop);
                    telemetryStream.SetBatLifeText(item.t_battery);
                    telemetryStream.SetOxLifeText(item.t_oxygen);
                    telemetryStream.SetH2OLifeText(item.t_water);
                    telemetryStream.SetDateText(item.create_date);

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