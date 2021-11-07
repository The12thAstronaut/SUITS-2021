// Unity built-in shader source. Copyright (c) 2016 Unity Technologies. MIT license (see license.txt)

// Unlit shader. Simplest possible textured shader.
// - SUPPORTS lightmap
// - no lighting
// - no per-material color

Shader "MRE/Unlit (Supports Lightmap)" {
Properties {
    _MainTex ("Base (RGB)", 2D) = "white" {}
}

SubShader {
    Tags { "RenderType"="Opaque" }
    LOD 100

    // Lightmapped
    Pass
    {
        Tags{ "LightMode" = "UniversalForward" "RenderType" = "Opaque" }

        CGPROGRAM

        #pragma vertex vert
        #pragma fragment frag
        #pragma target 2.0
        #include "UnityCG.cginc"
        #pragma multi_compile_fog
        #define USING_FOG (defined(FOG_LINEAR) || defined(FOG_EXP) || defined(FOG_EXP2))

        // uniforms
        cbuffer UnityPerMaterial {
            float4 _MainTex_ST;
        };

        // vertex shader input data
        struct appdata
        {
            float3 pos : POSITION;
            float3 uv0 : TEXCOORD0;
#if defined(LIGHTMAP_ON)
            float3 uv1 : TEXCOORD1;
#endif
            UNITY_VERTEX_INPUT_INSTANCE_ID
        };

        // vertex-to-fragment interpolators
        struct v2f
        {
            float4 pos : SV_POSITION;
            float2 uv0 : TEXCOORD0;
#if defined(LIGHTMAP_ON)
            float2 uv1 : TEXCOORD1;
#endif
#if USING_FOG
            fixed fog : TEXCOORD2;
#endif
            UNITY_VERTEX_OUTPUT_STEREO
        };

        // vertex shader
        v2f vert(appdata IN)
        {
            v2f o;
            UNITY_SETUP_INSTANCE_ID(IN);
            UNITY_INITIALIZE_VERTEX_OUTPUT_STEREO(o);

            // compute texture coordinates
            o.uv0 = IN.uv0.xy * _MainTex_ST.xy + _MainTex_ST.zw;
#if defined(LIGHTMAP_ON)
            o.uv1 = IN.uv1.xy * unity_LightmapST.xy + unity_LightmapST.zw;
#endif

            // fog
#if USING_FOG
            float3 eyePos = UnityObjectToViewPos(float4(IN.pos, 1));
            float fogCoord = length(eyePos.xyz);  // radial fog distance
            UNITY_CALC_FOG_FACTOR_RAW(fogCoord);
            o.fog = saturate(unityFogFactor);
#endif

            // transform position
            o.pos = UnityObjectToClipPos(IN.pos);
            return o;
        }

        // textures
        sampler2D _MainTex;

        // fragment shader
        fixed4 frag(v2f IN) : SV_Target
        {
            fixed4 col, tex;

#if defined(LIGHTMAP_ON)
            // Fetch lightmap
            half4 bakedColorTex = UNITY_SAMPLE_TEX2D(unity_Lightmap, IN.uv1.xy);
            col.rgb = DecodeLightmap(bakedColorTex);
#else
            col = fixed4(1,1,1,1);
#endif

            // Fetch color texture
            tex = tex2D(_MainTex, IN.uv0.xy);
            col.rgb = tex.rgb * col.rgb;
            col.a = 1;

#if USING_FOG
            // fog
            col.rgb = lerp(unity_FogColor.rgb, col.rgb, IN.fog);
#endif
            return col;
        }

        ENDCG
    }
}
}
