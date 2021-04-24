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

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// ExitGames.Client.Photon.Encryption.IPhotonEncryptor
struct IPhotonEncryptor_t99F2F419DB4C047CDF76EE18316AF3895489E624;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_tDF5EF555382ACB1C324142FDE271AE7AB077D506;
// ExitGames.Client.Photon.ITrafficRecorder
struct ITrafficRecorder_t72B9A298D16BF982687209729F0C28C9AD3227A2;
// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object>
struct NonAllocDictionary_2_t2D762F29D1AE2DBC12DEC9023B888F67BF0AEA81;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2;
// ExitGames.Client.Photon.ParameterDictionary
struct ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t70B2321BC89873C08E9D3FAD47F3E671E64DC96C;
// ExitGames.Client.Photon.PhotonPeer
struct PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223;
// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary>
struct Pool_1_tC5FA4CBD441352AFE42D7BD0DE85A0176B0CAC57;
// ExitGames.Client.Photon.StructWrapping.StructWrapperPools
struct StructWrapperPools_t81BB23DB78BC4B9F66F5641EA9C48BD8361B3E26;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_tC033B7CD70C0F8095598CC59097528B14FC1DCD9;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_tAFE47F622732F536E5ED9DD14238366C26F317D2;
// Photon.Realtime.AuthenticationValues
struct AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13;
// Photon.Realtime.ConnectionCallbacksContainer
struct ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110;
// Photon.Realtime.EnterRoomParams
struct EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942;
// Photon.Realtime.ErrorInfo
struct ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9;
// Photon.Realtime.ErrorInfoCallbacksContainer
struct ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22;
// Photon.Realtime.FriendInfo[]
struct FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71;
// Photon.Realtime.IWebRpcCallback
struct IWebRpcCallback_t8E22E34D48A3C7550F423A92483771438C1B7D25;
// Photon.Realtime.IWebRpcCallback[]
struct IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3;
// Photon.Realtime.InRoomCallbacksContainer
struct InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D;
// Photon.Realtime.LoadBalancingClient
struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A;
// Photon.Realtime.LoadBalancingPeer
struct LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14;
// Photon.Realtime.LobbyCallbacksContainer
struct LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571;
// Photon.Realtime.MatchMakingCallbacksContainer
struct MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3;
// Photon.Realtime.Player
struct Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202;
// Photon.Realtime.Region
struct Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99;
// Photon.Realtime.RegionHandler
struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF;
// Photon.Realtime.Room
struct Room_t5DFC39DD6736A2641374564EC6C31352BE33000D;
// Photon.Realtime.RoomInfo
struct RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2;
// Photon.Realtime.RoomInfo[]
struct RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9;
// Photon.Realtime.RoomOptions
struct RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906;
// Photon.Realtime.SupportLogger
struct SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA;
// Photon.Realtime.TypedLobby
struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5;
// Photon.Realtime.TypedLobbyInfo
struct TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3;
// Photon.Realtime.TypedLobbyInfo[]
struct TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971;
// Photon.Realtime.WebFlags
struct WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE;
// Photon.Realtime.WebRpcCallbacksContainer
struct WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895;
// Photon.Realtime.WebRpcResponse
struct WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422;
// System.Action`1<ExitGames.Client.Photon.DisconnectMessage>
struct Action_1_t81FB99C72E14E600636E8B596D9CA5637FC32CD7;
// System.Action`1<ExitGames.Client.Photon.EventData>
struct Action_1_t610B644779237405AA5CB556F71DBF01E8CF2C2A;
// System.Action`1<ExitGames.Client.Photon.OperationResponse>
struct Action_1_t5C0057464C2A8890BD445710F6546170A3B3B43B;
// System.Action`1<Photon.Realtime.RegionHandler>
struct Action_1_t120F44F47C23AE82BC4AC4869177CF65620137DC;
// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState>
struct Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Object>[]
struct EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_tA50C454800ADAE6F169C2C71095B18CBFF80A6B3;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type>
struct Dictionary_2_t54532AF5309B3B45B03F7F3C62CEBC99F7B78B5F;
// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player>
struct Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_tAE7A8756D8CF0882DD348DC328FB36FEE0FB7DD0;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1F07EAC22CC1D4F279164B144240E4718BD7E7A9;
// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct List_1_t6987D3DFC663F16EA60EC3783A282A65D9375CF4;
// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28;
// System.Collections.Generic.List`1<Photon.Realtime.Region>
struct List_1_t50497D9761120B3982D8DE0E3947C032555F1DD7;
// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger>
struct List_1_t527222B1915858D3EBDE17DA1D5472FD3903A6A8;
// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F;
// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient/CallbackTargetChange>
struct Queue_1_t0C3EAD846247542DE43450BBC5ECDFDD0AC08FD5;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Diagnostics.Stopwatch
struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.Binder
struct Binder_t4D5CB06963501D32847C057B57157D6DC49CA759;
// System.Reflection.MemberFilter
struct MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;

IL2CPP_EXTERN_C RuntimeClass* AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CustomAuthenticationType_t911A058D44AC5F98005B9297CFCDB1EE853AE2F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWebRpcCallback_t8E22E34D48A3C7550F423A92483771438C1B7D25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SupportClass_tC708B5AD7183DB2DAD6591C0D75B3FB51644CAC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral031E1E51C21ED3E865BC483E1AB65FD236DAE901;
IL2CPP_EXTERN_C String_t* _stringLiteral08D2E98E6754AF941484848930CCBADDFEFE13D6;
IL2CPP_EXTERN_C String_t* _stringLiteral0BCAE45D8ADAB414DB38EA02F9292623B445C753;
IL2CPP_EXTERN_C String_t* _stringLiteral0E181279FE55F2E332C77E81D9AD00F5486D04F9;
IL2CPP_EXTERN_C String_t* _stringLiteral0E894D3036F153E19CBC956B6A5AB40E5B46BFE2;
IL2CPP_EXTERN_C String_t* _stringLiteral10081B2796EBDFF80CF5904ABFDA3DFF44F1D24D;
IL2CPP_EXTERN_C String_t* _stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526;
IL2CPP_EXTERN_C String_t* _stringLiteral223883960405D6589D6CD37F175C73B073C4180F;
IL2CPP_EXTERN_C String_t* _stringLiteral237C3911F834CBF9FAC59D4A04E783842A1D3CD6;
IL2CPP_EXTERN_C String_t* _stringLiteral263A15B4E3E9E2F4C3E8221AC828274306B13855;
IL2CPP_EXTERN_C String_t* _stringLiteral32664F9AA6498F4C645EF8CFF0ECD74680727FE7;
IL2CPP_EXTERN_C String_t* _stringLiteral342CA6CAFC4C39E17B7E56F6FF13F6FED12AB1E3;
IL2CPP_EXTERN_C String_t* _stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9;
IL2CPP_EXTERN_C String_t* _stringLiteral3850EA0BD3AE76F6C25B67DC9BD76AD54ED52547;
IL2CPP_EXTERN_C String_t* _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8;
IL2CPP_EXTERN_C String_t* _stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7;
IL2CPP_EXTERN_C String_t* _stringLiteral4510F0D9271E0DB7D04EB79129742314C93163A9;
IL2CPP_EXTERN_C String_t* _stringLiteral479EC88E55FF68914417B71890F19067E031CF95;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEAC22AF406C19FB799684A30007C76C899C8BF;
IL2CPP_EXTERN_C String_t* _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808;
IL2CPP_EXTERN_C String_t* _stringLiteral5E0956988995BA9D8AD545060593EC7593A248E9;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC7E38BFFE00CA46ADD89145464A2EAF759D5C2;
IL2CPP_EXTERN_C String_t* _stringLiteral601FC93C20392B20EEB3C9F37859C622C0D151DF;
IL2CPP_EXTERN_C String_t* _stringLiteral6124202FE8A86D323B1C5BC98700503825D454C2;
IL2CPP_EXTERN_C String_t* _stringLiteral6225D10150959CD938D74A90F50B22692B0A017E;
IL2CPP_EXTERN_C String_t* _stringLiteral63B3DB3EDFFE8E5BD1C358E6F9795D27086FEA91;
IL2CPP_EXTERN_C String_t* _stringLiteral65B5AA8DFF1B2E90A2D050D4B6B198EFD82D674E;
IL2CPP_EXTERN_C String_t* _stringLiteral6936221DCE707D23499D1653D6EE7D2BADFFBAA9;
IL2CPP_EXTERN_C String_t* _stringLiteral6C8EE3675EEC14F86A361B84718313E2562E573C;
IL2CPP_EXTERN_C String_t* _stringLiteral6E7819832982A4FC237916272FB49CFFA9624FE3;
IL2CPP_EXTERN_C String_t* _stringLiteral6ED81047DEAE3CCB5B374374798282C7FA029B8E;
IL2CPP_EXTERN_C String_t* _stringLiteral736FF8E5B8E1C7958551256FA5E5146C75A31C7B;
IL2CPP_EXTERN_C String_t* _stringLiteral73E9438727A025F2C6302D501E8571DFADC5D852;
IL2CPP_EXTERN_C String_t* _stringLiteral747F36852E16310ED684572F30D34B6FF654D27C;
IL2CPP_EXTERN_C String_t* _stringLiteral78A99AC35589D8FC77F6FEB59EE7E55956BB35AE;
IL2CPP_EXTERN_C String_t* _stringLiteral7CEE29B46B3ED2F432C4A7B3A8DE12CAEB5D44D7;
IL2CPP_EXTERN_C String_t* _stringLiteral7D53C873D226A601A9783CBEBEB7B758ABE2D2C7;
IL2CPP_EXTERN_C String_t* _stringLiteral810A4EA841E283333EDA34AE9D91F1789F061216;
IL2CPP_EXTERN_C String_t* _stringLiteral8227CC0BECA58310D819DA015E3EE6A267F9F559;
IL2CPP_EXTERN_C String_t* _stringLiteral8BA5EF7D138B70C6CE8ACA51A43081AB53BB3ABD;
IL2CPP_EXTERN_C String_t* _stringLiteral9011E4E84DD86E01B4E886AF91734474A9DB3E2E;
IL2CPP_EXTERN_C String_t* _stringLiteral97CBBD581FE6B5A33E6750E4AAF42F61118114AE;
IL2CPP_EXTERN_C String_t* _stringLiteral98D82A5FBE2C48A4BA7D23C09B325D465EC799DC;
IL2CPP_EXTERN_C String_t* _stringLiteral99D72C7FC3E2E145870BEAB37C0B70E343EA9C3B;
IL2CPP_EXTERN_C String_t* _stringLiteral9E226BDBF405B6893314BBDA5DF5D6DA548FA202;
IL2CPP_EXTERN_C String_t* _stringLiteralAF2F0CEF3FB17E9F3FFB6676C1CF10F475D85565;
IL2CPP_EXTERN_C String_t* _stringLiteralB32938589EB53DCC2BAD4055BB5EEBD4496BF09A;
IL2CPP_EXTERN_C String_t* _stringLiteralC114B6A8C4FCA0FA33B6A8678C504A97A63EBC26;
IL2CPP_EXTERN_C String_t* _stringLiteralC42A1C0FCB9F3B03AFF049A971ECB58EF1666A5B;
IL2CPP_EXTERN_C String_t* _stringLiteralC5958D312E5DCB60470B5CABD9A95E5F86B42BCB;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB032786FD44DA7017F3BA777F0F12B63B3BE37;
IL2CPP_EXTERN_C String_t* _stringLiteralD1DBE50E93BA588346E8642DECF71D0109C9A902;
IL2CPP_EXTERN_C String_t* _stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46;
IL2CPP_EXTERN_C String_t* _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2;
IL2CPP_EXTERN_C String_t* _stringLiteralEA88FBAA99B73225752E2EF67593F775848160AD;
IL2CPP_EXTERN_C String_t* _stringLiteralF7068A42680648970601D75B7A3926C9C04E462B;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE72935B9754418217D583046D2D922521F81834F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF008E8C3C5383916456CBA5E9F3E921B5176D723_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m968D619CC39E270807A962EF7DB5CFB6A42A05AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA487A5D2E718EB48089719DA1AD2715DF0500F63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFB8C1D9F137818425336071319A7903FE4ABD021_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t RoomInfo_Equals_mB1C66135C69E5A576D845C9DFFA59356973CFE41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo_InternalCacheProperties_m1A6D6812D146D92769E9AED158265328F82119B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo_ToStringFull_m491E6BA938E626698F5BD23B678DCB910A8690BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo_ToString_m6BD408C4DD525AC242732B9B827A34E842C4F47B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomInfo__ctor_m91094B5A459603575933E51BB2B211A77BD00CCE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RoomOptions__ctor_m8FC01E8D41F044F50A44FD39E05A97CCB2560402_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_LogBasics_m7BD7CFAB251C14538F398D08839D82610A1D1452_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_LogStats_mEFE7287DA5BC1F93A221235DCA05CCFE64AB9741_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnApplicationPause_m93CBBB32BFC14C02236E7107D1C5ACFDBCCF4AB0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnConnectedToMaster_mABB10D1D072B0A4AFC0A904EF8B49075F7DA094C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnConnected_mA3D8EFCE8BDC752BC32CCF52C5CA33A1918D8FA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCreateRoomFailed_mC8C7AFAD21F83E631F5A4A0B93FED2140474F251_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCreatedRoom_mCAF632FF23815FA4D639D443161970B91250D77C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCustomAuthenticationFailed_m4CC7E899EDF02DD2AF61A1929AE952C9AE383863_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnCustomAuthenticationResponse_m5FB83E988E8ADB39FAFA708CEBACF239714C8152_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnDisconnected_m12159126D603B56767DF5736D5CDD5ED4A2A9764_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnErrorInfo_m69EC32D01F247A5749AB05E2E4B4F6527151B379_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnFriendListUpdate_m560582BD8E2395456D5F1CB99F2C83EA441E6BBA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinRandomFailed_m29A5170F57EC3136BDB44F19B1086C541C1DFFCF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinRoomFailed_mB8BE23A1279000FC0DF85A5F315F4893B5518D37_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinedLobby_mB796163628DE2F75B4443AE23B721E95436CDAB7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnJoinedRoom_m265455C861BCBB46A1B48260CF3BADF2ED6A7A00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLeftLobby_m3D8EE536767F977FA67D3F37C622F6BD6381D5DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLeftRoom_m0595545729A2037F8B186C97ACF28BC2D5A24CFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnLobbyStatisticsUpdate_m3FB91C1A1517DA60FE42BD74B4AC5F3F8EB50757_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnMasterClientSwitched_m65B54CFBD1A7A3BD1EA541329CB4B5188B2E9581_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerEnteredRoom_m57020B88EC6BB4A530D53CA1B2A3FF86A40672B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerLeftRoom_m73D5CB9F4D4567A0DFB0CE432AFEC0B505E21205_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnPlayerPropertiesUpdate_mF3D195B21CBF42B3AA56EEBBC09BB9ED5BC980DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRegionListReceived_m74679048F721BAA572472E5E3C3D51635981936E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRoomListUpdate_mC0F13A3B1464DCF938AF8134E8A5DCCFAD7610AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_OnRoomPropertiesUpdate_mFA0FD608CBC1159F42A064CA60180683D5FBD0F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StartLogStats_mE01B4322F8FE0D371B09056369141C47913708B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StartTrackValues_m6CA4C8F6A17834D29EC812FF5E67DD7E0545E840_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_Start_m227653BC5A9578ADDCDB8BCF5D3A39D646510D5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StopLogStats_m7431469A83F864C0DB61C16EC5772B81E5EE8495_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SupportLogger_StopTrackValues_m9589E4FCFDBD5E7BD170F3766C2A582865659606_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobbyInfo_ToString_m0EA434EB3C70BE1F2926575E0CF915140FD4C117_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobbyInfo__ctor_mAC49C720E13E9B444A9722B65CBFA943F2931A5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobby_ToString_m0CF8F902BF7736F9E379245C978C5EBB3A0E136A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypedLobby__cctor_m7AF440589B309580FA09B05B7945B2989E3BE8D9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebFlags__cctor_m548A23A5D14773F6F55F48A3CABEA0D04FB5E592_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcCallbacksContainer_OnWebRpcResponse_m4B8F734C71FACD722CC2CE7DD77622C392C674EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcCallbacksContainer__ctor_mBF233678774D848C2FA452DE0EE5F5FAC15D86C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcResponse_ToStringFull_mE59EFF53DA369DDA45DC95349CA2D3578F934864_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WebRpcResponse__ctor_mBF630E97AF16E2359F51A3C118CE27610F1679E3_MetadataUsageId;

struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// ExitGames.Client.Photon.OperationResponse
struct  OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2  : public RuntimeObject
{
public:
	// System.Byte ExitGames.Client.Photon.OperationResponse::OperationCode
	uint8_t ___OperationCode_0;
	// System.Int16 ExitGames.Client.Photon.OperationResponse::ReturnCode
	int16_t ___ReturnCode_1;
	// System.String ExitGames.Client.Photon.OperationResponse::DebugMessage
	String_t* ___DebugMessage_2;
	// ExitGames.Client.Photon.ParameterDictionary ExitGames.Client.Photon.OperationResponse::Parameters
	ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD * ___Parameters_3;

public:
	inline static int32_t get_offset_of_OperationCode_0() { return static_cast<int32_t>(offsetof(OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2, ___OperationCode_0)); }
	inline uint8_t get_OperationCode_0() const { return ___OperationCode_0; }
	inline uint8_t* get_address_of_OperationCode_0() { return &___OperationCode_0; }
	inline void set_OperationCode_0(uint8_t value)
	{
		___OperationCode_0 = value;
	}

	inline static int32_t get_offset_of_ReturnCode_1() { return static_cast<int32_t>(offsetof(OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2, ___ReturnCode_1)); }
	inline int16_t get_ReturnCode_1() const { return ___ReturnCode_1; }
	inline int16_t* get_address_of_ReturnCode_1() { return &___ReturnCode_1; }
	inline void set_ReturnCode_1(int16_t value)
	{
		___ReturnCode_1 = value;
	}

	inline static int32_t get_offset_of_DebugMessage_2() { return static_cast<int32_t>(offsetof(OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2, ___DebugMessage_2)); }
	inline String_t* get_DebugMessage_2() const { return ___DebugMessage_2; }
	inline String_t** get_address_of_DebugMessage_2() { return &___DebugMessage_2; }
	inline void set_DebugMessage_2(String_t* value)
	{
		___DebugMessage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DebugMessage_2), (void*)value);
	}

	inline static int32_t get_offset_of_Parameters_3() { return static_cast<int32_t>(offsetof(OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2, ___Parameters_3)); }
	inline ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD * get_Parameters_3() const { return ___Parameters_3; }
	inline ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD ** get_address_of_Parameters_3() { return &___Parameters_3; }
	inline void set_Parameters_3(ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD * value)
	{
		___Parameters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Parameters_3), (void*)value);
	}
};


// ExitGames.Client.Photon.ParameterDictionary
struct  ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD  : public RuntimeObject
{
public:
	// ExitGames.Client.Photon.NonAllocDictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.ParameterDictionary::paramDict
	NonAllocDictionary_2_t2D762F29D1AE2DBC12DEC9023B888F67BF0AEA81 * ___paramDict_0;
	// ExitGames.Client.Photon.StructWrapping.StructWrapperPools ExitGames.Client.Photon.ParameterDictionary::wrapperPools
	StructWrapperPools_t81BB23DB78BC4B9F66F5641EA9C48BD8361B3E26 * ___wrapperPools_1;

public:
	inline static int32_t get_offset_of_paramDict_0() { return static_cast<int32_t>(offsetof(ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD, ___paramDict_0)); }
	inline NonAllocDictionary_2_t2D762F29D1AE2DBC12DEC9023B888F67BF0AEA81 * get_paramDict_0() const { return ___paramDict_0; }
	inline NonAllocDictionary_2_t2D762F29D1AE2DBC12DEC9023B888F67BF0AEA81 ** get_address_of_paramDict_0() { return &___paramDict_0; }
	inline void set_paramDict_0(NonAllocDictionary_2_t2D762F29D1AE2DBC12DEC9023B888F67BF0AEA81 * value)
	{
		___paramDict_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDict_0), (void*)value);
	}

	inline static int32_t get_offset_of_wrapperPools_1() { return static_cast<int32_t>(offsetof(ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD, ___wrapperPools_1)); }
	inline StructWrapperPools_t81BB23DB78BC4B9F66F5641EA9C48BD8361B3E26 * get_wrapperPools_1() const { return ___wrapperPools_1; }
	inline StructWrapperPools_t81BB23DB78BC4B9F66F5641EA9C48BD8361B3E26 ** get_address_of_wrapperPools_1() { return &___wrapperPools_1; }
	inline void set_wrapperPools_1(StructWrapperPools_t81BB23DB78BC4B9F66F5641EA9C48BD8361B3E26 * value)
	{
		___wrapperPools_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrapperPools_1), (void*)value);
	}
};


// Photon.Realtime.ErrorInfo
struct  ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.ErrorInfo::Info
	String_t* ___Info_0;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9, ___Info_0)); }
	inline String_t* get_Info_0() const { return ___Info_0; }
	inline String_t** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(String_t* value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}
};


// Photon.Realtime.Player
struct  Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_8;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_U3CHasRejoinedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CHasRejoinedU3Ek__BackingField_3)); }
	inline bool get_U3CHasRejoinedU3Ek__BackingField_3() const { return ___U3CHasRejoinedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasRejoinedU3Ek__BackingField_3() { return &___U3CHasRejoinedU3Ek__BackingField_3; }
	inline void set_U3CHasRejoinedU3Ek__BackingField_3(bool value)
	{
		___U3CHasRejoinedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_nickName_4() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___nickName_4)); }
	inline String_t* get_nickName_4() const { return ___nickName_4; }
	inline String_t** get_address_of_nickName_4() { return &___nickName_4; }
	inline void set_nickName_4(String_t* value)
	{
		___nickName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CUserIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_5() const { return ___U3CUserIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_5() { return &___U3CUserIdU3Ek__BackingField_5; }
	inline void set_U3CUserIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CIsInactiveU3Ek__BackingField_6)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_6() const { return ___U3CIsInactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_6() { return &___U3CIsInactiveU3Ek__BackingField_6; }
	inline void set_U3CIsInactiveU3Ek__BackingField_6(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___U3CCustomPropertiesU3Ek__BackingField_7)); }
	inline Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * get_U3CCustomPropertiesU3Ek__BackingField_7() const { return ___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_7() { return &___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_7(Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_8() { return static_cast<int32_t>(offsetof(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202, ___TagObject_8)); }
	inline RuntimeObject * get_TagObject_8() const { return ___TagObject_8; }
	inline RuntimeObject ** get_address_of_TagObject_8() { return &___TagObject_8; }
	inline void set_TagObject_8(RuntimeObject * value)
	{
		___TagObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_8), (void*)value);
	}
};


// Photon.Realtime.RegionHandler
struct  RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Photon.Realtime.Region> Photon.Realtime.RegionHandler::<EnabledRegions>k__BackingField
	List_1_t50497D9761120B3982D8DE0E3947C032555F1DD7 * ___U3CEnabledRegionsU3Ek__BackingField_1;
	// System.String Photon.Realtime.RegionHandler::availableRegionCodes
	String_t* ___availableRegionCodes_2;
	// Photon.Realtime.Region Photon.Realtime.RegionHandler::bestRegionCache
	Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * ___bestRegionCache_3;
	// System.Collections.Generic.List`1<Photon.Realtime.RegionPinger> Photon.Realtime.RegionHandler::pingerList
	List_1_t527222B1915858D3EBDE17DA1D5472FD3903A6A8 * ___pingerList_4;
	// System.Action`1<Photon.Realtime.RegionHandler> Photon.Realtime.RegionHandler::onCompleteCall
	Action_1_t120F44F47C23AE82BC4AC4869177CF65620137DC * ___onCompleteCall_5;
	// System.Int32 Photon.Realtime.RegionHandler::previousPing
	int32_t ___previousPing_6;
	// System.Boolean Photon.Realtime.RegionHandler::<IsPinging>k__BackingField
	bool ___U3CIsPingingU3Ek__BackingField_7;
	// System.String Photon.Realtime.RegionHandler::previousSummaryProvided
	String_t* ___previousSummaryProvided_8;

public:
	inline static int32_t get_offset_of_U3CEnabledRegionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___U3CEnabledRegionsU3Ek__BackingField_1)); }
	inline List_1_t50497D9761120B3982D8DE0E3947C032555F1DD7 * get_U3CEnabledRegionsU3Ek__BackingField_1() const { return ___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline List_1_t50497D9761120B3982D8DE0E3947C032555F1DD7 ** get_address_of_U3CEnabledRegionsU3Ek__BackingField_1() { return &___U3CEnabledRegionsU3Ek__BackingField_1; }
	inline void set_U3CEnabledRegionsU3Ek__BackingField_1(List_1_t50497D9761120B3982D8DE0E3947C032555F1DD7 * value)
	{
		___U3CEnabledRegionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CEnabledRegionsU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_availableRegionCodes_2() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___availableRegionCodes_2)); }
	inline String_t* get_availableRegionCodes_2() const { return ___availableRegionCodes_2; }
	inline String_t** get_address_of_availableRegionCodes_2() { return &___availableRegionCodes_2; }
	inline void set_availableRegionCodes_2(String_t* value)
	{
		___availableRegionCodes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableRegionCodes_2), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionCache_3() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___bestRegionCache_3)); }
	inline Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * get_bestRegionCache_3() const { return ___bestRegionCache_3; }
	inline Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 ** get_address_of_bestRegionCache_3() { return &___bestRegionCache_3; }
	inline void set_bestRegionCache_3(Region_tA5CF2B4902EE79A10717452E4323A6C86D855B99 * value)
	{
		___bestRegionCache_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionCache_3), (void*)value);
	}

	inline static int32_t get_offset_of_pingerList_4() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___pingerList_4)); }
	inline List_1_t527222B1915858D3EBDE17DA1D5472FD3903A6A8 * get_pingerList_4() const { return ___pingerList_4; }
	inline List_1_t527222B1915858D3EBDE17DA1D5472FD3903A6A8 ** get_address_of_pingerList_4() { return &___pingerList_4; }
	inline void set_pingerList_4(List_1_t527222B1915858D3EBDE17DA1D5472FD3903A6A8 * value)
	{
		___pingerList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pingerList_4), (void*)value);
	}

	inline static int32_t get_offset_of_onCompleteCall_5() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___onCompleteCall_5)); }
	inline Action_1_t120F44F47C23AE82BC4AC4869177CF65620137DC * get_onCompleteCall_5() const { return ___onCompleteCall_5; }
	inline Action_1_t120F44F47C23AE82BC4AC4869177CF65620137DC ** get_address_of_onCompleteCall_5() { return &___onCompleteCall_5; }
	inline void set_onCompleteCall_5(Action_1_t120F44F47C23AE82BC4AC4869177CF65620137DC * value)
	{
		___onCompleteCall_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onCompleteCall_5), (void*)value);
	}

	inline static int32_t get_offset_of_previousPing_6() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___previousPing_6)); }
	inline int32_t get_previousPing_6() const { return ___previousPing_6; }
	inline int32_t* get_address_of_previousPing_6() { return &___previousPing_6; }
	inline void set_previousPing_6(int32_t value)
	{
		___previousPing_6 = value;
	}

	inline static int32_t get_offset_of_U3CIsPingingU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___U3CIsPingingU3Ek__BackingField_7)); }
	inline bool get_U3CIsPingingU3Ek__BackingField_7() const { return ___U3CIsPingingU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CIsPingingU3Ek__BackingField_7() { return &___U3CIsPingingU3Ek__BackingField_7; }
	inline void set_U3CIsPingingU3Ek__BackingField_7(bool value)
	{
		___U3CIsPingingU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_previousSummaryProvided_8() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF, ___previousSummaryProvided_8)); }
	inline String_t* get_previousSummaryProvided_8() const { return ___previousSummaryProvided_8; }
	inline String_t** get_address_of_previousSummaryProvided_8() { return &___previousSummaryProvided_8; }
	inline void set_previousSummaryProvided_8(String_t* value)
	{
		___previousSummaryProvided_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousSummaryProvided_8), (void*)value);
	}
};

