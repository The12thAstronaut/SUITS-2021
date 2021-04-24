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

template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct BaseExtensionService_t3EFA78950360970291F7671351D48104904A82F1;
// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72;
// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody[]
struct JointKinematicBodyU5BU5D_t2295443C3E4FE28CC38909643CD7FAD711E714C0;
// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar
struct IMixedRealityServiceRegistrar_t7B6E2AF9599FB6847FE71FC6F5DE9AE0BC8ABB50;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService
struct IMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285;
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B;
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67;
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3;
// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

IL2CPP_EXTERN_C RuntimeClass* CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t29FAC0CE01B5923E1DF447D6EDFE652C3913EDF2____E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4C46AC61C00FC97763C0EBF4D89CD07E8DA76971;
IL2CPP_EXTERN_C String_t* _stringLiteral67EC0068EC365C2C54F23F5CDB1027FF7107B724;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDF16544C37D0D436865815F5FFCC0B456ECEB8;
IL2CPP_EXTERN_C String_t* _stringLiteral8F61C6174113A0F4643BED3A250EABA241C10AA9;
IL2CPP_EXTERN_C String_t* _stringLiteralA080F04170860EC40A00F4B963740BB33DC7BF07;
IL2CPP_EXTERN_C String_t* _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6;
IL2CPP_EXTERN_C String_t* _stringLiteralC1FF84A60F2DFFF8D274F90263DD6C6D974FF851;
IL2CPP_EXTERN_C String_t* _stringLiteralFAA03A7EA30EA3DCFF58A7CE2B0034D45BFFBE7C;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m9D85B567EE0D9C07A1CA6F9EDF5F33551A02310C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_m86EA3DAF359AB377F337D0D80ADA9867B13AF034_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0D38ECB844416FC493ED05B6E4A501B2BC2D900A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1EF7503564092E0F824E114CA0ACBC54E1D4942F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB33CA62AB2DE2AC8E0E34C58CB559187DB99D82B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisJointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_m02B641FEF653D1951B8CF3EE5B3AC91C8019C03D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4152981BAFC1A8363453488972126C94EBFE0B03_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9E5F9C030E5EC5263E2D74647436AFCA4A6BB80F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC302659FEBAF6D0EFC3802B5F563524C41345699_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7A011987D6FE11865CC808AB79653F9ABA641259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_CreateKinematicBodies_mA9FDB3E28706EB06C17F1D3AE21BE5124CD51FB6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_DestroyKinematicBodies_m8FB0D913A6CD28E416CA90848716E90E3183D942_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_Disable_mC48234E22DA53F14E4128A69F774FDA860BEF5C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_Enable_mFCDE5AD1AD435032F6F9A673155F14238DBA9373_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_TryCreateJointKinematicBody_m63415621586B2EA550F1C765AF1375D5F9AE04F0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_Update_mA0930D1B2C07AED5EA3CE21D2986DA6A051B42C4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService__cctor_m5F050C93B3DE429323C478256EC10D7C6334B7A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService__ctor_m899DCA264433492F03AE7E3A390432B92C366757_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_get_HandJointService_mB48500D51480836594C11F5315FEEDCDFB67A678_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_set_FingerTipKinematicBodyPrefab_m0013DEC8E9DEB6D5C550DE023F36BFF8B01CFFD6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HandPhysicsService_set_PalmKinematicBodyPrefab_m901B32249DAFA1F2B4BDF415260F9F01D5E0FB8F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JointKinematicBody_UpdateState_m6903A2AEEF481E312ABE47F0E464912F26BC3562_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t JointKinematicBody__cctor_m90964158282094D352379B496CFA658F6A573252_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B;
struct TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t4F220F8CCC12F996AC260C1453D0C8BC7BDA5269 
{
public:

public:
};


// System.Object


// Microsoft.MixedReality.Toolkit.BaseService
struct  BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10  : public RuntimeObject
{
public:
	// System.String Microsoft.MixedReality.Toolkit.BaseService::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.UInt32 Microsoft.MixedReality.Toolkit.BaseService::<Priority>k__BackingField
	uint32_t ___U3CPriorityU3Ek__BackingField_2;
	// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile Microsoft.MixedReality.Toolkit.BaseService::<ConfigurationProfile>k__BackingField
	BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___U3CConfigurationProfileU3Ek__BackingField_3;
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseService::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CNameU3Ek__BackingField_1() const { return ___U3CNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_1() { return &___U3CNameU3Ek__BackingField_1; }
	inline void set_U3CNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPriorityU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CPriorityU3Ek__BackingField_2)); }
	inline uint32_t get_U3CPriorityU3Ek__BackingField_2() const { return ___U3CPriorityU3Ek__BackingField_2; }
	inline uint32_t* get_address_of_U3CPriorityU3Ek__BackingField_2() { return &___U3CPriorityU3Ek__BackingField_2; }
	inline void set_U3CPriorityU3Ek__BackingField_2(uint32_t value)
	{
		___U3CPriorityU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CConfigurationProfileU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___U3CConfigurationProfileU3Ek__BackingField_3)); }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * get_U3CConfigurationProfileU3Ek__BackingField_3() const { return ___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 ** get_address_of_U3CConfigurationProfileU3Ek__BackingField_3() { return &___U3CConfigurationProfileU3Ek__BackingField_3; }
	inline void set_U3CConfigurationProfileU3Ek__BackingField_3(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * value)
	{
		___U3CConfigurationProfileU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConfigurationProfileU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct  List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JointKinematicBodyU5BU5D_t2295443C3E4FE28CC38909643CD7FAD711E714C0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F, ____items_1)); }
	inline JointKinematicBodyU5BU5D_t2295443C3E4FE28CC38909643CD7FAD711E714C0* get__items_1() const { return ____items_1; }
	inline JointKinematicBodyU5BU5D_t2295443C3E4FE28CC38909643CD7FAD711E714C0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JointKinematicBodyU5BU5D_t2295443C3E4FE28CC38909643CD7FAD711E714C0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JointKinematicBodyU5BU5D_t2295443C3E4FE28CC38909643CD7FAD711E714C0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F_StaticFields, ____emptyArray_5)); }
	inline JointKinematicBodyU5BU5D_t2295443C3E4FE28CC38909643CD7FAD711E714C0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JointKinematicBodyU5BU5D_t2295443C3E4FE28CC38909643CD7FAD711E714C0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JointKinematicBodyU5BU5D_t2295443C3E4FE28CC38909643CD7FAD711E714C0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


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

// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20
struct  __StaticArrayInitTypeSizeU3D20_tCB363A709233353B0BFDED2DBDAF8B6D3A10189E 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tCB363A709233353B0BFDED2DBDAF8B6D3A10189E__padding[20];
	};

public:
};


// Microsoft.MixedReality.Toolkit.BaseExtensionService
struct  BaseExtensionService_t3EFA78950360970291F7671351D48104904A82F1  : public BaseService_t4603D47AD64FBAEF691CE4F2F2A6AF43967F8C10
{
public:
	// Microsoft.MixedReality.Toolkit.IMixedRealityServiceRegistrar Microsoft.MixedReality.Toolkit.BaseExtensionService::<Registrar>k__BackingField
	RuntimeObject* ___U3CRegistrarU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CRegistrarU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BaseExtensionService_t3EFA78950360970291F7671351D48104904A82F1, ___U3CRegistrarU3Ek__BackingField_5)); }
	inline RuntimeObject* get_U3CRegistrarU3Ek__BackingField_5() const { return ___U3CRegistrarU3Ek__BackingField_5; }
	inline RuntimeObject** get_address_of_U3CRegistrarU3Ek__BackingField_5() { return &___U3CRegistrarU3Ek__BackingField_5; }
	inline void set_U3CRegistrarU3Ek__BackingField_5(RuntimeObject* value)
	{
		___U3CRegistrarU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRegistrarU3Ek__BackingField_5), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct  Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAED848B748A2826312A92E586CFC67D81B287353, ___list_0)); }
	inline List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * get_list_0() const { return ___list_0; }
	inline List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAED848B748A2826312A92E586CFC67D81B287353, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAED848B748A2826312A92E586CFC67D81B287353, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAED848B748A2826312A92E586CFC67D81B287353, ___current_3)); }
	inline JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * get_current_3() const { return ___current_3; }
	inline JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
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

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t29FAC0CE01B5923E1DF447D6EDFE652C3913EDF2  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t29FAC0CE01B5923E1DF447D6EDFE652C3913EDF2_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D20 <PrivateImplementationDetails>::E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE
	__StaticArrayInitTypeSizeU3D20_tCB363A709233353B0BFDED2DBDAF8B6D3A10189E  ___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0;

