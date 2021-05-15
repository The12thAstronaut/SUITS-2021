using System;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;

namespace CustomVision
{
    public class CustomVisionResult
    {
        [JsonProperty("id")]
        public Guid Id { get; set; }

        [JsonProperty("project")]
        public Guid Project { get; set; }

        [JsonProperty("iteration")]
        public Guid Iteration { get; set; }

        [JsonProperty("created")]
        public DateTimeOffset Created { get; set; }

        [JsonProperty("predictions")]
        public List<Prediction> Predictions { get; set; }
    }

    public partial class Prediction
    {
        [JsonProperty("probability")]
        public double Probability { get; set; }

        [JsonProperty("tagId")]
        public Guid TagId { get; set; }

        [JsonProperty("tagName")]
        public string TagName { get; set; }

        [JsonProperty("boundingBox")]
        public BoundingBox BoundingBox { get; set; }
    }

    public partial class BoundingBox
    {
        [JsonProperty("left")]
        public double Left { get; set; }

        [JsonProperty("top")]
        public double Top { get; set; }

        [JsonProperty("width")]
        public double Width { get; set; }

        [JsonProperty("height")]
        public double Height { get; set; }
    }


    public static class PredictionExtensions
    {
        public static Vector2 GetCenter(this Prediction p)
        {
            return new Vector2((float)(p.BoundingBox.Left + (0.5 * p.BoundingBox.Width)),
                (float)(p.BoundingBox.Top + (0.5 * p.BoundingBox.Height)));
        }
    }
}