struct RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF_StaticFields
{
public:
	// System.Type Photon.Realtime.RegionHandler::PingImplementation
	Type_t * ___PingImplementation_0;

public:
	inline static int32_t get_offset_of_PingImplementation_0() { return static_cast<int32_t>(offsetof(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF_StaticFields, ___PingImplementation_0)); }
	inline Type_t * get_PingImplementation_0() const { return ___PingImplementation_0; }
	inline Type_t ** get_address_of_PingImplementation_0() { return &___PingImplementation_0; }
	inline void set_PingImplementation_0(Type_t * value)
	{
		___PingImplementation_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PingImplementation_0), (void*)value);
	}
};


// Photon.Realtime.RoomInfo
struct  RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomInfo::RemovedFromList
	bool ___RemovedFromList_0;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::customProperties
	Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * ___customProperties_1;
	// System.Byte Photon.Realtime.RoomInfo::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Int32 Photon.Realtime.RoomInfo::emptyRoomTtl
	int32_t ___emptyRoomTtl_3;
	// System.Int32 Photon.Realtime.RoomInfo::playerTtl
	int32_t ___playerTtl_4;
	// System.String[] Photon.Realtime.RoomInfo::expectedUsers
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___expectedUsers_5;
	// System.Boolean Photon.Realtime.RoomInfo::isOpen
	bool ___isOpen_6;
	// System.Boolean Photon.Realtime.RoomInfo::isVisible
	bool ___isVisible_7;
	// System.Boolean Photon.Realtime.RoomInfo::autoCleanUp
	bool ___autoCleanUp_8;
	// System.String Photon.Realtime.RoomInfo::name
	String_t* ___name_9;
	// System.Int32 Photon.Realtime.RoomInfo::masterClientId
	int32_t ___masterClientId_10;
	// System.String[] Photon.Realtime.RoomInfo::propertiesListedInLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___propertiesListedInLobby_11;
	// System.Int32 Photon.Realtime.RoomInfo::<PlayerCount>k__BackingField
	int32_t ___U3CPlayerCountU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_RemovedFromList_0() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___RemovedFromList_0)); }
	inline bool get_RemovedFromList_0() const { return ___RemovedFromList_0; }
	inline bool* get_address_of_RemovedFromList_0() { return &___RemovedFromList_0; }
	inline void set_RemovedFromList_0(bool value)
	{
		___RemovedFromList_0 = value;
	}

	inline static int32_t get_offset_of_customProperties_1() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___customProperties_1)); }
	inline Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * get_customProperties_1() const { return ___customProperties_1; }
	inline Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 ** get_address_of_customProperties_1() { return &___customProperties_1; }
	inline void set_customProperties_1(Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * value)
	{
		___customProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_maxPlayers_2() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___maxPlayers_2)); }
	inline uint8_t get_maxPlayers_2() const { return ___maxPlayers_2; }
	inline uint8_t* get_address_of_maxPlayers_2() { return &___maxPlayers_2; }
	inline void set_maxPlayers_2(uint8_t value)
	{
		___maxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_emptyRoomTtl_3() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___emptyRoomTtl_3)); }
	inline int32_t get_emptyRoomTtl_3() const { return ___emptyRoomTtl_3; }
	inline int32_t* get_address_of_emptyRoomTtl_3() { return &___emptyRoomTtl_3; }
	inline void set_emptyRoomTtl_3(int32_t value)
	{
		___emptyRoomTtl_3 = value;
	}

	inline static int32_t get_offset_of_playerTtl_4() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___playerTtl_4)); }
	inline int32_t get_playerTtl_4() const { return ___playerTtl_4; }
	inline int32_t* get_address_of_playerTtl_4() { return &___playerTtl_4; }
	inline void set_playerTtl_4(int32_t value)
	{
		___playerTtl_4 = value;
	}

	inline static int32_t get_offset_of_expectedUsers_5() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___expectedUsers_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_expectedUsers_5() const { return ___expectedUsers_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_expectedUsers_5() { return &___expectedUsers_5; }
	inline void set_expectedUsers_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___expectedUsers_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expectedUsers_5), (void*)value);
	}

	inline static int32_t get_offset_of_isOpen_6() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isOpen_6)); }
	inline bool get_isOpen_6() const { return ___isOpen_6; }
	inline bool* get_address_of_isOpen_6() { return &___isOpen_6; }
	inline void set_isOpen_6(bool value)
	{
		___isOpen_6 = value;
	}

	inline static int32_t get_offset_of_isVisible_7() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___isVisible_7)); }
	inline bool get_isVisible_7() const { return ___isVisible_7; }
	inline bool* get_address_of_isVisible_7() { return &___isVisible_7; }
	inline void set_isVisible_7(bool value)
	{
		___isVisible_7 = value;
	}

	inline static int32_t get_offset_of_autoCleanUp_8() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___autoCleanUp_8)); }
	inline bool get_autoCleanUp_8() const { return ___autoCleanUp_8; }
	inline bool* get_address_of_autoCleanUp_8() { return &___autoCleanUp_8; }
	inline void set_autoCleanUp_8(bool value)
	{
		___autoCleanUp_8 = value;
	}

	inline static int32_t get_offset_of_name_9() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___name_9)); }
	inline String_t* get_name_9() const { return ___name_9; }
	inline String_t** get_address_of_name_9() { return &___name_9; }
	inline void set_name_9(String_t* value)
	{
		___name_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_9), (void*)value);
	}

	inline static int32_t get_offset_of_masterClientId_10() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___masterClientId_10)); }
	inline int32_t get_masterClientId_10() const { return ___masterClientId_10; }
	inline int32_t* get_address_of_masterClientId_10() { return &___masterClientId_10; }
	inline void set_masterClientId_10(int32_t value)
	{
		___masterClientId_10 = value;
	}

	inline static int32_t get_offset_of_propertiesListedInLobby_11() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___propertiesListedInLobby_11)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_propertiesListedInLobby_11() const { return ___propertiesListedInLobby_11; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_propertiesListedInLobby_11() { return &___propertiesListedInLobby_11; }
	inline void set_propertiesListedInLobby_11(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___propertiesListedInLobby_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertiesListedInLobby_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayerCountU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2, ___U3CPlayerCountU3Ek__BackingField_12)); }
	inline int32_t get_U3CPlayerCountU3Ek__BackingField_12() const { return ___U3CPlayerCountU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CPlayerCountU3Ek__BackingField_12() { return &___U3CPlayerCountU3Ek__BackingField_12; }
	inline void set_U3CPlayerCountU3Ek__BackingField_12(int32_t value)
	{
		___U3CPlayerCountU3Ek__BackingField_12 = value;
	}
};


// Photon.Realtime.RoomOptions
struct  RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906  : public RuntimeObject
{
public:
	// System.Boolean Photon.Realtime.RoomOptions::isVisible
	bool ___isVisible_0;
	// System.Boolean Photon.Realtime.RoomOptions::isOpen
	bool ___isOpen_1;
	// System.Byte Photon.Realtime.RoomOptions::MaxPlayers
	uint8_t ___MaxPlayers_2;
	// System.Int32 Photon.Realtime.RoomOptions::PlayerTtl
	int32_t ___PlayerTtl_3;
	// System.Int32 Photon.Realtime.RoomOptions::EmptyRoomTtl
	int32_t ___EmptyRoomTtl_4;
	// System.Boolean Photon.Realtime.RoomOptions::cleanupCacheOnLeave
	bool ___cleanupCacheOnLeave_5;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomOptions::CustomRoomProperties
	Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * ___CustomRoomProperties_6;
	// System.String[] Photon.Realtime.RoomOptions::CustomRoomPropertiesForLobby
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___CustomRoomPropertiesForLobby_7;
	// System.String[] Photon.Realtime.RoomOptions::Plugins
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___Plugins_8;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_9;
	// System.Boolean Photon.Realtime.RoomOptions::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_10;
	// System.Boolean Photon.Realtime.RoomOptions::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_11;
	// System.Boolean Photon.Realtime.RoomOptions::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_12;
	// System.Boolean Photon.Realtime.RoomOptions::broadcastPropsChangeToAll
	bool ___broadcastPropsChangeToAll_13;

public:
	inline static int32_t get_offset_of_isVisible_0() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isVisible_0)); }
	inline bool get_isVisible_0() const { return ___isVisible_0; }
	inline bool* get_address_of_isVisible_0() { return &___isVisible_0; }
	inline void set_isVisible_0(bool value)
	{
		___isVisible_0 = value;
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}

	inline static int32_t get_offset_of_MaxPlayers_2() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___MaxPlayers_2)); }
	inline uint8_t get_MaxPlayers_2() const { return ___MaxPlayers_2; }
	inline uint8_t* get_address_of_MaxPlayers_2() { return &___MaxPlayers_2; }
	inline void set_MaxPlayers_2(uint8_t value)
	{
		___MaxPlayers_2 = value;
	}

	inline static int32_t get_offset_of_PlayerTtl_3() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___PlayerTtl_3)); }
	inline int32_t get_PlayerTtl_3() const { return ___PlayerTtl_3; }
	inline int32_t* get_address_of_PlayerTtl_3() { return &___PlayerTtl_3; }
	inline void set_PlayerTtl_3(int32_t value)
	{
		___PlayerTtl_3 = value;
	}

	inline static int32_t get_offset_of_EmptyRoomTtl_4() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___EmptyRoomTtl_4)); }
	inline int32_t get_EmptyRoomTtl_4() const { return ___EmptyRoomTtl_4; }
	inline int32_t* get_address_of_EmptyRoomTtl_4() { return &___EmptyRoomTtl_4; }
	inline void set_EmptyRoomTtl_4(int32_t value)
	{
		___EmptyRoomTtl_4 = value;
	}

	inline static int32_t get_offset_of_cleanupCacheOnLeave_5() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___cleanupCacheOnLeave_5)); }
	inline bool get_cleanupCacheOnLeave_5() const { return ___cleanupCacheOnLeave_5; }
	inline bool* get_address_of_cleanupCacheOnLeave_5() { return &___cleanupCacheOnLeave_5; }
	inline void set_cleanupCacheOnLeave_5(bool value)
	{
		___cleanupCacheOnLeave_5 = value;
	}

	inline static int32_t get_offset_of_CustomRoomProperties_6() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomProperties_6)); }
	inline Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * get_CustomRoomProperties_6() const { return ___CustomRoomProperties_6; }
	inline Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 ** get_address_of_CustomRoomProperties_6() { return &___CustomRoomProperties_6; }
	inline void set_CustomRoomProperties_6(Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * value)
	{
		___CustomRoomProperties_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomProperties_6), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRoomPropertiesForLobby_7() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___CustomRoomPropertiesForLobby_7)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_CustomRoomPropertiesForLobby_7() const { return ___CustomRoomPropertiesForLobby_7; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_CustomRoomPropertiesForLobby_7() { return &___CustomRoomPropertiesForLobby_7; }
	inline void set_CustomRoomPropertiesForLobby_7(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___CustomRoomPropertiesForLobby_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRoomPropertiesForLobby_7), (void*)value);
	}

	inline static int32_t get_offset_of_Plugins_8() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___Plugins_8)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_Plugins_8() const { return ___Plugins_8; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_Plugins_8() { return &___Plugins_8; }
	inline void set_Plugins_8(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___Plugins_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plugins_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CSuppressRoomEventsU3Ek__BackingField_9)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_9() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_9() { return &___U3CSuppressRoomEventsU3Ek__BackingField_9; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_9(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CSuppressPlayerInfoU3Ek__BackingField_10)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_10() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_10() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_10; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_10(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CPublishUserIdU3Ek__BackingField_11)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_11() const { return ___U3CPublishUserIdU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_11() { return &___U3CPublishUserIdU3Ek__BackingField_11; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_11(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___U3CDeleteNullPropertiesU3Ek__BackingField_12)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_12() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_12() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_12; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_12(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_broadcastPropsChangeToAll_13() { return static_cast<int32_t>(offsetof(RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906, ___broadcastPropsChangeToAll_13)); }
	inline bool get_broadcastPropsChangeToAll_13() const { return ___broadcastPropsChangeToAll_13; }
	inline bool* get_address_of_broadcastPropsChangeToAll_13() { return &___broadcastPropsChangeToAll_13; }
	inline void set_broadcastPropsChangeToAll_13(bool value)
	{
		___broadcastPropsChangeToAll_13 = value;
	}
};


// Photon.Realtime.WebFlags
struct  WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE  : public RuntimeObject
{
public:
	// System.Byte Photon.Realtime.WebFlags::WebhookFlags
	uint8_t ___WebhookFlags_1;

public:
	inline static int32_t get_offset_of_WebhookFlags_1() { return static_cast<int32_t>(offsetof(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE, ___WebhookFlags_1)); }
	inline uint8_t get_WebhookFlags_1() const { return ___WebhookFlags_1; }
	inline uint8_t* get_address_of_WebhookFlags_1() { return &___WebhookFlags_1; }
	inline void set_WebhookFlags_1(uint8_t value)
	{
		___WebhookFlags_1 = value;
	}
};

struct WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_StaticFields
{
public:
	// Photon.Realtime.WebFlags Photon.Realtime.WebFlags::Default
	WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_StaticFields, ___Default_0)); }
	inline WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * get_Default_0() const { return ___Default_0; }
	inline WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_0), (void*)value);
	}
};


// Photon.Realtime.WebRpcResponse
struct  WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.WebRpcResponse::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.WebRpcResponse::<ResultCode>k__BackingField
	int32_t ___U3CResultCodeU3Ek__BackingField_1;
	// System.String Photon.Realtime.WebRpcResponse::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::<Parameters>k__BackingField
	Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___U3CParametersU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CResultCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CResultCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CResultCodeU3Ek__BackingField_1() const { return ___U3CResultCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CResultCodeU3Ek__BackingField_1() { return &___U3CResultCodeU3Ek__BackingField_1; }
	inline void set_U3CResultCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CResultCodeU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMessageU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CMessageU3Ek__BackingField_2)); }
	inline String_t* get_U3CMessageU3Ek__BackingField_2() const { return ___U3CMessageU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CMessageU3Ek__BackingField_2() { return &___U3CMessageU3Ek__BackingField_2; }
	inline void set_U3CMessageU3Ek__BackingField_2(String_t* value)
	{
		___U3CMessageU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CParametersU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422, ___U3CParametersU3Ek__BackingField_3)); }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * get_U3CParametersU3Ek__BackingField_3() const { return ___U3CParametersU3Ek__BackingField_3; }
	inline Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA ** get_address_of_U3CParametersU3Ek__BackingField_3() { return &___U3CParametersU3Ek__BackingField_3; }
	inline void set_U3CParametersU3Ek__BackingField_3(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * value)
	{
		___U3CParametersU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CParametersU3Ek__BackingField_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct  Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___entries_1)); }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tDF76BDF98210D70C971EBDB07E96E9A8B9CBC6C6* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___keys_7)); }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t0394DE2BA7C2C82605C6E9DEBB21A8C5C792E97C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ___values_8)); }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0816666499CBD11E58E1E7C79A4EFC2AA47E08A2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct  Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___buckets_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___entries_1)); }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tED6676A6535375B72FAC3BE58CAB9DC30BE201CD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___keys_7)); }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9BB02C59F6A73E760F875CCD8AA6D1A1ACE61970 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ___values_8)); }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t059E2E9F339047F683CA7038812E624189E7F0CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>
struct  List_1_t6987D3DFC663F16EA60EC3783A282A65D9375CF4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6987D3DFC663F16EA60EC3783A282A65D9375CF4, ____items_1)); }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* get__items_1() const { return ____items_1; }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6987D3DFC663F16EA60EC3783A282A65D9375CF4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6987D3DFC663F16EA60EC3783A282A65D9375CF4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6987D3DFC663F16EA60EC3783A282A65D9375CF4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6987D3DFC663F16EA60EC3783A282A65D9375CF4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6987D3DFC663F16EA60EC3783A282A65D9375CF4_StaticFields, ____emptyArray_5)); }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* get__emptyArray_5() const { return ____emptyArray_5; }
	inline FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(FriendInfoU5BU5D_t478D5940C62FDC8D4C9F68C76CB5348FA5C9EB71* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>
struct  List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28, ____items_1)); }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* get__items_1() const { return ____items_1; }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28_StaticFields, ____emptyArray_5)); }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IWebRpcCallbackU5BU5D_tA33A5C07BFCD399D98EC2035888E3A9F38E5B2C3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>
struct  List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F, ____items_1)); }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* get__items_1() const { return ____items_1; }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F_StaticFields, ____emptyArray_5)); }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RoomInfoU5BU5D_t04600F3C36D0D52D03B46DE1D7C7784A4012E6C9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>
struct  List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB, ____items_1)); }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* get__items_1() const { return ____items_1; }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB_StaticFields, ____emptyArray_5)); }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TypedLobbyInfoU5BU5D_tFDD7C0F540EEA8DAE738853BA944EEB50EBDE971* value)
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


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// ExitGames.Client.Photon.Hashtable
struct  Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25  : public Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA
{
public:

public:
};

struct Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25_StaticFields
{
public:
	// System.Object[] ExitGames.Client.Photon.Hashtable::boxedByte
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___boxedByte_14;

public:
	inline static int32_t get_offset_of_boxedByte_14() { return static_cast<int32_t>(offsetof(Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25_StaticFields, ___boxedByte_14)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_boxedByte_14() const { return ___boxedByte_14; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_boxedByte_14() { return &___boxedByte_14; }
	inline void set_boxedByte_14(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___boxedByte_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boxedByte_14), (void*)value);
	}
};


// Photon.Realtime.PhotonPortDefinition
struct  PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F 
{
public:
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::NameServerPort
	uint16_t ___NameServerPort_1;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::MasterServerPort
	uint16_t ___MasterServerPort_2;
	// System.UInt16 Photon.Realtime.PhotonPortDefinition::GameServerPort
	uint16_t ___GameServerPort_3;

public:
	inline static int32_t get_offset_of_NameServerPort_1() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F, ___NameServerPort_1)); }
	inline uint16_t get_NameServerPort_1() const { return ___NameServerPort_1; }
	inline uint16_t* get_address_of_NameServerPort_1() { return &___NameServerPort_1; }
	inline void set_NameServerPort_1(uint16_t value)
	{
		___NameServerPort_1 = value;
	}

	inline static int32_t get_offset_of_MasterServerPort_2() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F, ___MasterServerPort_2)); }
	inline uint16_t get_MasterServerPort_2() const { return ___MasterServerPort_2; }
	inline uint16_t* get_address_of_MasterServerPort_2() { return &___MasterServerPort_2; }
	inline void set_MasterServerPort_2(uint16_t value)
	{
		___MasterServerPort_2 = value;
	}

	inline static int32_t get_offset_of_GameServerPort_3() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F, ___GameServerPort_3)); }
	inline uint16_t get_GameServerPort_3() const { return ___GameServerPort_3; }
	inline uint16_t* get_address_of_GameServerPort_3() { return &___GameServerPort_3; }
	inline void set_GameServerPort_3(uint16_t value)
	{
		___GameServerPort_3 = value;
	}
};

struct PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F_StaticFields
{
public:
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.PhotonPortDefinition::AlternativeUdpPorts
	PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  ___AlternativeUdpPorts_0;

public:
	inline static int32_t get_offset_of_AlternativeUdpPorts_0() { return static_cast<int32_t>(offsetof(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F_StaticFields, ___AlternativeUdpPorts_0)); }
	inline PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  get_AlternativeUdpPorts_0() const { return ___AlternativeUdpPorts_0; }
	inline PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F * get_address_of_AlternativeUdpPorts_0() { return &___AlternativeUdpPorts_0; }
	inline void set_AlternativeUdpPorts_0(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  value)
	{
		___AlternativeUdpPorts_0 = value;
	}
};


// Photon.Realtime.Room
struct  Room_t5DFC39DD6736A2641374564EC6C31352BE33000D  : public RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.Room::<LoadBalancingClient>k__BackingField
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___U3CLoadBalancingClientU3Ek__BackingField_13;
	// System.Boolean Photon.Realtime.Room::isOffline
	bool ___isOffline_14;
	// System.Collections.Generic.Dictionary`2<System.Int32,Photon.Realtime.Player> Photon.Realtime.Room::players
	Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9 * ___players_15;
	// System.Boolean Photon.Realtime.Room::<BroadcastPropertiesChangeToAll>k__BackingField
	bool ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16;
	// System.Boolean Photon.Realtime.Room::<SuppressRoomEvents>k__BackingField
	bool ___U3CSuppressRoomEventsU3Ek__BackingField_17;
	// System.Boolean Photon.Realtime.Room::<SuppressPlayerInfo>k__BackingField
	bool ___U3CSuppressPlayerInfoU3Ek__BackingField_18;
	// System.Boolean Photon.Realtime.Room::<PublishUserId>k__BackingField
	bool ___U3CPublishUserIdU3Ek__BackingField_19;
	// System.Boolean Photon.Realtime.Room::<DeleteNullProperties>k__BackingField
	bool ___U3CDeleteNullPropertiesU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CLoadBalancingClientU3Ek__BackingField_13)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_U3CLoadBalancingClientU3Ek__BackingField_13() const { return ___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_U3CLoadBalancingClientU3Ek__BackingField_13() { return &___U3CLoadBalancingClientU3Ek__BackingField_13; }
	inline void set_U3CLoadBalancingClientU3Ek__BackingField_13(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___U3CLoadBalancingClientU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingClientU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_isOffline_14() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___isOffline_14)); }
	inline bool get_isOffline_14() const { return ___isOffline_14; }
	inline bool* get_address_of_isOffline_14() { return &___isOffline_14; }
	inline void set_isOffline_14(bool value)
	{
		___isOffline_14 = value;
	}

	inline static int32_t get_offset_of_players_15() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___players_15)); }
	inline Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9 * get_players_15() const { return ___players_15; }
	inline Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9 ** get_address_of_players_15() { return &___players_15; }
	inline void set_players_15(Dictionary_2_tCF07B60F69D32E885E7514159E70FD1DAA732BE9 * value)
	{
		___players_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16)); }
	inline bool get_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() const { return ___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16() { return &___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16; }
	inline void set_U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16(bool value)
	{
		___U3CBroadcastPropertiesChangeToAllU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CSuppressRoomEventsU3Ek__BackingField_17)); }
	inline bool get_U3CSuppressRoomEventsU3Ek__BackingField_17() const { return ___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CSuppressRoomEventsU3Ek__BackingField_17() { return &___U3CSuppressRoomEventsU3Ek__BackingField_17; }
	inline void set_U3CSuppressRoomEventsU3Ek__BackingField_17(bool value)
	{
		___U3CSuppressRoomEventsU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CSuppressPlayerInfoU3Ek__BackingField_18)); }
	inline bool get_U3CSuppressPlayerInfoU3Ek__BackingField_18() const { return ___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CSuppressPlayerInfoU3Ek__BackingField_18() { return &___U3CSuppressPlayerInfoU3Ek__BackingField_18; }
	inline void set_U3CSuppressPlayerInfoU3Ek__BackingField_18(bool value)
	{
		___U3CSuppressPlayerInfoU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CPublishUserIdU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CPublishUserIdU3Ek__BackingField_19)); }
	inline bool get_U3CPublishUserIdU3Ek__BackingField_19() const { return ___U3CPublishUserIdU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CPublishUserIdU3Ek__BackingField_19() { return &___U3CPublishUserIdU3Ek__BackingField_19; }
	inline void set_U3CPublishUserIdU3Ek__BackingField_19(bool value)
	{
		___U3CPublishUserIdU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D, ___U3CDeleteNullPropertiesU3Ek__BackingField_20)); }
	inline bool get_U3CDeleteNullPropertiesU3Ek__BackingField_20() const { return ___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CDeleteNullPropertiesU3Ek__BackingField_20() { return &___U3CDeleteNullPropertiesU3Ek__BackingField_20; }
	inline void set_U3CDeleteNullPropertiesU3Ek__BackingField_20(bool value)
	{
		___U3CDeleteNullPropertiesU3Ek__BackingField_20 = value;
	}
};


// Photon.Realtime.WebRpcCallbacksContainer
struct  WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895  : public List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28
{
public:
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.WebRpcCallbacksContainer::client
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client_6;

public:
	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895, ___client_6)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
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


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<Photon.Realtime.IWebRpcCallback>
struct  Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1, ___list_0)); }
	inline List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28 * get_list_0() const { return ___list_0; }
	inline List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
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

// System.Int16
struct  Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
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


