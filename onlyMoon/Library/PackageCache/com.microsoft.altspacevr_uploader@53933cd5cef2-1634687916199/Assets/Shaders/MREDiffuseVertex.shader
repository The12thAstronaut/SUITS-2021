Shader "Altspace/MREDiffuseVertex" {
	Properties {
		_Color("Color", Color) = (1, 1, 1, 1) // Tint
		_MainTex("Texture", 2D) = "white" {}
		_EmissiveColor("Emissive Color", Color) = (0, 0, 0, 1)
		_EmissiveTex("Emissive Texture", 2D) = "white" {}

		// Blend settings
		_AlphaCutoff("Alpha Cutoff", Range(0,1)) = 0.5
		[HideInInspector] _ShouldCutout("__should_cutout", Float) = 0.0
		[HideInInspector] _SrcBlend("__src", Float) = 1.0
		[HideInInspector] _DstBlend("__dst", Float) = 0.0
		[HideInInspector] _ZWrite("__zw", Float) = 1.0
	}
	SubShader {
		Tags { "RenderMode" = "Opaque" "Queue" = "Geometry" }
		LOD 200

		Pass {
			Tags { "LightMode" = "UniversalForward" }
			Blend [_SrcBlend] [_DstBlend]
			ZWrite [_ZWrite]

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag

			#pragma multi_compile_fog

			#include "UnityCG.cginc" // Provides us with light data

			cbuffer UnityPerMaterial {
				sampler2D _MainTex;
				float4 _MainTex_ST;
				sampler2D _EmissiveTex;
				float4 _EmissiveTex_ST;

				float4 _Color;
				float4 _EmissiveColor;
				float _ShouldCutout;
				float _AlphaCutoff;
			};

			struct appdata
			{
				float4 vertex : POSITION;
				float3 normal : NORMAL;
				float2 uv : TEXCOORD0;
				fixed3 color : COLOR0;
				UNITY_VERTEX_INPUT_INSTANCE_ID
			};

			struct v2f
			{
				float4 pos : POSITION;
				float2 uv : TEXCOORD0;
				float4 diffuse : TEXCOORD1;
				UNITY_FOG_COORDS(2)
				UNITY_VERTEX_OUTPUT_STEREO
			};


			// Based on the built-in ShadeVertexLights function. All math in view space
			void computeShadingFull(float4 vertex, float3 normal, float3 ambientLimit, out float3 diffuseShade)
			{
				float3 vertPos = UnityObjectToViewPos(vertex);
				float3 vertNorm = normalize(mul((float3x3)UNITY_MATRIX_IT_MV, normal));
				float3 viewDir = normalize(vertPos.xyz);
				float3 vertWorldNorm = UnityObjectToWorldDir(normal);

				float3 skyContrib = unity_AmbientSky.rgb * saturate(vertWorldNorm.y);
				float3 eqContrib = unity_AmbientEquator.rgb * (1 - abs(vertWorldNorm.y));
				float3 gndContrib = unity_AmbientGround.rgb * saturate(-vertWorldNorm.y);
				diffuseShade = min(skyContrib + eqContrib + gndContrib, ambientLimit);

				for (int i = 0; i < 4; i++) {
					float3 vertToLight = unity_LightPosition[i].xyz - vertPos.xyz * unity_LightPosition[i].w;
					float lengthSq = dot(vertToLight, vertToLight);

					// don't produce NaNs if some vertex position overlaps with the light
					lengthSq = max(lengthSq, 0.000001);

					vertToLight *= rsqrt(lengthSq);

					float atten = 1.0 / (1.0 + lengthSq * unity_LightAtten[i].z);

					// Zero contribution from non-spot lights
					// For non-spot, LightAtten = (-1, 1, ..), SpotDirection = (0, 0, 1, 0)
					float rho = max(0, dot(vertToLight, unity_SpotDirection[i].xyz));
					float spotAtt = (rho - unity_LightAtten[i].x) * unity_LightAtten[i].y;
					atten *= saturate(spotAtt);

					float diff = max(0, dot(vertNorm, vertToLight));
					diffuseShade += unity_LightColor[i].rgb * (diff * atten);
				}
			}


			v2f vert(appdata v)
			{
				v2f o;
				UNITY_SETUP_INSTANCE_ID(v);
				UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

				o.pos = UnityObjectToClipPos(v.vertex);
				o.uv = v.uv;

				float3 diffuseShade;
				computeShadingFull(v.vertex, v.normal, float3(1, 1, 1), diffuseShade);
				o.diffuse = _Color * float4(diffuseShade * v.color, 1);
				UNITY_TRANSFER_FOG(o, o.pos);
				return o;
			}

			fixed4 frag(v2f i) : COLOR
			{
				float4 color =
					fixed4(_EmissiveColor.rgb, 0.0) * tex2D(_EmissiveTex, TRANSFORM_TEX(i.uv, _EmissiveTex)) +
					i.diffuse * tex2D(_MainTex, TRANSFORM_TEX(i.uv, _MainTex));
				UNITY_APPLY_FOG(i.fogCoord, color);
				clip(lerp(1, color.a - _AlphaCutoff, _ShouldCutout));
				return color;
			}
			ENDCG
		}
	}
	CustomEditor "MREDiffuseVertexShaderGUI"
}
