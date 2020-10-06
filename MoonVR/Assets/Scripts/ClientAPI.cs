using System.Collections;
using UnityEngine;
using UnityEngine.Networking;

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

                    foreach (var item in data)
                    {
                        telemetryStream.DisplayTelemData(item.heart_bpm, item.p_sub, item.p_suit, item.t_sub, item.v_fan, item.p_o2, item.rate_o2, item.p_h2o_g, item.p_h2o_l, item.p_sop, item.t_battery, item.t_oxygen, item.t_water, item.create_date);
                        break;
                    }

                }
                else
                {
                    //handle the problem
                    Debug.Log("Error! data couldn't get.");
                }
            }
        }

    }
}