// ExitGames.Client.Photon.ConnectionProtocol
struct  ConnectionProtocol_tEAEA81E9D0EAD19498DEB4156D5E075C6797DC6B 
{
public:
	// System.Byte ExitGames.Client.Photon.ConnectionProtocol::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionProtocol_tEAEA81E9D0EAD19498DEB4156D5E075C6797DC6B, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.DebugLevel
struct  DebugLevel_tFB8E7D212A95F0FCFBE2963FD3842BF847B20DCC 
{
public:
	// System.Byte ExitGames.Client.Photon.DebugLevel::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebugLevel_tFB8E7D212A95F0FCFBE2963FD3842BF847B20DCC, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.SerializationProtocol
struct  SerializationProtocol_t7564B00151919D4176E4E674E208DFC8F16F4735 
{
public:
	// System.Int32 ExitGames.Client.Photon.SerializationProtocol::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationProtocol_t7564B00151919D4176E4E674E208DFC8F16F4735, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.TargetFrameworks
struct  TargetFrameworks_t898D4C00F120B4E1062FF8BE91EB3A4BD903B896 
{
public:
	// System.Int32 ExitGames.Client.Photon.TargetFrameworks::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TargetFrameworks_t898D4C00F120B4E1062FF8BE91EB3A4BD903B896, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.AuthModeOption
struct  AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829 
{
public:
	// System.Int32 Photon.Realtime.AuthModeOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ClientState
struct  ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282 
{
public:
	// System.Int32 Photon.Realtime.ClientState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.CustomAuthenticationType
struct  CustomAuthenticationType_t911A058D44AC5F98005B9297CFCDB1EE853AE2F5 
{
public:
	// System.Byte Photon.Realtime.CustomAuthenticationType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CustomAuthenticationType_t911A058D44AC5F98005B9297CFCDB1EE853AE2F5, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.DisconnectCause
struct  DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F 
{
public:
	// System.Int32 Photon.Realtime.DisconnectCause::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.EncryptionMode
struct  EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3 
{
public:
	// System.Int32 Photon.Realtime.EncryptionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.JoinType
struct  JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0 
{
public:
	// System.Int32 Photon.Realtime.JoinType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JoinType_t7BE6E5A9E95DEC68F63C8255504A5B53342028E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.LobbyType
struct  LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305 
{
public:
	// System.Byte Photon.Realtime.LobbyType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.RoomOptionBit
struct  RoomOptionBit_t651750BA2A7E08AAE25A72C3A2CDA7B90ABAF8A5 
{
public:
	// System.Int32 Photon.Realtime.RoomOptionBit::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RoomOptionBit_t651750BA2A7E08AAE25A72C3A2CDA7B90ABAF8A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Realtime.ServerConnection
struct  ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68 
{
public:
	// System.Int32 Photon.Realtime.ServerConnection::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ServerConnection_t5E49560AE3E1B85523C39B5EAB7EA09FE5363F68, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tE35C91D046E63A1B92BB9AB909FCF9DA84379ED0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___Zero_19)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ___MinValue_21)); }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
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

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223  : public RuntimeObject
{
public:
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CommandBufferSize>k__BackingField
	int32_t ___U3CCommandBufferSizeU3Ek__BackingField_0;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<LimitOfUnreliableCommands>k__BackingField
	int32_t ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::WarningSize
	int32_t ___WarningSize_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::CommandLogSize
	int32_t ___CommandLogSize_4;
	// ExitGames.Client.Photon.TargetFrameworks ExitGames.Client.Photon.PhotonPeer::TargetFramework
	int32_t ___TargetFramework_8;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RemoveAppIdFromWebSocketPath
	bool ___RemoveAppIdFromWebSocketPath_10;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ClientSdkId
	uint8_t ___ClientSdkId_11;
	// System.String ExitGames.Client.Photon.PhotonPeer::clientVersion
	String_t* ___clientVersion_12;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::UseInitV3
	bool ___UseInitV3_17;
	// ExitGames.Client.Photon.SerializationProtocol ExitGames.Client.Photon.PhotonPeer::<SerializationProtocolType>k__BackingField
	int32_t ___U3CSerializationProtocolTypeU3Ek__BackingField_18;
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Type> ExitGames.Client.Photon.PhotonPeer::SocketImplementationConfig
	Dictionary_2_t54532AF5309B3B45B03F7F3C62CEBC99F7B78B5F * ___SocketImplementationConfig_19;
	// System.Type ExitGames.Client.Photon.PhotonPeer::<SocketImplementation>k__BackingField
	Type_t * ___U3CSocketImplementationU3Ek__BackingField_20;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PhotonPeer::DebugOut
	uint8_t ___DebugOut_21;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PhotonPeer::<Listener>k__BackingField
	RuntimeObject* ___U3CListenerU3Ek__BackingField_22;
	// System.Action`1<ExitGames.Client.Photon.DisconnectMessage> ExitGames.Client.Photon.PhotonPeer::OnDisconnectMessage
	Action_1_t81FB99C72E14E600636E8B596D9CA5637FC32CD7 * ___OnDisconnectMessage_23;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::reuseEventInstance
	bool ___reuseEventInstance_24;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useByteArraySlicePoolForEvents
	bool ___useByteArraySlicePoolForEvents_25;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::wrapIncomingStructs
	bool ___wrapIncomingStructs_26;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::SendInCreationOrder
	bool ___SendInCreationOrder_27;
	// ExitGames.Client.Photon.ITrafficRecorder ExitGames.Client.Photon.PhotonPeer::TrafficRecorder
	RuntimeObject* ___TrafficRecorder_28;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<EnableServerTracing>k__BackingField
	bool ___U3CEnableServerTracingU3Ek__BackingField_29;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::quickResendAttempts
	uint8_t ___quickResendAttempts_30;
	// System.Byte ExitGames.Client.Photon.PhotonPeer::ChannelCount
	uint8_t ___ChannelCount_31;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::EnableEncryptedFlag
	bool ___EnableEncryptedFlag_32;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::crcEnabled
	bool ___crcEnabled_33;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::SentCountAllowance
	int32_t ___SentCountAllowance_34;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::InitialResendTimeMax
	int32_t ___InitialResendTimeMax_35;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::TimePingInterval
	int32_t ___TimePingInterval_36;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::disconnectTimeout
	int32_t ___disconnectTimeout_37;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PhotonPeer::<TransportProtocol>k__BackingField
	uint8_t ___U3CTransportProtocolU3Ek__BackingField_38;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::mtu
	int32_t ___mtu_40;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_41;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::RandomizeSequenceNumbers
	bool ___RandomizeSequenceNumbers_43;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::RandomizedSequenceNumbers
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___RandomizedSequenceNumbers_44;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::GcmDatagramEncryption
	bool ___GcmDatagramEncryption_45;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsIncoming>k__BackingField
	TrafficStats_tC033B7CD70C0F8095598CC59097528B14FC1DCD9 * ___U3CTrafficStatsIncomingU3Ek__BackingField_46;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PhotonPeer::<TrafficStatsOutgoing>k__BackingField
	TrafficStats_tC033B7CD70C0F8095598CC59097528B14FC1DCD9 * ___U3CTrafficStatsOutgoingU3Ek__BackingField_47;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PhotonPeer::<TrafficStatsGameLevel>k__BackingField
	TrafficStatsGameLevel_tAFE47F622732F536E5ED9DD14238366C26F317D2 * ___U3CTrafficStatsGameLevelU3Ek__BackingField_48;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PhotonPeer::trafficStatsStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___trafficStatsStopwatch_49;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::trafficStatsEnabled
	bool ___trafficStatsEnabled_50;
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t70B2321BC89873C08E9D3FAD47F3E671E64DC96C * ___peerBase_51;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	RuntimeObject * ___SendOutgoingLockObject_52;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	RuntimeObject * ___DispatchLockObject_53;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	RuntimeObject * ___EnqueueLock_54;
	// System.Byte[] ExitGames.Client.Photon.PhotonPeer::PayloadEncryptionSecret
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___PayloadEncryptionSecret_55;
	// System.Type ExitGames.Client.Photon.PhotonPeer::encryptorType
	Type_t * ___encryptorType_56;
	// ExitGames.Client.Photon.Encryption.IPhotonEncryptor ExitGames.Client.Photon.PhotonPeer::Encryptor
	RuntimeObject* ___Encryptor_57;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<CountDiscarded>k__BackingField
	int32_t ___U3CCountDiscardedU3Ek__BackingField_58;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::<DeltaUnreliableNumber>k__BackingField
	int32_t ___U3CDeltaUnreliableNumberU3Ek__BackingField_59;

public:
	inline static int32_t get_offset_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CCommandBufferSizeU3Ek__BackingField_0)); }
	inline int32_t get_U3CCommandBufferSizeU3Ek__BackingField_0() const { return ___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCommandBufferSizeU3Ek__BackingField_0() { return &___U3CCommandBufferSizeU3Ek__BackingField_0; }
	inline void set_U3CCommandBufferSizeU3Ek__BackingField_0(int32_t value)
	{
		___U3CCommandBufferSizeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1)); }
	inline int32_t get_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() const { return ___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1() { return &___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1; }
	inline void set_U3CLimitOfUnreliableCommandsU3Ek__BackingField_1(int32_t value)
	{
		___U3CLimitOfUnreliableCommandsU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_WarningSize_2() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___WarningSize_2)); }
	inline int32_t get_WarningSize_2() const { return ___WarningSize_2; }
	inline int32_t* get_address_of_WarningSize_2() { return &___WarningSize_2; }
	inline void set_WarningSize_2(int32_t value)
	{
		___WarningSize_2 = value;
	}

	inline static int32_t get_offset_of_CommandLogSize_4() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___CommandLogSize_4)); }
	inline int32_t get_CommandLogSize_4() const { return ___CommandLogSize_4; }
	inline int32_t* get_address_of_CommandLogSize_4() { return &___CommandLogSize_4; }
	inline void set_CommandLogSize_4(int32_t value)
	{
		___CommandLogSize_4 = value;
	}

	inline static int32_t get_offset_of_TargetFramework_8() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___TargetFramework_8)); }
	inline int32_t get_TargetFramework_8() const { return ___TargetFramework_8; }
	inline int32_t* get_address_of_TargetFramework_8() { return &___TargetFramework_8; }
	inline void set_TargetFramework_8(int32_t value)
	{
		___TargetFramework_8 = value;
	}

	inline static int32_t get_offset_of_RemoveAppIdFromWebSocketPath_10() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___RemoveAppIdFromWebSocketPath_10)); }
	inline bool get_RemoveAppIdFromWebSocketPath_10() const { return ___RemoveAppIdFromWebSocketPath_10; }
	inline bool* get_address_of_RemoveAppIdFromWebSocketPath_10() { return &___RemoveAppIdFromWebSocketPath_10; }
	inline void set_RemoveAppIdFromWebSocketPath_10(bool value)
	{
		___RemoveAppIdFromWebSocketPath_10 = value;
	}

	inline static int32_t get_offset_of_ClientSdkId_11() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___ClientSdkId_11)); }
	inline uint8_t get_ClientSdkId_11() const { return ___ClientSdkId_11; }
	inline uint8_t* get_address_of_ClientSdkId_11() { return &___ClientSdkId_11; }
	inline void set_ClientSdkId_11(uint8_t value)
	{
		___ClientSdkId_11 = value;
	}

	inline static int32_t get_offset_of_clientVersion_12() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___clientVersion_12)); }
	inline String_t* get_clientVersion_12() const { return ___clientVersion_12; }
	inline String_t** get_address_of_clientVersion_12() { return &___clientVersion_12; }
	inline void set_clientVersion_12(String_t* value)
	{
		___clientVersion_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clientVersion_12), (void*)value);
	}

	inline static int32_t get_offset_of_UseInitV3_17() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___UseInitV3_17)); }
	inline bool get_UseInitV3_17() const { return ___UseInitV3_17; }
	inline bool* get_address_of_UseInitV3_17() { return &___UseInitV3_17; }
	inline void set_UseInitV3_17(bool value)
	{
		___UseInitV3_17 = value;
	}

	inline static int32_t get_offset_of_U3CSerializationProtocolTypeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CSerializationProtocolTypeU3Ek__BackingField_18)); }
	inline int32_t get_U3CSerializationProtocolTypeU3Ek__BackingField_18() const { return ___U3CSerializationProtocolTypeU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CSerializationProtocolTypeU3Ek__BackingField_18() { return &___U3CSerializationProtocolTypeU3Ek__BackingField_18; }
	inline void set_U3CSerializationProtocolTypeU3Ek__BackingField_18(int32_t value)
	{
		___U3CSerializationProtocolTypeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_SocketImplementationConfig_19() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___SocketImplementationConfig_19)); }
	inline Dictionary_2_t54532AF5309B3B45B03F7F3C62CEBC99F7B78B5F * get_SocketImplementationConfig_19() const { return ___SocketImplementationConfig_19; }
	inline Dictionary_2_t54532AF5309B3B45B03F7F3C62CEBC99F7B78B5F ** get_address_of_SocketImplementationConfig_19() { return &___SocketImplementationConfig_19; }
	inline void set_SocketImplementationConfig_19(Dictionary_2_t54532AF5309B3B45B03F7F3C62CEBC99F7B78B5F * value)
	{
		___SocketImplementationConfig_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SocketImplementationConfig_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSocketImplementationU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CSocketImplementationU3Ek__BackingField_20)); }
	inline Type_t * get_U3CSocketImplementationU3Ek__BackingField_20() const { return ___U3CSocketImplementationU3Ek__BackingField_20; }
	inline Type_t ** get_address_of_U3CSocketImplementationU3Ek__BackingField_20() { return &___U3CSocketImplementationU3Ek__BackingField_20; }
	inline void set_U3CSocketImplementationU3Ek__BackingField_20(Type_t * value)
	{
		___U3CSocketImplementationU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSocketImplementationU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_DebugOut_21() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___DebugOut_21)); }
	inline uint8_t get_DebugOut_21() const { return ___DebugOut_21; }
	inline uint8_t* get_address_of_DebugOut_21() { return &___DebugOut_21; }
	inline void set_DebugOut_21(uint8_t value)
	{
		___DebugOut_21 = value;
	}

	inline static int32_t get_offset_of_U3CListenerU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CListenerU3Ek__BackingField_22)); }
	inline RuntimeObject* get_U3CListenerU3Ek__BackingField_22() const { return ___U3CListenerU3Ek__BackingField_22; }
	inline RuntimeObject** get_address_of_U3CListenerU3Ek__BackingField_22() { return &___U3CListenerU3Ek__BackingField_22; }
	inline void set_U3CListenerU3Ek__BackingField_22(RuntimeObject* value)
	{
		___U3CListenerU3Ek__BackingField_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CListenerU3Ek__BackingField_22), (void*)value);
	}

	inline static int32_t get_offset_of_OnDisconnectMessage_23() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___OnDisconnectMessage_23)); }
	inline Action_1_t81FB99C72E14E600636E8B596D9CA5637FC32CD7 * get_OnDisconnectMessage_23() const { return ___OnDisconnectMessage_23; }
	inline Action_1_t81FB99C72E14E600636E8B596D9CA5637FC32CD7 ** get_address_of_OnDisconnectMessage_23() { return &___OnDisconnectMessage_23; }
	inline void set_OnDisconnectMessage_23(Action_1_t81FB99C72E14E600636E8B596D9CA5637FC32CD7 * value)
	{
		___OnDisconnectMessage_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnDisconnectMessage_23), (void*)value);
	}

	inline static int32_t get_offset_of_reuseEventInstance_24() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___reuseEventInstance_24)); }
	inline bool get_reuseEventInstance_24() const { return ___reuseEventInstance_24; }
	inline bool* get_address_of_reuseEventInstance_24() { return &___reuseEventInstance_24; }
	inline void set_reuseEventInstance_24(bool value)
	{
		___reuseEventInstance_24 = value;
	}

	inline static int32_t get_offset_of_useByteArraySlicePoolForEvents_25() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___useByteArraySlicePoolForEvents_25)); }
	inline bool get_useByteArraySlicePoolForEvents_25() const { return ___useByteArraySlicePoolForEvents_25; }
	inline bool* get_address_of_useByteArraySlicePoolForEvents_25() { return &___useByteArraySlicePoolForEvents_25; }
	inline void set_useByteArraySlicePoolForEvents_25(bool value)
	{
		___useByteArraySlicePoolForEvents_25 = value;
	}

	inline static int32_t get_offset_of_wrapIncomingStructs_26() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___wrapIncomingStructs_26)); }
	inline bool get_wrapIncomingStructs_26() const { return ___wrapIncomingStructs_26; }
	inline bool* get_address_of_wrapIncomingStructs_26() { return &___wrapIncomingStructs_26; }
	inline void set_wrapIncomingStructs_26(bool value)
	{
		___wrapIncomingStructs_26 = value;
	}

	inline static int32_t get_offset_of_SendInCreationOrder_27() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___SendInCreationOrder_27)); }
	inline bool get_SendInCreationOrder_27() const { return ___SendInCreationOrder_27; }
	inline bool* get_address_of_SendInCreationOrder_27() { return &___SendInCreationOrder_27; }
	inline void set_SendInCreationOrder_27(bool value)
	{
		___SendInCreationOrder_27 = value;
	}

	inline static int32_t get_offset_of_TrafficRecorder_28() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___TrafficRecorder_28)); }
	inline RuntimeObject* get_TrafficRecorder_28() const { return ___TrafficRecorder_28; }
	inline RuntimeObject** get_address_of_TrafficRecorder_28() { return &___TrafficRecorder_28; }
	inline void set_TrafficRecorder_28(RuntimeObject* value)
	{
		___TrafficRecorder_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrafficRecorder_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CEnableServerTracingU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CEnableServerTracingU3Ek__BackingField_29)); }
	inline bool get_U3CEnableServerTracingU3Ek__BackingField_29() const { return ___U3CEnableServerTracingU3Ek__BackingField_29; }
	inline bool* get_address_of_U3CEnableServerTracingU3Ek__BackingField_29() { return &___U3CEnableServerTracingU3Ek__BackingField_29; }
	inline void set_U3CEnableServerTracingU3Ek__BackingField_29(bool value)
	{
		___U3CEnableServerTracingU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_quickResendAttempts_30() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___quickResendAttempts_30)); }
	inline uint8_t get_quickResendAttempts_30() const { return ___quickResendAttempts_30; }
	inline uint8_t* get_address_of_quickResendAttempts_30() { return &___quickResendAttempts_30; }
	inline void set_quickResendAttempts_30(uint8_t value)
	{
		___quickResendAttempts_30 = value;
	}

	inline static int32_t get_offset_of_ChannelCount_31() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___ChannelCount_31)); }
	inline uint8_t get_ChannelCount_31() const { return ___ChannelCount_31; }
	inline uint8_t* get_address_of_ChannelCount_31() { return &___ChannelCount_31; }
	inline void set_ChannelCount_31(uint8_t value)
	{
		___ChannelCount_31 = value;
	}

	inline static int32_t get_offset_of_EnableEncryptedFlag_32() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___EnableEncryptedFlag_32)); }
	inline bool get_EnableEncryptedFlag_32() const { return ___EnableEncryptedFlag_32; }
	inline bool* get_address_of_EnableEncryptedFlag_32() { return &___EnableEncryptedFlag_32; }
	inline void set_EnableEncryptedFlag_32(bool value)
	{
		___EnableEncryptedFlag_32 = value;
	}

	inline static int32_t get_offset_of_crcEnabled_33() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___crcEnabled_33)); }
	inline bool get_crcEnabled_33() const { return ___crcEnabled_33; }
	inline bool* get_address_of_crcEnabled_33() { return &___crcEnabled_33; }
	inline void set_crcEnabled_33(bool value)
	{
		___crcEnabled_33 = value;
	}

	inline static int32_t get_offset_of_SentCountAllowance_34() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___SentCountAllowance_34)); }
	inline int32_t get_SentCountAllowance_34() const { return ___SentCountAllowance_34; }
	inline int32_t* get_address_of_SentCountAllowance_34() { return &___SentCountAllowance_34; }
	inline void set_SentCountAllowance_34(int32_t value)
	{
		___SentCountAllowance_34 = value;
	}

	inline static int32_t get_offset_of_InitialResendTimeMax_35() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___InitialResendTimeMax_35)); }
	inline int32_t get_InitialResendTimeMax_35() const { return ___InitialResendTimeMax_35; }
	inline int32_t* get_address_of_InitialResendTimeMax_35() { return &___InitialResendTimeMax_35; }
	inline void set_InitialResendTimeMax_35(int32_t value)
	{
		___InitialResendTimeMax_35 = value;
	}

	inline static int32_t get_offset_of_TimePingInterval_36() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___TimePingInterval_36)); }
	inline int32_t get_TimePingInterval_36() const { return ___TimePingInterval_36; }
	inline int32_t* get_address_of_TimePingInterval_36() { return &___TimePingInterval_36; }
	inline void set_TimePingInterval_36(int32_t value)
	{
		___TimePingInterval_36 = value;
	}

	inline static int32_t get_offset_of_disconnectTimeout_37() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___disconnectTimeout_37)); }
	inline int32_t get_disconnectTimeout_37() const { return ___disconnectTimeout_37; }
	inline int32_t* get_address_of_disconnectTimeout_37() { return &___disconnectTimeout_37; }
	inline void set_disconnectTimeout_37(int32_t value)
	{
		___disconnectTimeout_37 = value;
	}

	inline static int32_t get_offset_of_U3CTransportProtocolU3Ek__BackingField_38() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CTransportProtocolU3Ek__BackingField_38)); }
	inline uint8_t get_U3CTransportProtocolU3Ek__BackingField_38() const { return ___U3CTransportProtocolU3Ek__BackingField_38; }
	inline uint8_t* get_address_of_U3CTransportProtocolU3Ek__BackingField_38() { return &___U3CTransportProtocolU3Ek__BackingField_38; }
	inline void set_U3CTransportProtocolU3Ek__BackingField_38(uint8_t value)
	{
		___U3CTransportProtocolU3Ek__BackingField_38 = value;
	}

	inline static int32_t get_offset_of_mtu_40() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___mtu_40)); }
	inline int32_t get_mtu_40() const { return ___mtu_40; }
	inline int32_t* get_address_of_mtu_40() { return &___mtu_40; }
	inline void set_mtu_40(int32_t value)
	{
		___mtu_40 = value;
	}

	inline static int32_t get_offset_of_U3CIsSendingOnlyAcksU3Ek__BackingField_41() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CIsSendingOnlyAcksU3Ek__BackingField_41)); }
	inline bool get_U3CIsSendingOnlyAcksU3Ek__BackingField_41() const { return ___U3CIsSendingOnlyAcksU3Ek__BackingField_41; }
	inline bool* get_address_of_U3CIsSendingOnlyAcksU3Ek__BackingField_41() { return &___U3CIsSendingOnlyAcksU3Ek__BackingField_41; }
	inline void set_U3CIsSendingOnlyAcksU3Ek__BackingField_41(bool value)
	{
		___U3CIsSendingOnlyAcksU3Ek__BackingField_41 = value;
	}

	inline static int32_t get_offset_of_RandomizeSequenceNumbers_43() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___RandomizeSequenceNumbers_43)); }
	inline bool get_RandomizeSequenceNumbers_43() const { return ___RandomizeSequenceNumbers_43; }
	inline bool* get_address_of_RandomizeSequenceNumbers_43() { return &___RandomizeSequenceNumbers_43; }
	inline void set_RandomizeSequenceNumbers_43(bool value)
	{
		___RandomizeSequenceNumbers_43 = value;
	}

	inline static int32_t get_offset_of_RandomizedSequenceNumbers_44() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___RandomizedSequenceNumbers_44)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_RandomizedSequenceNumbers_44() const { return ___RandomizedSequenceNumbers_44; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_RandomizedSequenceNumbers_44() { return &___RandomizedSequenceNumbers_44; }
	inline void set_RandomizedSequenceNumbers_44(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___RandomizedSequenceNumbers_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomizedSequenceNumbers_44), (void*)value);
	}

	inline static int32_t get_offset_of_GcmDatagramEncryption_45() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___GcmDatagramEncryption_45)); }
	inline bool get_GcmDatagramEncryption_45() const { return ___GcmDatagramEncryption_45; }
	inline bool* get_address_of_GcmDatagramEncryption_45() { return &___GcmDatagramEncryption_45; }
	inline void set_GcmDatagramEncryption_45(bool value)
	{
		___GcmDatagramEncryption_45 = value;
	}

	inline static int32_t get_offset_of_U3CTrafficStatsIncomingU3Ek__BackingField_46() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CTrafficStatsIncomingU3Ek__BackingField_46)); }
	inline TrafficStats_tC033B7CD70C0F8095598CC59097528B14FC1DCD9 * get_U3CTrafficStatsIncomingU3Ek__BackingField_46() const { return ___U3CTrafficStatsIncomingU3Ek__BackingField_46; }
	inline TrafficStats_tC033B7CD70C0F8095598CC59097528B14FC1DCD9 ** get_address_of_U3CTrafficStatsIncomingU3Ek__BackingField_46() { return &___U3CTrafficStatsIncomingU3Ek__BackingField_46; }
	inline void set_U3CTrafficStatsIncomingU3Ek__BackingField_46(TrafficStats_tC033B7CD70C0F8095598CC59097528B14FC1DCD9 * value)
	{
		___U3CTrafficStatsIncomingU3Ek__BackingField_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsIncomingU3Ek__BackingField_46), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsOutgoingU3Ek__BackingField_47() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CTrafficStatsOutgoingU3Ek__BackingField_47)); }
	inline TrafficStats_tC033B7CD70C0F8095598CC59097528B14FC1DCD9 * get_U3CTrafficStatsOutgoingU3Ek__BackingField_47() const { return ___U3CTrafficStatsOutgoingU3Ek__BackingField_47; }
	inline TrafficStats_tC033B7CD70C0F8095598CC59097528B14FC1DCD9 ** get_address_of_U3CTrafficStatsOutgoingU3Ek__BackingField_47() { return &___U3CTrafficStatsOutgoingU3Ek__BackingField_47; }
	inline void set_U3CTrafficStatsOutgoingU3Ek__BackingField_47(TrafficStats_tC033B7CD70C0F8095598CC59097528B14FC1DCD9 * value)
	{
		___U3CTrafficStatsOutgoingU3Ek__BackingField_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsOutgoingU3Ek__BackingField_47), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrafficStatsGameLevelU3Ek__BackingField_48() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CTrafficStatsGameLevelU3Ek__BackingField_48)); }
	inline TrafficStatsGameLevel_tAFE47F622732F536E5ED9DD14238366C26F317D2 * get_U3CTrafficStatsGameLevelU3Ek__BackingField_48() const { return ___U3CTrafficStatsGameLevelU3Ek__BackingField_48; }
	inline TrafficStatsGameLevel_tAFE47F622732F536E5ED9DD14238366C26F317D2 ** get_address_of_U3CTrafficStatsGameLevelU3Ek__BackingField_48() { return &___U3CTrafficStatsGameLevelU3Ek__BackingField_48; }
	inline void set_U3CTrafficStatsGameLevelU3Ek__BackingField_48(TrafficStatsGameLevel_tAFE47F622732F536E5ED9DD14238366C26F317D2 * value)
	{
		___U3CTrafficStatsGameLevelU3Ek__BackingField_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrafficStatsGameLevelU3Ek__BackingField_48), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsStopwatch_49() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___trafficStatsStopwatch_49)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_trafficStatsStopwatch_49() const { return ___trafficStatsStopwatch_49; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_trafficStatsStopwatch_49() { return &___trafficStatsStopwatch_49; }
	inline void set_trafficStatsStopwatch_49(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___trafficStatsStopwatch_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trafficStatsStopwatch_49), (void*)value);
	}

	inline static int32_t get_offset_of_trafficStatsEnabled_50() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___trafficStatsEnabled_50)); }
	inline bool get_trafficStatsEnabled_50() const { return ___trafficStatsEnabled_50; }
	inline bool* get_address_of_trafficStatsEnabled_50() { return &___trafficStatsEnabled_50; }
	inline void set_trafficStatsEnabled_50(bool value)
	{
		___trafficStatsEnabled_50 = value;
	}

	inline static int32_t get_offset_of_peerBase_51() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___peerBase_51)); }
	inline PeerBase_t70B2321BC89873C08E9D3FAD47F3E671E64DC96C * get_peerBase_51() const { return ___peerBase_51; }
	inline PeerBase_t70B2321BC89873C08E9D3FAD47F3E671E64DC96C ** get_address_of_peerBase_51() { return &___peerBase_51; }
	inline void set_peerBase_51(PeerBase_t70B2321BC89873C08E9D3FAD47F3E671E64DC96C * value)
	{
		___peerBase_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___peerBase_51), (void*)value);
	}

	inline static int32_t get_offset_of_SendOutgoingLockObject_52() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___SendOutgoingLockObject_52)); }
	inline RuntimeObject * get_SendOutgoingLockObject_52() const { return ___SendOutgoingLockObject_52; }
	inline RuntimeObject ** get_address_of_SendOutgoingLockObject_52() { return &___SendOutgoingLockObject_52; }
	inline void set_SendOutgoingLockObject_52(RuntimeObject * value)
	{
		___SendOutgoingLockObject_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SendOutgoingLockObject_52), (void*)value);
	}

	inline static int32_t get_offset_of_DispatchLockObject_53() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___DispatchLockObject_53)); }
	inline RuntimeObject * get_DispatchLockObject_53() const { return ___DispatchLockObject_53; }
	inline RuntimeObject ** get_address_of_DispatchLockObject_53() { return &___DispatchLockObject_53; }
	inline void set_DispatchLockObject_53(RuntimeObject * value)
	{
		___DispatchLockObject_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DispatchLockObject_53), (void*)value);
	}

	inline static int32_t get_offset_of_EnqueueLock_54() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___EnqueueLock_54)); }
	inline RuntimeObject * get_EnqueueLock_54() const { return ___EnqueueLock_54; }
	inline RuntimeObject ** get_address_of_EnqueueLock_54() { return &___EnqueueLock_54; }
	inline void set_EnqueueLock_54(RuntimeObject * value)
	{
		___EnqueueLock_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnqueueLock_54), (void*)value);
	}

	inline static int32_t get_offset_of_PayloadEncryptionSecret_55() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___PayloadEncryptionSecret_55)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_PayloadEncryptionSecret_55() const { return ___PayloadEncryptionSecret_55; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_PayloadEncryptionSecret_55() { return &___PayloadEncryptionSecret_55; }
	inline void set_PayloadEncryptionSecret_55(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___PayloadEncryptionSecret_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PayloadEncryptionSecret_55), (void*)value);
	}

	inline static int32_t get_offset_of_encryptorType_56() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___encryptorType_56)); }
	inline Type_t * get_encryptorType_56() const { return ___encryptorType_56; }
	inline Type_t ** get_address_of_encryptorType_56() { return &___encryptorType_56; }
	inline void set_encryptorType_56(Type_t * value)
	{
		___encryptorType_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encryptorType_56), (void*)value);
	}

	inline static int32_t get_offset_of_Encryptor_57() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___Encryptor_57)); }
	inline RuntimeObject* get_Encryptor_57() const { return ___Encryptor_57; }
	inline RuntimeObject** get_address_of_Encryptor_57() { return &___Encryptor_57; }
	inline void set_Encryptor_57(RuntimeObject* value)
	{
		___Encryptor_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Encryptor_57), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCountDiscardedU3Ek__BackingField_58() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CCountDiscardedU3Ek__BackingField_58)); }
	inline int32_t get_U3CCountDiscardedU3Ek__BackingField_58() const { return ___U3CCountDiscardedU3Ek__BackingField_58; }
	inline int32_t* get_address_of_U3CCountDiscardedU3Ek__BackingField_58() { return &___U3CCountDiscardedU3Ek__BackingField_58; }
	inline void set_U3CCountDiscardedU3Ek__BackingField_58(int32_t value)
	{
		___U3CCountDiscardedU3Ek__BackingField_58 = value;
	}

	inline static int32_t get_offset_of_U3CDeltaUnreliableNumberU3Ek__BackingField_59() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223, ___U3CDeltaUnreliableNumberU3Ek__BackingField_59)); }
	inline int32_t get_U3CDeltaUnreliableNumberU3Ek__BackingField_59() const { return ___U3CDeltaUnreliableNumberU3Ek__BackingField_59; }
	inline int32_t* get_address_of_U3CDeltaUnreliableNumberU3Ek__BackingField_59() { return &___U3CDeltaUnreliableNumberU3Ek__BackingField_59; }
	inline void set_U3CDeltaUnreliableNumberU3Ek__BackingField_59(int32_t value)
	{
		___U3CDeltaUnreliableNumberU3Ek__BackingField_59 = value;
	}
};