public:
	inline static int32_t get_offset_of_E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t29FAC0CE01B5923E1DF447D6EDFE652C3913EDF2_StaticFields, ___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0)); }
	inline __StaticArrayInitTypeSizeU3D20_tCB363A709233353B0BFDED2DBDAF8B6D3A10189E  get_E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0() const { return ___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0; }
	inline __StaticArrayInitTypeSizeU3D20_tCB363A709233353B0BFDED2DBDAF8B6D3A10189E * get_address_of_E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0() { return &___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0; }
	inline void set_E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0(__StaticArrayInitTypeSizeU3D20_tCB363A709233353B0BFDED2DBDAF8B6D3A10189E  value)
	{
		___E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct  Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint
struct  TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker
struct  ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// Unity.Profiling.ProfilerMarker_AutoScope
struct  AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F 
{
public:
	// System.IntPtr Unity.Profiling.ProfilerMarker_AutoScope::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService
struct  HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D  : public BaseExtensionService_t3EFA78950360970291F7671351D48104904A82F1
{
public:
	// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handPhysicsServiceProfile
	HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * ___handPhysicsServiceProfile_6;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsServiceRoot>k__BackingField
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___U3CHandPhysicsServiceRootU3Ek__BackingField_7;
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<HandPhysicsLayer>k__BackingField
	int32_t ___U3CHandPhysicsLayerU3Ek__BackingField_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::<UsePalmKinematicBody>k__BackingField
	bool ___U3CUsePalmKinematicBodyU3Ek__BackingField_9;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipKinematicBodyPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___fingerTipKinematicBodyPrefab_10;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::palmKinematicBodyPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___palmKinematicBodyPrefab_11;
	// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handJointService
	RuntimeObject* ___handJointService_12;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::jointKinematicBodies
	List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * ___jointKinematicBodies_15;

public:
	inline static int32_t get_offset_of_handPhysicsServiceProfile_6() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D, ___handPhysicsServiceProfile_6)); }
	inline HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * get_handPhysicsServiceProfile_6() const { return ___handPhysicsServiceProfile_6; }
	inline HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B ** get_address_of_handPhysicsServiceProfile_6() { return &___handPhysicsServiceProfile_6; }
	inline void set_handPhysicsServiceProfile_6(HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * value)
	{
		___handPhysicsServiceProfile_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handPhysicsServiceProfile_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsServiceRootU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D, ___U3CHandPhysicsServiceRootU3Ek__BackingField_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_U3CHandPhysicsServiceRootU3Ek__BackingField_7() const { return ___U3CHandPhysicsServiceRootU3Ek__BackingField_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_U3CHandPhysicsServiceRootU3Ek__BackingField_7() { return &___U3CHandPhysicsServiceRootU3Ek__BackingField_7; }
	inline void set_U3CHandPhysicsServiceRootU3Ek__BackingField_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___U3CHandPhysicsServiceRootU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CHandPhysicsServiceRootU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandPhysicsLayerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D, ___U3CHandPhysicsLayerU3Ek__BackingField_8)); }
	inline int32_t get_U3CHandPhysicsLayerU3Ek__BackingField_8() const { return ___U3CHandPhysicsLayerU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CHandPhysicsLayerU3Ek__BackingField_8() { return &___U3CHandPhysicsLayerU3Ek__BackingField_8; }
	inline void set_U3CHandPhysicsLayerU3Ek__BackingField_8(int32_t value)
	{
		___U3CHandPhysicsLayerU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CUsePalmKinematicBodyU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D, ___U3CUsePalmKinematicBodyU3Ek__BackingField_9)); }
	inline bool get_U3CUsePalmKinematicBodyU3Ek__BackingField_9() const { return ___U3CUsePalmKinematicBodyU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CUsePalmKinematicBodyU3Ek__BackingField_9() { return &___U3CUsePalmKinematicBodyU3Ek__BackingField_9; }
	inline void set_U3CUsePalmKinematicBodyU3Ek__BackingField_9(bool value)
	{
		___U3CUsePalmKinematicBodyU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_fingerTipKinematicBodyPrefab_10() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D, ___fingerTipKinematicBodyPrefab_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_fingerTipKinematicBodyPrefab_10() const { return ___fingerTipKinematicBodyPrefab_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_fingerTipKinematicBodyPrefab_10() { return &___fingerTipKinematicBodyPrefab_10; }
	inline void set_fingerTipKinematicBodyPrefab_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___fingerTipKinematicBodyPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipKinematicBodyPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_palmKinematicBodyPrefab_11() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D, ___palmKinematicBodyPrefab_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_palmKinematicBodyPrefab_11() const { return ___palmKinematicBodyPrefab_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_palmKinematicBodyPrefab_11() { return &___palmKinematicBodyPrefab_11; }
	inline void set_palmKinematicBodyPrefab_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___palmKinematicBodyPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmKinematicBodyPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_handJointService_12() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D, ___handJointService_12)); }
	inline RuntimeObject* get_handJointService_12() const { return ___handJointService_12; }
	inline RuntimeObject** get_address_of_handJointService_12() { return &___handJointService_12; }
	inline void set_handJointService_12(RuntimeObject* value)
	{
		___handJointService_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handJointService_12), (void*)value);
	}

	inline static int32_t get_offset_of_jointKinematicBodies_15() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D, ___jointKinematicBodies_15)); }
	inline List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * get_jointKinematicBodies_15() const { return ___jointKinematicBodies_15; }
	inline List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F ** get_address_of_jointKinematicBodies_15() { return &___jointKinematicBodies_15; }
	inline void set_jointKinematicBodies_15(List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * value)
	{
		___jointKinematicBodies_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jointKinematicBodies_15), (void*)value);
	}
};

struct HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::handednessTypes
	HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B* ___handednessTypes_13;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[] Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::fingerTipTypes
	TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67* ___fingerTipTypes_14;
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::UpdatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdatePerfMarker_16;

public:
	inline static int32_t get_offset_of_handednessTypes_13() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields, ___handednessTypes_13)); }
	inline HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B* get_handednessTypes_13() const { return ___handednessTypes_13; }
	inline HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B** get_address_of_handednessTypes_13() { return &___handednessTypes_13; }
	inline void set_handednessTypes_13(HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B* value)
	{
		___handednessTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handednessTypes_13), (void*)value);
	}

	inline static int32_t get_offset_of_fingerTipTypes_14() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields, ___fingerTipTypes_14)); }
	inline TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67* get_fingerTipTypes_14() const { return ___fingerTipTypes_14; }
	inline TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67** get_address_of_fingerTipTypes_14() { return &___fingerTipTypes_14; }
	inline void set_fingerTipTypes_14(TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67* value)
	{
		___fingerTipTypes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipTypes_14), (void*)value);
	}

	inline static int32_t get_offset_of_UpdatePerfMarker_16() { return static_cast<int32_t>(offsetof(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields, ___UpdatePerfMarker_16)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdatePerfMarker_16() const { return ___UpdatePerfMarker_16; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdatePerfMarker_16() { return &___UpdatePerfMarker_16; }
	inline void set_UpdatePerfMarker_16(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdatePerfMarker_16 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile
struct  BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// System.Boolean Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::isCustomProfile
	bool ___isCustomProfile_4;

public:
	inline static int32_t get_offset_of_isCustomProfile_4() { return static_cast<int32_t>(offsetof(BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8, ___isCustomProfile_4)); }
	inline bool get_isCustomProfile_4() const { return ___isCustomProfile_4; }
	inline bool* get_address_of_isCustomProfile_4() { return &___isCustomProfile_4; }
	inline void set_isCustomProfile_4(bool value)
	{
		___isCustomProfile_4 = value;
	}
};


// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>
struct  Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile
struct  HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B  : public BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::handPhysicsLayer
	int32_t ___handPhysicsLayer_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::fingerTipKinematicBodyPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___fingerTipKinematicBodyPrefab_6;
	// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::usePalmKinematicBody
	bool ___usePalmKinematicBody_7;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::palmKinematicBodyPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___palmKinematicBodyPrefab_8;

public:
	inline static int32_t get_offset_of_handPhysicsLayer_5() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B, ___handPhysicsLayer_5)); }
	inline int32_t get_handPhysicsLayer_5() const { return ___handPhysicsLayer_5; }
	inline int32_t* get_address_of_handPhysicsLayer_5() { return &___handPhysicsLayer_5; }
	inline void set_handPhysicsLayer_5(int32_t value)
	{
		___handPhysicsLayer_5 = value;
	}

	inline static int32_t get_offset_of_fingerTipKinematicBodyPrefab_6() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B, ___fingerTipKinematicBodyPrefab_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_fingerTipKinematicBodyPrefab_6() const { return ___fingerTipKinematicBodyPrefab_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_fingerTipKinematicBodyPrefab_6() { return &___fingerTipKinematicBodyPrefab_6; }
	inline void set_fingerTipKinematicBodyPrefab_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___fingerTipKinematicBodyPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fingerTipKinematicBodyPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_usePalmKinematicBody_7() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B, ___usePalmKinematicBody_7)); }
	inline bool get_usePalmKinematicBody_7() const { return ___usePalmKinematicBody_7; }
	inline bool* get_address_of_usePalmKinematicBody_7() { return &___usePalmKinematicBody_7; }
	inline void set_usePalmKinematicBody_7(bool value)
	{
		___usePalmKinematicBody_7 = value;
	}

	inline static int32_t get_offset_of_palmKinematicBodyPrefab_8() { return static_cast<int32_t>(offsetof(HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B, ___palmKinematicBodyPrefab_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_palmKinematicBodyPrefab_8() const { return ___palmKinematicBodyPrefab_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_palmKinematicBodyPrefab_8() { return &___palmKinematicBodyPrefab_8; }
	inline void set_palmKinematicBodyPrefab_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___palmKinematicBodyPrefab_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___palmKinematicBodyPrefab_8), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody
struct  JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<Joint>k__BackingField
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___U3CJointU3Ek__BackingField_4;
	// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<HandednessType>k__BackingField
	uint8_t ___U3CHandednessTypeU3Ek__BackingField_5;
	// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<JointType>k__BackingField
	int32_t ___U3CJointTypeU3Ek__BackingField_6;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnEnableAction>k__BackingField
	Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * ___U3COnEnableActionU3Ek__BackingField_7;
	// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::<OnDisableAction>k__BackingField
	Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * ___U3COnDisableActionU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CJointU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72, ___U3CJointU3Ek__BackingField_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_U3CJointU3Ek__BackingField_4() const { return ___U3CJointU3Ek__BackingField_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_U3CJointU3Ek__BackingField_4() { return &___U3CJointU3Ek__BackingField_4; }
	inline void set_U3CJointU3Ek__BackingField_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___U3CJointU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CJointU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandednessTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72, ___U3CHandednessTypeU3Ek__BackingField_5)); }
	inline uint8_t get_U3CHandednessTypeU3Ek__BackingField_5() const { return ___U3CHandednessTypeU3Ek__BackingField_5; }
	inline uint8_t* get_address_of_U3CHandednessTypeU3Ek__BackingField_5() { return &___U3CHandednessTypeU3Ek__BackingField_5; }
	inline void set_U3CHandednessTypeU3Ek__BackingField_5(uint8_t value)
	{
		___U3CHandednessTypeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CJointTypeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72, ___U3CJointTypeU3Ek__BackingField_6)); }
	inline int32_t get_U3CJointTypeU3Ek__BackingField_6() const { return ___U3CJointTypeU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CJointTypeU3Ek__BackingField_6() { return &___U3CJointTypeU3Ek__BackingField_6; }
	inline void set_U3CJointTypeU3Ek__BackingField_6(int32_t value)
	{
		___U3CJointTypeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3COnEnableActionU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72, ___U3COnEnableActionU3Ek__BackingField_7)); }
	inline Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * get_U3COnEnableActionU3Ek__BackingField_7() const { return ___U3COnEnableActionU3Ek__BackingField_7; }
	inline Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 ** get_address_of_U3COnEnableActionU3Ek__BackingField_7() { return &___U3COnEnableActionU3Ek__BackingField_7; }
	inline void set_U3COnEnableActionU3Ek__BackingField_7(Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * value)
	{
		___U3COnEnableActionU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnEnableActionU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3COnDisableActionU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72, ___U3COnDisableActionU3Ek__BackingField_8)); }
	inline Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * get_U3COnDisableActionU3Ek__BackingField_8() const { return ___U3COnDisableActionU3Ek__BackingField_8; }
	inline Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 ** get_address_of_U3COnDisableActionU3Ek__BackingField_8() { return &___U3COnDisableActionU3Ek__BackingField_8; }
	inline void set_U3COnDisableActionU3Ek__BackingField_8(Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * value)
	{
		___U3COnDisableActionU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnDisableActionU3Ek__BackingField_8), (void*)value);
	}
};

