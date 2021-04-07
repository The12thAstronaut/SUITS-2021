using Newtonsoft.Json;
using System.Collections.Generic;

namespace MRTK.Tutorials.AzureCloudServices.Scripts.Dtos
{
    public class Prediction
    {
        [JsonProperty("probability")]
        public double Probability { get; set; }

        [JsonProperty("tagId")]
        public string TagId { get; set; }

        [JsonProperty("tagName")]
        public string TagName { get; set; }

        [JsonProperty("boundingBox")]
        public Dictionary<string, double> BoundingBox { get; set; }
    }
}