struct PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223_StaticFields
{
public:
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::NoNativeCallbacks
	bool ___NoNativeCallbacks_9;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::checkedNativeLibs
	bool ___checkedNativeLibs_13;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useSocketNative
	bool ___useSocketNative_14;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useDiffieHellmanCryptoProvider
	bool ___useDiffieHellmanCryptoProvider_15;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::useEncryptorNative
	bool ___useEncryptorNative_16;
	// System.Int32 ExitGames.Client.Photon.PhotonPeer::OutgoingStreamBufferSize
	int32_t ___OutgoingStreamBufferSize_39;
	// System.Boolean ExitGames.Client.Photon.PhotonPeer::AsyncKeyExchange
	bool ___AsyncKeyExchange_42;

public:
	inline static int32_t get_offset_of_NoNativeCallbacks_9() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223_StaticFields, ___NoNativeCallbacks_9)); }
	inline bool get_NoNativeCallbacks_9() const { return ___NoNativeCallbacks_9; }
	inline bool* get_address_of_NoNativeCallbacks_9() { return &___NoNativeCallbacks_9; }
	inline void set_NoNativeCallbacks_9(bool value)
	{
		___NoNativeCallbacks_9 = value;
	}

	inline static int32_t get_offset_of_checkedNativeLibs_13() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223_StaticFields, ___checkedNativeLibs_13)); }
	inline bool get_checkedNativeLibs_13() const { return ___checkedNativeLibs_13; }
	inline bool* get_address_of_checkedNativeLibs_13() { return &___checkedNativeLibs_13; }
	inline void set_checkedNativeLibs_13(bool value)
	{
		___checkedNativeLibs_13 = value;
	}

	inline static int32_t get_offset_of_useSocketNative_14() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223_StaticFields, ___useSocketNative_14)); }
	inline bool get_useSocketNative_14() const { return ___useSocketNative_14; }
	inline bool* get_address_of_useSocketNative_14() { return &___useSocketNative_14; }
	inline void set_useSocketNative_14(bool value)
	{
		___useSocketNative_14 = value;
	}

	inline static int32_t get_offset_of_useDiffieHellmanCryptoProvider_15() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223_StaticFields, ___useDiffieHellmanCryptoProvider_15)); }
	inline bool get_useDiffieHellmanCryptoProvider_15() const { return ___useDiffieHellmanCryptoProvider_15; }
	inline bool* get_address_of_useDiffieHellmanCryptoProvider_15() { return &___useDiffieHellmanCryptoProvider_15; }
	inline void set_useDiffieHellmanCryptoProvider_15(bool value)
	{
		___useDiffieHellmanCryptoProvider_15 = value;
	}

	inline static int32_t get_offset_of_useEncryptorNative_16() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223_StaticFields, ___useEncryptorNative_16)); }
	inline bool get_useEncryptorNative_16() const { return ___useEncryptorNative_16; }
	inline bool* get_address_of_useEncryptorNative_16() { return &___useEncryptorNative_16; }
	inline void set_useEncryptorNative_16(bool value)
	{
		___useEncryptorNative_16 = value;
	}

	inline static int32_t get_offset_of_OutgoingStreamBufferSize_39() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223_StaticFields, ___OutgoingStreamBufferSize_39)); }
	inline int32_t get_OutgoingStreamBufferSize_39() const { return ___OutgoingStreamBufferSize_39; }
	inline int32_t* get_address_of_OutgoingStreamBufferSize_39() { return &___OutgoingStreamBufferSize_39; }
	inline void set_OutgoingStreamBufferSize_39(int32_t value)
	{
		___OutgoingStreamBufferSize_39 = value;
	}

	inline static int32_t get_offset_of_AsyncKeyExchange_42() { return static_cast<int32_t>(offsetof(PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223_StaticFields, ___AsyncKeyExchange_42)); }
	inline bool get_AsyncKeyExchange_42() const { return ___AsyncKeyExchange_42; }
	inline bool* get_address_of_AsyncKeyExchange_42() { return &___AsyncKeyExchange_42; }
	inline void set_AsyncKeyExchange_42(bool value)
	{
		___AsyncKeyExchange_42 = value;
	}
};


// Photon.Realtime.AuthenticationValues
struct  AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13  : public RuntimeObject
{
public:
	// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::authType
	uint8_t ___authType_0;
	// System.String Photon.Realtime.AuthenticationValues::<AuthGetParameters>k__BackingField
	String_t* ___U3CAuthGetParametersU3Ek__BackingField_1;
	// System.Object Photon.Realtime.AuthenticationValues::<AuthPostData>k__BackingField
	RuntimeObject * ___U3CAuthPostDataU3Ek__BackingField_2;
	// System.Object Photon.Realtime.AuthenticationValues::<Token>k__BackingField
	RuntimeObject * ___U3CTokenU3Ek__BackingField_3;
	// System.String Photon.Realtime.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_authType_0() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___authType_0)); }
	inline uint8_t get_authType_0() const { return ___authType_0; }
	inline uint8_t* get_address_of_authType_0() { return &___authType_0; }
	inline void set_authType_0(uint8_t value)
	{
		___authType_0 = value;
	}

	inline static int32_t get_offset_of_U3CAuthGetParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___U3CAuthGetParametersU3Ek__BackingField_1)); }
	inline String_t* get_U3CAuthGetParametersU3Ek__BackingField_1() const { return ___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAuthGetParametersU3Ek__BackingField_1() { return &___U3CAuthGetParametersU3Ek__BackingField_1; }
	inline void set_U3CAuthGetParametersU3Ek__BackingField_1(String_t* value)
	{
		___U3CAuthGetParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthGetParametersU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthPostDataU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___U3CAuthPostDataU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CAuthPostDataU3Ek__BackingField_2() const { return ___U3CAuthPostDataU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CAuthPostDataU3Ek__BackingField_2() { return &___U3CAuthPostDataU3Ek__BackingField_2; }
	inline void set_U3CAuthPostDataU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CAuthPostDataU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthPostDataU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTokenU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___U3CTokenU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CTokenU3Ek__BackingField_3() const { return ___U3CTokenU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CTokenU3Ek__BackingField_3() { return &___U3CTokenU3Ek__BackingField_3; }
	inline void set_U3CTokenU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CTokenU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTokenU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13, ___U3CUserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_4() const { return ___U3CUserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_4() { return &___U3CUserIdU3Ek__BackingField_4; }
	inline void set_U3CUserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_4), (void*)value);
	}
};


// Photon.Realtime.TypedLobby
struct  TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5  : public RuntimeObject
{
public:
	// System.String Photon.Realtime.TypedLobby::Name
	String_t* ___Name_0;
	// Photon.Realtime.LobbyType Photon.Realtime.TypedLobby::Type
	uint8_t ___Type_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5, ___Type_1)); }
	inline uint8_t get_Type_1() const { return ___Type_1; }
	inline uint8_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(uint8_t value)
	{
		___Type_1 = value;
	}
};

struct TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields
{
public:
	// Photon.Realtime.TypedLobby Photon.Realtime.TypedLobby::Default
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___Default_2;

public:
	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields, ___Default_2)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_Default_2() const { return ___Default_2; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Default_2), (void*)value);
	}
};


// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol>
struct  Nullable_1_tDFE035ECABD840AF5AA579031246DEC1C5B329C0 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tDFE035ECABD840AF5AA579031246DEC1C5B329C0, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tDFE035ECABD840AF5AA579031246DEC1C5B329C0, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_t7B542280A22F0EC4EAC2061C29178845847A8B2D  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t25C1BD92C42BE94426E300787C13C452CB89B381 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t7FE623A666B49176DE123306221193E888A12F5F* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t4D5CB06963501D32847C057B57157D6DC49CA759 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// Photon.Realtime.LoadBalancingClient
struct  LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A  : public RuntimeObject
{
public:
	// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::<LoadBalancingPeer>k__BackingField
	LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * ___U3CLoadBalancingPeerU3Ek__BackingField_0;
	// System.String Photon.Realtime.LoadBalancingClient::<AppVersion>k__BackingField
	String_t* ___U3CAppVersionU3Ek__BackingField_1;
	// System.String Photon.Realtime.LoadBalancingClient::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_2;
	// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::<AuthValues>k__BackingField
	AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * ___U3CAuthValuesU3Ek__BackingField_3;
	// Photon.Realtime.AuthModeOption Photon.Realtime.LoadBalancingClient::AuthMode
	int32_t ___AuthMode_4;
	// Photon.Realtime.EncryptionMode Photon.Realtime.LoadBalancingClient::EncryptionMode
	int32_t ___EncryptionMode_5;
	// System.Nullable`1<ExitGames.Client.Photon.ConnectionProtocol> Photon.Realtime.LoadBalancingClient::<ExpectedProtocol>k__BackingField
	Nullable_1_tDFE035ECABD840AF5AA579031246DEC1C5B329C0  ___U3CExpectedProtocolU3Ek__BackingField_6;
	// System.Object Photon.Realtime.LoadBalancingClient::tokenCache
	RuntimeObject * ___tokenCache_7;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<IsUsingNameServer>k__BackingField
	bool ___U3CIsUsingNameServerU3Ek__BackingField_8;
	// System.String Photon.Realtime.LoadBalancingClient::NameServerHost
	String_t* ___NameServerHost_9;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<UseAlternativeUdpPorts>k__BackingField
	bool ___U3CUseAlternativeUdpPortsU3Ek__BackingField_11;
	// Photon.Realtime.PhotonPortDefinition Photon.Realtime.LoadBalancingClient::ServerPortOverrides
	PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  ___ServerPortOverrides_12;
	// System.Boolean Photon.Realtime.LoadBalancingClient::<EnableProtocolFallback>k__BackingField
	bool ___U3CEnableProtocolFallbackU3Ek__BackingField_13;
	// System.String Photon.Realtime.LoadBalancingClient::<MasterServerAddress>k__BackingField
	String_t* ___U3CMasterServerAddressU3Ek__BackingField_14;
	// System.String Photon.Realtime.LoadBalancingClient::<GameServerAddress>k__BackingField
	String_t* ___U3CGameServerAddressU3Ek__BackingField_15;
	// Photon.Realtime.ServerConnection Photon.Realtime.LoadBalancingClient::<Server>k__BackingField
	int32_t ___U3CServerU3Ek__BackingField_16;
	// System.String Photon.Realtime.LoadBalancingClient::ProxyServerAddress
	String_t* ___ProxyServerAddress_17;
	// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::state
	int32_t ___state_18;
	// System.Action`2<Photon.Realtime.ClientState,Photon.Realtime.ClientState> Photon.Realtime.LoadBalancingClient::StateChanged
	Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * ___StateChanged_19;
	// System.Action`1<ExitGames.Client.Photon.EventData> Photon.Realtime.LoadBalancingClient::EventReceived
	Action_1_t610B644779237405AA5CB556F71DBF01E8CF2C2A * ___EventReceived_20;
	// System.Action`1<ExitGames.Client.Photon.OperationResponse> Photon.Realtime.LoadBalancingClient::OpResponseReceived
	Action_1_t5C0057464C2A8890BD445710F6546170A3B3B43B * ___OpResponseReceived_21;
	// Photon.Realtime.ConnectionCallbacksContainer Photon.Realtime.LoadBalancingClient::ConnectionCallbackTargets
	ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * ___ConnectionCallbackTargets_22;
	// Photon.Realtime.MatchMakingCallbacksContainer Photon.Realtime.LoadBalancingClient::MatchMakingCallbackTargets
	MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * ___MatchMakingCallbackTargets_23;
	// Photon.Realtime.InRoomCallbacksContainer Photon.Realtime.LoadBalancingClient::InRoomCallbackTargets
	InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * ___InRoomCallbackTargets_24;
	// Photon.Realtime.LobbyCallbacksContainer Photon.Realtime.LoadBalancingClient::LobbyCallbackTargets
	LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * ___LobbyCallbackTargets_25;
	// Photon.Realtime.WebRpcCallbacksContainer Photon.Realtime.LoadBalancingClient::WebRpcCallbackTargets
	WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * ___WebRpcCallbackTargets_26;
	// Photon.Realtime.ErrorInfoCallbacksContainer Photon.Realtime.LoadBalancingClient::ErrorInfoCallbackTargets
	ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * ___ErrorInfoCallbackTargets_27;
	// Photon.Realtime.DisconnectCause Photon.Realtime.LoadBalancingClient::<DisconnectedCause>k__BackingField
	int32_t ___U3CDisconnectedCauseU3Ek__BackingField_28;
	// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::<CurrentLobby>k__BackingField
	TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * ___U3CCurrentLobbyU3Ek__BackingField_29;
	// System.Boolean Photon.Realtime.LoadBalancingClient::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_30;
	// System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo> Photon.Realtime.LoadBalancingClient::lobbyStatistics
	List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB * ___lobbyStatistics_31;
	// Photon.Realtime.Player Photon.Realtime.LoadBalancingClient::<LocalPlayer>k__BackingField
	Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___U3CLocalPlayerU3Ek__BackingField_32;
	// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::<CurrentRoom>k__BackingField
	Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * ___U3CCurrentRoomU3Ek__BackingField_33;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersOnMasterCount>k__BackingField
	int32_t ___U3CPlayersOnMasterCountU3Ek__BackingField_34;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<PlayersInRoomsCount>k__BackingField
	int32_t ___U3CPlayersInRoomsCountU3Ek__BackingField_35;
	// System.Int32 Photon.Realtime.LoadBalancingClient::<RoomsCount>k__BackingField
	int32_t ___U3CRoomsCountU3Ek__BackingField_36;
	// Photon.Realtime.JoinType Photon.Realtime.LoadBalancingClient::lastJoinType
	int32_t ___lastJoinType_37;
	// Photon.Realtime.EnterRoomParams Photon.Realtime.LoadBalancingClient::enterRoomParamsCache
	EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * ___enterRoomParamsCache_38;
	// ExitGames.Client.Photon.OperationResponse Photon.Realtime.LoadBalancingClient::failedRoomEntryOperation
	OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * ___failedRoomEntryOperation_39;
	// System.String[] Photon.Realtime.LoadBalancingClient::friendListRequested
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___friendListRequested_41;
	// System.String Photon.Realtime.LoadBalancingClient::<CloudRegion>k__BackingField
	String_t* ___U3CCloudRegionU3Ek__BackingField_42;
	// System.String Photon.Realtime.LoadBalancingClient::<CurrentCluster>k__BackingField
	String_t* ___U3CCurrentClusterU3Ek__BackingField_43;
	// Photon.Realtime.RegionHandler Photon.Realtime.LoadBalancingClient::RegionHandler
	RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___RegionHandler_44;
	// System.String Photon.Realtime.LoadBalancingClient::bestRegionSummaryFromStorage
	String_t* ___bestRegionSummaryFromStorage_45;
	// System.String Photon.Realtime.LoadBalancingClient::SummaryToCache
	String_t* ___SummaryToCache_46;
	// System.Boolean Photon.Realtime.LoadBalancingClient::connectToBestRegion
	bool ___connectToBestRegion_47;
	// System.Collections.Generic.Queue`1<Photon.Realtime.LoadBalancingClient_CallbackTargetChange> Photon.Realtime.LoadBalancingClient::callbackTargetChanges
	Queue_1_t0C3EAD846247542DE43450BBC5ECDFDD0AC08FD5 * ___callbackTargetChanges_48;
	// System.Collections.Generic.HashSet`1<System.Object> Photon.Realtime.LoadBalancingClient::callbackTargets
	HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * ___callbackTargets_49;
	// System.Int32 Photon.Realtime.LoadBalancingClient::NameServerPortInAppSettings
	int32_t ___NameServerPortInAppSettings_50;

public:
	inline static int32_t get_offset_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLoadBalancingPeerU3Ek__BackingField_0)); }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * get_U3CLoadBalancingPeerU3Ek__BackingField_0() const { return ___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 ** get_address_of_U3CLoadBalancingPeerU3Ek__BackingField_0() { return &___U3CLoadBalancingPeerU3Ek__BackingField_0; }
	inline void set_U3CLoadBalancingPeerU3Ek__BackingField_0(LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * value)
	{
		___U3CLoadBalancingPeerU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoadBalancingPeerU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppVersionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppVersionU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppVersionU3Ek__BackingField_1() const { return ___U3CAppVersionU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppVersionU3Ek__BackingField_1() { return &___U3CAppVersionU3Ek__BackingField_1; }
	inline void set_U3CAppVersionU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppVersionU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppVersionU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAppIdU3Ek__BackingField_2)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_2() const { return ___U3CAppIdU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_2() { return &___U3CAppIdU3Ek__BackingField_2; }
	inline void set_U3CAppIdU3Ek__BackingField_2(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAuthValuesU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CAuthValuesU3Ek__BackingField_3)); }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * get_U3CAuthValuesU3Ek__BackingField_3() const { return ___U3CAuthValuesU3Ek__BackingField_3; }
	inline AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 ** get_address_of_U3CAuthValuesU3Ek__BackingField_3() { return &___U3CAuthValuesU3Ek__BackingField_3; }
	inline void set_U3CAuthValuesU3Ek__BackingField_3(AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * value)
	{
		___U3CAuthValuesU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAuthValuesU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_AuthMode_4() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___AuthMode_4)); }
	inline int32_t get_AuthMode_4() const { return ___AuthMode_4; }
	inline int32_t* get_address_of_AuthMode_4() { return &___AuthMode_4; }
	inline void set_AuthMode_4(int32_t value)
	{
		___AuthMode_4 = value;
	}

	inline static int32_t get_offset_of_EncryptionMode_5() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EncryptionMode_5)); }
	inline int32_t get_EncryptionMode_5() const { return ___EncryptionMode_5; }
	inline int32_t* get_address_of_EncryptionMode_5() { return &___EncryptionMode_5; }
	inline void set_EncryptionMode_5(int32_t value)
	{
		___EncryptionMode_5 = value;
	}

	inline static int32_t get_offset_of_U3CExpectedProtocolU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CExpectedProtocolU3Ek__BackingField_6)); }
	inline Nullable_1_tDFE035ECABD840AF5AA579031246DEC1C5B329C0  get_U3CExpectedProtocolU3Ek__BackingField_6() const { return ___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline Nullable_1_tDFE035ECABD840AF5AA579031246DEC1C5B329C0 * get_address_of_U3CExpectedProtocolU3Ek__BackingField_6() { return &___U3CExpectedProtocolU3Ek__BackingField_6; }
	inline void set_U3CExpectedProtocolU3Ek__BackingField_6(Nullable_1_tDFE035ECABD840AF5AA579031246DEC1C5B329C0  value)
	{
		___U3CExpectedProtocolU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_tokenCache_7() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___tokenCache_7)); }
	inline RuntimeObject * get_tokenCache_7() const { return ___tokenCache_7; }
	inline RuntimeObject ** get_address_of_tokenCache_7() { return &___tokenCache_7; }
	inline void set_tokenCache_7(RuntimeObject * value)
	{
		___tokenCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tokenCache_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CIsUsingNameServerU3Ek__BackingField_8)); }
	inline bool get_U3CIsUsingNameServerU3Ek__BackingField_8() const { return ___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIsUsingNameServerU3Ek__BackingField_8() { return &___U3CIsUsingNameServerU3Ek__BackingField_8; }
	inline void set_U3CIsUsingNameServerU3Ek__BackingField_8(bool value)
	{
		___U3CIsUsingNameServerU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_NameServerHost_9() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerHost_9)); }
	inline String_t* get_NameServerHost_9() const { return ___NameServerHost_9; }
	inline String_t** get_address_of_NameServerHost_9() { return &___NameServerHost_9; }
	inline void set_NameServerHost_9(String_t* value)
	{
		___NameServerHost_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameServerHost_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CUseAlternativeUdpPortsU3Ek__BackingField_11)); }
	inline bool get_U3CUseAlternativeUdpPortsU3Ek__BackingField_11() const { return ___U3CUseAlternativeUdpPortsU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CUseAlternativeUdpPortsU3Ek__BackingField_11() { return &___U3CUseAlternativeUdpPortsU3Ek__BackingField_11; }
	inline void set_U3CUseAlternativeUdpPortsU3Ek__BackingField_11(bool value)
	{
		___U3CUseAlternativeUdpPortsU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_ServerPortOverrides_12() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ServerPortOverrides_12)); }
	inline PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  get_ServerPortOverrides_12() const { return ___ServerPortOverrides_12; }
	inline PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F * get_address_of_ServerPortOverrides_12() { return &___ServerPortOverrides_12; }
	inline void set_ServerPortOverrides_12(PhotonPortDefinition_t98FF5B297A64592AA21BA812FD0F404EAC7A854F  value)
	{
		___ServerPortOverrides_12 = value;
	}

	inline static int32_t get_offset_of_U3CEnableProtocolFallbackU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CEnableProtocolFallbackU3Ek__BackingField_13)); }
	inline bool get_U3CEnableProtocolFallbackU3Ek__BackingField_13() const { return ___U3CEnableProtocolFallbackU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CEnableProtocolFallbackU3Ek__BackingField_13() { return &___U3CEnableProtocolFallbackU3Ek__BackingField_13; }
	inline void set_U3CEnableProtocolFallbackU3Ek__BackingField_13(bool value)
	{
		___U3CEnableProtocolFallbackU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CMasterServerAddressU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CMasterServerAddressU3Ek__BackingField_14)); }
	inline String_t* get_U3CMasterServerAddressU3Ek__BackingField_14() const { return ___U3CMasterServerAddressU3Ek__BackingField_14; }
	inline String_t** get_address_of_U3CMasterServerAddressU3Ek__BackingField_14() { return &___U3CMasterServerAddressU3Ek__BackingField_14; }
	inline void set_U3CMasterServerAddressU3Ek__BackingField_14(String_t* value)
	{
		___U3CMasterServerAddressU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMasterServerAddressU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGameServerAddressU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CGameServerAddressU3Ek__BackingField_15)); }
	inline String_t* get_U3CGameServerAddressU3Ek__BackingField_15() const { return ___U3CGameServerAddressU3Ek__BackingField_15; }
	inline String_t** get_address_of_U3CGameServerAddressU3Ek__BackingField_15() { return &___U3CGameServerAddressU3Ek__BackingField_15; }
	inline void set_U3CGameServerAddressU3Ek__BackingField_15(String_t* value)
	{
		___U3CGameServerAddressU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGameServerAddressU3Ek__BackingField_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CServerU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CServerU3Ek__BackingField_16)); }
	inline int32_t get_U3CServerU3Ek__BackingField_16() const { return ___U3CServerU3Ek__BackingField_16; }
	inline int32_t* get_address_of_U3CServerU3Ek__BackingField_16() { return &___U3CServerU3Ek__BackingField_16; }
	inline void set_U3CServerU3Ek__BackingField_16(int32_t value)
	{
		___U3CServerU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_ProxyServerAddress_17() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ProxyServerAddress_17)); }
	inline String_t* get_ProxyServerAddress_17() const { return ___ProxyServerAddress_17; }
	inline String_t** get_address_of_ProxyServerAddress_17() { return &___ProxyServerAddress_17; }
	inline void set_ProxyServerAddress_17(String_t* value)
	{
		___ProxyServerAddress_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProxyServerAddress_17), (void*)value);
	}

	inline static int32_t get_offset_of_state_18() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___state_18)); }
	inline int32_t get_state_18() const { return ___state_18; }
	inline int32_t* get_address_of_state_18() { return &___state_18; }
	inline void set_state_18(int32_t value)
	{
		___state_18 = value;
	}

	inline static int32_t get_offset_of_StateChanged_19() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___StateChanged_19)); }
	inline Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * get_StateChanged_19() const { return ___StateChanged_19; }
	inline Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 ** get_address_of_StateChanged_19() { return &___StateChanged_19; }
	inline void set_StateChanged_19(Action_2_tCE9217B831ECE782D5768BF595A972B6CE75A070 * value)
	{
		___StateChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_EventReceived_20() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EventReceived_20)); }
	inline Action_1_t610B644779237405AA5CB556F71DBF01E8CF2C2A * get_EventReceived_20() const { return ___EventReceived_20; }
	inline Action_1_t610B644779237405AA5CB556F71DBF01E8CF2C2A ** get_address_of_EventReceived_20() { return &___EventReceived_20; }
	inline void set_EventReceived_20(Action_1_t610B644779237405AA5CB556F71DBF01E8CF2C2A * value)
	{
		___EventReceived_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventReceived_20), (void*)value);
	}

	inline static int32_t get_offset_of_OpResponseReceived_21() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___OpResponseReceived_21)); }
	inline Action_1_t5C0057464C2A8890BD445710F6546170A3B3B43B * get_OpResponseReceived_21() const { return ___OpResponseReceived_21; }
	inline Action_1_t5C0057464C2A8890BD445710F6546170A3B3B43B ** get_address_of_OpResponseReceived_21() { return &___OpResponseReceived_21; }
	inline void set_OpResponseReceived_21(Action_1_t5C0057464C2A8890BD445710F6546170A3B3B43B * value)
	{
		___OpResponseReceived_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OpResponseReceived_21), (void*)value);
	}

	inline static int32_t get_offset_of_ConnectionCallbackTargets_22() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ConnectionCallbackTargets_22)); }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * get_ConnectionCallbackTargets_22() const { return ___ConnectionCallbackTargets_22; }
	inline ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 ** get_address_of_ConnectionCallbackTargets_22() { return &___ConnectionCallbackTargets_22; }
	inline void set_ConnectionCallbackTargets_22(ConnectionCallbacksContainer_tDCE59A1A1B21F1438DACBE458620B2942BB2A110 * value)
	{
		___ConnectionCallbackTargets_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConnectionCallbackTargets_22), (void*)value);
	}

	inline static int32_t get_offset_of_MatchMakingCallbackTargets_23() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___MatchMakingCallbackTargets_23)); }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * get_MatchMakingCallbackTargets_23() const { return ___MatchMakingCallbackTargets_23; }
	inline MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 ** get_address_of_MatchMakingCallbackTargets_23() { return &___MatchMakingCallbackTargets_23; }
	inline void set_MatchMakingCallbackTargets_23(MatchMakingCallbacksContainer_tE6BA3F44DC157B50650F599CD8C26D23E7153CC3 * value)
	{
		___MatchMakingCallbackTargets_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MatchMakingCallbackTargets_23), (void*)value);
	}

	inline static int32_t get_offset_of_InRoomCallbackTargets_24() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___InRoomCallbackTargets_24)); }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * get_InRoomCallbackTargets_24() const { return ___InRoomCallbackTargets_24; }
	inline InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D ** get_address_of_InRoomCallbackTargets_24() { return &___InRoomCallbackTargets_24; }
	inline void set_InRoomCallbackTargets_24(InRoomCallbacksContainer_tD26EF1A78F7419C0FF1B25FBD0CCEA40D3EB810D * value)
	{
		___InRoomCallbackTargets_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InRoomCallbackTargets_24), (void*)value);
	}

	inline static int32_t get_offset_of_LobbyCallbackTargets_25() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___LobbyCallbackTargets_25)); }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * get_LobbyCallbackTargets_25() const { return ___LobbyCallbackTargets_25; }
	inline LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 ** get_address_of_LobbyCallbackTargets_25() { return &___LobbyCallbackTargets_25; }
	inline void set_LobbyCallbackTargets_25(LobbyCallbacksContainer_t42830CD7E8C5C38D10AB8157E9EDECF9B26C2571 * value)
	{
		___LobbyCallbackTargets_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LobbyCallbackTargets_25), (void*)value);
	}

	inline static int32_t get_offset_of_WebRpcCallbackTargets_26() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___WebRpcCallbackTargets_26)); }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * get_WebRpcCallbackTargets_26() const { return ___WebRpcCallbackTargets_26; }
	inline WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 ** get_address_of_WebRpcCallbackTargets_26() { return &___WebRpcCallbackTargets_26; }
	inline void set_WebRpcCallbackTargets_26(WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * value)
	{
		___WebRpcCallbackTargets_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WebRpcCallbackTargets_26), (void*)value);
	}

	inline static int32_t get_offset_of_ErrorInfoCallbackTargets_27() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___ErrorInfoCallbackTargets_27)); }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * get_ErrorInfoCallbackTargets_27() const { return ___ErrorInfoCallbackTargets_27; }
	inline ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 ** get_address_of_ErrorInfoCallbackTargets_27() { return &___ErrorInfoCallbackTargets_27; }
	inline void set_ErrorInfoCallbackTargets_27(ErrorInfoCallbacksContainer_t274C580936A0AB9072F70E207B78EB8ADDC4EC22 * value)
	{
		___ErrorInfoCallbackTargets_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorInfoCallbackTargets_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDisconnectedCauseU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CDisconnectedCauseU3Ek__BackingField_28)); }
	inline int32_t get_U3CDisconnectedCauseU3Ek__BackingField_28() const { return ___U3CDisconnectedCauseU3Ek__BackingField_28; }
	inline int32_t* get_address_of_U3CDisconnectedCauseU3Ek__BackingField_28() { return &___U3CDisconnectedCauseU3Ek__BackingField_28; }
	inline void set_U3CDisconnectedCauseU3Ek__BackingField_28(int32_t value)
	{
		___U3CDisconnectedCauseU3Ek__BackingField_28 = value;
	}

	inline static int32_t get_offset_of_U3CCurrentLobbyU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentLobbyU3Ek__BackingField_29)); }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * get_U3CCurrentLobbyU3Ek__BackingField_29() const { return ___U3CCurrentLobbyU3Ek__BackingField_29; }
	inline TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 ** get_address_of_U3CCurrentLobbyU3Ek__BackingField_29() { return &___U3CCurrentLobbyU3Ek__BackingField_29; }
	inline void set_U3CCurrentLobbyU3Ek__BackingField_29(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * value)
	{
		___U3CCurrentLobbyU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentLobbyU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_30() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___EnableLobbyStatistics_30)); }
	inline bool get_EnableLobbyStatistics_30() const { return ___EnableLobbyStatistics_30; }
	inline bool* get_address_of_EnableLobbyStatistics_30() { return &___EnableLobbyStatistics_30; }
	inline void set_EnableLobbyStatistics_30(bool value)
	{
		___EnableLobbyStatistics_30 = value;
	}

	inline static int32_t get_offset_of_lobbyStatistics_31() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lobbyStatistics_31)); }
	inline List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB * get_lobbyStatistics_31() const { return ___lobbyStatistics_31; }
	inline List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB ** get_address_of_lobbyStatistics_31() { return &___lobbyStatistics_31; }
	inline void set_lobbyStatistics_31(List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB * value)
	{
		___lobbyStatistics_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobbyStatistics_31), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLocalPlayerU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CLocalPlayerU3Ek__BackingField_32)); }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * get_U3CLocalPlayerU3Ek__BackingField_32() const { return ___U3CLocalPlayerU3Ek__BackingField_32; }
	inline Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 ** get_address_of_U3CLocalPlayerU3Ek__BackingField_32() { return &___U3CLocalPlayerU3Ek__BackingField_32; }
	inline void set_U3CLocalPlayerU3Ek__BackingField_32(Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * value)
	{
		___U3CLocalPlayerU3Ek__BackingField_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLocalPlayerU3Ek__BackingField_32), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentRoomU3Ek__BackingField_33() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentRoomU3Ek__BackingField_33)); }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * get_U3CCurrentRoomU3Ek__BackingField_33() const { return ___U3CCurrentRoomU3Ek__BackingField_33; }
	inline Room_t5DFC39DD6736A2641374564EC6C31352BE33000D ** get_address_of_U3CCurrentRoomU3Ek__BackingField_33() { return &___U3CCurrentRoomU3Ek__BackingField_33; }
	inline void set_U3CCurrentRoomU3Ek__BackingField_33(Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * value)
	{
		___U3CCurrentRoomU3Ek__BackingField_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentRoomU3Ek__BackingField_33), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPlayersOnMasterCountU3Ek__BackingField_34() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersOnMasterCountU3Ek__BackingField_34)); }
	inline int32_t get_U3CPlayersOnMasterCountU3Ek__BackingField_34() const { return ___U3CPlayersOnMasterCountU3Ek__BackingField_34; }
	inline int32_t* get_address_of_U3CPlayersOnMasterCountU3Ek__BackingField_34() { return &___U3CPlayersOnMasterCountU3Ek__BackingField_34; }
	inline void set_U3CPlayersOnMasterCountU3Ek__BackingField_34(int32_t value)
	{
		___U3CPlayersOnMasterCountU3Ek__BackingField_34 = value;
	}

	inline static int32_t get_offset_of_U3CPlayersInRoomsCountU3Ek__BackingField_35() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CPlayersInRoomsCountU3Ek__BackingField_35)); }
	inline int32_t get_U3CPlayersInRoomsCountU3Ek__BackingField_35() const { return ___U3CPlayersInRoomsCountU3Ek__BackingField_35; }
	inline int32_t* get_address_of_U3CPlayersInRoomsCountU3Ek__BackingField_35() { return &___U3CPlayersInRoomsCountU3Ek__BackingField_35; }
	inline void set_U3CPlayersInRoomsCountU3Ek__BackingField_35(int32_t value)
	{
		___U3CPlayersInRoomsCountU3Ek__BackingField_35 = value;
	}

	inline static int32_t get_offset_of_U3CRoomsCountU3Ek__BackingField_36() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CRoomsCountU3Ek__BackingField_36)); }
	inline int32_t get_U3CRoomsCountU3Ek__BackingField_36() const { return ___U3CRoomsCountU3Ek__BackingField_36; }
	inline int32_t* get_address_of_U3CRoomsCountU3Ek__BackingField_36() { return &___U3CRoomsCountU3Ek__BackingField_36; }
	inline void set_U3CRoomsCountU3Ek__BackingField_36(int32_t value)
	{
		___U3CRoomsCountU3Ek__BackingField_36 = value;
	}

	inline static int32_t get_offset_of_lastJoinType_37() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___lastJoinType_37)); }
	inline int32_t get_lastJoinType_37() const { return ___lastJoinType_37; }
	inline int32_t* get_address_of_lastJoinType_37() { return &___lastJoinType_37; }
	inline void set_lastJoinType_37(int32_t value)
	{
		___lastJoinType_37 = value;
	}

	inline static int32_t get_offset_of_enterRoomParamsCache_38() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___enterRoomParamsCache_38)); }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * get_enterRoomParamsCache_38() const { return ___enterRoomParamsCache_38; }
	inline EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 ** get_address_of_enterRoomParamsCache_38() { return &___enterRoomParamsCache_38; }
	inline void set_enterRoomParamsCache_38(EnterRoomParams_t35117DAFF025133E50BB2CFA7864669F6CED1942 * value)
	{
		___enterRoomParamsCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enterRoomParamsCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_failedRoomEntryOperation_39() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___failedRoomEntryOperation_39)); }
	inline OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * get_failedRoomEntryOperation_39() const { return ___failedRoomEntryOperation_39; }
	inline OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 ** get_address_of_failedRoomEntryOperation_39() { return &___failedRoomEntryOperation_39; }
	inline void set_failedRoomEntryOperation_39(OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * value)
	{
		___failedRoomEntryOperation_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___failedRoomEntryOperation_39), (void*)value);
	}

	inline static int32_t get_offset_of_friendListRequested_41() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___friendListRequested_41)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_friendListRequested_41() const { return ___friendListRequested_41; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_friendListRequested_41() { return &___friendListRequested_41; }
	inline void set_friendListRequested_41(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___friendListRequested_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___friendListRequested_41), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloudRegionU3Ek__BackingField_42() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCloudRegionU3Ek__BackingField_42)); }
	inline String_t* get_U3CCloudRegionU3Ek__BackingField_42() const { return ___U3CCloudRegionU3Ek__BackingField_42; }
	inline String_t** get_address_of_U3CCloudRegionU3Ek__BackingField_42() { return &___U3CCloudRegionU3Ek__BackingField_42; }
	inline void set_U3CCloudRegionU3Ek__BackingField_42(String_t* value)
	{
		___U3CCloudRegionU3Ek__BackingField_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCloudRegionU3Ek__BackingField_42), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCurrentClusterU3Ek__BackingField_43() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___U3CCurrentClusterU3Ek__BackingField_43)); }
	inline String_t* get_U3CCurrentClusterU3Ek__BackingField_43() const { return ___U3CCurrentClusterU3Ek__BackingField_43; }
	inline String_t** get_address_of_U3CCurrentClusterU3Ek__BackingField_43() { return &___U3CCurrentClusterU3Ek__BackingField_43; }
	inline void set_U3CCurrentClusterU3Ek__BackingField_43(String_t* value)
	{
		___U3CCurrentClusterU3Ek__BackingField_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCurrentClusterU3Ek__BackingField_43), (void*)value);
	}

	inline static int32_t get_offset_of_RegionHandler_44() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___RegionHandler_44)); }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * get_RegionHandler_44() const { return ___RegionHandler_44; }
	inline RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF ** get_address_of_RegionHandler_44() { return &___RegionHandler_44; }
	inline void set_RegionHandler_44(RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * value)
	{
		___RegionHandler_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RegionHandler_44), (void*)value);
	}

	inline static int32_t get_offset_of_bestRegionSummaryFromStorage_45() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___bestRegionSummaryFromStorage_45)); }
	inline String_t* get_bestRegionSummaryFromStorage_45() const { return ___bestRegionSummaryFromStorage_45; }
	inline String_t** get_address_of_bestRegionSummaryFromStorage_45() { return &___bestRegionSummaryFromStorage_45; }
	inline void set_bestRegionSummaryFromStorage_45(String_t* value)
	{
		___bestRegionSummaryFromStorage_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bestRegionSummaryFromStorage_45), (void*)value);
	}

	inline static int32_t get_offset_of_SummaryToCache_46() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___SummaryToCache_46)); }
	inline String_t* get_SummaryToCache_46() const { return ___SummaryToCache_46; }
	inline String_t** get_address_of_SummaryToCache_46() { return &___SummaryToCache_46; }
	inline void set_SummaryToCache_46(String_t* value)
	{
		___SummaryToCache_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SummaryToCache_46), (void*)value);
	}

	inline static int32_t get_offset_of_connectToBestRegion_47() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___connectToBestRegion_47)); }
	inline bool get_connectToBestRegion_47() const { return ___connectToBestRegion_47; }
	inline bool* get_address_of_connectToBestRegion_47() { return &___connectToBestRegion_47; }
	inline void set_connectToBestRegion_47(bool value)
	{
		___connectToBestRegion_47 = value;
	}

	inline static int32_t get_offset_of_callbackTargetChanges_48() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargetChanges_48)); }
	inline Queue_1_t0C3EAD846247542DE43450BBC5ECDFDD0AC08FD5 * get_callbackTargetChanges_48() const { return ___callbackTargetChanges_48; }
	inline Queue_1_t0C3EAD846247542DE43450BBC5ECDFDD0AC08FD5 ** get_address_of_callbackTargetChanges_48() { return &___callbackTargetChanges_48; }
	inline void set_callbackTargetChanges_48(Queue_1_t0C3EAD846247542DE43450BBC5ECDFDD0AC08FD5 * value)
	{
		___callbackTargetChanges_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargetChanges_48), (void*)value);
	}

	inline static int32_t get_offset_of_callbackTargets_49() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___callbackTargets_49)); }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * get_callbackTargets_49() const { return ___callbackTargets_49; }
	inline HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 ** get_address_of_callbackTargets_49() { return &___callbackTargets_49; }
	inline void set_callbackTargets_49(HashSet_1_t297CD7F944846107B388993164FCD9E317A338A3 * value)
	{
		___callbackTargets_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackTargets_49), (void*)value);
	}

	inline static int32_t get_offset_of_NameServerPortInAppSettings_50() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A, ___NameServerPortInAppSettings_50)); }
	inline int32_t get_NameServerPortInAppSettings_50() const { return ___NameServerPortInAppSettings_50; }
	inline int32_t* get_address_of_NameServerPortInAppSettings_50() { return &___NameServerPortInAppSettings_50; }
	inline void set_NameServerPortInAppSettings_50(int32_t value)
	{
		___NameServerPortInAppSettings_50 = value;
	}
};