struct JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_StaticFields
{
public:
	// Unity.Profiling.ProfilerMarker Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateStatePerfMarker
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  ___UpdateStatePerfMarker_9;

public:
	inline static int32_t get_offset_of_UpdateStatePerfMarker_9() { return static_cast<int32_t>(offsetof(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_StaticFields, ___UpdateStatePerfMarker_9)); }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  get_UpdateStatePerfMarker_9() const { return ___UpdateStatePerfMarker_9; }
	inline ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * get_address_of_UpdateStatePerfMarker_9() { return &___UpdateStatePerfMarker_9; }
	inline void set_UpdateStatePerfMarker_9(ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  value)
	{
		___UpdateStatePerfMarker_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Microsoft.MixedReality.Toolkit.Utilities.Handedness[]
struct HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint[]
struct TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mE5591342ABBFD592231FAE18B785EDF71C3A557B_gshared (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::.ctor()
inline void List_1__ctor_mC302659FEBAF6D0EFC3802B5F563524C41345699 (List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Microsoft.MixedReality.Toolkit.BaseExtensionService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseExtensionService__ctor_m715F98CFFBB7FBCD67DC3CA74BB21DCF425A4A61 (BaseExtensionService_t3EFA78950360970291F7671351D48104904A82F1 * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile2, const RuntimeMethod* method);
// !!0 Microsoft.MixedReality.Toolkit.CoreServices::GetInputSystemDataProvider<Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService>()
inline RuntimeObject* CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_m86EA3DAF359AB377F337D0D80ADA9867B13AF034 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))CoreServices_GetInputSystemDataProvider_TisRuntimeObject_mE5591342ABBFD592231FAE18B785EDF71C3A557B_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_mA9FDB3E28706EB06C17F1D3AE21BE5124CD51FB6 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_m8FB0D913A6CD28E416CA90848716E90E3183D942 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_mCA383B6BE3BDE401113118E90734348B1A674257_inline (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_mF454706FD61D35F7A1F990795DD910A197A6E4C8_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_m89213911CA89937131CFC67549A74E1485DA3788_inline (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m21B633A758DBEF8A42A6A9AE245882378C64142A_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m83A804DD95403BF90E78D5DD932EB4355ED34D62_inline (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m0013DEC8E9DEB6D5C550DE023F36BFF8B01CFFD6 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mF4674F5BDA24C5F80E8682F820761ABB292F79EB_inline (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_m901B32249DAFA1F2B4BDF415260F9F01D5E0FB8F (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m77A44DCC354D399777A1D6A97CA01A85822E601B_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsService_get_HandPhysicsServiceRoot_mFFF8D00F9DBAA0CE8BAD8DE05C0A4A2DD259C764_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// Unity.Profiling.ProfilerMarker/AutoScope Unity.Profiling.ProfilerMarker::Auto()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::GetEnumerator()
inline Enumerator_tAED848B748A2826312A92E586CFC67D81B287353  List_1_GetEnumerator_m9E5F9C030E5EC5263E2D74647436AFCA4A6BB80F (List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAED848B748A2826312A92E586CFC67D81B287353  (*) (List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Current()
inline JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * Enumerator_get_Current_mB33CA62AB2DE2AC8E0E34C58CB559187DB99D82B_inline (Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 * __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * (*) (Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_mB48500D51480836594C11F5315FEEDCDFB67A678 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m41533D34174FD51791767C91D9FA7066A4512D51_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method);
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * JointKinematicBody_get_Joint_m1EC1B0592C9013C51E688F17ED2D13B3FF0527D4_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m7876BCDFC6DFD2075E99EC497E1DD037BABFFCED_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_mB822C4C1EBD5EAF59F263E227AB3D20508BED3B1_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m6903A2AEEF481E312ABE47F0E464912F26BC3562 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, bool ___active0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::MoveNext()
inline bool Enumerator_MoveNext_m1EF7503564092E0F824E114CA0ACBC54E1D4942F (Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Dispose()
inline void Enumerator_Dispose_m0D38ECB844416FC493ED05B6E4A501B2BC2D900A (Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::Dispose()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m38EB0AAC6BC6736FE775F76F2147B4E5691BACBE_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method);
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_m036EDB61028FC746D28FB480060FC70AAC84B0CE_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m63415621586B2EA550F1C765AF1375D5F9AE04F0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent4, JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 ** ___jointKinematicBody5, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Add(!0)
inline void List_1_Add_m4152981BAFC1A8363453488972126C94EBFE0B03 (List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * __this, JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F *, JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m41128B45F6D46EB99E81E828D7103511BDE9D17E_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsService_get_PalmKinematicBodyPrefab_m061A78E5CF99B2879446C10819E9C710F1FF0473_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::get_Count()
inline int32_t List_1_get_Count_m7A011987D6FE11865CC808AB79653F9ABA641259_inline (List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>()
inline JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * GameObject_GetComponent_TisJointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_m02B641FEF653D1951B8CF3EE5B3AC91C8019C03D (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m89962677F86B1DB26E74CA93B087943E9D6CB275_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m747144CC221E670E2F2C6B05C51FBAD9809F8773_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Collider>()
inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m13AAF8179B2C23E6E36A90999C07B6E2520593DE_gshared)(__this, method);
}
// System.Boolean UnityEngine.Rigidbody::get_isKinematic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_isKinematic_mCF624F7C1C78267224EFBEAF9B4FD72CDE56CEB2 (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m856AB59E5A6207892C439AFC8DDF5620B941E71B (Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMixedRealityProfile__ctor_mC73E9360DB114F72FBC08703A0A9ABA78168B78A (BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * JointKinematicBody_get_OnEnableAction_m46055D60EB3A291E17FDC9F3F6EDC0EB902A792B_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>::Invoke(!0)
inline void Action_1_Invoke_m9D85B567EE0D9C07A1CA6F9EDF5F33551A02310C (Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * __this, JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 *, JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 *, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * JointKinematicBody_get_OnDisableAction_m8E0770D06194ED54115E961E6E295892247F2FE8_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker/AutoScope::.ctor(System.IntPtr)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_End(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A (intptr_t ___markerPtr0, const RuntimeMethod* method);
// System.IntPtr Unity.Profiling.ProfilerMarker::Internal_Create(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370 (String_t* ___name0, uint16_t ___flags1, const RuntimeMethod* method);
// System.Void Unity.Profiling.ProfilerMarker::Internal_Begin(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5 (intptr_t ___markerPtr0, const RuntimeMethod* method);
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
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.ctor(System.String,System.UInt32,Microsoft.MixedReality.Toolkit.BaseMixedRealityProfile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__ctor_m899DCA264433492F03AE7E3A390432B92C366757 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, String_t* ___name0, uint32_t ___priority1, BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * ___profile2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService__ctor_m899DCA264433492F03AE7E3A390432B92C366757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<JointKinematicBody> jointKinematicBodies = new List<JointKinematicBody>();
		List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * L_0 = (List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F *)il2cpp_codegen_object_new(List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F_il2cpp_TypeInfo_var);
		List_1__ctor_mC302659FEBAF6D0EFC3802B5F563524C41345699(L_0, /*hidden argument*/List_1__ctor_mC302659FEBAF6D0EFC3802B5F563524C41345699_RuntimeMethod_var);
		__this->set_jointKinematicBodies_15(L_0);
		// public HandPhysicsService(string name, uint priority, BaseMixedRealityProfile profile) : base(name, priority, profile)
		String_t* L_1 = ___name0;
		uint32_t L_2 = ___priority1;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_3 = ___profile2;
		BaseExtensionService__ctor_m715F98CFFBB7FBCD67DC3CA74BB21DCF425A4A61(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		// handPhysicsServiceProfile = (HandPhysicsServiceProfile)profile;
		BaseMixedRealityProfile_tB4DC16619B37D298D22571CE017070A78EF826E8 * L_4 = ___profile2;
		__this->set_handPhysicsServiceProfile_6(((HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B *)CastclassClass((RuntimeObject*)L_4, HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandJointService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HandPhysicsService_get_HandJointService_mB48500D51480836594C11F5315FEEDCDFB67A678 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_get_HandJointService_mB48500D51480836594C11F5315FEEDCDFB67A678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// => handJointService ?? CoreServices.GetInputSystemDataProvider<IMixedRealityHandJointService>();
		RuntimeObject* L_0 = __this->get_handJointService_12();
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t3A685C81FB6AC96F74F9279B54CD03754F1FF544_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_m86EA3DAF359AB377F337D0D80ADA9867B13AF034(/*hidden argument*/CoreServices_GetInputSystemDataProvider_TisIMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_m86EA3DAF359AB377F337D0D80ADA9867B13AF034_RuntimeMethod_var);
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsServiceRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsService_get_HandPhysicsServiceRoot_mFFF8D00F9DBAA0CE8BAD8DE05C0A4A2DD259C764 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CHandPhysicsServiceRootU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsServiceRoot(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m77A44DCC354D399777A1D6A97CA01A85822E601B (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_U3CHandPhysicsServiceRootU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_m036EDB61028FC746D28FB480060FC70AAC84B0CE (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->get_U3CHandPhysicsLayerU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_HandPhysicsLayer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_mF454706FD61D35F7A1F990795DD910A197A6E4C8 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHandPhysicsLayerU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m41128B45F6D46EB99E81E828D7103511BDE9D17E (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->get_U3CUsePalmKinematicBodyU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_UsePalmKinematicBody(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m21B633A758DBEF8A42A6A9AE245882378C64142A (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePalmKinematicBodyU3Ek__BackingField_9(L_0);
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m38EB0AAC6BC6736FE775F76F2147B4E5691BACBE (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_fingerTipKinematicBodyPrefab_10();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_FingerTipKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_FingerTipKinematicBodyPrefab_m0013DEC8E9DEB6D5C550DE023F36BFF8B01CFFD6 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_set_FingerTipKinematicBodyPrefab_m0013DEC8E9DEB6D5C550DE023F36BFF8B01CFFD6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fingerTipKinematicBodyPrefab = value;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_fingerTipKinematicBodyPrefab_10(L_0);
		// if (fingerTipKinematicBodyPrefab != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_fingerTipKinematicBodyPrefab_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_mA9FDB3E28706EB06C17F1D3AE21BE5124CD51FB6(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m8FB0D913A6CD28E416CA90848716E90E3183D942(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsService_get_PalmKinematicBodyPrefab_m061A78E5CF99B2879446C10819E9C710F1FF0473 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_palmKinematicBodyPrefab_11();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::set_PalmKinematicBodyPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_set_PalmKinematicBodyPrefab_m901B32249DAFA1F2B4BDF415260F9F01D5E0FB8F (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_set_PalmKinematicBodyPrefab_m901B32249DAFA1F2B4BDF415260F9F01D5E0FB8F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// palmKinematicBodyPrefab = value;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_palmKinematicBodyPrefab_11(L_0);
		// if (palmKinematicBodyPrefab != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_palmKinematicBodyPrefab_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_mA9FDB3E28706EB06C17F1D3AE21BE5124CD51FB6(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001c:
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m8FB0D913A6CD28E416CA90848716E90E3183D942(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Initialize_mB45A0DBED38907CE7E92A7A9F80F8405F01E8C60 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// HandPhysicsLayer = handPhysicsServiceProfile.HandPhysicsLayer;
		HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * L_0 = __this->get_handPhysicsServiceProfile_6();
		NullCheck(L_0);
		int32_t L_1 = HandPhysicsServiceProfile_get_HandPhysicsLayer_mCA383B6BE3BDE401113118E90734348B1A674257_inline(L_0, /*hidden argument*/NULL);
		HandPhysicsService_set_HandPhysicsLayer_mF454706FD61D35F7A1F990795DD910A197A6E4C8_inline(__this, L_1, /*hidden argument*/NULL);
		// UsePalmKinematicBody = handPhysicsServiceProfile.UsePalmKinematicBody;
		HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * L_2 = __this->get_handPhysicsServiceProfile_6();
		NullCheck(L_2);
		bool L_3 = HandPhysicsServiceProfile_get_UsePalmKinematicBody_m89213911CA89937131CFC67549A74E1485DA3788_inline(L_2, /*hidden argument*/NULL);
		HandPhysicsService_set_UsePalmKinematicBody_m21B633A758DBEF8A42A6A9AE245882378C64142A_inline(__this, L_3, /*hidden argument*/NULL);
		// FingerTipKinematicBodyPrefab = handPhysicsServiceProfile.FingerTipKinematicBodyPrefab;
		HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * L_4 = __this->get_handPhysicsServiceProfile_6();
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m83A804DD95403BF90E78D5DD932EB4355ED34D62_inline(L_4, /*hidden argument*/NULL);
		HandPhysicsService_set_FingerTipKinematicBodyPrefab_m0013DEC8E9DEB6D5C550DE023F36BFF8B01CFFD6(__this, L_5, /*hidden argument*/NULL);
		// PalmKinematicBodyPrefab = handPhysicsServiceProfile.PalmKinematicBodyPrefab;
		HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * L_6 = __this->get_handPhysicsServiceProfile_6();
		NullCheck(L_6);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mF4674F5BDA24C5F80E8682F820761ABB292F79EB_inline(L_6, /*hidden argument*/NULL);
		HandPhysicsService_set_PalmKinematicBodyPrefab_m901B32249DAFA1F2B4BDF415260F9F01D5E0FB8F(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Enable_mFCDE5AD1AD435032F6F9A673155F14238DBA9373 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_Enable_mFCDE5AD1AD435032F6F9A673155F14238DBA9373_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HandPhysicsServiceRoot = new GameObject("Hand Physics Service");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)il2cpp_codegen_object_new(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_il2cpp_TypeInfo_var);
		GameObject__ctor_mBB454E679AD9CF0B84D3609A01E6A9753ACF4686(L_0, _stringLiteral8F61C6174113A0F4643BED3A250EABA241C10AA9, /*hidden argument*/NULL);
		HandPhysicsService_set_HandPhysicsServiceRoot_m77A44DCC354D399777A1D6A97CA01A85822E601B_inline(__this, L_0, /*hidden argument*/NULL);
		// CreateKinematicBodies();
		HandPhysicsService_CreateKinematicBodies_mA9FDB3E28706EB06C17F1D3AE21BE5124CD51FB6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Disable_mC48234E22DA53F14E4128A69F774FDA860BEF5C7 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_Disable_mC48234E22DA53F14E4128A69F774FDA860BEF5C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (HandPhysicsServiceRoot != null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = HandPhysicsService_get_HandPhysicsServiceRoot_mFFF8D00F9DBAA0CE8BAD8DE05C0A4A2DD259C764_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// UnityEngine.Object.Destroy(HandPhysicsServiceRoot);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = HandPhysicsService_get_HandPhysicsServiceRoot_mFFF8D00F9DBAA0CE8BAD8DE05C0A4A2DD259C764_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_2, /*hidden argument*/NULL);
		// HandPhysicsServiceRoot = null;
		HandPhysicsService_set_HandPhysicsServiceRoot_m77A44DCC354D399777A1D6A97CA01A85822E601B_inline(__this, (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL, /*hidden argument*/NULL);
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_Update_mA0930D1B2C07AED5EA3CE21D2986DA6A051B42C4 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_Update_mA0930D1B2C07AED5EA3CE21D2986DA6A051B42C4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_tAED848B748A2826312A92E586CFC67D81B287353  V_2;
	memset((&V_2), 0, sizeof(V_2));
	JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * G_B6_0 = NULL;
	JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * G_B5_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B7_0 = NULL;
	JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * G_B7_1 = NULL;
	{
		// using (UpdatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var))->get_UpdatePerfMarker_16();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * L_2 = __this->get_jointKinematicBodies_15();
			NullCheck(L_2);
			Enumerator_tAED848B748A2826312A92E586CFC67D81B287353  L_3 = List_1_GetEnumerator_m9E5F9C030E5EC5263E2D74647436AFCA4A6BB80F(L_2, /*hidden argument*/List_1_GetEnumerator_m9E5F9C030E5EC5263E2D74647436AFCA4A6BB80F_RuntimeMethod_var);
			V_2 = L_3;
		}

IL_001a:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0085;
			}

IL_001c:
			{
				// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_4 = Enumerator_get_Current_mB33CA62AB2DE2AC8E0E34C58CB559187DB99D82B_inline((Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mB33CA62AB2DE2AC8E0E34C58CB559187DB99D82B_RuntimeMethod_var);
				V_3 = L_4;
				// if (HandJointService.IsHandTracked(jointKinematicBody.HandednessType))
				RuntimeObject* L_5 = HandPhysicsService_get_HandJointService_mB48500D51480836594C11F5315FEEDCDFB67A678(__this, /*hidden argument*/NULL);
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_6 = V_3;
				NullCheck(L_6);
				uint8_t L_7 = JointKinematicBody_get_HandednessType_m41533D34174FD51791767C91D9FA7066A4512D51_inline(L_6, /*hidden argument*/NULL);
				NullCheck(L_5);
				bool L_8 = InterfaceFuncInvoker1< bool, uint8_t >::Invoke(1 /* System.Boolean Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::IsHandTracked(Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_il2cpp_TypeInfo_var, L_5, L_7);
				if (!L_8)
				{
					goto IL_007e;
				}
			}

IL_0037:
			{
				// jointKinematicBody.Joint = jointKinematicBody.Joint != null ? jointKinematicBody.Joint : HandJointService.RequestJointTransform(jointKinematicBody.JointType, jointKinematicBody.HandednessType);
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_9 = V_3;
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_10 = V_3;
				NullCheck(L_10);
				Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = JointKinematicBody_get_Joint_m1EC1B0592C9013C51E688F17ED2D13B3FF0527D4_inline(L_10, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
				bool L_12 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
				G_B5_0 = L_9;
				if (L_12)
				{
					G_B6_0 = L_9;
					goto IL_005f;
				}
			}

IL_0046:
			{
				RuntimeObject* L_13 = HandPhysicsService_get_HandJointService_mB48500D51480836594C11F5315FEEDCDFB67A678(__this, /*hidden argument*/NULL);
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_14 = V_3;
				NullCheck(L_14);
				int32_t L_15 = JointKinematicBody_get_JointType_m7876BCDFC6DFD2075E99EC497E1DD037BABFFCED_inline(L_14, /*hidden argument*/NULL);
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_16 = V_3;
				NullCheck(L_16);
				uint8_t L_17 = JointKinematicBody_get_HandednessType_m41533D34174FD51791767C91D9FA7066A4512D51_inline(L_16, /*hidden argument*/NULL);
				NullCheck(L_13);
				Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = InterfaceFuncInvoker2< Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, int32_t, uint8_t >::Invoke(0 /* UnityEngine.Transform Microsoft.MixedReality.Toolkit.Input.IMixedRealityHandJointService::RequestJointTransform(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,Microsoft.MixedReality.Toolkit.Utilities.Handedness) */, IMixedRealityHandJointService_tB9FB80F7FDC77D16300E54C1ABE6C7B9E9153285_il2cpp_TypeInfo_var, L_13, L_15, L_17);
				G_B7_0 = L_18;
				G_B7_1 = G_B5_0;
				goto IL_0065;
			}

IL_005f:
			{
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_19 = V_3;
				NullCheck(L_19);
				Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = JointKinematicBody_get_Joint_m1EC1B0592C9013C51E688F17ED2D13B3FF0527D4_inline(L_19, /*hidden argument*/NULL);
				G_B7_0 = L_20;
				G_B7_1 = G_B6_0;
			}

IL_0065:
			{
				NullCheck(G_B7_1);
				JointKinematicBody_set_Joint_mB822C4C1EBD5EAF59F263E227AB3D20508BED3B1_inline(G_B7_1, G_B7_0, /*hidden argument*/NULL);
				// jointKinematicBody.UpdateState(jointKinematicBody.Joint != null);
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_21 = V_3;
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_22 = V_3;
				NullCheck(L_22);
				Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = JointKinematicBody_get_Joint_m1EC1B0592C9013C51E688F17ED2D13B3FF0527D4_inline(L_22, /*hidden argument*/NULL);
				IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
				bool L_24 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_23, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
				NullCheck(L_21);
				JointKinematicBody_UpdateState_m6903A2AEEF481E312ABE47F0E464912F26BC3562(L_21, L_24, /*hidden argument*/NULL);
				// }
				goto IL_0085;
			}

IL_007e:
			{
				// jointKinematicBody.UpdateState(false);
				JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_25 = V_3;
				NullCheck(L_25);
				JointKinematicBody_UpdateState_m6903A2AEEF481E312ABE47F0E464912F26BC3562(L_25, (bool)0, /*hidden argument*/NULL);
			}

IL_0085:
			{
				// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
				bool L_26 = Enumerator_MoveNext_m1EF7503564092E0F824E114CA0ACBC54E1D4942F((Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m1EF7503564092E0F824E114CA0ACBC54E1D4942F_RuntimeMethod_var);
				if (L_26)
				{
					goto IL_001c;
				}
			}

IL_008e:
			{
				IL2CPP_LEAVE(0xAC, FINALLY_0090);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0090;
		}

FINALLY_0090:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m0D38ECB844416FC493ED05B6E4A501B2BC2D900A((Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m0D38ECB844416FC493ED05B6E4A501B2BC2D900A_RuntimeMethod_var);
			IL2CPP_END_FINALLY(144)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(144)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0xAC, FINALLY_009e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009e;
	}

FINALLY_009e:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(158)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(158)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::CreateKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_CreateKinematicBodies_mA9FDB3E28706EB06C17F1D3AE21BE5124CD51FB6 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_CreateKinematicBodies_mA9FDB3E28706EB06C17F1D3AE21BE5124CD51FB6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * V_2 = NULL;
	JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * V_3 = NULL;
	{
		// DestroyKinematicBodies();
		HandPhysicsService_DestroyKinematicBodies_m8FB0D913A6CD28E416CA90848716E90E3183D942(__this, /*hidden argument*/NULL);
		// if (HandPhysicsServiceRoot == null) { return; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = HandPhysicsService_get_HandPhysicsServiceRoot_mFFF8D00F9DBAA0CE8BAD8DE05C0A4A2DD259C764_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (HandPhysicsServiceRoot == null) { return; }
		return;
	}

IL_0015:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		V_0 = 0;
		goto IL_00c4;
	}

IL_001c:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		V_1 = 0;
		goto IL_006c;
	}

IL_0020:
	{
		// if (FingerTipKinematicBodyPrefab == null) { continue; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_m38EB0AAC6BC6736FE775F76F2147B4E5691BACBE_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0068;
		}
	}
	{
		// if (TryCreateJointKinematicBody(FingerTipKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], fingerTipTypes[j], HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = HandPhysicsService_get_FingerTipKinematicBodyPrefab_m38EB0AAC6BC6736FE775F76F2147B4E5691BACBE_inline(__this, /*hidden argument*/NULL);
		int32_t L_5 = HandPhysicsService_get_HandPhysicsLayer_m036EDB61028FC746D28FB480060FC70AAC84B0CE_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var);
		HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B* L_6 = ((HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var))->get_handednessTypes_13();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint8_t L_9 = (uint8_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67* L_10 = ((HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var))->get_fingerTipTypes_14();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int32_t L_13 = (int32_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = HandPhysicsService_get_HandPhysicsServiceRoot_mFFF8D00F9DBAA0CE8BAD8DE05C0A4A2DD259C764_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		bool L_16 = HandPhysicsService_TryCreateJointKinematicBody_m63415621586B2EA550F1C765AF1375D5F9AE04F0(L_4, L_5, L_9, L_13, L_15, (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 **)(&V_2), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0068;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * L_17 = __this->get_jointKinematicBodies_15();
		JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_18 = V_2;
		NullCheck(L_17);
		List_1_Add_m4152981BAFC1A8363453488972126C94EBFE0B03(L_17, L_18, /*hidden argument*/List_1_Add_m4152981BAFC1A8363453488972126C94EBFE0B03_RuntimeMethod_var);
	}

IL_0068:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006c:
	{
		// for (int j = 0; j < fingerTipTypes.Length; ++j)
		int32_t L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var);
		TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67* L_21 = ((HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var))->get_fingerTipTypes_14();
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))))
		{
			goto IL_0020;
		}
	}
	{
		// if (UsePalmKinematicBody)
		bool L_22 = HandPhysicsService_get_UsePalmKinematicBody_m41128B45F6D46EB99E81E828D7103511BDE9D17E_inline(__this, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00c0;
		}
	}
	{
		// if (PalmKinematicBodyPrefab == null) { continue; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = HandPhysicsService_get_PalmKinematicBodyPrefab_m061A78E5CF99B2879446C10819E9C710F1FF0473_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_23, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00c0;
		}
	}
	{
		// if (TryCreateJointKinematicBody(PalmKinematicBodyPrefab, HandPhysicsLayer, handednessTypes[i], TrackedHandJoint.Palm, HandPhysicsServiceRoot.transform, out JointKinematicBody jointKinematicBody))
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = HandPhysicsService_get_PalmKinematicBodyPrefab_m061A78E5CF99B2879446C10819E9C710F1FF0473_inline(__this, /*hidden argument*/NULL);
		int32_t L_26 = HandPhysicsService_get_HandPhysicsLayer_m036EDB61028FC746D28FB480060FC70AAC84B0CE_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var);
		HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B* L_27 = ((HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var))->get_handednessTypes_13();
		int32_t L_28 = V_0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		uint8_t L_30 = (uint8_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = HandPhysicsService_get_HandPhysicsServiceRoot_mFFF8D00F9DBAA0CE8BAD8DE05C0A4A2DD259C764_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_31, /*hidden argument*/NULL);
		bool L_33 = HandPhysicsService_TryCreateJointKinematicBody_m63415621586B2EA550F1C765AF1375D5F9AE04F0(L_25, L_26, L_30, 2, L_32, (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 **)(&V_3), /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_00c0;
		}
	}
	{
		// jointKinematicBodies.Add(jointKinematicBody);
		List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * L_34 = __this->get_jointKinematicBodies_15();
		JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_35 = V_3;
		NullCheck(L_34);
		List_1_Add_m4152981BAFC1A8363453488972126C94EBFE0B03(L_34, L_35, /*hidden argument*/List_1_Add_m4152981BAFC1A8363453488972126C94EBFE0B03_RuntimeMethod_var);
	}

IL_00c0:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_00c4:
	{
		// for (int i = 0; i < handednessTypes.Length; ++i)
		int32_t L_37 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var);
		HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B* L_38 = ((HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var))->get_handednessTypes_13();
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::DestroyKinematicBodies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService_DestroyKinematicBodies_m8FB0D913A6CD28E416CA90848716E90E3183D942 (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_DestroyKinematicBodies_m8FB0D913A6CD28E416CA90848716E90E3183D942_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tAED848B748A2826312A92E586CFC67D81B287353  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (jointKinematicBodies.Count > 0)
		List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * L_0 = __this->get_jointKinematicBodies_15();
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m7A011987D6FE11865CC808AB79653F9ABA641259_inline(L_0, /*hidden argument*/List_1_get_Count_m7A011987D6FE11865CC808AB79653F9ABA641259_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
		List_1_t664A915250F184818B8A98A9F22ECCEFA6609A2F * L_2 = __this->get_jointKinematicBodies_15();
		NullCheck(L_2);
		Enumerator_tAED848B748A2826312A92E586CFC67D81B287353  L_3 = List_1_GetEnumerator_m9E5F9C030E5EC5263E2D74647436AFCA4A6BB80F(L_2, /*hidden argument*/List_1_GetEnumerator_m9E5F9C030E5EC5263E2D74647436AFCA4A6BB80F_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_001c:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_4 = Enumerator_get_Current_mB33CA62AB2DE2AC8E0E34C58CB559187DB99D82B_inline((Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB33CA62AB2DE2AC8E0E34C58CB559187DB99D82B_RuntimeMethod_var);
			// UnityEngine.Object.Destroy(jointKinematicBody.gameObject);
			NullCheck(L_4);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_4, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
			Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_5, /*hidden argument*/NULL);
		}

IL_002d:
		{
			// foreach (JointKinematicBody jointKinematicBody in jointKinematicBodies)
			bool L_6 = Enumerator_MoveNext_m1EF7503564092E0F824E114CA0ACBC54E1D4942F((Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m1EF7503564092E0F824E114CA0ACBC54E1D4942F_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_001c;
			}
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x46, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0D38ECB844416FC493ED05B6E4A501B2BC2D900A((Enumerator_tAED848B748A2826312A92E586CFC67D81B287353 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0D38ECB844416FC493ED05B6E4A501B2BC2D900A_RuntimeMethod_var);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::TryCreateJointKinematicBody(UnityEngine.GameObject,System.Int32,Microsoft.MixedReality.Toolkit.Utilities.Handedness,Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint,UnityEngine.Transform,Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsService_TryCreateJointKinematicBody_m63415621586B2EA550F1C765AF1375D5F9AE04F0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___rigidBodyPrefab0, int32_t ___layer1, uint8_t ___handednessType2, int32_t ___jointType3, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent4, JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 ** ___jointKinematicBody5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService_TryCreateJointKinematicBody_m63415621586B2EA550F1C765AF1375D5F9AE04F0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * V_1 = NULL;
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * V_2 = NULL;
	{
		// jointKinematicBody = null;
		JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 ** L_0 = ___jointKinematicBody5;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// GameObject currentGameObject = GameObject.Instantiate(rigidBodyPrefab, parent);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___rigidBodyPrefab0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = ___parent4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		V_0 = L_3;
		// currentGameObject.layer = layer;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = V_0;
		int32_t L_5 = ___layer1;
		NullCheck(L_4);
		GameObject_set_layer_mDAC8037FCFD0CE62DB66004C4342EA20CF604907(L_4, L_5, /*hidden argument*/NULL);
		// JointKinematicBody currentJoint = currentGameObject.GetComponent<JointKinematicBody>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_0;
		NullCheck(L_6);
		JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_7 = GameObject_GetComponent_TisJointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_m02B641FEF653D1951B8CF3EE5B3AC91C8019C03D(L_6, /*hidden argument*/GameObject_GetComponent_TisJointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_m02B641FEF653D1951B8CF3EE5B3AC91C8019C03D_RuntimeMethod_var);
		V_1 = L_7;
		// if (currentJoint == null)
		JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_8 = V_1;
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0036;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a JointKinematicBody component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral4C46AC61C00FC97763C0EBF4D89CD07E8DA76971, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_10, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0036:
	{
		// currentJoint.JointType = jointType;
		JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_11 = V_1;
		int32_t L_12 = ___jointType3;
		NullCheck(L_11);
		JointKinematicBody_set_JointType_m89962677F86B1DB26E74CA93B087943E9D6CB275_inline(L_11, L_12, /*hidden argument*/NULL);
		// currentJoint.HandednessType = handednessType;
		JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_13 = V_1;
		uint8_t L_14 = ___handednessType2;
		NullCheck(L_13);
		JointKinematicBody_set_HandednessType_m747144CC221E670E2F2C6B05C51FBAD9809F8773_inline(L_13, L_14, /*hidden argument*/NULL);
		// currentGameObject.name = handednessType + " " + jointType;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = V_0;
		uint8_t L_16 = ___handednessType2;
		uint8_t L_17 = L_16;
		RuntimeObject * L_18 = Box(Handedness_tA51C49CA286A1BC201E1680F521639E9AC1165AB_il2cpp_TypeInfo_var, &L_17);
		int32_t L_19 = ___jointType3;
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(TrackedHandJoint_tDE2FD40782A5B0C1D39386D6BF70D8A1CCF94E22_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(L_18, _stringLiteralB858CB282617FB0956D960215C8E84D1CCF909C6, L_21, /*hidden argument*/NULL);
		NullCheck(L_15);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_15, L_22, /*hidden argument*/NULL);
		// if (currentGameObject.GetComponent<Collider>() == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_23 = V_0;
		NullCheck(L_23);
		Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * L_24 = GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300(L_23, /*hidden argument*/GameObject_GetComponent_TisCollider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF_m9F1BD85BCDF667B62AECFA7062C1379A31478300_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_24, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_0080;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Collider component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralC1FF84A60F2DFFF8D274F90263DD6C6D974FF851, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_26, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_0080:
	{
		// Rigidbody rigidbody = currentGameObject.GetComponent<Rigidbody>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = V_0;
		NullCheck(L_27);
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_28 = GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903(L_27, /*hidden argument*/GameObject_GetComponent_TisRigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5_m31F97A6E057858450728C32EE09647374FA10903_RuntimeMethod_var);
		V_2 = L_28;
		// if (rigidbody == null)
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_30 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_29, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00a2;
		}
	}
	{
		// Debug.LogError("The HandPhysicsService assumes the FingerTipKinematicBodyPrefab has a Rigidbody component.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral6EDF16544C37D0D436865815F5FFCC0B456ECEB8, /*hidden argument*/NULL);
		// UnityEngine.Object.Destroy(currentGameObject);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_31, /*hidden argument*/NULL);
		// return false;
		return (bool)0;
	}

IL_00a2:
	{
		// if (!rigidbody.isKinematic)
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_32 = V_2;
		NullCheck(L_32);
		bool L_33 = Rigidbody_get_isKinematic_mCF624F7C1C78267224EFBEAF9B4FD72CDE56CEB2(L_32, /*hidden argument*/NULL);
		if (L_33)
		{
			goto IL_00bb;
		}
	}
	{
		// Debug.LogWarning("The HandPhysicsService FingerTipKinematicBodyPrefab rigidbody should be marked as kinematic, making kinematic.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(_stringLiteral67EC0068EC365C2C54F23F5CDB1027FF7107B724, /*hidden argument*/NULL);
		// rigidbody.isKinematic = true;
		Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * L_34 = V_2;
		NullCheck(L_34);
		Rigidbody_set_isKinematic_m856AB59E5A6207892C439AFC8DDF5620B941E71B(L_34, (bool)1, /*hidden argument*/NULL);
	}

IL_00bb:
	{
		// jointKinematicBody = currentJoint;
		JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 ** L_35 = ___jointKinematicBody5;
		JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * L_36 = V_1;
		*((RuntimeObject **)L_35) = (RuntimeObject *)L_36;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_35, (void*)(RuntimeObject *)L_36);
		// return true;
		return (bool)1;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsService__cctor_m5F050C93B3DE429323C478256EC10D7C6334B7A4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HandPhysicsService__cctor_m5F050C93B3DE429323C478256EC10D7C6334B7A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Handedness[] handednessTypes = new Handedness[]
		// {
		//     Handedness.Left,
		//     Handedness.Right
		// };
		HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B* L_0 = (HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B*)(HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B*)SZArrayNew(HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B_il2cpp_TypeInfo_var, (uint32_t)2);
		HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (uint8_t)1);
		HandednessU5BU5D_tDC6CE4C09D492E2F7F69670E0C52BE239B1F323B* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (uint8_t)2);
		((HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var))->set_handednessTypes_13(L_2);
		// private static readonly TrackedHandJoint[] fingerTipTypes = new TrackedHandJoint[]
		// {
		//     TrackedHandJoint.ThumbTip,
		//     TrackedHandJoint.IndexTip,
		//     TrackedHandJoint.MiddleTip,
		//     TrackedHandJoint.RingTip,
		//     TrackedHandJoint.PinkyTip
		// };
		TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67* L_3 = (TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67*)(TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67*)SZArrayNew(TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67_il2cpp_TypeInfo_var, (uint32_t)5);
		TrackedHandJointU5BU5D_t73F89CDA2E3DB99038427148F5D09567B51E2A67* L_4 = L_3;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t29FAC0CE01B5923E1DF447D6EDFE652C3913EDF2____E38A34258C42BD75BCA0E2465D0A82E4DDB75DEE_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_4, L_5, /*hidden argument*/NULL);
		((HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var))->set_fingerTipTypes_14(L_4);
		// private static readonly ProfilerMarker UpdatePerfMarker = new ProfilerMarker("[MRTK] HandPhysicsService.Update");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_6;
		memset((&L_6), 0, sizeof(L_6));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_6), _stringLiteralFAA03A7EA30EA3DCFF58A7CE2B0034D45BFFBE7C, /*hidden argument*/NULL);
		((HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_StaticFields*)il2cpp_codegen_static_fields_for(HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D_il2cpp_TypeInfo_var))->set_UpdatePerfMarker_16(L_6);
		return;
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
// System.Boolean Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_UsePalmKinematicBody()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_m89213911CA89937131CFC67549A74E1485DA3788 (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->get_usePalmKinematicBody_7();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_FingerTipKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m83A804DD95403BF90E78D5DD932EB4355ED34D62 (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_fingerTipKinematicBodyPrefab_6();
		return L_0;
	}
}
// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_PalmKinematicBodyPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mF4674F5BDA24C5F80E8682F820761ABB292F79EB (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_palmKinematicBodyPrefab_8();
		return L_0;
	}
}
// System.Int32 Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::get_HandPhysicsLayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_mCA383B6BE3BDE401113118E90734348B1A674257 (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->get_handPhysicsLayer_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.HandPhysicsServiceProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandPhysicsServiceProfile__ctor_m7DC2DC9624BE9D1974E25811E088936EDF261D0A (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method)
{
	{
		BaseMixedRealityProfile__ctor_mC73E9360DB114F72FBC08703A0A9ABA78168B78A(__this, /*hidden argument*/NULL);
		return;
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
// UnityEngine.Transform Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_Joint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * JointKinematicBody_get_Joint_m1EC1B0592C9013C51E688F17ED2D13B3FF0527D4 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CJointU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_Joint(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_mB822C4C1EBD5EAF59F263E227AB3D20508BED3B1 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CJointU3Ek__BackingField_4(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_HandednessType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m41533D34174FD51791767C91D9FA7066A4512D51 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->get_U3CHandednessTypeU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_HandednessType(Microsoft.MixedReality.Toolkit.Utilities.Handedness)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m747144CC221E670E2F2C6B05C51FBAD9809F8773 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CHandednessTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
// Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_JointType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m7876BCDFC6DFD2075E99EC497E1DD037BABFFCED (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->get_U3CJointTypeU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_JointType(Microsoft.MixedReality.Toolkit.Utilities.TrackedHandJoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m89962677F86B1DB26E74CA93B087943E9D6CB275 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CJointTypeU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnEnableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * JointKinematicBody_get_OnEnableAction_m46055D60EB3A291E17FDC9F3F6EDC0EB902A792B (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_0 = __this->get_U3COnEnableActionU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnEnableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnEnableAction_m1B271092E4FDA3EEE4DB0CE30FD61DEAC1148DB0 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_0 = ___value0;
		__this->set_U3COnEnableActionU3Ek__BackingField_7(L_0);
		return;
	}
}
// System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody> Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::get_OnDisableAction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * JointKinematicBody_get_OnDisableAction_m8E0770D06194ED54115E961E6E295892247F2FE8 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_0 = __this->get_U3COnDisableActionU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::set_OnDisableAction(System.Action`1<Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_set_OnDisableAction_m7CC9EF995A155770341A2EF38B3FC3F080BED5A4 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * ___value0, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_0 = ___value0;
		__this->set_U3COnDisableActionU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::UpdateState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody_UpdateState_m6903A2AEEF481E312ABE47F0E464912F26BC3562 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, bool ___active0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JointKinematicBody_UpdateState_m6903A2AEEF481E312ABE47F0E464912F26BC3562_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	bool G_B3_0 = false;
	bool G_B2_0 = false;
	Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * G_B7_0 = NULL;
	Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * G_B6_0 = NULL;
	Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * G_B10_0 = NULL;
	Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * G_B9_0 = NULL;
	{
		// using (UpdateStatePerfMarker.Auto())
		IL2CPP_RUNTIME_CLASS_INIT(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_il2cpp_TypeInfo_var);
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0 = ((JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_StaticFields*)il2cpp_codegen_static_fields_for(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_il2cpp_TypeInfo_var))->get_UpdateStatePerfMarker_9();
		V_1 = L_0;
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1 = ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline((ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 *)(&V_1), /*hidden argument*/NULL);
		V_0 = L_1;
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			// bool previousActiveState = gameObject.activeSelf;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
			NullCheck(L_2);
			bool L_3 = GameObject_get_activeSelf_mFE1834886CAE59884AC2BE707A3B821A1DB61F44(L_2, /*hidden argument*/NULL);
			// gameObject.SetActive(active);
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
			bool L_5 = ___active0;
			NullCheck(L_4);
			GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_4, L_5, /*hidden argument*/NULL);
			// if (active)
			bool L_6 = ___active0;
			G_B2_0 = L_3;
			if (!L_6)
			{
				G_B3_0 = L_3;
				goto IL_0054;
			}
		}

IL_0028:
		{
			// transform.position = Joint.position;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = JointKinematicBody_get_Joint_m1EC1B0592C9013C51E688F17ED2D13B3FF0527D4_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_8);
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_7, L_9, /*hidden argument*/NULL);
			// transform.rotation = Joint.rotation;
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
			Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = JointKinematicBody_get_Joint_m1EC1B0592C9013C51E688F17ED2D13B3FF0527D4_inline(__this, /*hidden argument*/NULL);
			NullCheck(L_11);
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_12 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_10, L_12, /*hidden argument*/NULL);
			G_B3_0 = G_B2_0;
		}

IL_0054:
		{
			// if (previousActiveState != active)
			bool L_13 = ___active0;
			if ((((int32_t)G_B3_0) == ((int32_t)L_13)))
			{
				goto IL_0080;
			}
		}

IL_0057:
		{
			// if (active)
			bool L_14 = ___active0;
			if (!L_14)
			{
				goto IL_006e;
			}
		}

IL_005a:
		{
			// OnEnableAction?.Invoke(this);
			Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_15 = JointKinematicBody_get_OnEnableAction_m46055D60EB3A291E17FDC9F3F6EDC0EB902A792B_inline(__this, /*hidden argument*/NULL);
			Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_16 = L_15;
			G_B6_0 = L_16;
			if (L_16)
			{
				G_B7_0 = L_16;
				goto IL_0066;
			}
		}

IL_0063:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}

IL_0066:
		{
			NullCheck(G_B7_0);
			Action_1_Invoke_m9D85B567EE0D9C07A1CA6F9EDF5F33551A02310C(G_B7_0, __this, /*hidden argument*/Action_1_Invoke_m9D85B567EE0D9C07A1CA6F9EDF5F33551A02310C_RuntimeMethod_var);
			// }
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}

IL_006e:
		{
			// OnDisableAction?.Invoke(this);
			Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_17 = JointKinematicBody_get_OnDisableAction_m8E0770D06194ED54115E961E6E295892247F2FE8_inline(__this, /*hidden argument*/NULL);
			Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_18 = L_17;
			G_B9_0 = L_18;
			if (L_18)
			{
				G_B10_0 = L_18;
				goto IL_007a;
			}
		}

IL_0077:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}

IL_007a:
		{
			NullCheck(G_B10_0);
			Action_1_Invoke_m9D85B567EE0D9C07A1CA6F9EDF5F33551A02310C(G_B10_0, __this, /*hidden argument*/Action_1_Invoke_m9D85B567EE0D9C07A1CA6F9EDF5F33551A02310C_RuntimeMethod_var);
		}

IL_0080:
		{
			// }
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline((AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x90, IL_0090)
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody__ctor_m733038909DDDF16F8714A370CA6BB421FDDE7F49 (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Extensions.HandPhysics.JointKinematicBody::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointKinematicBody__cctor_m90964158282094D352379B496CFA658F6A573252 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JointKinematicBody__cctor_m90964158282094D352379B496CFA658F6A573252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly ProfilerMarker UpdateStatePerfMarker = new ProfilerMarker("[MRTK] JointKinematicBody.UpdateState");
		ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86  L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline((&L_0), _stringLiteralA080F04170860EC40A00F4B963740BB33DC7BF07, /*hidden argument*/NULL);
		((JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_StaticFields*)il2cpp_codegen_static_fields_for(JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72_il2cpp_TypeInfo_var))->set_UpdateStatePerfMarker_9(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HandPhysicsServiceProfile_get_HandPhysicsLayer_mCA383B6BE3BDE401113118E90734348B1A674257_inline (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer => handPhysicsLayer;
		int32_t L_0 = __this->get_handPhysicsLayer_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsLayer_mF454706FD61D35F7A1F990795DD910A197A6E4C8_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CHandPhysicsLayerU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool HandPhysicsServiceProfile_get_UsePalmKinematicBody_m89213911CA89937131CFC67549A74E1485DA3788_inline (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody => usePalmKinematicBody;
		bool L_0 = __this->get_usePalmKinematicBody_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandPhysicsService_set_UsePalmKinematicBody_m21B633A758DBEF8A42A6A9AE245882378C64142A_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CUsePalmKinematicBodyU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsServiceProfile_get_FingerTipKinematicBodyPrefab_m83A804DD95403BF90E78D5DD932EB4355ED34D62_inline (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject FingerTipKinematicBodyPrefab => fingerTipKinematicBodyPrefab;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_fingerTipKinematicBodyPrefab_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsServiceProfile_get_PalmKinematicBodyPrefab_mF4674F5BDA24C5F80E8682F820761ABB292F79EB_inline (HandPhysicsServiceProfile_tAFEFED9DAB9E05019D96E88BA8365E4A6E584C1B * __this, const RuntimeMethod* method)
{
	{
		// public GameObject PalmKinematicBodyPrefab => palmKinematicBodyPrefab;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_palmKinematicBodyPrefab_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void HandPhysicsService_set_HandPhysicsServiceRoot_m77A44DCC354D399777A1D6A97CA01A85822E601B_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___value0, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___value0;
		__this->set_U3CHandPhysicsServiceRootU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsService_get_HandPhysicsServiceRoot_mFFF8D00F9DBAA0CE8BAD8DE05C0A4A2DD259C764_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// public GameObject HandPhysicsServiceRoot { get; private set; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_U3CHandPhysicsServiceRootU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  ProfilerMarker_Auto_m27C8BA4E46F26F3005760C48C4B92EBC284A5D02_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, const RuntimeMethod* method)
{
	AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_1;
		memset((&L_1), 0, sizeof(L_1));
		AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline((&L_1), (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t JointKinematicBody_get_HandednessType_m41533D34174FD51791767C91D9FA7066A4512D51_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = __this->get_U3CHandednessTypeU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * JointKinematicBody_get_Joint_m1EC1B0592C9013C51E688F17ED2D13B3FF0527D4_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_U3CJointU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t JointKinematicBody_get_JointType_m7876BCDFC6DFD2075E99EC497E1DD037BABFFCED_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = __this->get_U3CJointTypeU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JointKinematicBody_set_Joint_mB822C4C1EBD5EAF59F263E227AB3D20508BED3B1_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___value0, const RuntimeMethod* method)
{
	{
		// public Transform Joint { get; set; }
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = ___value0;
		__this->set_U3CJointU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope_Dispose_m3663B79F5E62F2FA39FAAB5956A5EA141BA98AF2_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_Ptr_0();
		ProfilerMarker_Internal_End_mE25FE55A23DF111614CE890359972D96A65B499A((intptr_t)L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsService_get_FingerTipKinematicBodyPrefab_m38EB0AAC6BC6736FE775F76F2147B4E5691BACBE_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// get { return fingerTipKinematicBodyPrefab; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_fingerTipKinematicBodyPrefab_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t HandPhysicsService_get_HandPhysicsLayer_m036EDB61028FC746D28FB480060FC70AAC84B0CE_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// public int HandPhysicsLayer { get; set; }
		int32_t L_0 = __this->get_U3CHandPhysicsLayerU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool HandPhysicsService_get_UsePalmKinematicBody_m41128B45F6D46EB99E81E828D7103511BDE9D17E_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// public bool UsePalmKinematicBody { get; set; }
		bool L_0 = __this->get_U3CUsePalmKinematicBodyU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * HandPhysicsService_get_PalmKinematicBodyPrefab_m061A78E5CF99B2879446C10819E9C710F1FF0473_inline (HandPhysicsService_tB000C8D540B94DE3309A0408B44BF100AD503A1D * __this, const RuntimeMethod* method)
{
	{
		// get { return palmKinematicBodyPrefab; }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_palmKinematicBodyPrefab_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JointKinematicBody_set_JointType_m89962677F86B1DB26E74CA93B087943E9D6CB275_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public TrackedHandJoint JointType { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CJointTypeU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void JointKinematicBody_set_HandednessType_m747144CC221E670E2F2C6B05C51FBAD9809F8773_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		// public Handedness HandednessType { get; set; }
		uint8_t L_0 = ___value0;
		__this->set_U3CHandednessTypeU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mF9F9BDCB1E4618F9533D83D47EAD7325A32FDC2A_inline (ProfilerMarker_t41096870004E8A2081E31E01BC0552F2F01F2B86 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		intptr_t L_1 = ProfilerMarker_Internal_Create_m92F2A7651D4BF3F3D0CB62078DD79B71839FA370(L_0, (uint16_t)0, /*hidden argument*/NULL);
		__this->set_m_Ptr_0((intptr_t)L_1);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * JointKinematicBody_get_OnEnableAction_m46055D60EB3A291E17FDC9F3F6EDC0EB902A792B_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnEnableAction { get; set; }
		Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_0 = __this->get_U3COnEnableActionU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * JointKinematicBody_get_OnDisableAction_m8E0770D06194ED54115E961E6E295892247F2FE8_inline (JointKinematicBody_tE51E6B088C6A46EF43B31E153EA291E1262F5B72 * __this, const RuntimeMethod* method)
{
	{
		// public Action<JointKinematicBody> OnDisableAction { get; set; }
		Action_1_t4DD23649086DA7FC24DFED0755BCE6ACA08CF5D3 * L_0 = __this->get_U3COnDisableActionU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AutoScope__ctor_mDB99051F3C5C2BFFF71574AC515AB523F04E3320_inline (AutoScope_tFCF9F27FF85DCD3A3880FAADCB520F29B1543A7F * __this, intptr_t ___markerPtr0, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = ___markerPtr0;
		__this->set_m_Ptr_0((intptr_t)L_0);
		intptr_t L_1 = ___markerPtr0;
		ProfilerMarker_Internal_Begin_m79272E72708A53AFDEEEB81CF66C7D62920AC5B5((intptr_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
