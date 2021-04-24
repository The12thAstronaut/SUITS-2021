#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.String
struct String_t;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0;
// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>
struct XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD;
// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B;

IL2CPP_EXTERN_C const RuntimeMethod* XRSubsystem_1__ctor_mFAE3BA272ACEDCAAACCCDE55536724AEB0EF7988_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t XRSessionSubsystem__ctor_m0E7B9E65E53B03A65C53F87CF55E76528E9AF62A_MetadataUsageId;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tD4E2C466946EFCC911763D21CD7F606F5D963632 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Subsystem
struct  Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SubsystemDescriptor
struct  SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA  : public RuntimeObject
{
public:
	// System.String UnityEngine.SubsystemDescriptor::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA, ___U3CidU3Ek__BackingField_0)); }
	inline String_t* get_U3CidU3Ek__BackingField_0() const { return ___U3CidU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_0() { return &___U3CidU3Ek__BackingField_0; }
	inline void set_U3CidU3Ek__BackingField_0(String_t* value)
	{
		___U3CidU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CidU3Ek__BackingField_0), (void*)value);
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider
struct  Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980  : public RuntimeObject
{
public:

public:
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.SubsystemDescriptor`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct  SubsystemDescriptor_1_tF65741C51E4283074E65F4E8E09AC44A3BA5D783  : public SubsystemDescriptor_tDE3D888281281BBD122D6D9E7B49F626E69340CA
{
public:

public:
};


// UnityEngine.Subsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533  : public Subsystem_t17E4AEB5537DC8AECC37EC3F6FCB46CC7D2C73F6
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.NotTrackingReason
struct  NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.NotTrackingReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotTrackingReason_t3106DE243E1555A213B3953CC3D001AC72B9C096, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.TrackingState
struct  TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6 
{
public:
	// System.Int32 UnityEngine.XR.ARSubsystems.TrackingState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingState_t124D9E603E4E0453A85409CF7762EE8C946233F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor
struct  XRSessionSubsystemDescriptor_tAB6680BDBC0B281B15C5C9E6F4DA6810CFFBA079  : public SubsystemDescriptor_1_tF65741C51E4283074E65F4E8E09AC44A3BA5D783
{
public:

public:
};


// UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>
struct  XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B  : public Subsystem_1_tF93C2F649B4A90F3B2F494BD5AD569C10F87A533
{
public:
	// System.Boolean UnityEngine.XR.ARSubsystems.XRSubsystem`1::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRSessionSubsystem
struct  XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0  : public XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B
{
public:
	// UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::m_Provider
	Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * ___m_Provider_1;

public:
	inline static int32_t get_offset_of_m_Provider_1() { return static_cast<int32_t>(offsetof(XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0, ___m_Provider_1)); }
	inline Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * get_m_Provider_1() const { return ___m_Provider_1; }
	inline Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 ** get_address_of_m_Provider_1() { return &___m_Provider_1; }
	inline void set_m_Provider_1(Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * value)
	{
		___m_Provider_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Provider_1), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_1__ctor_mE06FEB5A6401B2A0AB469738A82EE613C0F6A41A_gshared (XRSubsystem_1_t80BBA8D6EDED95EEA6AB6EA5FB35DCCE2C4D6CBD * __this, const RuntimeMethod* method);

// System.Void UnityEngine.XR.ARSubsystems.XRSubsystem`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystemDescriptor>::.ctor()
inline void XRSubsystem_1__ctor_mFAE3BA272ACEDCAAACCCDE55536724AEB0EF7988 (XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B * __this, const RuntimeMethod* method)
{
	((  void (*) (XRSubsystem_1_t4F81A9C71B4D3ABB1A7FF9080551E6E0951A5F5B *, const RuntimeMethod*))XRSubsystem_1__ctor_mE06FEB5A6401B2A0AB469738A82EE613C0F6A41A_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.ARSubsystems.XRSessionSubsystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSessionSubsystem__ctor_m0E7B9E65E53B03A65C53F87CF55E76528E9AF62A (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRSessionSubsystem__ctor_m0E7B9E65E53B03A65C53F87CF55E76528E9AF62A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public XRSessionSubsystem() => m_Provider = CreateProvider();
		XRSubsystem_1__ctor_mFAE3BA272ACEDCAAACCCDE55536724AEB0EF7988(__this, /*hidden argument*/XRSubsystem_1__ctor_mFAE3BA272ACEDCAAACCCDE55536724AEB0EF7988_RuntimeMethod_var);
		// public XRSessionSubsystem() => m_Provider = CreateProvider();
		Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * L_0 = VirtFuncInvoker0< Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * >::Invoke(5 /* UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider UnityEngine.XR.ARSubsystems.XRSessionSubsystem::CreateProvider() */, __this);
		__this->set_m_Provider_1(L_0);
		return;
	}
}
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_trackingState_m6CEDC16CB9B224A0302A83BC2C22FC4C0905EB30 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// public TrackingState trackingState => m_Provider.trackingState;
		Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * L_0 = __this->get_m_Provider_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(4 /* UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_trackingState() */, L_0);
		return L_1;
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSessionSubsystem_get_notTrackingReason_m2425113BCCDD44CEF92AA9A045C002CAF981B6D7 (XRSessionSubsystem_t9B9C16B4BDB611559FB6FA728BE399001E47EFF0 * __this, const RuntimeMethod* method)
{
	{
		// public NotTrackingReason notTrackingReason => m_Provider.notTrackingReason;
		Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * L_0 = __this->get_m_Provider_1();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider::get_notTrackingReason() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::get_trackingState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_trackingState_m9E8D77D2BA6BD8F3508CFA530482C6D790DCFF35 (Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * __this, const RuntimeMethod* method)
{
	{
		// public virtual TrackingState trackingState => TrackingState.None;
		return (int32_t)(0);
	}
}
// UnityEngine.XR.ARSubsystems.NotTrackingReason UnityEngine.XR.ARSubsystems.XRSessionSubsystem_Provider::get_notTrackingReason()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Provider_get_notTrackingReason_m3EF060E8F7A23B6CD196E1B7FCF2F34457B065AA (Provider_t5EF338E7DB92D0B2D3E462849519A630DB97E980 * __this, const RuntimeMethod* method)
{
	{
		// public virtual NotTrackingReason notTrackingReason => NotTrackingReason.Unsupported;
		return (int32_t)(6);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