struct LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32> Photon.Realtime.LoadBalancingClient::ProtocolToNameServerPort
	Dictionary_2_tA50C454800ADAE6F169C2C71095B18CBFF80A6B3 * ___ProtocolToNameServerPort_10;

public:
	inline static int32_t get_offset_of_ProtocolToNameServerPort_10() { return static_cast<int32_t>(offsetof(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A_StaticFields, ___ProtocolToNameServerPort_10)); }
	inline Dictionary_2_tA50C454800ADAE6F169C2C71095B18CBFF80A6B3 * get_ProtocolToNameServerPort_10() const { return ___ProtocolToNameServerPort_10; }
	inline Dictionary_2_tA50C454800ADAE6F169C2C71095B18CBFF80A6B3 ** get_address_of_ProtocolToNameServerPort_10() { return &___ProtocolToNameServerPort_10; }
	inline void set_ProtocolToNameServerPort_10(Dictionary_2_tA50C454800ADAE6F169C2C71095B18CBFF80A6B3 * value)
	{
		___ProtocolToNameServerPort_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ProtocolToNameServerPort_10), (void*)value);
	}
};


// Photon.Realtime.LoadBalancingPeer
struct  LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14  : public PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223
{
public:
	// ExitGames.Client.Photon.Pool`1<ExitGames.Client.Photon.ParameterDictionary> Photon.Realtime.LoadBalancingPeer::paramDictionaryPool
	Pool_1_tC5FA4CBD441352AFE42D7BD0DE85A0176B0CAC57 * ___paramDictionaryPool_60;

public:
	inline static int32_t get_offset_of_paramDictionaryPool_60() { return static_cast<int32_t>(offsetof(LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14, ___paramDictionaryPool_60)); }
	inline Pool_1_tC5FA4CBD441352AFE42D7BD0DE85A0176B0CAC57 * get_paramDictionaryPool_60() const { return ___paramDictionaryPool_60; }
	inline Pool_1_tC5FA4CBD441352AFE42D7BD0DE85A0176B0CAC57 ** get_address_of_paramDictionaryPool_60() { return &___paramDictionaryPool_60; }
	inline void set_paramDictionaryPool_60(Pool_1_tC5FA4CBD441352AFE42D7BD0DE85A0176B0CAC57 * value)
	{
		___paramDictionaryPool_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___paramDictionaryPool_60), (void*)value);
	}
};


// Photon.Realtime.TypedLobbyInfo
struct  TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3  : public TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5
{
public:
	// System.Int32 Photon.Realtime.TypedLobbyInfo::PlayerCount
	int32_t ___PlayerCount_3;
	// System.Int32 Photon.Realtime.TypedLobbyInfo::RoomCount
	int32_t ___RoomCount_4;

public:
	inline static int32_t get_offset_of_PlayerCount_3() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3, ___PlayerCount_3)); }
	inline int32_t get_PlayerCount_3() const { return ___PlayerCount_3; }
	inline int32_t* get_address_of_PlayerCount_3() { return &___PlayerCount_3; }
	inline void set_PlayerCount_3(int32_t value)
	{
		___PlayerCount_3 = value;
	}

	inline static int32_t get_offset_of_RoomCount_4() { return static_cast<int32_t>(offsetof(TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3, ___RoomCount_4)); }
	inline int32_t get_RoomCount_4() const { return ___RoomCount_4; }
	inline int32_t* get_address_of_RoomCount_4() { return &___RoomCount_4; }
	inline void set_RoomCount_4(int32_t value)
	{
		___RoomCount_4 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Photon.Realtime.SupportLogger
struct  SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Photon.Realtime.SupportLogger::LogTrafficStats
	bool ___LogTrafficStats_4;
	// System.Boolean Photon.Realtime.SupportLogger::loggedStillOfflineMessage
	bool ___loggedStillOfflineMessage_5;
	// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::client
	LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client_6;
	// System.Diagnostics.Stopwatch Photon.Realtime.SupportLogger::startStopwatch
	Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * ___startStopwatch_7;
	// System.Int32 Photon.Realtime.SupportLogger::pingMax
	int32_t ___pingMax_8;
	// System.Int32 Photon.Realtime.SupportLogger::pingMin
	int32_t ___pingMin_9;

public:
	inline static int32_t get_offset_of_LogTrafficStats_4() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___LogTrafficStats_4)); }
	inline bool get_LogTrafficStats_4() const { return ___LogTrafficStats_4; }
	inline bool* get_address_of_LogTrafficStats_4() { return &___LogTrafficStats_4; }
	inline void set_LogTrafficStats_4(bool value)
	{
		___LogTrafficStats_4 = value;
	}

	inline static int32_t get_offset_of_loggedStillOfflineMessage_5() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___loggedStillOfflineMessage_5)); }
	inline bool get_loggedStillOfflineMessage_5() const { return ___loggedStillOfflineMessage_5; }
	inline bool* get_address_of_loggedStillOfflineMessage_5() { return &___loggedStillOfflineMessage_5; }
	inline void set_loggedStillOfflineMessage_5(bool value)
	{
		___loggedStillOfflineMessage_5 = value;
	}

	inline static int32_t get_offset_of_client_6() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___client_6)); }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * get_client_6() const { return ___client_6; }
	inline LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A ** get_address_of_client_6() { return &___client_6; }
	inline void set_client_6(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * value)
	{
		___client_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___client_6), (void*)value);
	}

	inline static int32_t get_offset_of_startStopwatch_7() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___startStopwatch_7)); }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * get_startStopwatch_7() const { return ___startStopwatch_7; }
	inline Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 ** get_address_of_startStopwatch_7() { return &___startStopwatch_7; }
	inline void set_startStopwatch_7(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * value)
	{
		___startStopwatch_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___startStopwatch_7), (void*)value);
	}

	inline static int32_t get_offset_of_pingMax_8() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___pingMax_8)); }
	inline int32_t get_pingMax_8() const { return ___pingMax_8; }
	inline int32_t* get_address_of_pingMax_8() { return &___pingMax_8; }
	inline void set_pingMax_8(int32_t value)
	{
		___pingMax_8 = value;
	}

	inline static int32_t get_offset_of_pingMin_9() { return static_cast<int32_t>(offsetof(SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA, ___pingMin_9)); }
	inline int32_t get_pingMin_9() const { return ___pingMin_9; }
	inline int32_t* get_address_of_pingMin_9() { return &___pingMin_9; }
	inline void set_pingMin_9(int32_t value)
	{
		___pingMin_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);

// System.Void ExitGames.Client.Photon.Hashtable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hashtable__ctor_m83B97FBB80EF87E4E5E5A8C06BB8468D343491BF (Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_mEC845FB613F51CC9978E328161A17366E5C3E7A1_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_mA1BD0C8B36519C0A5FBC427B2DD4F38FD6A5044E_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865 (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.String Photon.Realtime.Extensions::ToStringFull(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Extensions_ToStringFull_m3A6988AD154019F56BED30702B4C9A7C6378399D (RuntimeObject* ___origin0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
inline int32_t Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6 (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t32F25F093828AA9F93CB11C2A2B4648FD62A09BA *, const RuntimeMethod*))Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_gshared)(__this, method);
}
// System.Boolean ExitGames.Client.Photon.Hashtable::ContainsKey(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C (Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Object ExitGames.Client.Photon.Hashtable::get_Item(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB (Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_mDBF6797EC57BE809F1E87293FD2BEAE82633B519_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::MergeStringKeys(System.Collections.IDictionary,System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_MergeStringKeys_m675D463C08471D3BC68FCEADFE4C3CFD273A98F2 (RuntimeObject* ___target0, RuntimeObject* ___addHash1, const RuntimeMethod* method);
// System.Void Photon.Realtime.Extensions::StripKeysWithNullValues(System.Collections.IDictionary)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Extensions_StripKeysWithNullValues_m7D649FA939CEC4F3206CF8B9FABED9F77911B1FB (RuntimeObject* ___original0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::RemoveCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_RemoveCallbackTarget_m38086A54319554460FBF07961518B823D8BF1E9F (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.LoadBalancingClient::AddCallbackTarget(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_AddCallbackTarget_m69C4A0FA942DBDC4194826AAF2D0A8A563882C54 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, RuntimeObject * ___target0, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_m7BD7CFAB251C14538F398D08839D82610A1D1452 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860 (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_m79B4A92BA0D8FF359C751D3E1329C421B683CD04 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.Boolean Photon.Realtime.LoadBalancingClient::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LoadBalancingClient_get_IsConnected_m56E9C924ADA67AE13BE4C2A6970091F1C424CC18 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_m6ACF5FC83F8FE5A6E744CE1E83A94CB3B0A8B7EF (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::InvokeRepeating(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, float ___time1, float ___repeatRate2, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::CancelInvoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mDD95225EF4DFBB8C00B865468DE8AFEB5D30490F (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Seconds_m33764DE0DB67C2D1A2654BEE31E379A13571EED8 (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.Int32 System.TimeSpan::get_Milliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Milliseconds_m03218976DBB2BBDFB8B7F8A7F9452C19096312CA (TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// Photon.Realtime.LoadBalancingPeer Photon.Realtime.LoadBalancingClient::get_LoadBalancingPeer()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Int32 ExitGames.Client.Photon.PhotonPeer::get_RoundTripTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonPeer_get_RoundTripTime_mEE57C6D32578D7046832338F54D47C4267D83D1D (PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223 * __this, const RuntimeMethod* method);
// Photon.Realtime.ClientState Photon.Realtime.LoadBalancingClient::get_State()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::VitalStatsToString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_VitalStatsToString_m9BD7EFA0536E1C8E8CBB8874D6E763A014A08682 (PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223 * __this, bool ___all0, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
inline void List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, int32_t, const RuntimeMethod*))List_1__ctor_mEE468B81D8E7C140F567D10FF7F5894A50EEEA57_gshared)(__this, ___capacity0, method);
}
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672 (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E (StringBuilder_t * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppId()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_m3AF2312FFE7C453D603BBFB12554430A8CC22B63_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D (StringBuilder_t * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_AppVersion()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mD9EB48C5A1FD0F2E82177806C082BE479C5DEF5D_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ClientVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ClientVersion_m617781AF8C971B30825224CAB00C24CC05C60648 (PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1_ToArray_m801D4DEF3587F60F463F04EEABE5CBE711FE5612_gshared)(__this, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4 (String_t* ___separator0, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___value1, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::AppendFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774 (StringBuilder_t * __this, String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Type ExitGames.Client.Photon.PhotonPeer::get_SocketImplementation()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * PhotonPeer_get_SocketImplementation_mBF270F1132D7C0F99DF6BE5632E5214996A058CE_inline (PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_UserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_UserId_m80D37D0BA5752ED26B90EC9FF1533A2DF860535D (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// Photon.Realtime.AuthenticationValues Photon.Realtime.LoadBalancingClient::get_AuthValues()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * LoadBalancingClient_get_AuthValues_mE56B5ADE8CC0EBB1CB9C5DFA64913AC5B36B7F02_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// Photon.Realtime.CustomAuthenticationType Photon.Realtime.AuthenticationValues::get_AuthType()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_m7644167D1D9D4B1EB47E98BF5FDA05D1B3F1770A_inline (AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_PeerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_PeerID_m39850AF21511F4082C4B949FD3B304BB595E7D58 (PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CurrentServerAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CurrentServerAddress_mE7175D3AE057A785082EEE8C8C432D194EEBB135 (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.PhotonPeer::get_ServerIpAddress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PhotonPeer_get_ServerIpAddress_mB1EAD61C7E987F1B746D3DB9137F0482ED2B332D (PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_CloudRegion()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m349B62A6F4C929E5BB6EBD0350467BA689FB0387_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void ExitGames.Client.Photon.PhotonPeer::set_TrafficStatsEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PhotonPeer_set_TrafficStatsEnabled_m6B6BA2AED98E60AFBCE254255BD4431C9C328C2F (PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_mE01B4322F8FE0D371B09056369141C47913708B9 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_m6CA4C8F6A17834D29EC812FF5E67DD7E0545E840 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// Photon.Realtime.TypedLobby Photon.Realtime.LoadBalancingClient::get_CurrentLobby()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// Photon.Realtime.Room Photon.Realtime.LoadBalancingClient::get_CurrentRoom()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.LoadBalancingClient::get_GameServerAddress()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_m51436F2C9D474DF829B97C2A18F58A2CE161B3BD_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m7431469A83F864C0DB61C16EC5772B81E5EE8495 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m9589E4FCFDBD5E7BD170F3766C2A582865659606 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_mEFE7287DA5BC1F93A221235DCA05CCFE64AB9741 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>::get_Count()
inline int32_t List_1_get_Count_mFB8C1D9F137818425336071319A7903FE4ABD021_inline (List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC (RuntimeObject * ___arg00, RuntimeObject * ___arg11, RuntimeObject * ___arg22, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_m93E5AC3140B5F2D9AA0FC06C1B8190F38ED0F4B4 (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mEEA8FDD2F2B11851C7A428C104DCC4707910DAF3 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::.ctor()
inline void List_1__ctor_mA487A5D2E718EB48089719DA1AD2715DF0500F63 (List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void Photon.Realtime.LoadBalancingClient::UpdateCallbackTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadBalancingClient_UpdateCallbackTargets_m867603F1F1E155D43ACB95FAE8902E762369C27C (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Photon.Realtime.IWebRpcCallback>::GetEnumerator()
inline Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1  List_1_GetEnumerator_m968D619CC39E270807A962EF7DB5CFB6A42A05AE (List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1  (*) (List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mF008E8C3C5383916456CBA5E9F3E921B5176D723_inline (Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::MoveNext()
inline bool Enumerator_MoveNext_mE72935B9754418217D583046D2D922521F81834F (Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Photon.Realtime.IWebRpcCallback>::Dispose()
inline void Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD (Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m200D6DB37DBCD96F2D4697EDDA7EECD25F1946A3_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m07E8025679A4F3874D6794564893CF40F1F7CB13_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.Boolean ExitGames.Client.Photon.ParameterDictionary::TryGetValue(System.Byte,System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParameterDictionary_TryGetValue_m81A3AF801239A0863C5679CAAEB5FE2517ABC0CF (ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD * __this, uint8_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m308E3FBEDB1BDA7EC5A3CEC735939BED9A3D9C69_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mF8C0D2C5256A7079923EA42D83D352665C2F4946_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mD559BA96245258822B69B03673EB0E2C1E7330A2_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___value0, const RuntimeMethod* method);
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mF9763309AD3B2CAC2B04115859E0E8D3574CB539_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m0F883F37D26E9F681471E027AF38E6088538F15B_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * WebRpcResponse_get_Parameters_m763CE8E7BC147B306EB89CEFA3F13478CB42D7D7_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method);
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportClass_DictionaryToString_mE5C65EDE4E69D33D5D4FA628FCB00F5BFF5E9F5C (RuntimeObject* ___dictionary0, bool ___includeTypes1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ExitGames.Client.Photon.Hashtable Photon.Realtime.RoomInfo::get_CustomProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * RoomInfo_get_CustomProperties_mCC2CEBA49D0B52836766BC8528B5235FCB5F3C34 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.customProperties;
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_0 = __this->get_customProperties_1();
		return L_0;
	}
}
// System.String Photon.Realtime.RoomInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_mEC845FB613F51CC9978E328161A17366E5C3E7A1 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.name;
		String_t* L_0 = __this->get_name_9();
		return L_0;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::get_PlayerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_mA1BD0C8B36519C0A5FBC427B2DD4F38FD6A5044E (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->get_U3CPlayerCountU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::set_PlayerCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_mDBF6797EC57BE809F1E87293FD2BEAE82633B519 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPlayerCountU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Byte Photon.Realtime.RoomInfo::get_MaxPlayers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t RoomInfo_get_MaxPlayers_m433E700C7C5195D814B85B208AE68DAA8893ECE4 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.maxPlayers;
		uint8_t L_0 = __this->get_maxPlayers_2();
		return L_0;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsOpen_mD60E7E66D8A664A119BB92142943F64E5C0CD7BD (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.isOpen;
		bool L_0 = __this->get_isOpen_6();
		return L_0;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_get_IsVisible_mB54C81F5C00C59DF802B12C0EF8302A8B7F013CD (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.isVisible;
		bool L_0 = __this->get_isVisible_7();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomInfo::.ctor(System.String,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo__ctor_m91094B5A459603575933E51BB2B211A77BD00CCE (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, String_t* ___roomName0, Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * ___roomProperties1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo__ctor_m91094B5A459603575933E51BB2B211A77BD00CCE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Hashtable customProperties = new Hashtable();
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_0 = (Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 *)il2cpp_codegen_object_new(Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25_il2cpp_TypeInfo_var);
		Hashtable__ctor_m83B97FBB80EF87E4E5E5A8C06BB8468D343491BF(L_0, /*hidden argument*/NULL);
		__this->set_customProperties_1(L_0);
		// protected bool isOpen = true;
		__this->set_isOpen_6((bool)1);
		// protected bool isVisible = true;
		__this->set_isVisible_7((bool)1);
		// protected bool autoCleanUp = true;
		__this->set_autoCleanUp_8((bool)1);
		// protected internal RoomInfo(string roomName, Hashtable roomProperties)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.InternalCacheProperties(roomProperties);
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_1 = ___roomProperties1;
		VirtActionInvoker1< Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * >::Invoke(4 /* System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable) */, __this, L_1);
		// this.name = roomName;
		String_t* L_2 = ___roomName0;
		__this->set_name_9(L_2);
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomInfo::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomInfo_Equals_mB1C66135C69E5A576D845C9DFFA59356973CFE41 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_Equals_mB1C66135C69E5A576D845C9DFFA59356973CFE41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * V_0 = NULL;
	{
		// RoomInfo otherRoomInfo = other as RoomInfo;
		RuntimeObject * L_0 = ___other0;
		V_0 = ((RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 *)IsInstClass((RuntimeObject*)L_0, RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2_il2cpp_TypeInfo_var));
		// return (otherRoomInfo != null && this.Name.Equals(otherRoomInfo.name));
		RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = RoomInfo_get_Name_mEC845FB613F51CC9978E328161A17366E5C3E7A1_inline(__this, /*hidden argument*/NULL);
		RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = L_3->get_name_9();
		NullCheck(L_2);
		bool L_5 = String_Equals_m9C4D78DFA0979504FE31429B64A4C26DF48020D1(L_2, L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_001c:
	{
		return (bool)0;
	}
}
// System.Int32 Photon.Realtime.RoomInfo::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RoomInfo_GetHashCode_m21C234A84924E10780F1B37AC1201624831971BC (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.name.GetHashCode();
		String_t* L_0 = __this->get_name_9();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.String Photon.Realtime.RoomInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToString_m6BD408C4DD525AC242732B9B827A34E842C4F47B (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_ToString_m6BD408C4DD525AC242732B9B827A34E842C4F47B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = __this->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		bool L_4 = __this->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteral479EC88E55FF68914417B71890F19067E031CF95;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteral479EC88E55FF68914417B71890F19067E031CF95;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral99D72C7FC3E2E145870BEAB37C0B70E343EA9C3B;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteral223883960405D6589D6CD37F175C73B073C4180F;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = G_B3_3;
		bool L_6 = __this->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralEA88FBAA99B73225752E2EF67593F775848160AD;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral5FC7E38BFFE00CA46ADD89145464A2EAF759D5C2;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = G_B6_3;
		uint8_t L_8 = __this->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = RoomInfo_get_PlayerCount_mA1BD0C8B36519C0A5FBC427B2DD4F38FD6A5044E_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(G_B6_4, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.String Photon.Realtime.RoomInfo::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RoomInfo_ToStringFull_m491E6BA938E626698F5BD23B678DCB910A8690BB (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_ToStringFull_m491E6BA938E626698F5BD23B678DCB910A8690BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B2_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	int32_t G_B1_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	int32_t G_B5_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B5_2 = NULL;
	String_t* G_B5_3 = NULL;
	int32_t G_B4_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B4_2 = NULL;
	String_t* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B6_3 = NULL;
	String_t* G_B6_4 = NULL;
	{
		// return string.Format("Room: '{0}' {1},{2} {4}/{3} players.\ncustomProps: {5}", this.name, this.isVisible ? "visible" : "hidden", this.isOpen ? "open" : "closed", this.maxPlayers, this.PlayerCount, this.customProperties.ToStringFull());
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = __this->get_name_9();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		bool L_4 = __this->get_isVisible_7();
		G_B1_0 = 1;
		G_B1_1 = L_3;
		G_B1_2 = L_3;
		G_B1_3 = _stringLiteralF7068A42680648970601D75B7A3926C9C04E462B;
		if (L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_3;
			G_B2_2 = L_3;
			G_B2_3 = _stringLiteralF7068A42680648970601D75B7A3926C9C04E462B;
			goto IL_0025;
		}
	}
	{
		G_B3_0 = _stringLiteral99D72C7FC3E2E145870BEAB37C0B70E343EA9C3B;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		goto IL_002a;
	}

IL_0025:
	{
		G_B3_0 = _stringLiteral223883960405D6589D6CD37F175C73B073C4180F;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
	}

IL_002a:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (RuntimeObject *)G_B3_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = G_B3_3;
		bool L_6 = __this->get_isOpen_6();
		G_B4_0 = 2;
		G_B4_1 = L_5;
		G_B4_2 = L_5;
		G_B4_3 = G_B3_4;
		if (L_6)
		{
			G_B5_0 = 2;
			G_B5_1 = L_5;
			G_B5_2 = L_5;
			G_B5_3 = G_B3_4;
			goto IL_003c;
		}
	}
	{
		G_B6_0 = _stringLiteralEA88FBAA99B73225752E2EF67593F775848160AD;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		G_B6_4 = G_B4_3;
		goto IL_0041;
	}

IL_003c:
	{
		G_B6_0 = _stringLiteral5FC7E38BFFE00CA46ADD89145464A2EAF759D5C2;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
		G_B6_4 = G_B5_3;
	}

IL_0041:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (RuntimeObject *)G_B6_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = G_B6_3;
		uint8_t L_8 = __this->get_maxPlayers_2();
		uint8_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = RoomInfo_get_PlayerCount_mA1BD0C8B36519C0A5FBC427B2DD4F38FD6A5044E_inline(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_11;
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_16 = __this->get_customProperties_1();
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var);
		String_t* L_17 = Extensions_ToStringFull_m3A6988AD154019F56BED30702B4C9A7C6378399D(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_17);
		String_t* L_18 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(G_B6_4, L_15, /*hidden argument*/NULL);
		return L_18;
	}
}
// System.Void Photon.Realtime.RoomInfo::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomInfo_InternalCacheProperties_m1A6D6812D146D92769E9AED158265328F82119B7 (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * ___propertiesToCache0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomInfo_InternalCacheProperties_m1A6D6812D146D92769E9AED158265328F82119B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (propertiesToCache == null || propertiesToCache.Count == 0 || this.customProperties.Equals(propertiesToCache))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_0 = ___propertiesToCache0;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_1 = ___propertiesToCache0;
		NullCheck(L_1);
		int32_t L_2 = Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6(L_1, /*hidden argument*/Dictionary_2_get_Count_m1B06EB9D28DDA7E38DDC20D88532DFF246F03DF6_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_3 = __this->get_customProperties_1();
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_4 = ___propertiesToCache0;
		NullCheck(L_3);
		bool L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		if (!L_5)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		// return;
		return;
	}

IL_001a:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.Removed))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_6 = ___propertiesToCache0;
		NullCheck(L_6);
		bool L_7 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_6, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0046;
		}
	}
	{
		// this.RemovedFromList = (bool)propertiesToCache[GamePropertyKey.Removed];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_8 = ___propertiesToCache0;
		NullCheck(L_8);
		RuntimeObject * L_9 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_8, (uint8_t)((int32_t)251), /*hidden argument*/NULL);
		__this->set_RemovedFromList_0(((*(bool*)((bool*)UnBox(L_9, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
		// if (this.RemovedFromList)
		bool L_10 = __this->get_RemovedFromList_0();
		if (!L_10)
		{
			goto IL_0046;
		}
	}
	{
		// return;
		return;
	}

IL_0046:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MaxPlayers))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_11 = ___propertiesToCache0;
		NullCheck(L_11);
		bool L_12 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_11, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// this.maxPlayers = (byte)propertiesToCache[GamePropertyKey.MaxPlayers];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_13 = ___propertiesToCache0;
		NullCheck(L_13);
		RuntimeObject * L_14 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_13, (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		__this->set_maxPlayers_2(((*(uint8_t*)((uint8_t*)UnBox(L_14, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))));
	}

IL_0069:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsOpen))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_15 = ___propertiesToCache0;
		NullCheck(L_15);
		bool L_16 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_15, (uint8_t)((int32_t)253), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_008c;
		}
	}
	{
		// this.isOpen = (bool)propertiesToCache[GamePropertyKey.IsOpen];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_17 = ___propertiesToCache0;
		NullCheck(L_17);
		RuntimeObject * L_18 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_17, (uint8_t)((int32_t)253), /*hidden argument*/NULL);
		__this->set_isOpen_6(((*(bool*)((bool*)UnBox(L_18, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
	}

IL_008c:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.IsVisible))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_19 = ___propertiesToCache0;
		NullCheck(L_19);
		bool L_20 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_19, (uint8_t)((int32_t)254), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00af;
		}
	}
	{
		// this.isVisible = (bool)propertiesToCache[GamePropertyKey.IsVisible];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_21 = ___propertiesToCache0;
		NullCheck(L_21);
		RuntimeObject * L_22 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_21, (uint8_t)((int32_t)254), /*hidden argument*/NULL);
		__this->set_isVisible_7(((*(bool*)((bool*)UnBox(L_22, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
	}

IL_00af:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PlayerCount))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_23 = ___propertiesToCache0;
		NullCheck(L_23);
		bool L_24 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_23, (uint8_t)((int32_t)252), /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		// this.PlayerCount = (int)((byte)propertiesToCache[GamePropertyKey.PlayerCount]);
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_25 = ___propertiesToCache0;
		NullCheck(L_25);
		RuntimeObject * L_26 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_25, (uint8_t)((int32_t)252), /*hidden argument*/NULL);
		RoomInfo_set_PlayerCount_mDBF6797EC57BE809F1E87293FD2BEAE82633B519_inline(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_26, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.CleanupCacheOnLeave))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_27 = ___propertiesToCache0;
		NullCheck(L_27);
		bool L_28 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_27, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00f5;
		}
	}
	{
		// this.autoCleanUp = (bool)propertiesToCache[GamePropertyKey.CleanupCacheOnLeave];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_29 = ___propertiesToCache0;
		NullCheck(L_29);
		RuntimeObject * L_30 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_29, (uint8_t)((int32_t)249), /*hidden argument*/NULL);
		__this->set_autoCleanUp_8(((*(bool*)((bool*)UnBox(L_30, Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var)))));
	}

IL_00f5:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.MasterClientId))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_31 = ___propertiesToCache0;
		NullCheck(L_31);
		bool L_32 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_31, (uint8_t)((int32_t)248), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_0118;
		}
	}
	{
		// this.masterClientId = (int)propertiesToCache[GamePropertyKey.MasterClientId];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_33 = ___propertiesToCache0;
		NullCheck(L_33);
		RuntimeObject * L_34 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_33, (uint8_t)((int32_t)248), /*hidden argument*/NULL);
		__this->set_masterClientId_10(((*(int32_t*)((int32_t*)UnBox(L_34, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
	}

IL_0118:
	{
		// if (propertiesToCache.ContainsKey(GamePropertyKey.PropsListedInLobby))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_35 = ___propertiesToCache0;
		NullCheck(L_35);
		bool L_36 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_35, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_013b;
		}
	}
	{
		// this.propertiesListedInLobby = propertiesToCache[GamePropertyKey.PropsListedInLobby] as string[];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_37 = ___propertiesToCache0;
		NullCheck(L_37);
		RuntimeObject * L_38 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_37, (uint8_t)((int32_t)250), /*hidden argument*/NULL);
		__this->set_propertiesListedInLobby_11(((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)IsInst((RuntimeObject*)L_38, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var)));
	}

IL_013b:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.ExpectedUsers))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_39 = ___propertiesToCache0;
		NullCheck(L_39);
		bool L_40 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_39, (uint8_t)((int32_t)247), /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_015e;
		}
	}
	{
		// this.expectedUsers = (string[])propertiesToCache[GamePropertyKey.ExpectedUsers];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_41 = ___propertiesToCache0;
		NullCheck(L_41);
		RuntimeObject * L_42 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_41, (uint8_t)((int32_t)247), /*hidden argument*/NULL);
		__this->set_expectedUsers_5(((StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)Castclass((RuntimeObject*)L_42, StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var)));
	}

IL_015e:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.EmptyRoomTtl))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_43 = ___propertiesToCache0;
		NullCheck(L_43);
		bool L_44 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_43, (uint8_t)((int32_t)245), /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0181;
		}
	}
	{
		// this.emptyRoomTtl = (int)propertiesToCache[GamePropertyKey.EmptyRoomTtl];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_45 = ___propertiesToCache0;
		NullCheck(L_45);
		RuntimeObject * L_46 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_45, (uint8_t)((int32_t)245), /*hidden argument*/NULL);
		__this->set_emptyRoomTtl_3(((*(int32_t*)((int32_t*)UnBox(L_46, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
	}

IL_0181:
	{
		// if (propertiesToCache.ContainsKey((byte)GamePropertyKey.PlayerTtl))
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_47 = ___propertiesToCache0;
		NullCheck(L_47);
		bool L_48 = Hashtable_ContainsKey_m007FBDAD919F01FF09885587C73AD092303A7C3C(L_47, (uint8_t)((int32_t)246), /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01a4;
		}
	}
	{
		// this.playerTtl = (int)propertiesToCache[GamePropertyKey.PlayerTtl];
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_49 = ___propertiesToCache0;
		NullCheck(L_49);
		RuntimeObject * L_50 = Hashtable_get_Item_mC6984F8E88D5E4CFC9615CCA8CBC23016C2760EB(L_49, (uint8_t)((int32_t)246), /*hidden argument*/NULL);
		__this->set_playerTtl_4(((*(int32_t*)((int32_t*)UnBox(L_50, Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var)))));
	}

IL_01a4:
	{
		// this.customProperties.MergeStringKeys(propertiesToCache);
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_51 = __this->get_customProperties_1();
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_52 = ___propertiesToCache0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var);
		Extensions_MergeStringKeys_m675D463C08471D3BC68FCEADFE4C3CFD273A98F2(L_51, L_52, /*hidden argument*/NULL);
		// this.customProperties.StripKeysWithNullValues();
		Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * L_53 = __this->get_customProperties_1();
		Extensions_StripKeysWithNullValues_m7D649FA939CEC4F3206CF8B9FABED9F77911B1FB(L_53, /*hidden argument*/NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Photon.Realtime.RoomOptions::get_IsVisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsVisible_m9058B501D994DB155EFAF569945F22720A24126C (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = __this->get_isVisible_0();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsVisible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsVisible_m2F7BE2025735A3647403DE003ED2ABC1632E254F (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		bool L_0 = ___value0;
		__this->set_isVisible_0(L_0);
		// public bool IsVisible { get { return this.isVisible; } set { this.isVisible = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_IsOpen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_IsOpen_m46B0EB521EC4E9BFCB0DBB5DCE45AA80BC4739F3 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = __this->get_isOpen_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_IsOpen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_IsOpen_m81F76A6174C0503131F37CA9FFFB6AEF8DA197C2 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		bool L_0 = ___value0;
		__this->set_isOpen_1(L_0);
		// public bool IsOpen { get { return this.isOpen; } set { this.isOpen = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_CleanupCacheOnLeave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_CleanupCacheOnLeave_mDA52397387D06F10290F67F3D4DBBAE8BC646AE3 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = __this->get_cleanupCacheOnLeave_5();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_CleanupCacheOnLeave(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_CleanupCacheOnLeave_m9E24F315E0AD78D67432F3104D442B5D3E44AA8E (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		bool L_0 = ___value0;
		__this->set_cleanupCacheOnLeave_5(L_0);
		// public bool CleanupCacheOnLeave { get { return this.cleanupCacheOnLeave; } set { this.cleanupCacheOnLeave = value; } }
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_SuppressRoomEvents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_SuppressRoomEvents_m67847BF859E8A830BE334A1E9FDF97388C04D44C (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = __this->get_U3CSuppressRoomEventsU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_SuppressRoomEvents(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_SuppressRoomEvents_m080C29B5E49E8349E81680C0EFEC9CB3F0E69C2C (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressRoomEvents { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressRoomEventsU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_SuppressPlayerInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_SuppressPlayerInfo_m284A7669127925513F63761151E0A28C48E93C4B (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; set; }
		bool L_0 = __this->get_U3CSuppressPlayerInfoU3Ek__BackingField_10();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_SuppressPlayerInfo(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_SuppressPlayerInfo_mD2E01B2E08A69E5889FD51024A3B9A543B6478D5 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool SuppressPlayerInfo { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CSuppressPlayerInfoU3Ek__BackingField_10(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_PublishUserId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_PublishUserId_mE0AFA1CCF71A66B9FF9D65DB20346808BFCC93C3 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = __this->get_U3CPublishUserIdU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_PublishUserId(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_PublishUserId_m3CE67ADE849DD2FD68D55217A16DD7D0FC66A045 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool PublishUserId { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CPublishUserIdU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_DeleteNullProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_DeleteNullProperties_mBF602905B0C44A5F1CCD6BD12C7417C1B0D6E3B7 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = __this->get_U3CDeleteNullPropertiesU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_DeleteNullProperties(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_DeleteNullProperties_mA6A76E8547A6010224E452B73C7E72BA214BF71E (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool DeleteNullProperties { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CDeleteNullPropertiesU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Boolean Photon.Realtime.RoomOptions::get_BroadcastPropsChangeToAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RoomOptions_get_BroadcastPropsChangeToAll_mC791000BD0B93FE4D058422A0777B4D572FF9832 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = __this->get_broadcastPropsChangeToAll_13();
		return L_0;
	}
}
// System.Void Photon.Realtime.RoomOptions::set_BroadcastPropsChangeToAll(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions_set_BroadcastPropsChangeToAll_mB599AAFFEDF10473CEC3A32A137B2B3602BB1985 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		bool L_0 = ___value0;
		__this->set_broadcastPropsChangeToAll_13(L_0);
		// public bool BroadcastPropsChangeToAll { get { return this.broadcastPropsChangeToAll; } set { this.broadcastPropsChangeToAll = value; } }
		return;
	}
}
// System.Void Photon.Realtime.RoomOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomOptions__ctor_m8FC01E8D41F044F50A44FD39E05A97CCB2560402 (RoomOptions_tB70C9ADC92617E81078838E1D6241D03BB5BA906 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RoomOptions__ctor_m8FC01E8D41F044F50A44FD39E05A97CCB2560402_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private bool isVisible = true;
		__this->set_isVisible_0((bool)1);
		// private bool isOpen = true;
		__this->set_isOpen_1((bool)1);
		// private bool cleanupCacheOnLeave = true;
		__this->set_cleanupCacheOnLeave_5((bool)1);
		// public string[] CustomRoomPropertiesForLobby = new string[0];
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_CustomRoomPropertiesForLobby_7(L_0);
		// private bool broadcastPropsChangeToAll = true;
		__this->set_broadcastPropsChangeToAll_13((bool)1);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Photon.Realtime.LoadBalancingClient Photon.Realtime.SupportLogger::get_Client()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * SupportLogger_get_Client_mB26343CDA21A09F3EA30AD740275EAFC083D52B7 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// get { return this.client; }
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		return L_0;
	}
}
// System.Void Photon.Realtime.SupportLogger::set_Client(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_set_Client_m79B4A92BA0D8FF359C751D3E1329C421B683CD04 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___value0, const RuntimeMethod* method)
{
	{
		// if (this.client != value)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = ___value0;
		if ((((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_0) == ((RuntimeObject*)(LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)L_1)))
		{
			goto IL_0038;
		}
	}
	{
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_2 = __this->get_client_6();
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// this.client.RemoveCallbackTarget(this);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_3 = __this->get_client_6();
		NullCheck(L_3);
		LoadBalancingClient_RemoveCallbackTarget_m38086A54319554460FBF07961518B823D8BF1E9F(L_3, __this, /*hidden argument*/NULL);
	}

IL_001d:
	{
		// this.client = value;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_4 = ___value0;
		__this->set_client_6(L_4);
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// this.client.AddCallbackTarget(this);
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_6 = __this->get_client_6();
		NullCheck(L_6);
		LoadBalancingClient_AddCallbackTarget_m69C4A0FA942DBDC4194826AAF2D0A8A563882C54(L_6, __this, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_Start_m227653BC5A9578ADDCDB8BCF5D3A39D646510D5C (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_Start_m227653BC5A9578ADDCDB8BCF5D3A39D646510D5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.LogBasics();
		SupportLogger_LogBasics_m7BD7CFAB251C14538F398D08839D82610A1D1452(__this, /*hidden argument*/NULL);
		// if (this.startStopwatch == null)
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_startStopwatch_7();
		if (L_0)
		{
			goto IL_0024;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_1 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_1, /*hidden argument*/NULL);
		__this->set_startStopwatch_7(L_1);
		// this.startStopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_2 = __this->get_startStopwatch_7();
		NullCheck(L_2);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDestroy_m0092DEE37AC43E9AD7EFF0E048B5F791FB60F29A (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// this.Client = null; 
		SupportLogger_set_Client_m79B4A92BA0D8FF359C751D3E1329C421B683CD04(__this, (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationPause_m93CBBB32BFC14C02236E7107D1C5ACFDBCCF4AB0 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, bool ___pause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnApplicationPause_m93CBBB32BFC14C02236E7107D1C5ACFDBCCF4AB0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_1 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_2 = NULL;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* G_B3_3 = NULL;
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnApplicationPause: " + pause + " connected: " + (this.client == null ? "no (client is null)" : this.client.IsConnected.ToString()));
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_0 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral98D82A5FBE2C48A4BA7D23C09B325D465EC799DC);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral98D82A5FBE2C48A4BA7D23C09B325D465EC799DC);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		String_t* L_5 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&___pause0), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral0BCAE45D8ADAB414DB38EA02F9292623B445C753);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral0BCAE45D8ADAB414DB38EA02F9292623B445C753);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_7 = L_6;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_8 = __this->get_client_6();
		G_B1_0 = 4;
		G_B1_1 = L_7;
		G_B1_2 = L_7;
		if (!L_8)
		{
			G_B2_0 = 4;
			G_B2_1 = L_7;
			G_B2_2 = L_7;
			goto IL_0048;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		bool L_10 = LoadBalancingClient_get_IsConnected_m56E9C924ADA67AE13BE4C2A6970091F1C424CC18(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		String_t* L_11 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_11;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_004d;
	}

IL_0048:
	{
		G_B3_0 = _stringLiteral6225D10150959CD938D74A90F50B22692B0A017E;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_004d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		String_t* L_12 = String_Concat_m232E857CA5107EA6AC52E7DD7018716C021F237B(G_B3_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnApplicationQuit_mD906E968B56B00457C257002973C07330A20536A (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// this.CancelInvoke();
		MonoBehaviour_CancelInvoke_m6ACF5FC83F8FE5A6E744CE1E83A94CB3B0A8B7EF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartLogStats_mE01B4322F8FE0D371B09056369141C47913708B9 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StartLogStats_mE01B4322F8FE0D371B09056369141C47913708B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("LogStats", 10, 10);
		MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593(__this, _stringLiteral97CBBD581FE6B5A33E6750E4AAF42F61118114AE, (10.0f), (10.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopLogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopLogStats_m7431469A83F864C0DB61C16EC5772B81E5EE8495 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StopLogStats_m7431469A83F864C0DB61C16EC5772B81E5EE8495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("LogStats");
		MonoBehaviour_CancelInvoke_mDD95225EF4DFBB8C00B865468DE8AFEB5D30490F(__this, _stringLiteral97CBBD581FE6B5A33E6750E4AAF42F61118114AE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StartTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StartTrackValues_m6CA4C8F6A17834D29EC812FF5E67DD7E0545E840 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StartTrackValues_m6CA4C8F6A17834D29EC812FF5E67DD7E0545E840_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.InvokeRepeating("TrackValues", 0.5f, 0.5f);
		MonoBehaviour_InvokeRepeating_m99F21547D281B3F835745B681E5472F070E7E593(__this, _stringLiteral747F36852E16310ED684572F30D34B6FF654D27C, (0.5f), (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::StopTrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_StopTrackValues_m9589E4FCFDBD5E7BD170F3766C2A582865659606 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_StopTrackValues_m9589E4FCFDBD5E7BD170F3766C2A582865659606_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.CancelInvoke("TrackValues");
		MonoBehaviour_CancelInvoke_mDD95225EF4DFBB8C00B865468DE8AFEB5D30490F(__this, _stringLiteral747F36852E16310ED684572F30D34B6FF654D27C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.String Photon.Realtime.SupportLogger::GetFormattedTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (this.startStopwatch == null)
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_0 = __this->get_startStopwatch_7();
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		// this.startStopwatch = new Stopwatch();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_1 = (Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 *)il2cpp_codegen_object_new(Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mA301E9A9D03758CBE09171E0C140CCD06BC9F860(L_1, /*hidden argument*/NULL);
		__this->set_startStopwatch_7(L_1);
		// this.startStopwatch.Start();
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_2 = __this->get_startStopwatch_7();
		NullCheck(L_2);
		Stopwatch_Start_mF61332B96D7753ADA18366A29E22E2A92E25739A(L_2, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// return string.Format("[{0}.{1}]", this.startStopwatch.Elapsed.Seconds, this.startStopwatch.Elapsed.Milliseconds);
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_3 = __this->get_startStopwatch_7();
		NullCheck(L_3);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_4 = Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = TimeSpan_get_Seconds_m33764DE0DB67C2D1A2654BEE31E379A13571EED8((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_6);
		Stopwatch_t0778B5C8DF8FE1D87FC57A2411DA695850BD64D4 * L_8 = __this->get_startStopwatch_7();
		NullCheck(L_8);
		TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4  L_9 = Stopwatch_get_Elapsed_m6735B32BFB466FC4F52112AC3493D37404D184BB(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		int32_t L_10 = TimeSpan_get_Milliseconds_m03218976DBB2BBDFB8B7F8A7F9452C19096312CA((TimeSpan_tA8069278ACE8A74D6DF7D514A9CD4432433F64C4 *)(&V_0), /*hidden argument*/NULL);
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_11);
		String_t* L_13 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral6ED81047DEAE3CCB5B374374798282C7FA029B8E, L_7, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Void Photon.Realtime.SupportLogger::TrackValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_TrackValues_mAD920AB90F6A48A21E49443C05F8AA7C02FF2997 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// int currentRtt = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = __this->get_client_6();
		NullCheck(L_1);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_2 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = PhotonPeer_get_RoundTripTime_mEE57C6D32578D7046832338F54D47C4267D83D1D(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (currentRtt > this.pingMax)
		int32_t L_4 = V_0;
		int32_t L_5 = __this->get_pingMax_8();
		if ((((int32_t)L_4) <= ((int32_t)L_5)))
		{
			goto IL_0029;
		}
	}
	{
		// this.pingMax = currentRtt;
		int32_t L_6 = V_0;
		__this->set_pingMax_8(L_6);
	}

IL_0029:
	{
		// if (currentRtt < this.pingMin)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->get_pingMin_9();
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0039;
		}
	}
	{
		// this.pingMin = currentRtt;
		int32_t L_9 = V_0;
		__this->set_pingMin_9(L_9);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogStats()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogStats_mEFE7287DA5BC1F93A221235DCA05CCFE64AB9741 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_LogStats_mEFE7287DA5BC1F93A221235DCA05CCFE64AB9741_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this.client == null || this.client.State == ClientState.PeerCreated)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_1 = __this->get_client_6();
		NullCheck(L_1);
		int32_t L_2 = LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11_inline(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// return;
		return;
	}

IL_0016:
	{
		// if (this.LogTrafficStats)
		bool L_3 = __this->get_LogTrafficStats_4();
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger " + this.client.LoadBalancingPeer.VitalStatsToString(false) + " Ping min/max: " + this.pingMin + "/" + this.pingMax);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		String_t* L_6 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralCEB032786FD44DA7017F3BA777F0F12B63B3BE37);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralCEB032786FD44DA7017F3BA777F0F12B63B3BE37);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_10 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		String_t* L_11 = PhotonPeer_VitalStatsToString_m9BD7EFA0536E1C8E8CBB8874D6E763A014A08682(L_10, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_11);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral6C8EE3675EEC14F86A361B84718313E2562E573C);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral6C8EE3675EEC14F86A361B84718313E2562E573C);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_13 = L_12;
		int32_t L_14 = __this->get_pingMin_9();
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_16);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral42099B4AF021E53FD8FD4E056C2568D7C2E3FFA8);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_18 = L_17;
		int32_t L_19 = __this->get_pingMax_8();
		int32_t L_20 = L_19;
		RuntimeObject * L_21 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_21);
		String_t* L_22 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_22, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::LogBasics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_LogBasics_m7BD7CFAB251C14538F398D08839D82610A1D1452 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_LogBasics_m7BD7CFAB251C14538F398D08839D82610A1D1452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * V_0 = NULL;
	StringBuilder_t * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint8_t V_4 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B11_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B11_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B11_2 = NULL;
	String_t* G_B11_3 = NULL;
	StringBuilder_t * G_B11_4 = NULL;
	int32_t G_B10_0 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B10_1 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B10_2 = NULL;
	String_t* G_B10_3 = NULL;
	StringBuilder_t * G_B10_4 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B12_2 = NULL;
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* G_B12_3 = NULL;
	String_t* G_B12_4 = NULL;
	StringBuilder_t * G_B12_5 = NULL;
	{
		// if (this.client != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		if (!L_0)
		{
			goto IL_025a;
		}
	}
	{
		// List<string> buildProperties = new List<string>(10);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_1 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377(L_1, ((int32_t)10), /*hidden argument*/List_1__ctor_m82C4D0710B1BD00E77EFC7B8B55F1CD0C02A5377_RuntimeMethod_var);
		V_0 = L_1;
		// buildProperties.Add(Application.unityVersion);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = V_0;
		String_t* L_3 = Application_get_unityVersion_mC66901DE17E8F4F5BCA46CF3A4DCB34AF245CF99(/*hidden argument*/NULL);
		NullCheck(L_2);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_2, L_3, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// buildProperties.Add(Application.platform.ToString());
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_4 = V_0;
		int32_t L_5 = Application_get_platform_m6AFFFF3B077F4D5CA1F71CF14ABA86A83FC71672(/*hidden argument*/NULL);
		V_3 = L_5;
		RuntimeObject * L_6 = Box(RuntimePlatform_tD5F5737C1BBBCBB115EB104DF2B7876387E80132_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_3 = *(int32_t*)UnBox(L_6);
		NullCheck(L_4);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_4, L_7, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// buildProperties.Add("ENABLE_IL2CPP");
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_8 = V_0;
		NullCheck(L_8);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_8, _stringLiteralC42A1C0FCB9F3B03AFF049A971ECB58EF1666A5B, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// buildProperties.Add("NET_4_6");
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_9 = V_0;
		NullCheck(L_9);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_9, _stringLiteral5BEAC22AF406C19FB799684A30007C76C899C8BF, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t * L_10 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mF928376F82E8C8FF3C11842C562DB8CF28B2735E(L_10, /*hidden argument*/NULL);
		V_1 = L_10;
		// string appIdShort = string.IsNullOrEmpty(this.client.AppId) || this.client.AppId.Length < 8 ? this.client.AppId : string.Concat(this.client.AppId.Substring(0, 8), "***");
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_11 = __this->get_client_6();
		NullCheck(L_11);
		String_t* L_12 = LoadBalancingClient_get_AppId_m3AF2312FFE7C453D603BBFB12554430A8CC22B63_inline(L_11, /*hidden argument*/NULL);
		bool L_13 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0096;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_14 = __this->get_client_6();
		NullCheck(L_14);
		String_t* L_15 = LoadBalancingClient_get_AppId_m3AF2312FFE7C453D603BBFB12554430A8CC22B63_inline(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) < ((int32_t)8)))
		{
			goto IL_0096;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_17 = __this->get_client_6();
		NullCheck(L_17);
		String_t* L_18 = LoadBalancingClient_get_AppId_m3AF2312FFE7C453D603BBFB12554430A8CC22B63_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = String_Substring_mB593C0A320C683E6E47EFFC0A12B7A465E5E43BB(L_18, 0, 8, /*hidden argument*/NULL);
		String_t* L_20 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_19, _stringLiteral36C3EAA0E1E290F41E2810BAE8D9502C785E92D9, /*hidden argument*/NULL);
		G_B5_0 = L_20;
		goto IL_00a1;
	}

IL_0096:
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_21 = __this->get_client_6();
		NullCheck(L_21);
		String_t* L_22 = LoadBalancingClient_get_AppId_m3AF2312FFE7C453D603BBFB12554430A8CC22B63_inline(L_21, /*hidden argument*/NULL);
		G_B5_0 = L_22;
	}

IL_00a1:
	{
		V_2 = G_B5_0;
		// sb.AppendFormat("{0} SupportLogger Info: ", this.GetFormattedTimestamp());
		StringBuilder_t * L_23 = V_1;
		String_t* L_24 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_23, _stringLiteral7CEE29B46B3ED2F432C4A7B3A8DE12CAEB5D44D7, L_24, /*hidden argument*/NULL);
		// sb.AppendFormat("AppID: \"{0}\" AppVersion: \"{1}\" Client: v{2} Build: {3} ", appIdShort, this.client.AppVersion, this.client.LoadBalancingPeer.ClientVersion, string.Join(", ", buildProperties.ToArray()));
		StringBuilder_t * L_25 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_27 = L_26;
		String_t* L_28 = V_2;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_29 = L_27;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_30 = __this->get_client_6();
		NullCheck(L_30);
		String_t* L_31 = LoadBalancingClient_get_AppVersion_mD9EB48C5A1FD0F2E82177806C082BE479C5DEF5D_inline(L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_31);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_32 = L_29;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_33 = __this->get_client_6();
		NullCheck(L_33);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_34 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		String_t* L_35 = PhotonPeer_get_ClientVersion_m617781AF8C971B30825224CAB00C24CC05C60648(L_34, /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_35);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_35);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_36 = L_32;
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_37 = V_0;
		NullCheck(L_37);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_38 = List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38(L_37, /*hidden argument*/List_1_ToArray_m9DD19D800AE6D84ED0729D5D97CAF84DF317DD38_RuntimeMethod_var);
		String_t* L_39 = String_Join_m49371BED70248F0FCE970CB4F2E39E9A688AAFA4(_stringLiteralD3BC9A378DAAA1DDDBA1B19C1AA641D3E9683C46, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_39);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_39);
		NullCheck(L_25);
		StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774(L_25, _stringLiteral73E9438727A025F2C6302D501E8571DFADC5D852, L_36, /*hidden argument*/NULL);
		// if (this.client != null && this.client.LoadBalancingPeer != null && this.client.LoadBalancingPeer.SocketImplementation != null)
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_40 = __this->get_client_6();
		if (!L_40)
		{
			goto IL_014c;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_41 = __this->get_client_6();
		NullCheck(L_41);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_42 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_41, /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_014c;
		}
	}
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_43 = __this->get_client_6();
		NullCheck(L_43);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_44 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_43, /*hidden argument*/NULL);
		NullCheck(L_44);
		Type_t * L_45 = PhotonPeer_get_SocketImplementation_mBF270F1132D7C0F99DF6BE5632E5214996A058CE_inline(L_44, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_46 = Type_op_Inequality_m615014191FB05FD50F63A24EB9A6CCA785E7CEC9(L_45, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_014c;
		}
	}
	{
		// sb.AppendFormat("Socket: {0} ", this.client.LoadBalancingPeer.SocketImplementation.Name);
		StringBuilder_t * L_47 = V_1;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_48 = __this->get_client_6();
		NullCheck(L_48);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_49 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Type_t * L_50 = PhotonPeer_get_SocketImplementation_mBF270F1132D7C0F99DF6BE5632E5214996A058CE_inline(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		String_t* L_51 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_50);
		NullCheck(L_47);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_47, _stringLiteral031E1E51C21ED3E865BC483E1AB65FD236DAE901, L_51, /*hidden argument*/NULL);
	}

IL_014c:
	{
		// sb.AppendFormat("UserId: \"{0}\" AuthType: {1} AuthMode: {2} {3} ", this.client.UserId, (this.client.AuthValues != null) ? this.client.AuthValues.AuthType.ToString() : "N/A", this.client.AuthMode, this.client.EncryptionMode);
		StringBuilder_t * L_52 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_53 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_54 = L_53;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_55 = __this->get_client_6();
		NullCheck(L_55);
		String_t* L_56 = LoadBalancingClient_get_UserId_m80D37D0BA5752ED26B90EC9FF1533A2DF860535D(L_55, /*hidden argument*/NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_56);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_56);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_57 = L_54;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_58 = __this->get_client_6();
		NullCheck(L_58);
		AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * L_59 = LoadBalancingClient_get_AuthValues_mE56B5ADE8CC0EBB1CB9C5DFA64913AC5B36B7F02_inline(L_58, /*hidden argument*/NULL);
		G_B10_0 = 1;
		G_B10_1 = L_57;
		G_B10_2 = L_57;
		G_B10_3 = _stringLiteral9011E4E84DD86E01B4E886AF91734474A9DB3E2E;
		G_B10_4 = L_52;
		if (L_59)
		{
			G_B11_0 = 1;
			G_B11_1 = L_57;
			G_B11_2 = L_57;
			G_B11_3 = _stringLiteral9011E4E84DD86E01B4E886AF91734474A9DB3E2E;
			G_B11_4 = L_52;
			goto IL_017c;
		}
	}
	{
		G_B12_0 = _stringLiteral08D2E98E6754AF941484848930CCBADDFEFE13D6;
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		G_B12_4 = G_B10_3;
		G_B12_5 = G_B10_4;
		goto IL_019b;
	}

IL_017c:
	{
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_60 = __this->get_client_6();
		NullCheck(L_60);
		AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * L_61 = LoadBalancingClient_get_AuthValues_mE56B5ADE8CC0EBB1CB9C5DFA64913AC5B36B7F02_inline(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		uint8_t L_62 = AuthenticationValues_get_AuthType_m7644167D1D9D4B1EB47E98BF5FDA05D1B3F1770A_inline(L_61, /*hidden argument*/NULL);
		V_4 = L_62;
		RuntimeObject * L_63 = Box(CustomAuthenticationType_t911A058D44AC5F98005B9297CFCDB1EE853AE2F5_il2cpp_TypeInfo_var, (&V_4));
		NullCheck(L_63);
		String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_63);
		V_4 = *(uint8_t*)UnBox(L_63);
		G_B12_0 = L_64;
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
		G_B12_4 = G_B11_3;
		G_B12_5 = G_B11_4;
	}

IL_019b:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (RuntimeObject *)G_B12_0);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_65 = G_B12_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_66 = __this->get_client_6();
		NullCheck(L_66);
		int32_t L_67 = L_66->get_AuthMode_4();
		int32_t L_68 = L_67;
		RuntimeObject * L_69 = Box(AuthModeOption_tD09E4DA95C4EC0B4CC7EFC735D512F177EC4F829_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_65);
		ArrayElementTypeCheck (L_65, L_69);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_69);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_70 = L_65;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_71 = __this->get_client_6();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_EncryptionMode_5();
		int32_t L_73 = L_72;
		RuntimeObject * L_74 = Box(EncryptionMode_t5BA959815A4DD1ABC4458E9951E81CB988CBE1F3_il2cpp_TypeInfo_var, &L_73);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_74);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_74);
		NullCheck(G_B12_5);
		StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774(G_B12_5, G_B12_4, L_70, /*hidden argument*/NULL);
		// sb.AppendFormat("State: {0} ", this.client.State);
		StringBuilder_t * L_75 = V_1;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_76 = __this->get_client_6();
		NullCheck(L_76);
		int32_t L_77 = LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11_inline(L_76, /*hidden argument*/NULL);
		int32_t L_78 = L_77;
		RuntimeObject * L_79 = Box(ClientState_tB545F72ECD3CB392A4C335FACA31D158A7EE4282_il2cpp_TypeInfo_var, &L_78);
		NullCheck(L_75);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_75, _stringLiteral63B3DB3EDFFE8E5BD1C358E6F9795D27086FEA91, L_79, /*hidden argument*/NULL);
		// sb.AppendFormat("PeerID: {0} ", this.client.LoadBalancingPeer.PeerID);
		StringBuilder_t * L_80 = V_1;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_81 = __this->get_client_6();
		NullCheck(L_81);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_82 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_81, /*hidden argument*/NULL);
		NullCheck(L_82);
		String_t* L_83 = PhotonPeer_get_PeerID_m39850AF21511F4082C4B949FD3B304BB595E7D58(L_82, /*hidden argument*/NULL);
		NullCheck(L_80);
		StringBuilder_AppendFormat_mFFABDE5D2413C5657E6411FC60C8C38E1674E09D(L_80, _stringLiteral78A99AC35589D8FC77F6FEB59EE7E55956BB35AE, L_83, /*hidden argument*/NULL);
		// sb.AppendFormat("NameServer: {0} Current Server: {1} IP: {2} Region: {3} ", this.client.NameServerHost, this.client.CurrentServerAddress, this.client.LoadBalancingPeer.ServerIpAddress, this.client.CloudRegion);
		StringBuilder_t * L_84 = V_1;
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_85 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_86 = L_85;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_87 = __this->get_client_6();
		NullCheck(L_87);
		String_t* L_88 = L_87->get_NameServerHost_9();
		NullCheck(L_86);
		ArrayElementTypeCheck (L_86, L_88);
		(L_86)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_88);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_89 = L_86;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_90 = __this->get_client_6();
		NullCheck(L_90);
		String_t* L_91 = LoadBalancingClient_get_CurrentServerAddress_mE7175D3AE057A785082EEE8C8C432D194EEBB135(L_90, /*hidden argument*/NULL);
		NullCheck(L_89);
		ArrayElementTypeCheck (L_89, L_91);
		(L_89)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_91);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_92 = L_89;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_93 = __this->get_client_6();
		NullCheck(L_93);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_94 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_93, /*hidden argument*/NULL);
		NullCheck(L_94);
		String_t* L_95 = PhotonPeer_get_ServerIpAddress_mB1EAD61C7E987F1B746D3DB9137F0482ED2B332D(L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_95);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_96 = L_92;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_97 = __this->get_client_6();
		NullCheck(L_97);
		String_t* L_98 = LoadBalancingClient_get_CloudRegion_m349B62A6F4C929E5BB6EBD0350467BA689FB0387_inline(L_97, /*hidden argument*/NULL);
		NullCheck(L_96);
		ArrayElementTypeCheck (L_96, L_98);
		(L_96)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_98);
		NullCheck(L_84);
		StringBuilder_AppendFormat_m23742FE1E3C60341F37C243EB6BEE06AE444C774(L_84, _stringLiteral342CA6CAFC4C39E17B7E56F6FF13F6FED12AB1E3, L_96, /*hidden argument*/NULL);
		// Debug.LogWarning(sb.ToString());
		StringBuilder_t * L_99 = V_1;
		NullCheck(L_99);
		String_t* L_100 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_99);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarning_m37338644DC81F640CCDFEAE35A223F0E965F0568(L_100, /*hidden argument*/NULL);
	}

IL_025a:
	{
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnected_mA3D8EFCE8BDC752BC32CCF52C5CA33A1918D8FA3 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnConnected_mA3D8EFCE8BDC752BC32CCF52C5CA33A1918D8FA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnected().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralAF2F0CEF3FB17E9F3FFB6676C1CF10F475D85565, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// this.pingMax = 0;
		__this->set_pingMax_8(0);
		// this.pingMin = this.client.LoadBalancingPeer.RoundTripTime;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_2 = __this->get_client_6();
		NullCheck(L_2);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_3 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = PhotonPeer_get_RoundTripTime_mEE57C6D32578D7046832338F54D47C4267D83D1D(L_3, /*hidden argument*/NULL);
		__this->set_pingMin_9(L_4);
		// this.LogBasics();
		SupportLogger_LogBasics_m7BD7CFAB251C14538F398D08839D82610A1D1452(__this, /*hidden argument*/NULL);
		// if (this.LogTrafficStats)
		bool L_5 = __this->get_LogTrafficStats_4();
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = false;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_6 = __this->get_client_6();
		NullCheck(L_6);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_7 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		PhotonPeer_set_TrafficStatsEnabled_m6B6BA2AED98E60AFBCE254255BD4431C9C328C2F(L_7, (bool)0, /*hidden argument*/NULL);
		// this.client.LoadBalancingPeer.TrafficStatsEnabled = true;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_8 = __this->get_client_6();
		NullCheck(L_8);
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_9 = LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		PhotonPeer_set_TrafficStatsEnabled_m6B6BA2AED98E60AFBCE254255BD4431C9C328C2F(L_9, (bool)1, /*hidden argument*/NULL);
		// this.StartLogStats();
		SupportLogger_StartLogStats_mE01B4322F8FE0D371B09056369141C47913708B9(__this, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// this.StartTrackValues();
		SupportLogger_StartTrackValues_m6CA4C8F6A17834D29EC812FF5E67DD7E0545E840(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnConnectedToMaster()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnConnectedToMaster_mABB10D1D072B0A4AFC0A904EF8B49075F7DA094C (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnConnectedToMaster_mABB10D1D072B0A4AFC0A904EF8B49075F7DA094C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnConnectedToMaster().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteralB32938589EB53DCC2BAD4055BB5EEBD4496BF09A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnFriendListUpdate(System.Collections.Generic.List`1<Photon.Realtime.FriendInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnFriendListUpdate_m560582BD8E2395456D5F1CB99F2C83EA441E6BBA (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, List_1_t6987D3DFC663F16EA60EC3783A282A65D9375CF4 * ___friendList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnFriendListUpdate_m560582BD8E2395456D5F1CB99F2C83EA441E6BBA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnFriendListUpdate(friendList).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral65B5AA8DFF1B2E90A2D050D4B6B198EFD82D674E, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedLobby_mB796163628DE2F75B4443AE23B721E95436CDAB7 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinedLobby_mB796163628DE2F75B4443AE23B721E95436CDAB7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedLobby(" + this.client.CurrentLobby + ").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral601FC93C20392B20EEB3C9F37859C622C0D151DF);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral601FC93C20392B20EEB3C9F37859C622C0D151DF);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_6 = LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_8 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftLobby()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftLobby_m3D8EE536767F977FA67D3F37C622F6BD6381D5DF (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLeftLobby_m3D8EE536767F977FA67D3F37C622F6BD6381D5DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftLobby().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral8BA5EF7D138B70C6CE8ACA51A43081AB53BB3ABD, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreateRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreateRoomFailed_mC8C7AFAD21F83E631F5A4A0B93FED2140474F251 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCreateRoomFailed_mC8C7AFAD21F83E631F5A4A0B93FED2140474F251_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreateRoomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral7D53C873D226A601A9783CBEBEB7B758ABE2D2C7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral7D53C873D226A601A9783CBEBEB7B758ABE2D2C7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinedRoom_m265455C861BCBB46A1B48260CF3BADF2ED6A7A00 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinedRoom_m265455C861BCBB46A1B48260CF3BADF2ED6A7A00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral32664F9AA6498F4C645EF8CFF0ECD74680727FE7);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral32664F9AA6498F4C645EF8CFF0ECD74680727FE7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_6 = LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_10 = LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_13 = __this->get_client_6();
		NullCheck(L_13);
		String_t* L_14 = LoadBalancingClient_get_GameServerAddress_m51436F2C9D474DF829B97C2A18F58A2CE161B3BD_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRoomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRoomFailed_mB8BE23A1279000FC0DF85A5F315F4893B5518D37 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinRoomFailed_mB8BE23A1279000FC0DF85A5F315F4893B5518D37_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRoomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral237C3911F834CBF9FAC59D4A04E783842A1D3CD6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral237C3911F834CBF9FAC59D4A04E783842A1D3CD6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnJoinRandomFailed(System.Int16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnJoinRandomFailed_m29A5170F57EC3136BDB44F19B1086C541C1DFFCF (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int16_t ___returnCode0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnJoinRandomFailed_m29A5170F57EC3136BDB44F19B1086C541C1DFFCF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnJoinRandomFailed(" + returnCode+","+message+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral5E0956988995BA9D8AD545060593EC7593A248E9);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral5E0956988995BA9D8AD545060593EC7593A248E9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int16_t L_5 = ___returnCode0;
		int16_t L_6 = L_5;
		RuntimeObject * L_7 = Box(Int16_t823A20635DAF5A3D93A1E01CFBF3CBA27CF00B4D_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral5C10B5B2CD673A0616D529AA5234B12EE7153808);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_9 = L_8;
		String_t* L_10 = ___message1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_9;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_12 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCreatedRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCreatedRoom_mCAF632FF23815FA4D639D443161970B91250D77C (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCreatedRoom_mCAF632FF23815FA4D639D443161970B91250D77C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCreatedRoom(" + this.client.CurrentRoom + "). " + this.client.CurrentLobby + " GameServer:" + this.client.GameServerAddress);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral6E7819832982A4FC237916272FB49CFFA9624FE3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral6E7819832982A4FC237916272FB49CFFA9624FE3);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_5 = __this->get_client_6();
		NullCheck(L_5);
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_6 = LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral449A6A793E79A809F30A8DF7B94A45F51C03EAA7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_7;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_9 = __this->get_client_6();
		NullCheck(L_9);
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_10 = LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral1D3E5829ED7DE70BD79558BB321D57CF75539526);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_12 = L_11;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_13 = __this->get_client_6();
		NullCheck(L_13);
		String_t* L_14 = LoadBalancingClient_get_GameServerAddress_m51436F2C9D474DF829B97C2A18F58A2CE161B3BD_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_14);
		String_t* L_15 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLeftRoom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLeftRoom_m0595545729A2037F8B186C97ACF28BC2D5A24CFD (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLeftRoom_m0595545729A2037F8B186C97ACF28BC2D5A24CFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLeftRoom().");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral0E894D3036F153E19CBC956B6A5AB40E5B46BFE2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnDisconnected(Photon.Realtime.DisconnectCause)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnDisconnected_m12159126D603B56767DF5736D5CDD5ED4A2A9764 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, int32_t ___cause0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnDisconnected_m12159126D603B56767DF5736D5CDD5ED4A2A9764_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.StopLogStats();
		SupportLogger_StopLogStats_m7431469A83F864C0DB61C16EC5772B81E5EE8495(__this, /*hidden argument*/NULL);
		// this.StopTrackValues();
		SupportLogger_StopTrackValues_m9589E4FCFDBD5E7BD170F3766C2A582865659606(__this, /*hidden argument*/NULL);
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnDisconnected(" + cause + ").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteralC114B6A8C4FCA0FA33B6A8678C504A97A63EBC26);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteralC114B6A8C4FCA0FA33B6A8678C504A97A63EBC26);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		int32_t L_5 = ___cause0;
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(DisconnectCause_t8A969EFEB0FE2E4ABD5824250D4C9F7941F2650F_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_9 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_9, /*hidden argument*/NULL);
		// this.LogBasics();
		SupportLogger_LogBasics_m7BD7CFAB251C14538F398D08839D82610A1D1452(__this, /*hidden argument*/NULL);
		// this.LogStats();
		SupportLogger_LogStats_mEFE7287DA5BC1F93A221235DCA05CCFE64AB9741(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRegionListReceived(Photon.Realtime.RegionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRegionListReceived_m74679048F721BAA572472E5E3C3D51635981936E (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, RegionHandler_tE1C559FF2DCCA020EC31ACCF3993A434617A15AF * ___regionHandler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRegionListReceived_m74679048F721BAA572472E5E3C3D51635981936E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRegionListReceived(regionHandler).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral10081B2796EBDFF80CF5904ABFDA3DFF44F1D24D, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomListUpdate(System.Collections.Generic.List`1<Photon.Realtime.RoomInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomListUpdate_mC0F13A3B1464DCF938AF8134E8A5DCCFAD7610AF (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F * ___roomList0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRoomListUpdate_mC0F13A3B1464DCF938AF8134E8A5DCCFAD7610AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomListUpdate(roomList). roomList.Count: " + roomList.Count);
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		List_1_tEE6027455F237CE56A073DB013E4D5CC655E615F * L_1 = ___roomList0;
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mFB8C1D9F137818425336071319A7903FE4ABD021_inline(L_1, /*hidden argument*/List_1_get_Count_mFB8C1D9F137818425336071319A7903FE4ABD021_RuntimeMethod_var);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m2E1F71C491D2429CC80A28745488FEA947BB7AAC(L_0, _stringLiteral0E181279FE55F2E332C77E81D9AD00F5486D04F9, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerEnteredRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerEnteredRoom_m57020B88EC6BB4A530D53CA1B2A3FF86A40672B5 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___newPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerEnteredRoom_m57020B88EC6BB4A530D53CA1B2A3FF86A40672B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerEnteredRoom(" + newPlayer+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral736FF8E5B8E1C7958551256FA5E5146C75A31C7B);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral736FF8E5B8E1C7958551256FA5E5146C75A31C7B);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___newPlayer0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_7 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerLeftRoom(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerLeftRoom_m73D5CB9F4D4567A0DFB0CE432AFEC0B505E21205 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___otherPlayer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerLeftRoom_m73D5CB9F4D4567A0DFB0CE432AFEC0B505E21205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerLeftRoom(" + otherPlayer+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3850EA0BD3AE76F6C25B67DC9BD76AD54ED52547);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3850EA0BD3AE76F6C25B67DC9BD76AD54ED52547);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___otherPlayer0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_7 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnRoomPropertiesUpdate(ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnRoomPropertiesUpdate_mFA0FD608CBC1159F42A064CA60180683D5FBD0F1 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * ___propertiesThatChanged0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnRoomPropertiesUpdate_mFA0FD608CBC1159F42A064CA60180683D5FBD0F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnRoomPropertiesUpdate(propertiesThatChanged).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral6936221DCE707D23499D1653D6EE7D2BADFFBAA9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnPlayerPropertiesUpdate(Photon.Realtime.Player,ExitGames.Client.Photon.Hashtable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnPlayerPropertiesUpdate_mF3D195B21CBF42B3AA56EEBBC09BB9ED5BC980DB (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___targetPlayer0, Hashtable_tE27CA83D8B816F365DB8194D628B26AAE0AFCC25 * ___changedProps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnPlayerPropertiesUpdate_mF3D195B21CBF42B3AA56EEBBC09BB9ED5BC980DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnPlayerPropertiesUpdate(targetPlayer,changedProps).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral6124202FE8A86D323B1C5BC98700503825D454C2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnMasterClientSwitched(Photon.Realtime.Player)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnMasterClientSwitched_m65B54CFBD1A7A3BD1EA541329CB4B5188B2E9581 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * ___newMasterClient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnMasterClientSwitched_m65B54CFBD1A7A3BD1EA541329CB4B5188B2E9581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnMasterClientSwitched(" + newMasterClient+").");
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral263A15B4E3E9E2F4C3E8221AC828274306B13855);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral263A15B4E3E9E2F4C3E8221AC828274306B13855);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = L_3;
		Player_tFB06F12211DD89BEE90AD848E6C7BD9D889F1202 * L_5 = ___newMasterClient0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2);
		String_t* L_7 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationResponse(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationResponse_m5FB83E988E8ADB39FAFA708CEBACF239714C8152 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCustomAuthenticationResponse_m5FB83E988E8ADB39FAFA708CEBACF239714C8152_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationResponse(" + data.ToStringFull()+").");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(Extensions_t17EF958E5F2414F822246B79B7D985713AACE5CE_il2cpp_TypeInfo_var);
		String_t* L_2 = Extensions_ToStringFull_m3A6988AD154019F56BED30702B4C9A7C6378399D(L_1, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_0, _stringLiteralC5958D312E5DCB60470B5CABD9A95E5F86B42BCB, L_2, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnCustomAuthenticationFailed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnCustomAuthenticationFailed_m4CC7E899EDF02DD2AF61A1929AE952C9AE383863 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, String_t* ___debugMessage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnCustomAuthenticationFailed_m4CC7E899EDF02DD2AF61A1929AE952C9AE383863_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnCustomAuthenticationFailed(" + debugMessage+").");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___debugMessage0;
		String_t* L_2 = String_Concat_mDD2E38332DED3A8C088D38D78A0E0BEB5091DA64(L_0, _stringLiteral4510F0D9271E0DB7D04EB79129742314C93163A9, L_1, _stringLiteralD41919407CE8F78B6CD89401353E39179FEC9AB2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnLobbyStatisticsUpdate(System.Collections.Generic.List`1<Photon.Realtime.TypedLobbyInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnLobbyStatisticsUpdate_m3FB91C1A1517DA60FE42BD74B4AC5F3F8EB50757 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, List_1_t9C9F88DE1BBDC21E932FFE3F3C7BB1289157CBDB * ___lobbyStatistics0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnLobbyStatisticsUpdate_m3FB91C1A1517DA60FE42BD74B4AC5F3F8EB50757_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(this.GetFormattedTimestamp() + " SupportLogger OnLobbyStatisticsUpdate(lobbyStatistics).");
		String_t* L_0 = SupportLogger_GetFormattedTimestamp_mEB3B9050803046F80866E69364F27316B47772FF(__this, /*hidden argument*/NULL);
		String_t* L_1 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(L_0, _stringLiteral810A4EA841E283333EDA34AE9D91F1789F061216, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::OnErrorInfo(Photon.Realtime.ErrorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger_OnErrorInfo_m69EC32D01F247A5749AB05E2E4B4F6527151B379 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9 * ___errorInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SupportLogger_OnErrorInfo_m69EC32D01F247A5749AB05E2E4B4F6527151B379_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogError(errorInfo.ToString());
		ErrorInfo_t829D1EA10BBE2538E288DC9FAFFCBE91874225D9 * L_0 = ___errorInfo0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.SupportLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SupportLogger__ctor_mC7BB76A104343C8663F1347422BBB6EDCC996E32 (SupportLogger_t92797179BB73C87366EC176428F8B2B791FCFEFA * __this, const RuntimeMethod* method)
{
	{
		// public bool LogTrafficStats = true;
		__this->set_LogTrafficStats_4((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Realtime.TypedLobby::get_IsDefault()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypedLobby_get_IsDefault_mBE91B548874D645F82D37D1C0345D7C884E56426 (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method)
{
	{
		// public bool IsDefault { get { return string.IsNullOrEmpty(this.Name); } }
		String_t* L_0 = __this->get_Name_0();
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_m93E5AC3140B5F2D9AA0FC06C1B8190F38ED0F4B4 (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method)
{
	{
		// internal TypedLobby()
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Photon.Realtime.TypedLobby::.ctor(System.String,Photon.Realtime.LobbyType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__ctor_m7EBA96949B87D66792E62106BB7F0F76E4EF2A0F (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, String_t* ___name0, uint8_t ___type1, const RuntimeMethod* method)
{
	{
		// public TypedLobby(string name, LobbyType type)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// this.Name = name;
		String_t* L_0 = ___name0;
		__this->set_Name_0(L_0);
		// this.Type = type;
		uint8_t L_1 = ___type1;
		__this->set_Type_1(L_1);
		// }
		return;
	}
}
// System.String Photon.Realtime.TypedLobby::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobby_ToString_m0CF8F902BF7736F9E379245C978C5EBB3A0E136A (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby_ToString_m0CF8F902BF7736F9E379245C978C5EBB3A0E136A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("lobby '{0}'[{1}]", this.Name, this.Type);
		String_t* L_0 = __this->get_Name_0();
		uint8_t L_1 = __this->get_Type_1();
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4 = String_Format_m19325298DBC61AAC016C16F7B3CF97A8A3DEA34A(_stringLiteral8227CC0BECA58310D819DA015E3EE6A267F9F559, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Photon.Realtime.TypedLobby::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobby__cctor_m7AF440589B309580FA09B05B7945B2989E3BE8D9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobby__cctor_m7AF440589B309580FA09B05B7945B2989E3BE8D9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly TypedLobby Default = new TypedLobby();
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_0 = (TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)il2cpp_codegen_object_new(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_m93E5AC3140B5F2D9AA0FC06C1B8190F38ED0F4B4(L_0, /*hidden argument*/NULL);
		((TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_StaticFields*)il2cpp_codegen_static_fields_for(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var))->set_Default_2(L_0);
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
// System.String Photon.Realtime.TypedLobbyInfo::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TypedLobbyInfo_ToString_m0EA434EB3C70BE1F2926575E0CF915140FD4C117 (TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo_ToString_m0EA434EB3C70BE1F2926575E0CF915140FD4C117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("TypedLobbyInfo '{0}'[{1}] rooms: {2} players: {3}", this.Name, this.Type, this.RoomCount, this.PlayerCount);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = ((TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)__this)->get_Name_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		uint8_t L_4 = ((TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 *)__this)->get_Type_1();
		uint8_t L_5 = L_4;
		RuntimeObject * L_6 = Box(LobbyType_tC10229382E36CFEC2718583263A711F1C1F35305_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_7 = L_3;
		int32_t L_8 = __this->get_RoomCount_4();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_10);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_7;
		int32_t L_12 = __this->get_PlayerCount_3();
		int32_t L_13 = L_12;
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		String_t* L_15 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteralD1DBE50E93BA588346E8642DECF71D0109C9A902, L_11, /*hidden argument*/NULL);
		return L_15;
	}
}
// System.Void Photon.Realtime.TypedLobbyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedLobbyInfo__ctor_mAC49C720E13E9B444A9722B65CBFA943F2931A5A (TypedLobbyInfo_t4ADAD96C3E4BD40D2ADEA6AF8741EB96983D76E3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypedLobbyInfo__ctor_mAC49C720E13E9B444A9722B65CBFA943F2931A5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5_il2cpp_TypeInfo_var);
		TypedLobby__ctor_m93E5AC3140B5F2D9AA0FC06C1B8190F38ED0F4B4(__this, /*hidden argument*/NULL);
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
// System.Boolean Photon.Realtime.WebFlags::get_HttpForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_HttpForward_m7EA99B8FE104581A80CC676C469B132DA6D21029 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & HttpForwardConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_HttpForward(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_HttpForward_mB47F7D48F3F9C1D0521C8E4C2AEA37389E12B288 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= HttpForwardConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)1))))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte) (WebhookFlags & ~(1 << 0));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-2)))))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendAuthCookie()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendAuthCookie_m5A864D951566DCE0FF3573D62D324FD580A8F97B (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & SendAuthCookieConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)2))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendAuthCookie(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendAuthCookie_mDF0A4B0C904D3FA1688A9D0AF8D5867A74B67D94 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendAuthCookieConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)2))))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 1));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-3)))))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendSync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendSync_m4191E1CA57D61C40D62B23411C6571BCCB0A0A61 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & SendSyncConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)4))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendSync(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendSync_m171D13A46FACEE49239611020E9171C2E2B29DB3 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendSyncConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)4))))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 2));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-5)))))));
		// }
		return;
	}
}
// System.Boolean Photon.Realtime.WebFlags::get_SendState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebFlags_get_SendState_m7BE277CE80FC50E7697891F51A0E40606B121009 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, const RuntimeMethod* method)
{
	{
		// get { return (WebhookFlags & SendStateConst) != 0; }
		uint8_t L_0 = __this->get_WebhookFlags_1();
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)8))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void Photon.Realtime.WebFlags::set_SendState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags_set_SendState_m6CB329794B9068C9871B83D5AA428EE63D05D5F8 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (value)
		bool L_0 = ___value0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// WebhookFlags |= SendStateConst;
		uint8_t L_1 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_1|(int32_t)8))))));
		// }
		return;
	}

IL_0013:
	{
		// WebhookFlags = (byte)(WebhookFlags & ~(1 << 3));
		uint8_t L_2 = __this->get_WebhookFlags_1();
		__this->set_WebhookFlags_1((uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)-9)))))));
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__ctor_mEEA8FDD2F2B11851C7A428C104DCC4707910DAF3 (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * __this, uint8_t ___webhookFlags0, const RuntimeMethod* method)
{
	{
		// public WebFlags(byte webhookFlags)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// WebhookFlags = webhookFlags;
		uint8_t L_0 = ___webhookFlags0;
		__this->set_WebhookFlags_1(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebFlags::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebFlags__cctor_m548A23A5D14773F6F55F48A3CABEA0D04FB5E592 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebFlags__cctor_m548A23A5D14773F6F55F48A3CABEA0D04FB5E592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public readonly static WebFlags Default = new WebFlags(0);
		WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE * L_0 = (WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE *)il2cpp_codegen_object_new(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_il2cpp_TypeInfo_var);
		WebFlags__ctor_mEEA8FDD2F2B11851C7A428C104DCC4707910DAF3(L_0, (uint8_t)0, /*hidden argument*/NULL);
		((WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_StaticFields*)il2cpp_codegen_static_fields_for(WebFlags_t869C4472ACC1737A77A04BC608508C231A4B27EE_il2cpp_TypeInfo_var))->set_Default_0(L_0);
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
// System.Void Photon.Realtime.WebRpcCallbacksContainer::.ctor(Photon.Realtime.LoadBalancingClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer__ctor_mBF233678774D848C2FA452DE0EE5F5FAC15D86C3 (WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * __this, LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * ___client0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcCallbacksContainer__ctor_mBF233678774D848C2FA452DE0EE5F5FAC15D86C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRpcCallbacksContainer(LoadBalancingClient client)
		IL2CPP_RUNTIME_CLASS_INIT(List_1_t1CA4964C7439B85B0DE13E82FEB394DAEAE87E28_il2cpp_TypeInfo_var);
		List_1__ctor_mA487A5D2E718EB48089719DA1AD2715DF0500F63(__this, /*hidden argument*/List_1__ctor_mA487A5D2E718EB48089719DA1AD2715DF0500F63_RuntimeMethod_var);
		// this.client = client;
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = ___client0;
		__this->set_client_6(L_0);
		// }
		return;
	}
}
// System.Void Photon.Realtime.WebRpcCallbacksContainer::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcCallbacksContainer_OnWebRpcResponse_m4B8F734C71FACD722CC2CE7DD77622C392C674EF (WebRpcCallbacksContainer_t13E35FB3A5C223F5EC56992E6CF51A0BC4D10895 * __this, OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcCallbacksContainer_OnWebRpcResponse_m4B8F734C71FACD722CC2CE7DD77622C392C674EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// this.client.UpdateCallbackTargets();
		LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * L_0 = __this->get_client_6();
		NullCheck(L_0);
		LoadBalancingClient_UpdateCallbackTargets_m867603F1F1E155D43ACB95FAE8902E762369C27C(L_0, /*hidden argument*/NULL);
		// foreach (IWebRpcCallback target in this)
		Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1  L_1 = List_1_GetEnumerator_m968D619CC39E270807A962EF7DB5CFB6A42A05AE(__this, /*hidden argument*/List_1_GetEnumerator_m968D619CC39E270807A962EF7DB5CFB6A42A05AE_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0021;
		}

IL_0014:
		{
			// foreach (IWebRpcCallback target in this)
			RuntimeObject* L_2 = Enumerator_get_Current_mF008E8C3C5383916456CBA5E9F3E921B5176D723_inline((Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mF008E8C3C5383916456CBA5E9F3E921B5176D723_RuntimeMethod_var);
			// target.OnWebRpcResponse(response);
			OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * L_3 = ___response0;
			NullCheck(L_2);
			InterfaceActionInvoker1< OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * >::Invoke(0 /* System.Void Photon.Realtime.IWebRpcCallback::OnWebRpcResponse(ExitGames.Client.Photon.OperationResponse) */, IWebRpcCallback_t8E22E34D48A3C7550F423A92483771438C1B7D25_il2cpp_TypeInfo_var, L_2, L_3);
		}

IL_0021:
		{
			// foreach (IWebRpcCallback target in this)
			bool L_4 = Enumerator_MoveNext_mE72935B9754418217D583046D2D922521F81834F((Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mE72935B9754418217D583046D2D922521F81834F_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_0014;
			}
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x3A, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD((Enumerator_t0509BCC66E152AD1A776E69E5C54E4C54CE4B7B1 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mC7FFB79B44AF60DEF8ECB7E95469108B1A131FDD_RuntimeMethod_var);
		IL2CPP_END_FINALLY(44)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3A, IL_003a)
	}

IL_003a:
	{
		// }
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
// System.String Photon.Realtime.WebRpcResponse::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m0F883F37D26E9F681471E027AF38E6088538F15B (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m308E3FBEDB1BDA7EC5A3CEC735939BED9A3D9C69 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ResultCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m200D6DB37DBCD96F2D4697EDDA7EECD25F1946A3 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_ResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mF8C0D2C5256A7079923EA42D83D352665C2F4946 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Int32 Photon.Realtime.WebRpcResponse::get_ReturnCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ReturnCode_m94B978498C8B27ADCECBA7A787FA315FFC2E3349 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// get { return ResultCode; }
		int32_t L_0 = WebRpcResponse_get_ResultCode_m200D6DB37DBCD96F2D4697EDDA7EECD25F1946A3_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m07E8025679A4F3874D6794564893CF40F1F7CB13 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mF9763309AD3B2CAC2B04115859E0E8D3574CB539 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::get_DebugMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_DebugMessage_m95AAFAA5990E0CD4F38D576DD07F58D7B36425EC (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// get { return Message; }
		String_t* L_0 = WebRpcResponse_get_Message_m07E8025679A4F3874D6794564893CF40F1F7CB13_inline(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Photon.Realtime.WebRpcResponse::get_Parameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * WebRpcResponse_get_Parameters_m763CE8E7BC147B306EB89CEFA3F13478CB42D7D7 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::set_Parameters(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mD559BA96245258822B69B03673EB0E2C1E7330A2 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Photon.Realtime.WebRpcResponse::.ctor(ExitGames.Client.Photon.OperationResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebRpcResponse__ctor_mBF630E97AF16E2359F51A3C118CE27610F1679E3 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * ___response0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse__ctor_mBF630E97AF16E2359F51A3C118CE27610F1679E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// public WebRpcResponse(OperationResponse response)
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.UriPath, out value))
		OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * L_0 = ___response0;
		NullCheck(L_0);
		ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD * L_1 = L_0->get_Parameters_3();
		NullCheck(L_1);
		bool L_2 = ParameterDictionary_TryGetValue_m81A3AF801239A0863C5679CAAEB5FE2517ABC0CF(L_1, (uint8_t)((int32_t)209), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// this.Name = value as string;
		RuntimeObject * L_3 = V_0;
		WebRpcResponse_set_Name_m308E3FBEDB1BDA7EC5A3CEC735939BED9A3D9C69_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_0026:
	{
		// this.ResultCode = -1;
		WebRpcResponse_set_ResultCode_mF8C0D2C5256A7079923EA42D83D352665C2F4946_inline(__this, (-1), /*hidden argument*/NULL);
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnCode, out value))
		OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * L_4 = ___response0;
		NullCheck(L_4);
		ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD * L_5 = L_4->get_Parameters_3();
		NullCheck(L_5);
		bool L_6 = ParameterDictionary_TryGetValue_m81A3AF801239A0863C5679CAAEB5FE2517ABC0CF(L_5, (uint8_t)((int32_t)207), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		// this.ResultCode = (byte)value;
		RuntimeObject * L_7 = V_0;
		WebRpcResponse_set_ResultCode_mF8C0D2C5256A7079923EA42D83D352665C2F4946_inline(__this, ((*(uint8_t*)((uint8_t*)UnBox(L_7, Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
	}

IL_004d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcParameters, out value))
		OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * L_8 = ___response0;
		NullCheck(L_8);
		ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD * L_9 = L_8->get_Parameters_3();
		NullCheck(L_9);
		bool L_10 = ParameterDictionary_TryGetValue_m81A3AF801239A0863C5679CAAEB5FE2517ABC0CF(L_9, (uint8_t)((int32_t)208), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006d;
		}
	}
	{
		// this.Parameters = value as Dictionary<string, object>;
		RuntimeObject * L_11 = V_0;
		WebRpcResponse_set_Parameters_mD559BA96245258822B69B03673EB0E2C1E7330A2_inline(__this, ((Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA *)IsInstClass((RuntimeObject*)L_11, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_006d:
	{
		// if (response.Parameters.TryGetValue(ParameterCode.WebRpcReturnMessage, out value))
		OperationResponse_tEBF7C1A02BB5CDA40B415DBFD349E8D8F0F923A2 * L_12 = ___response0;
		NullCheck(L_12);
		ParameterDictionary_t2C8CF2F0F3CDC5C31CE19FC4A770DDC991E9CBAD * L_13 = L_12->get_Parameters_3();
		NullCheck(L_13);
		bool L_14 = ParameterDictionary_TryGetValue_m81A3AF801239A0863C5679CAAEB5FE2517ABC0CF(L_13, (uint8_t)((int32_t)206), (RuntimeObject **)(&V_0), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_008d;
		}
	}
	{
		// this.Message = value as string;
		RuntimeObject * L_15 = V_0;
		WebRpcResponse_set_Message_mF9763309AD3B2CAC2B04115859E0E8D3574CB539_inline(__this, ((String_t*)IsInstSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.String Photon.Realtime.WebRpcResponse::ToStringFull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebRpcResponse_ToStringFull_mE59EFF53DA369DDA45DC95349CA2D3578F934864 (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRpcResponse_ToStringFull_mE59EFF53DA369DDA45DC95349CA2D3578F934864_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return string.Format("{0}={2}: {1} \"{3}\"", this.Name, SupportClass.DictionaryToString(this.Parameters), this.ResultCode, this.Message);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_0 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_1 = L_0;
		String_t* L_2 = WebRpcResponse_get_Name_m0F883F37D26E9F681471E027AF38E6088538F15B_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_3 = L_1;
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_4 = WebRpcResponse_get_Parameters_m763CE8E7BC147B306EB89CEFA3F13478CB42D7D7_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(SupportClass_tC708B5AD7183DB2DAD6591C0D75B3FB51644CAC1_il2cpp_TypeInfo_var);
		String_t* L_5 = SupportClass_DictionaryToString_mE5C65EDE4E69D33D5D4FA628FCB00F5BFF5E9F5C(L_4, (bool)1, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_3;
		int32_t L_7 = WebRpcResponse_get_ResultCode_m200D6DB37DBCD96F2D4697EDDA7EECD25F1946A3_inline(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_6;
		String_t* L_11 = WebRpcResponse_get_Message_m07E8025679A4F3874D6794564893CF40F1F7CB13_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_11);
		String_t* L_12 = String_Format_mA3AC3FE7B23D97F3A5BAA082D25B0E01B341A865(_stringLiteral9E226BDBF405B6893314BBDA5DF5D6DA548FA202, L_10, /*hidden argument*/NULL);
		return L_12;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* RoomInfo_get_Name_mEC845FB613F51CC9978E328161A17366E5C3E7A1_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// return this.name;
		String_t* L_0 = __this->get_name_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t RoomInfo_get_PlayerCount_mA1BD0C8B36519C0A5FBC427B2DD4F38FD6A5044E_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = __this->get_U3CPlayerCountU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void RoomInfo_set_PlayerCount_mDBF6797EC57BE809F1E87293FD2BEAE82633B519_inline (RoomInfo_t2FA7C04D0FB706F0313E7C91AEA598D7B1BDEBE2 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int PlayerCount { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CPlayerCountU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * LoadBalancingClient_get_LoadBalancingPeer_m0997FEE69F076CDD9740F8A3B34038733175A243_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public LoadBalancingPeer LoadBalancingPeer { get; private set; }
		LoadBalancingPeer_tCD3148D53F3EF643FCBB86A139EF0B84FD3F3F14 * L_0 = __this->get_U3CLoadBalancingPeerU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t LoadBalancingClient_get_State_mDCC22D02A85973C68623C764C96BE9A862C8BD11_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// return this.state;
		int32_t L_0 = __this->get_state_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppId_m3AF2312FFE7C453D603BBFB12554430A8CC22B63_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string AppId { get; set; }
		String_t* L_0 = __this->get_U3CAppIdU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t String_get_Length_mD48C8A16A5CF1914F330DCE82D9BE15C3BEDD018_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_AppVersion_mD9EB48C5A1FD0F2E82177806C082BE479C5DEF5D_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string AppVersion { get; set; }
		String_t* L_0 = __this->get_U3CAppVersionU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Type_t * PhotonPeer_get_SocketImplementation_mBF270F1132D7C0F99DF6BE5632E5214996A058CE_inline (PhotonPeer_t0A384ADC34A32628D1939CD1583DBEF9D8BC7223 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSocketImplementationU3Ek__BackingField_20();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * LoadBalancingClient_get_AuthValues_mE56B5ADE8CC0EBB1CB9C5DFA64913AC5B36B7F02_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public AuthenticationValues AuthValues { get; set; }
		AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * L_0 = __this->get_U3CAuthValuesU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR uint8_t AuthenticationValues_get_AuthType_m7644167D1D9D4B1EB47E98BF5FDA05D1B3F1770A_inline (AuthenticationValues_t3D3544E09B8F3860CBF8B0998760A0CAE94F2D13 * __this, const RuntimeMethod* method)
{
	{
		// get { return authType; }
		uint8_t L_0 = __this->get_authType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_CloudRegion_m349B62A6F4C929E5BB6EBD0350467BA689FB0387_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string CloudRegion { get; private set; }
		String_t* L_0 = __this->get_U3CCloudRegionU3Ek__BackingField_42();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * LoadBalancingClient_get_CurrentLobby_mA012C41E1DF7DF53F0CF4A024C9E0FABDDDC2456_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public TypedLobby CurrentLobby { get; internal set; }
		TypedLobby_tD5DAFEDF05C473EE3FB9618C0641D1CBB4CA4BD5 * L_0 = __this->get_U3CCurrentLobbyU3Ek__BackingField_29();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * LoadBalancingClient_get_CurrentRoom_mA294529AE11CDDF17597FADE478A392B8B534002_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public Room CurrentRoom { get; set; }
		Room_t5DFC39DD6736A2641374564EC6C31352BE33000D * L_0 = __this->get_U3CCurrentRoomU3Ek__BackingField_33();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* LoadBalancingClient_get_GameServerAddress_m51436F2C9D474DF829B97C2A18F58A2CE161B3BD_inline (LoadBalancingClient_t83BDB381BB0B2B367F4B8AA0280EB8204428611A * __this, const RuntimeMethod* method)
{
	{
		// public string GameServerAddress { get; protected internal set; }
		String_t* L_0 = __this->get_U3CGameServerAddressU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t WebRpcResponse_get_ResultCode_m200D6DB37DBCD96F2D4697EDDA7EECD25F1946A3_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = __this->get_U3CResultCodeU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Message_m07E8025679A4F3874D6794564893CF40F1F7CB13_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = __this->get_U3CMessageU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Name_m308E3FBEDB1BDA7EC5A3CEC735939BED9A3D9C69_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_ResultCode_mF8C0D2C5256A7079923EA42D83D352665C2F4946_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int ResultCode { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CResultCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Parameters_mD559BA96245258822B69B03673EB0E2C1E7330A2_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * ___value0, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = ___value0;
		__this->set_U3CParametersU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void WebRpcResponse_set_Message_mF9763309AD3B2CAC2B04115859E0E8D3574CB539_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		// public string Message { get; private set; }
		String_t* L_0 = ___value0;
		__this->set_U3CMessageU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR String_t* WebRpcResponse_get_Name_m0F883F37D26E9F681471E027AF38E6088538F15B_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public string Name { get; private set; }
		String_t* L_0 = __this->get_U3CNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * WebRpcResponse_get_Parameters_m763CE8E7BC147B306EB89CEFA3F13478CB42D7D7_inline (WebRpcResponse_tD8FD9F30AC6BAB6408C994A31CB9FE0C2FA67422 * __this, const RuntimeMethod* method)
{
	{
		// public Dictionary<string, object> Parameters { get; private set; }
		Dictionary_2_t9140A71329927AE4FD0F3CF4D4D66668EBE151EA * L_0 = __this->get_U3CParametersU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
