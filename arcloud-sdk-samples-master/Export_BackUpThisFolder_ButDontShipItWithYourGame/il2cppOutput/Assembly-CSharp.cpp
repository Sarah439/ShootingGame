#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>
struct U3CU3Ef__AnonymousType0_4_t87E69E279093DFC4580EF2B2E42CCE84BA36F057;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39;
// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs>
struct Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074;
// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275;
// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,UnityEngine.XR.ARFoundation.ARPlane>
struct Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t1447BF8E1A962EF1787C1E07658EB94E72BA2CEF;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityMessage>
struct KeyCollection_t9634554F662AFF13699B7E2AEC323DC40CE0D268;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077;
// System.Collections.Generic.List`1<ArabicMapping>
struct List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<TashkeelLocation>
struct List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor>
struct List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityMessage>
struct ValueCollection_tE53755816A57C9C89A737DF3FDEA18187BD3145B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityMessage>[]
struct EntryU5BU5D_tDCE2A1E4103052C47561512BF6611A3104D53B11;
// UnityEngine.XR.ARFoundation.ARPlane[]
struct ARPlaneU5BU5D_t8C555584F9BAD4FB2BD4DB6D7933EBBBD61D6FD4;
// ArabicMapping[]
struct ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// ExpectedFixedText[]
struct ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TashkeelLocation[]
struct TashkeelLocationU5BU5D_tBD4EE4BFCB8428109BE1E329CB727336ECB96D81;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ARPlacement
struct ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7;
// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0;
// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928;
// UnityEngine.XR.ARFoundation.ARSessionOrigin
struct ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_t11C2294D60E10C8BF4CE687A4BEFBB42A24A233C;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// ArabicSupport.ArabicFixer
struct ArabicFixer_t5BB0DCB99F68BE86B55A83D0E771BCBDD37CC506;
// ArabicFixerTool
struct ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB;
// ArabicMapping
struct ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338;
// ArabicSupportTester
struct ArabicSupportTester_tD15D817694B99F697C75D1F68F905E6523AEF85F;
// ArabicTable
struct ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448;
// ArabicTextScrpt
struct ArabicTextScrpt_t7028C2BAC4D498ABBBFDBB9C05E15D486F31E91D;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// AutoPlacementOfObjectInPlane
struct AutoPlacementOfObjectInPlane_tEAC3C0C6774B2EF2DFF017258422B75F551070C5;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// ExpectedFixedText
struct ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905;
// FixArabic3DText
struct FixArabic3DText_t641D8A36CD5A21EDDFBC367D24C1520A49C89199;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MathProblem
struct MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// MessageHandler
struct MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t9CB57C8239C4A0D29CF45F474FDA4B6163DEBFA8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetArabicText
struct SetArabicText_tAD09614C48732BC35B8C526D38F9234CF99BFE63;
// SetArabicTextExample
struct SetArabicTextExample_tCE6C4FFEB444346DEAE0C54776F73EB80419D0B1;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TashkeelLocation
struct TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityMessage
struct UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F;
// UnityMessageManager
struct UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem
struct XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62;
// buttonOver
struct buttonOver_t45C4AB3C1E3F2A2D890F94A501AA62F8F5E41AA8;
// controlReplay
struct controlReplay_tF79ADAE88DDD1A57F8D6898BE95ABB5C354016DF;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityMessageManager/MessageDelegate
struct MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D;
// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6B37F2DC3CBC36CB512AAB959CD9F9E3A5ED19A1282D3D8D0EF02E14C2935C71_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral13C0EDD28E230E66BC3A932CBD9F95D38240A257;
IL2CPP_EXTERN_C String_t* _stringLiteral1CF4310B12FE825EDACB73B9EAE95C8C262792A5;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469;
IL2CPP_EXTERN_C String_t* _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
IL2CPP_EXTERN_C String_t* _stringLiteral48920660E3582A05094D20D42688D9CA45863565;
IL2CPP_EXTERN_C String_t* _stringLiteral4D09669BA97E809CC8DF8DEE21ADF9A0DB96A7DC;
IL2CPP_EXTERN_C String_t* _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653;
IL2CPP_EXTERN_C String_t* _stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66;
IL2CPP_EXTERN_C String_t* _stringLiteral62D485105DA3BDB7538E866E44FA87F51AD11B2D;
IL2CPP_EXTERN_C String_t* _stringLiteral7484EEA35A5138F573F3BA3AA38839C5C019A31C;
IL2CPP_EXTERN_C String_t* _stringLiteral7822DC3F47B87491C99A8723A4A41B27E9B9D6EE;
IL2CPP_EXTERN_C String_t* _stringLiteral7F58107EE6A427BA4B2F4C93700E9EAECC124EA4;
IL2CPP_EXTERN_C String_t* _stringLiteral98E2F9660B9D89F61CAA2CB3C1D5670F78E1F2F0;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C String_t* _stringLiteral9D27829CAE2E3F203B547B0861A45BDAE1B6D3EB;
IL2CPP_EXTERN_C String_t* _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralB9A257ED4FF5B22ECA3F4923DA317E5E24BB2C53;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD945C749A458FF6A175D75E12A5F6D40E433D7;
IL2CPP_EXTERN_C String_t* _stringLiteralC080800A3AA41BBFC76C0F45390DCA442A0D9DDA;
IL2CPP_EXTERN_C String_t* _stringLiteralCA50F4057951BA11CF0B6387E3AE7CB14FFE9D63;
IL2CPP_EXTERN_C String_t* _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDBC84C90A550DD80C35D058457A671B48C5F186F;
IL2CPP_EXTERN_C String_t* _stringLiteralE2D6DC29DE3D40BE0F06C25BD0CEB6AFDEAF1C4C;
IL2CPP_EXTERN_C String_t* _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532;
IL2CPP_EXTERN_C const RuntimeMethod* ARPlacement_Dissmiss_m48FD6662E21B7D7743BEB23FF33E905F459C2461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ARPlacement_PlaneChanged_mD2832FCCEC371CFE7D95C3DAAB0062936DDCDC7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202_mF125C5616B8CB1CCBE3B6E5AFB8330507C1E1176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m271268361559ED7CFB6CA3EA509DF710A2448B1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD2739082D6BA89E946E80CC1066961CD560005D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m87B84A519CB2609E5AC31D6B38FAB607F688DE90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA42AEE2EC9AFCF2F493842E77E2AD849A3FD1D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC3B87EBDA3C2A113B5677AE7C24434CC6A1EDC77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mDE0587A86B2A76BB5313F153F941C0263E9FE1A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3C07ABE743698F8124F70D6752634B52356CD8A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mF3937B72448133DF6FACB8F4769A1625DF677BDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB6A16F51D14DA8EED4257388477351777BEA4C10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE29CA81FF433DA79AB23285348CE4D3E1EA7F28F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityMessageManager_OnSceneLoaded_m680CA2A97F09F4FD54B10C042D4D624273DFB3D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>
struct U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___U3CdataU3Ei__Field_3;
};

// <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>
struct U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454  : public RuntimeObject
{
	// <id>j__TPar <>f__AnonymousType0`4::<id>i__Field
	int32_t ___U3CidU3Ei__Field_0;
	// <seq>j__TPar <>f__AnonymousType0`4::<seq>i__Field
	String_t* ___U3CseqU3Ei__Field_1;
	// <name>j__TPar <>f__AnonymousType0`4::<name>i__Field
	String_t* ___U3CnameU3Ei__Field_2;
	// <data>j__TPar <>f__AnonymousType0`4::<data>i__Field
	RuntimeObject* ___U3CdataU3Ei__Field_3;
};

// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>
struct Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDCE2A1E4103052C47561512BF6611A3104D53B11* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9634554F662AFF13699B7E2AEC323DC40CE0D268* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE53755816A57C9C89A737DF3FDEA18187BD3145B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>
struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ARPlaneU5BU5D_t8C555584F9BAD4FB2BD4DB6D7933EBBBD61D6FD4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ARPlaneU5BU5D_t8C555584F9BAD4FB2BD4DB6D7933EBBBD61D6FD4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<ArabicMapping>
struct List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ArabicMappingU5BU5D_t633E95577E6919C9FE1B413A050FBECDA7EBC863* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Char>
struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<TashkeelLocation>
struct List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TashkeelLocationU5BU5D_tBD4EE4BFCB8428109BE1E329CB727336ECB96D81* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TashkeelLocationU5BU5D_tBD4EE4BFCB8428109BE1E329CB727336ECB96D81* ___s_emptyArray_5;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// ArabicSupport.ArabicFixer
struct ArabicFixer_t5BB0DCB99F68BE86B55A83D0E771BCBDD37CC506  : public RuntimeObject
{
};

// ArabicFixerTool
struct ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB  : public RuntimeObject
{
};

struct ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields
{
	// System.Boolean ArabicFixerTool::showTashkeel
	bool ___showTashkeel_0;
	// System.Boolean ArabicFixerTool::combineTashkeel
	bool ___combineTashkeel_1;
	// System.Boolean ArabicFixerTool::useHinduNumbers
	bool ___useHinduNumbers_2;
};

// ArabicMapping
struct ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338  : public RuntimeObject
{
	// System.Int32 ArabicMapping::from
	int32_t ___from_0;
	// System.Int32 ArabicMapping::to
	int32_t ___to_1;
};

// ArabicTable
struct ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448  : public RuntimeObject
{
};

struct ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields
{
	// System.Collections.Generic.List`1<ArabicMapping> ArabicTable::mapList
	List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* ___mapList_0;
	// ArabicTable ArabicTable::arabicMapper
	ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* ___arabicMapper_1;
};
struct Il2CppArrayBounds;

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_13;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// MessageHandler
struct MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5  : public RuntimeObject
{
	// System.Int32 MessageHandler::id
	int32_t ___id_0;
	// System.String MessageHandler::seq
	String_t* ___seq_1;
	// System.String MessageHandler::name
	String_t* ___name_2;
	// Newtonsoft.Json.Linq.JToken MessageHandler::data
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data_3;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TashkeelLocation
struct TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E  : public RuntimeObject
{
	// System.Char TashkeelLocation::tashkeel
	Il2CppChar ___tashkeel_0;
	// System.Int32 TashkeelLocation::position
	int32_t ___position_1;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// UnityMessage
struct UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F  : public RuntimeObject
{
	// System.String UnityMessage::name
	String_t* ___name_0;
	// Newtonsoft.Json.Linq.JObject UnityMessage::data
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___data_1;
	// System.Action`1<System.Object> UnityMessage::callBack
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callBack_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<ArabicMapping>
struct Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<TashkeelLocation>
struct Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* ____current_3;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs
struct ARPlanesChangedEventArgs_t8D63E0257BF9942EF8F8C0445F2FD46421017872 
{
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane> UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs::<added>k__BackingField
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___U3CaddedU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane> UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs::<updated>k__BackingField
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___U3CupdatedU3Ek__BackingField_1;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane> UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs::<removed>k__BackingField
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs
struct ARPlanesChangedEventArgs_t8D63E0257BF9942EF8F8C0445F2FD46421017872_marshaled_pinvoke
{
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___U3CaddedU3Ek__BackingField_0;
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___U3CupdatedU3Ek__BackingField_1;
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___U3CremovedU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs
struct ARPlanesChangedEventArgs_t8D63E0257BF9942EF8F8C0445F2FD46421017872_marshaled_com
{
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___U3CaddedU3Ek__BackingField_0;
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___U3CupdatedU3Ek__BackingField_1;
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___U3CremovedU3Ek__BackingField_2;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_14;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_t11C2294D60E10C8BF4CE687A4BEFBB42A24A233C* ____addingNew_15;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_16;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.XR.ARSubsystems.TrackableId
struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId1
	uint64_t ___m_SubId1_2;
	// System.UInt64 UnityEngine.XR.ARSubsystems.TrackableId::m_SubId2
	uint64_t ___m_SubId2_3;
};

struct TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7_StaticFields
{
	// System.Text.RegularExpressions.Regex UnityEngine.XR.ARSubsystems.TrackableId::s_TrackableIdRegex
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_TrackableIdRegex_0;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.TrackableId::s_InvalidId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___s_InvalidId_1;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::6B37F2DC3CBC36CB512AAB959CD9F9E3A5ED19A1282D3D8D0EF02E14C2935C71
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___6B37F2DC3CBC36CB512AAB959CD9F9E3A5ED19A1282D3D8D0EF02E14C2935C71_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_18;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_19;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t9CB57C8239C4A0D29CF45F474FDA4B6163DEBFA8* ___PropertyChanging_20;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_1;
};

struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971_StaticFields
{
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___k_Identity_2;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.XR.ARSubsystems.BoundedPlane
struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE 
{
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackableId
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_TrackableId_1;
	// UnityEngine.XR.ARSubsystems.TrackableId UnityEngine.XR.ARSubsystems.BoundedPlane::m_SubsumedById
	TrackableId_t49EAE8AA4B9584E314518723DC22B66496D47AD7 ___m_SubsumedById_2;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Center
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Center_3;
	// UnityEngine.Pose UnityEngine.XR.ARSubsystems.BoundedPlane::m_Pose
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___m_Pose_4;
	// UnityEngine.Vector2 UnityEngine.XR.ARSubsystems.BoundedPlane::m_Size
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Size_5;
	// UnityEngine.XR.ARSubsystems.PlaneAlignment UnityEngine.XR.ARSubsystems.BoundedPlane::m_Alignment
	int32_t ___m_Alignment_6;
	// UnityEngine.XR.ARSubsystems.TrackingState UnityEngine.XR.ARSubsystems.BoundedPlane::m_TrackingState
	int32_t ___m_TrackingState_7;
	// System.IntPtr UnityEngine.XR.ARSubsystems.BoundedPlane::m_NativePtr
	intptr_t ___m_NativePtr_8;
	// UnityEngine.XR.ARSubsystems.PlaneClassification UnityEngine.XR.ARSubsystems.BoundedPlane::m_Classification
	int32_t ___m_Classification_9;
};

struct BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE_StaticFields
{
	// UnityEngine.XR.ARSubsystems.BoundedPlane UnityEngine.XR.ARSubsystems.BoundedPlane::s_Default
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___s_Default_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>
struct Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.TextMesh
struct TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityMessageManager/MessageDelegate
struct MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D  : public MulticastDelegate_t
{
};

// UnityMessageManager/MessageHandlerDelegate
struct MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider>
struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TSubsystem UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::<subsystem>k__BackingField
	XRPlaneSubsystem_t6FC18D5B1FF10EE9B4A751977B526F44A16EDB62* ___U3CsubsystemU3Ek__BackingField_4;
};

struct SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6_StaticFields
{
	// System.Collections.Generic.List`1<TSubsystemDescriptor> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemDescriptors
	List_1_tD705D57B270C006E488F9C9B55BA0768A11125D0* ___s_SubsystemDescriptors_5;
	// System.Collections.Generic.List`1<TSubsystem> UnityEngine.XR.ARFoundation.SubsystemLifecycleManager`3::s_SubsystemInstances
	List_1_t6630EC2D13FD2DC6D86447667371501266C9B3E8* ___s_SubsystemInstances_6;
};

// ARPlacement
struct ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ARPlacement::welcomePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___welcomePanel_4;
	// UnityEngine.GameObject ARPlacement::placedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placedObject_5;
	// UnityEngine.GameObject ARPlacement::placedPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___placedPrefab_6;
	// UnityEngine.UI.Button ARPlacement::disimssButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___disimssButton_7;
	// UnityEngine.XR.ARFoundation.ARPlaneManager ARPlacement::aRPlaneManager
	ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* ___aRPlaneManager_8;
};

// UnityEngine.XR.ARFoundation.ARTrackable
struct ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ArabicSupportTester
struct ArabicSupportTester_tD15D817694B99F697C75D1F68F905E6523AEF85F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ExpectedFixedText[] ArabicSupportTester::ExpectedTexts
	ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* ___ExpectedTexts_4;
};

// ArabicTextScrpt
struct ArabicTextScrpt_t7028C2BAC4D498ABBBFDBB9C05E15D486F31E91D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ArabicTextScrpt::text
	String_t* ___text_4;
	// UnityEngine.UI.Text ArabicTextScrpt::arabicText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___arabicText_5;
};

// AutoPlacementOfObjectInPlane
struct AutoPlacementOfObjectInPlane_tEAC3C0C6774B2EF2DFF017258422B75F551070C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// ExpectedFixedText
struct ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String ExpectedFixedText::Unfixed
	String_t* ___Unfixed_4;
	// System.String ExpectedFixedText::Expected
	String_t* ___Expected_5;
	// System.String ExpectedFixedText::<Fixed>k__BackingField
	String_t* ___U3CFixedU3Ek__BackingField_6;
	// System.Boolean ExpectedFixedText::ShowTashkeel
	bool ___ShowTashkeel_7;
	// System.Boolean ExpectedFixedText::UseHinduNumbers
	bool ___UseHinduNumbers_8;
};

// FixArabic3DText
struct FixArabic3DText_t641D8A36CD5A21EDDFBC367D24C1520A49C89199  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean FixArabic3DText::showTashkeel
	bool ___showTashkeel_4;
	// System.Boolean FixArabic3DText::useHinduNumbers
	bool ___useHinduNumbers_5;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// MathProblem
struct MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MathProblem::text
	String_t* ___text_4;
	// UnityEngine.UI.Text MathProblem::firstNumber
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___firstNumber_5;
	// UnityEngine.UI.Text MathProblem::secondNumber
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___secondNumber_6;
	// UnityEngine.UI.Text MathProblem::answer1
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___answer1_7;
	// UnityEngine.UI.Text MathProblem::answer2
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___answer2_8;
	// UnityEngine.UI.Text MathProblem::answer3
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___answer3_9;
	// UnityEngine.UI.Text MathProblem::answer4
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___answer4_10;
	// System.Collections.Generic.List`1<System.Int32> MathProblem::easyMathList
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___easyMathList_11;
	// System.Int32 MathProblem::randomFirstNumber
	int32_t ___randomFirstNumber_12;
	// System.Int32 MathProblem::randomSecondNumber
	int32_t ___randomSecondNumber_13;
	// System.Int32 MathProblem::firstNumberInProblem
	int32_t ___firstNumberInProblem_14;
	// System.Int32 MathProblem::secondNumberInProblem
	int32_t ___secondNumberInProblem_15;
	// System.Int32 MathProblem::answerOne
	int32_t ___answerOne_16;
	// System.Int32 MathProblem::answerTwo
	int32_t ___answerTwo_17;
	// System.Int32 MathProblem::answerThree
	int32_t ___answerThree_18;
	// System.Int32 MathProblem::answerFour
	int32_t ___answerFour_19;
	// System.Int32 MathProblem::displayRandomAnswer
	int32_t ___displayRandomAnswer_20;
	// System.Int32 MathProblem::randomAnswerPlacement
	int32_t ___randomAnswerPlacement_21;
	// System.Int32 MathProblem::currentAnswer
	int32_t ___currentAnswer_22;
	// UnityEngine.UI.Text MathProblem::rightOrWrong_Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___rightOrWrong_Text_23;
	// System.Int32 MathProblem::count
	int32_t ___count_24;
	// System.Int32 MathProblem::additionScore
	int32_t ___additionScore_25;
	// UnityEngine.UI.Text MathProblem::score
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___score_26;
	// UnityEngine.UI.Text MathProblem::result
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___result_27;
	// UnityEngine.GameObject MathProblem::displayWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___displayWindow_28;
	// UnityEngine.UI.Text MathProblem::completeText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___completeText_29;
	// UnityEngine.UI.Button MathProblem::replayButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___replayButton_30;
	// UnityEngine.UI.Button MathProblem::backButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___backButton_31;
	// UnityEngine.GameObject[] MathProblem::star
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___star_32;
	// System.Int32 MathProblem::countPoints
	int32_t ___countPoints_33;
	// UnityEngine.Transform MathProblem::stars
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___stars_34;
	// System.Boolean MathProblem::useFillAmount
	bool ___useFillAmount_36;
	// UnityEngine.UI.Text MathProblem::replayButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___replayButtonText_37;
	// UnityEngine.UI.Text MathProblem::backButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___backButtonText_38;
	// UnityEngine.GameObject MathProblem::LevelDialog
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LevelDialog_39;
	// UnityEngine.UI.Text MathProblem::LevelStatus
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LevelStatus_40;
	// UnityEngine.UI.Text MathProblem::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_41;
};

// Rotate
struct Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Rotate::RotateAmount
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___RotateAmount_4;
};

// SceneLoader
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SetArabicText
struct SetArabicText_tAD09614C48732BC35B8C526D38F9234CF99BFE63  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String SetArabicText::text
	String_t* ___text_4;
	// System.Boolean SetArabicText::ShowTashkeel
	bool ___ShowTashkeel_5;
	// System.Boolean SetArabicText::UseHinduNumbers
	bool ___UseHinduNumbers_6;
};

// SetArabicTextExample
struct SetArabicTextExample_tCE6C4FFEB444346DEAE0C54776F73EB80419D0B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String SetArabicTextExample::text
	String_t* ___text_4;
	// System.Boolean SetArabicTextExample::ShowTashkeel
	bool ___ShowTashkeel_5;
	// System.Boolean SetArabicTextExample::UseHinduNumbers
	bool ___UseHinduNumbers_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityMessageManager
struct UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityMessageManager/MessageDelegate UnityMessageManager::OnMessage
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* ___OnMessage_7;
	// UnityMessageManager/MessageHandlerDelegate UnityMessageManager::OnFlutterMessage
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* ___OnFlutterMessage_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage> UnityMessageManager::waitCallbackMessageMap
	Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* ___waitCallbackMessageMap_9;
};

struct UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields
{
	// System.Int32 UnityMessageManager::ID
	int32_t ___ID_5;
	// UnityMessageManager UnityMessageManager::<Instance>k__BackingField
	UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* ___U3CInstanceU3Ek__BackingField_6;
};

// buttonOver
struct buttonOver_t45C4AB3C1E3F2A2D890F94A501AA62F8F5E41AA8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform buttonOver::targetTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___targetTransform_4;
	// UnityEngine.RectTransform buttonOver::rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rectTransform_5;
	// UnityEngine.UI.Image buttonOver::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_6;
};

// controlReplay
struct controlReplay_tF79ADAE88DDD1A57F8D6898BE95ABB5C354016DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.XR.ARFoundation.ARTrackableManager`5<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem,UnityEngine.XR.ARSubsystems.XRPlaneSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider,UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103  : public SubsystemLifecycleManager_3_t7FE0F4D0E7C0B4044705703906B62335E93547A6
{
	// UnityEngine.XR.ARFoundation.ARSessionOrigin UnityEngine.XR.ARFoundation.ARTrackableManager`5::<sessionOrigin>k__BackingField
	ARSessionOrigin_tE7B28A1A19500BCC02711397A19E330425830BC3* ___U3CsessionOriginU3Ek__BackingField_8;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_Trackables
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_Trackables_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.XR.ARSubsystems.TrackableId,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::m_PendingAdds
	Dictionary_2_t26A4820BA6F451105138232941B7A9466E583A6C* ___m_PendingAdds_10;
};

struct ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103_StaticFields
{
	// UnityEngine.XR.ARFoundation.ARTrackableManager`5<TSubsystem,TSubsystemDescriptor,TProvider,TSessionRelativeData,TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::<instance>k__BackingField
	ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103* ___U3CinstanceU3Ek__BackingField_7;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Added
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Added_11;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Updated
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Updated_12;
	// System.Collections.Generic.List`1<TTrackable> UnityEngine.XR.ARFoundation.ARTrackableManager`5::s_Removed
	List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ___s_Removed_13;
};

// UnityEngine.XR.ARFoundation.ARTrackable`2<UnityEngine.XR.ARSubsystems.BoundedPlane,UnityEngine.XR.ARFoundation.ARPlane>
struct ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341  : public ARTrackable_t1D98417758C08E98A333CDEC0C2C1688CE10B2E0
{
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::m_DestroyOnRemoval
	bool ___m_DestroyOnRemoval_4;
	// System.Boolean UnityEngine.XR.ARFoundation.ARTrackable`2::<pending>k__BackingField
	bool ___U3CpendingU3Ek__BackingField_5;
	// TSessionRelativeData UnityEngine.XR.ARFoundation.ARTrackable`2::<sessionRelativeData>k__BackingField
	BoundedPlane_tF51C315A8961EB42F0A1B60D47158646E5AF75CE ___U3CsessionRelativeDataU3Ek__BackingField_6;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.XR.ARFoundation.ARPlane
struct ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0  : public ARTrackable_2_t758FABA4E5998A283C2E8C792EE90E0FC3482341
{
	// System.Single UnityEngine.XR.ARFoundation.ARPlane::m_VertexChangedThreshold
	float ___m_VertexChangedThreshold_7;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlaneBoundaryChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlane::boundaryChanged
	Action_1_t762BEDF03B3FAD9E52246AF6B4291030B8085074* ___boundaryChanged_8;
	// UnityEngine.XR.ARFoundation.ARPlane UnityEngine.XR.ARFoundation.ARPlane::<subsumedBy>k__BackingField
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* ___U3CsubsumedByU3Ek__BackingField_9;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_Boundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_Boundary_10;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARFoundation.ARPlane::m_OldBoundary
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_OldBoundary_11;
	// System.Boolean UnityEngine.XR.ARFoundation.ARPlane::m_HasBoundaryChanged
	bool ___m_HasBoundaryChanged_12;
};

// UnityEngine.XR.ARFoundation.ARPlaneManager
struct ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928  : public ARTrackableManager_5_t1F9F85442D84B92DE0BC4C518768C0154AB69103
{
	// UnityEngine.GameObject UnityEngine.XR.ARFoundation.ARPlaneManager::m_PlanePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PlanePrefab_14;
	// UnityEngine.XR.ARSubsystems.PlaneDetectionMode UnityEngine.XR.ARFoundation.ARPlaneManager::m_DetectionMode
	int32_t ___m_DetectionMode_15;
	// System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs> UnityEngine.XR.ARFoundation.ARPlaneManager::planesChanged
	Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___planesChanged_16;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// ExpectedFixedText[]
struct ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464  : public RuntimeArray
{
	ALIGN_FIELD (8) ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* m_Items[1];

	inline ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_gshared (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Extensions_Value_TisRuntimeObject_m5571042D842EA6EC5B6318C825B1D5D317EB3215_gshared (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<System.Int32,System.Object,System.Object,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ef__AnonymousType0_4__ctor_m21606653EECD94777A0BDE5940565770B138F3F4_gshared (U3CU3Ef__AnonymousType0_4_t87E69E279093DFC4580EF2B2E42CCE84BA36F057* __this, int32_t ___id0, RuntimeObject* ___seq1, RuntimeObject* ___name2, RuntimeObject* ___data3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, const RuntimeMethod* method) ;
// T MessageHandler::getData<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_gshared (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mBEDDD2BF96A8A407FBB833F764447E82E3D50BCF_gshared (Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ArabicMapping>::.ctor()
inline void List_1__ctor_mB6A16F51D14DA8EED4257388477351777BEA4C10 (List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void ArabicMapping::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87 (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* __this, int32_t ___from0, int32_t ___to1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<ArabicMapping>::Add(T)
inline void List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline (List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* __this, ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A*, ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void ArabicTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicTable__ctor_m8DBFC22F7BD81894CCE65CBB978E36260CAE4440 (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<ArabicMapping>::GetEnumerator()
inline Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569 List_1_GetEnumerator_m3C07ABE743698F8124F70D6752634B52356CD8A5 (List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569 (*) (List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<ArabicMapping>::Dispose()
inline void Enumerator_Dispose_m271268361559ED7CFB6CA3EA509DF710A2448B1C (Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<ArabicMapping>::get_Current()
inline ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* Enumerator_get_Current_mDE0587A86B2A76BB5313F153F941C0263E9FE1A6_inline (Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569* __this, const RuntimeMethod* method)
{
	return ((  ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* (*) (Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<ArabicMapping>::MoveNext()
inline bool Enumerator_MoveNext_m87B84A519CB2609E5AC31D6B38FAB607F688DE90 (Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TashkeelLocation>::.ctor()
inline void List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6 (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void TashkeelLocation::.ctor(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313 (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* __this, Il2CppChar ___tashkeel0, int32_t ___position1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<TashkeelLocation>::Add(T)
inline void List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* __this, TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*, TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<TashkeelLocation>::get_Item(System.Int32)
inline TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* (*) (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<TashkeelLocation>::get_Count()
inline int32_t List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_inline (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<TashkeelLocation>::GetEnumerator()
inline Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06 List_1_GetEnumerator_mF3937B72448133DF6FACB8F4769A1625DF677BDE (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06 (*) (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<TashkeelLocation>::Dispose()
inline void Enumerator_Dispose_mD2739082D6BA89E946E80CC1066961CD560005D9 (Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<TashkeelLocation>::get_Current()
inline TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* Enumerator_get_Current_mC3B87EBDA3C2A113B5677AE7C24434CC6A1EDC77_inline (Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06* __this, const RuntimeMethod* method)
{
	return ((  TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* (*) (Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<TashkeelLocation>::MoveNext()
inline bool Enumerator_MoveNext_mA42AEE2EC9AFCF2F493842E77E2AD849A3FD1D43 (Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String ArabicFixerTool::RemoveTashkeel(System.String,System.Collections.Generic.List`1<TashkeelLocation>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixerTool_RemoveTashkeel_mE75446D7D57219F9A3A5AD617D219F15F643707C (String_t* ___str0, List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** ___tashkeelLocation1, const RuntimeMethod* method) ;
// ArabicTable ArabicTable::get_ArabicMapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* ArabicTable_get_ArabicMapper_m4CE6FA5ADE6C9C306AB6771B631F21C3A4F65841 (const RuntimeMethod* method) ;
// System.Int32 ArabicTable::Convert(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArabicTable_Convert_mD6DD8122E0D6CA1E33760E3FDBEE7D1E6CFA69A4 (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* __this, int32_t ___toBeConverted0, const RuntimeMethod* method) ;
// System.Boolean ArabicFixerTool::IsIgnoredCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsIgnoredCharacter_mD4266BD327FCF7EA06B0805129FEA7104088A046 (Il2CppChar ___ch0, const RuntimeMethod* method) ;
// System.Boolean ArabicFixerTool::IsMiddleLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsMiddleLetter_m9610EB7249C81792676BF357316EA65849F1942F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___letters0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean ArabicFixerTool::IsFinishingLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsFinishingLetter_m34D81454EFE842A4E5135A5BBB5A1C8493B19FD1 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___letters0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Boolean ArabicFixerTool::IsLeadingLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsLeadingLetter_m3020D74BCBE1755BEA9E0402A92A371769B46CCE (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___letters0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String System.Convert::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35 (int32_t ___value0, int32_t ___toBase1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Char[] ArabicFixerTool::ReturnTashkeel(System.Char[],System.Collections.Generic.List`1<TashkeelLocation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ArabicFixerTool_ReturnTashkeel_mBD921208330E1FB9A2E82140C9FC5D9A0C2F087D (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___letters0, List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* ___tashkeelLocation1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::.ctor()
inline void List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82 (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_gshared)(__this, method);
}
// System.Boolean System.Char::IsPunctuation(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Char>::Add(T)
inline void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Char::IsLower(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsNumber(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsSymbol(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Char>::get_Count()
inline int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Char>::get_Item(System.Int32)
inline Il2CppChar List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Il2CppChar (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, int32_t, const RuntimeMethod*))List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Char>::Clear()
inline void List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, const RuntimeMethod*))List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_gshared_inline)(__this, method);
}
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___val0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.TextMesh>()
inline TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String UnityEngine.TextMesh::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2 (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, const RuntimeMethod* method) ;
// System.String ArabicSupport.ArabicFixer::Fix(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7 (String_t* ___str0, bool ___showTashkeel1, bool ___useHinduNumbers2, const RuntimeMethod* method) ;
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E (TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String ArabicSupport.ArabicFixer::Fix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D (String_t* ___str0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void ExpectedFixedText::Fix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpectedFixedText_Fix_mEB1489C852AF322CC8F11E7AA83AFC8DB59A6D3F (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, const RuntimeMethod* method) ;
// System.Void ExpectedFixedText::set_Fixed(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExpectedFixedText_set_Fixed_m3E83944782EDF806F7F31D8D5634CAB00AF28823_inline (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityMessageManager>()
inline UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_t03E51455ED508492B3F278903A0114FA0E87B417 Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1 (int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean System.Enum::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E (RuntimeObject* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// UnityMessageManager UnityMessageManager::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* UnityMessageManager_get_Instance_m47C1FACD4FB4D64E2F0612ECDF745A603DE63997_inline (const RuntimeMethod* method) ;
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m58436B596EA9228CC2CBE497DFD03F58DD589968 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mC4BD32145437F282CAA13E1A8685001061E79D98 (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43 (String_t* ___json0, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::GetValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, String_t* ___propertyName0, const RuntimeMethod* method) ;
// U Newtonsoft.Json.Linq.Extensions::Value<System.Int32>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline int32_t Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8 (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_gshared)(___value0, method);
}
// U Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_m5571042D842EA6EC5B6318C825B1D5D317EB3215_gshared)(___value0, method);
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m6D62D4CD1FDC1ACBECA277EC939F7BF1A5C0EE0F (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data3, const RuntimeMethod* method) ;
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,System.Object>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200 (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, RuntimeObject* ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454*, int32_t, String_t*, String_t*, RuntimeObject*, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m21606653EECD94777A0BDE5940565770B138F3F4_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD (RuntimeObject* ___o0, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityMessageManager::set_Instance(UnityMessageManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityMessageManager_set_Instance_m00B42B2CAC4061379FC777409C11067C030B832B_inline (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___className0, const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::get_isLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SceneManagement.Scene::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599 (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___methodName0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mAC837086CD47AA4AC316DD11E28926B8747AA30C (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Add(TKey,TValue)
inline void Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* __this, int32_t ___key0, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*, int32_t, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void <>f__AnonymousType0`4<System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JObject>::.ctor(<id>j__TPar,<seq>j__TPar,<name>j__TPar,<data>j__TPar)
inline void U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99 (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___data3, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39*, int32_t, String_t*, String_t*, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*, const RuntimeMethod*))U3CU3Ef__AnonymousType0_4__ctor_m21606653EECD94777A0BDE5940565770B138F3F4_gshared)(__this, ___id0, ___seq1, ___name2, ___data3, method);
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_inline (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* MessageHandler_Deserialize_mD700ECE601B4BCF56FA48BF5F3006E2F12EFAE4F (String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* __this, int32_t ___key0, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*, int32_t, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::Remove(TKey)
inline bool Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___key0, method);
}
// T MessageHandler::getData<System.Object>()
inline RuntimeObject* MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888 (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*))MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_gshared)(__this, method);
}
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_inline (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityMessage>::.ctor()
inline void Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void MathProblem::DisplayMathProblem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_DisplayMathProblem_m24F653C91B2AD61FA914CF97729773CF0C62CE37 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<MathProblem>()
inline MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* Component_GetComponent_TisMathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202_mF125C5616B8CB1CCBE3B6E5AFB8330507C1E1176 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void MathProblem::starArcheived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_starArcheived_m157B053C9E9F41C4ACE60D78BC22B25E9B892C5A (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void MathProblem::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_AddScore_m9EF9693BA515F385C0C96A337719D7963BB00710 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void MathProblem::DisplayFinalScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_DisplayFinalScore_mF2608F6FA88FE93263AD9542E175B8C3B7785F12 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.XR.ARFoundation.ARPlaneManager>()
inline ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mBEDDD2BF96A8A407FBB833F764447E82E3D50BCF (Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_mBEDDD2BF96A8A407FBB833F764447E82E3D50BCF_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.XR.ARFoundation.ARPlaneManager::add_planesChanged(System.Action`1<UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlaneManager_add_planesChanged_m295E8F0B09AF78A2D9249F3C07BFD4D4F749F36D (ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* __this, Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane> UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs::get_added()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ARPlanesChangedEventArgs_get_added_m6E00DD5F0B3261BCBAA8A029924A1F3F4179C747_inline (ARPlanesChangedEventArgs_t8D63E0257BF9942EF8F8C0445F2FD46421017872* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.XR.ARFoundation.ARPlane>::get_Item(System.Int32)
inline ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* List_1_get_Item_mE29CA81FF433DA79AB23285348CE4D3E1EA7F28F (List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* (*) (List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::WorldToViewportPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF (const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String[],System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4 (String_t* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___separator0, int32_t ___options1, const RuntimeMethod* method) ;
// System.String ArabicFixerTool::FixLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207 (String_t* ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void ArabicMapping::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87 (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* __this, int32_t ___from0, int32_t ___to1, const RuntimeMethod* method) 
{
	{
		// public ArabicMapping(int from, int to)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.from = from;
		int32_t L_0 = ___from0;
		__this->___from_0 = L_0;
		// this.to = to;
		int32_t L_1 = ___to1;
		__this->___to_1 = L_1;
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
// System.Void ArabicTable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicTable__ctor_m8DBFC22F7BD81894CCE65CBB978E36260CAE4440 (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB6A16F51D14DA8EED4257388477351777BEA4C10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private ArabicTable()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// mapList = new List<ArabicMapping>();
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_0 = (List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A*)il2cpp_codegen_object_new(List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mB6A16F51D14DA8EED4257388477351777BEA4C10(L_0, List_1__ctor_mB6A16F51D14DA8EED4257388477351777BEA4C10_RuntimeMethod_var);
		((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0), (void*)L_0);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Hamza, (int)IsolatedArabicLetters.Hamza));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_1 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_2 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_2, ((int32_t)1569), ((int32_t)65152), NULL);
		NullCheck(L_1);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_1, L_2, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Alef, (int)IsolatedArabicLetters.Alef));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_3 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_4 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_4, ((int32_t)1575), ((int32_t)65165), NULL);
		NullCheck(L_3);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_3, L_4, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.AlefHamza, (int)IsolatedArabicLetters.AlefHamza));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_5 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_6 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_6, ((int32_t)1571), ((int32_t)65155), NULL);
		NullCheck(L_5);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_5, L_6, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.WawHamza, (int)IsolatedArabicLetters.WawHamza));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_7 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_8 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_8, ((int32_t)1572), ((int32_t)65157), NULL);
		NullCheck(L_7);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_7, L_8, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.AlefMaksoor, (int)IsolatedArabicLetters.AlefMaksoor));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_9 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_10 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_10, ((int32_t)1573), ((int32_t)65159), NULL);
		NullCheck(L_9);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_9, L_10, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.AlefMagsora, (int)IsolatedArabicLetters.AlefMaksora));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_11 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_12 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_12, ((int32_t)1609), ((int32_t)64508), NULL);
		NullCheck(L_11);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_11, L_12, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.HamzaNabera, (int)IsolatedArabicLetters.HamzaNabera));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_13 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_14 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_14, ((int32_t)1574), ((int32_t)65161), NULL);
		NullCheck(L_13);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_13, L_14, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Ba, (int)IsolatedArabicLetters.Ba));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_15 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_16 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_16, ((int32_t)1576), ((int32_t)65167), NULL);
		NullCheck(L_15);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_15, L_16, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Ta, (int)IsolatedArabicLetters.Ta));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_17 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_18 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_18, ((int32_t)1578), ((int32_t)65173), NULL);
		NullCheck(L_17);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_17, L_18, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Tha2, (int)IsolatedArabicLetters.Tha2));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_19 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_20 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_20, ((int32_t)1579), ((int32_t)65177), NULL);
		NullCheck(L_19);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_19, L_20, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Jeem, (int)IsolatedArabicLetters.Jeem));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_21 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_22 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_22, ((int32_t)1580), ((int32_t)65181), NULL);
		NullCheck(L_21);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_21, L_22, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.H7aa, (int)IsolatedArabicLetters.H7aa));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_23 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_24 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_24, ((int32_t)1581), ((int32_t)65185), NULL);
		NullCheck(L_23);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_23, L_24, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Khaa2, (int)IsolatedArabicLetters.Khaa2));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_25 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_26 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_26, ((int32_t)1582), ((int32_t)65189), NULL);
		NullCheck(L_25);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_25, L_26, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Dal, (int)IsolatedArabicLetters.Dal));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_27 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_28 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_28, ((int32_t)1583), ((int32_t)65193), NULL);
		NullCheck(L_27);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_27, L_28, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Thal, (int)IsolatedArabicLetters.Thal));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_29 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_30 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_30, ((int32_t)1584), ((int32_t)65195), NULL);
		NullCheck(L_29);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_29, L_30, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Ra2, (int)IsolatedArabicLetters.Ra2));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_31 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_32 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_32, ((int32_t)1585), ((int32_t)65197), NULL);
		NullCheck(L_31);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_31, L_32, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Zeen, (int)IsolatedArabicLetters.Zeen));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_33 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_34 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_34, ((int32_t)1586), ((int32_t)65199), NULL);
		NullCheck(L_33);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_33, L_34, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Seen, (int)IsolatedArabicLetters.Seen));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_35 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_36 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_36, ((int32_t)1587), ((int32_t)65201), NULL);
		NullCheck(L_35);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_35, L_36, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Sheen, (int)IsolatedArabicLetters.Sheen));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_37 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_38 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_38, ((int32_t)1588), ((int32_t)65205), NULL);
		NullCheck(L_37);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_37, L_38, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.S9a, (int)IsolatedArabicLetters.S9a));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_39 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_40 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_40, ((int32_t)1589), ((int32_t)65209), NULL);
		NullCheck(L_39);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_39, L_40, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Dha, (int)IsolatedArabicLetters.Dha));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_41 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_42 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_42, ((int32_t)1590), ((int32_t)65213), NULL);
		NullCheck(L_41);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_41, L_42, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.T6a, (int)IsolatedArabicLetters.T6a));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_43 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_44 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_44, ((int32_t)1591), ((int32_t)65217), NULL);
		NullCheck(L_43);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_43, L_44, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.T6ha, (int)IsolatedArabicLetters.T6ha));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_45 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_46 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_46, ((int32_t)1592), ((int32_t)65221), NULL);
		NullCheck(L_45);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_45, L_46, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Ain, (int)IsolatedArabicLetters.Ain));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_47 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_48 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_48, ((int32_t)1593), ((int32_t)65225), NULL);
		NullCheck(L_47);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_47, L_48, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Gain, (int)IsolatedArabicLetters.Gain));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_49 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_50 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_50, ((int32_t)1594), ((int32_t)65229), NULL);
		NullCheck(L_49);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_49, L_50, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Fa, (int)IsolatedArabicLetters.Fa));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_51 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_52 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_52, ((int32_t)1601), ((int32_t)65233), NULL);
		NullCheck(L_51);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_51, L_52, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Gaf, (int)IsolatedArabicLetters.Gaf));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_53 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_54 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_54, ((int32_t)1602), ((int32_t)65237), NULL);
		NullCheck(L_53);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_53, L_54, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Kaf, (int)IsolatedArabicLetters.Kaf));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_55 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_56 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_56, ((int32_t)1603), ((int32_t)65241), NULL);
		NullCheck(L_55);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_55, L_56, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Lam, (int)IsolatedArabicLetters.Lam));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_57 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_58 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_58, ((int32_t)1604), ((int32_t)65245), NULL);
		NullCheck(L_57);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_57, L_58, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Meem, (int)IsolatedArabicLetters.Meem));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_59 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_60 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_60, ((int32_t)1605), ((int32_t)65249), NULL);
		NullCheck(L_59);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_59, L_60, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Noon, (int)IsolatedArabicLetters.Noon));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_61 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_62 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_62, ((int32_t)1606), ((int32_t)65253), NULL);
		NullCheck(L_61);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_61, L_62, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Ha, (int)IsolatedArabicLetters.Ha));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_63 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_64 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_64, ((int32_t)1607), ((int32_t)65257), NULL);
		NullCheck(L_63);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_63, L_64, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Waw, (int)IsolatedArabicLetters.Waw));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_65 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_66 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_66, ((int32_t)1608), ((int32_t)65261), NULL);
		NullCheck(L_65);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_65, L_66, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.Ya, (int)IsolatedArabicLetters.Ya));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_67 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_68 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_68, ((int32_t)1610), ((int32_t)65265), NULL);
		NullCheck(L_67);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_67, L_68, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.AlefMad, (int)IsolatedArabicLetters.AlefMad));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_69 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_70 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_70);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_70, ((int32_t)1570), ((int32_t)65153), NULL);
		NullCheck(L_69);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_69, L_70, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.TaMarboota, (int)IsolatedArabicLetters.TaMarboota));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_71 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_72 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_72, ((int32_t)1577), ((int32_t)65171), NULL);
		NullCheck(L_71);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_71, L_72, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.PersianPe, (int)IsolatedArabicLetters.PersianPe));         // Persian Letters;
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_73 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_74 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_74);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_74, ((int32_t)1662), ((int32_t)64342), NULL);
		NullCheck(L_73);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_73, L_74, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.PersianChe, (int)IsolatedArabicLetters.PersianChe));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_75 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_76 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_76, ((int32_t)1670), ((int32_t)64378), NULL);
		NullCheck(L_75);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_75, L_76, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.PersianZe, (int)IsolatedArabicLetters.PersianZe));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_77 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_78 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_78, ((int32_t)1688), ((int32_t)64394), NULL);
		NullCheck(L_77);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_77, L_78, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.PersianGaf, (int)IsolatedArabicLetters.PersianGaf));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_79 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_80 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_80);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_80, ((int32_t)1711), ((int32_t)64402), NULL);
		NullCheck(L_79);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_79, L_80, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.PersianGaf2, (int)IsolatedArabicLetters.PersianGaf2));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_81 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_82 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_82, ((int32_t)1705), ((int32_t)64398), NULL);
		NullCheck(L_81);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_81, L_82, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// mapList.Add(new ArabicMapping((int)GeneralArabicLetters.PersianYeh, (int)IsolatedArabicLetters.PersianYeh));
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_83 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_84 = (ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338*)il2cpp_codegen_object_new(ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338_il2cpp_TypeInfo_var);
		NullCheck(L_84);
		ArabicMapping__ctor_m3A7CAA010984AAF42F17E49090402740CF014D87(L_84, ((int32_t)1740), ((int32_t)64508), NULL);
		NullCheck(L_83);
		List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_inline(L_83, L_84, List_1_Add_m978704F694F0ACE66407C24E20FB05CB9BC64091_RuntimeMethod_var);
		// }
		return;
	}
}
// ArabicTable ArabicTable::get_ArabicMapper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* ArabicTable_get_ArabicMapper_m4CE6FA5ADE6C9C306AB6771B631F21C3A4F65841 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (arabicMapper == null)
		ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* L_0 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___arabicMapper_1;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		// arabicMapper = new ArabicTable();
		ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* L_1 = (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448*)il2cpp_codegen_object_new(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ArabicTable__ctor_m8DBFC22F7BD81894CCE65CBB978E36260CAE4440(L_1, NULL);
		((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___arabicMapper_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___arabicMapper_1), (void*)L_1);
	}

IL_0011:
	{
		// return arabicMapper;
		ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* L_2 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___arabicMapper_1;
		return L_2;
	}
}
// System.Int32 ArabicTable::Convert(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ArabicTable_Convert_mD6DD8122E0D6CA1E33760E3FDBEE7D1E6CFA69A4 (ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* __this, int32_t ___toBeConverted0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m271268361559ED7CFB6CA3EA509DF710A2448B1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m87B84A519CB2609E5AC31D6B38FAB607F688DE90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mDE0587A86B2A76BB5313F153F941C0263E9FE1A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m3C07ABE743698F8124F70D6752634B52356CD8A5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569 V_0;
	memset((&V_0), 0, sizeof(V_0));
	ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// foreach (ArabicMapping arabicMap in mapList)
		List_1_tB8F21833F19950C3D924201A49D31F665FB1CE2A* L_0 = ((ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_StaticFields*)il2cpp_codegen_static_fields_for(ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448_il2cpp_TypeInfo_var))->___mapList_0;
		NullCheck(L_0);
		Enumerator_tF9A30D9AEA02700EFF015D13921450F837DD1569 L_1;
		L_1 = List_1_GetEnumerator_m3C07ABE743698F8124F70D6752634B52356CD8A5(L_0, List_1_GetEnumerator_m3C07ABE743698F8124F70D6752634B52356CD8A5_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m271268361559ED7CFB6CA3EA509DF710A2448B1C((&V_0), Enumerator_Dispose_m271268361559ED7CFB6CA3EA509DF710A2448B1C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_000d_1:
			{
				// foreach (ArabicMapping arabicMap in mapList)
				ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_2;
				L_2 = Enumerator_get_Current_mDE0587A86B2A76BB5313F153F941C0263E9FE1A6_inline((&V_0), Enumerator_get_Current_mDE0587A86B2A76BB5313F153F941C0263E9FE1A6_RuntimeMethod_var);
				V_1 = L_2;
				// if (arabicMap.from == toBeConverted)
				ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_3 = V_1;
				NullCheck(L_3);
				int32_t L_4 = L_3->___from_0;
				int32_t L_5 = ___toBeConverted0;
				if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
				{
					goto IL_0027_1;
				}
			}
			{
				// return arabicMap.to;
				ArabicMapping_t6906F4DC18074D8C5BF0EF7AEB4D9F33C87D6338* L_6 = V_1;
				NullCheck(L_6);
				int32_t L_7 = L_6->___to_1;
				V_2 = L_7;
				goto IL_0042;
			}

IL_0027_1:
			{
				// foreach (ArabicMapping arabicMap in mapList)
				bool L_8;
				L_8 = Enumerator_MoveNext_m87B84A519CB2609E5AC31D6B38FAB607F688DE90((&V_0), Enumerator_MoveNext_m87B84A519CB2609E5AC31D6B38FAB607F688DE90_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// return toBeConverted;
		int32_t L_9 = ___toBeConverted0;
		return L_9;
	}

IL_0042:
	{
		// }
		int32_t L_10 = V_2;
		return L_10;
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
// System.Void TashkeelLocation::.ctor(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313 (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* __this, Il2CppChar ___tashkeel0, int32_t ___position1, const RuntimeMethod* method) 
{
	{
		// public TashkeelLocation(char tashkeel, int position)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.tashkeel = tashkeel;
		Il2CppChar L_0 = ___tashkeel0;
		__this->___tashkeel_0 = L_0;
		// this.position = position;
		int32_t L_1 = ___position1;
		__this->___position_1 = L_1;
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
// System.String ArabicFixerTool::RemoveTashkeel(System.String,System.Collections.Generic.List`1<TashkeelLocation>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixerTool_RemoveTashkeel_mE75446D7D57219F9A3A5AD617D219F15F643707C (String_t* ___str0, List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** ___tashkeelLocation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6B37F2DC3CBC36CB512AAB959CD9F9E3A5ED19A1282D3D8D0EF02E14C2935C71_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	{
		// tashkeelLocation = new List<TashkeelLocation>();
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_0 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_1 = (List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A*)il2cpp_codegen_object_new(List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6(L_1, List_1__ctor_mA98B81A7C509B3D6BDB8EACEA54754F0327380D6_RuntimeMethod_var);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_1);
		// char[] letters = str.ToCharArray();
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		V_0 = L_3;
		// int index = 0;
		V_1 = 0;
		// for (int i = 0; i < letters.Length; i++) {
		V_2 = 0;
		goto IL_02a9;
	}

IL_0017:
	{
		// if (letters [i] == (char)0x064B) { // Tanween Fatha
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		uint16_t L_7 = (uint16_t)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)1611)))))
		{
			goto IL_003c;
		}
	}
	{
		// tashkeelLocation.Add (new TashkeelLocation ((char)0x064B, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_8 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_9 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_8);
		int32_t L_10 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_11 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_11, ((int32_t)1611), L_10, NULL);
		NullCheck(L_9);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_9, L_11, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_02a5;
	}

IL_003c:
	{
		// else if (letters [i] == (char)0x064C) { // Tanween Damma
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = V_0;
		int32_t L_14 = V_2;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)1612)))))
		{
			goto IL_0061;
		}
	}
	{
		// tashkeelLocation.Add (new TashkeelLocation ((char)0x064C, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_17 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_18 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_17);
		int32_t L_19 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_20 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_20, ((int32_t)1612), L_19, NULL);
		NullCheck(L_18);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_18, L_20, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		goto IL_02a5;
	}

IL_0061:
	{
		// else if (letters [i] == (char)0x064D){ // Tanween Kasra
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = V_0;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)1613)))))
		{
			goto IL_0086;
		}
	}
	{
		// tashkeelLocation.Add (new TashkeelLocation ((char)0x064D, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_26 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_27 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_26);
		int32_t L_28 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_29 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_29, ((int32_t)1613), L_28, NULL);
		NullCheck(L_27);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_27, L_29, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		goto IL_02a5;
	}

IL_0086:
	{
		// else if (letters [i] == (char)0x064E) { // Fatha
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = V_0;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		uint16_t L_34 = (uint16_t)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((uint32_t)L_34) == ((uint32_t)((int32_t)1614)))))
		{
			goto IL_00e5;
		}
	}
	{
		// if(index > 0 && combineTashkeel)
		int32_t L_35 = V_1;
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_00ca;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_36 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1;
		if (!L_36)
		{
			goto IL_00ca;
		}
	}
	{
		// if(tashkeelLocation[index-1].tashkeel == (char)0x0651 ) // Shadda
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_37 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_38 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_37);
		int32_t L_39 = V_1;
		NullCheck(L_38);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_40;
		L_40 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_38, ((int32_t)il2cpp_codegen_subtract(L_39, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_40);
		Il2CppChar L_41 = L_40->___tashkeel_0;
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)1617)))))
		{
			goto IL_00ca;
		}
	}
	{
		// tashkeelLocation [index - 1].tashkeel = (char)0xFC60; // Shadda With Fatha
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_42 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_43 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_42);
		int32_t L_44 = V_1;
		NullCheck(L_43);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_45;
		L_45 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_43, ((int32_t)il2cpp_codegen_subtract(L_44, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_45);
		L_45->___tashkeel_0 = ((int32_t)64608);
		// continue;
		goto IL_02a5;
	}

IL_00ca:
	{
		// tashkeelLocation.Add (new TashkeelLocation ((char)0x064E, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_46 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_47 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_46);
		int32_t L_48 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_49 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_49);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_49, ((int32_t)1614), L_48, NULL);
		NullCheck(L_47);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_47, L_49, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_50 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_50, 1));
		goto IL_02a5;
	}

IL_00e5:
	{
		// else if (letters [i] == (char)0x064F) { // DAMMA
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_51 = V_0;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		uint16_t L_54 = (uint16_t)(L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		if ((!(((uint32_t)L_54) == ((uint32_t)((int32_t)1615)))))
		{
			goto IL_0144;
		}
	}
	{
		// if (index > 0 && combineTashkeel) {
		int32_t L_55 = V_1;
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_0129;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_56 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1;
		if (!L_56)
		{
			goto IL_0129;
		}
	}
	{
		// if (tashkeelLocation [index - 1].tashkeel == (char)0x0651) { // SHADDA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_57 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_58 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_57);
		int32_t L_59 = V_1;
		NullCheck(L_58);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_60;
		L_60 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_58, ((int32_t)il2cpp_codegen_subtract(L_59, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_60);
		Il2CppChar L_61 = L_60->___tashkeel_0;
		if ((!(((uint32_t)L_61) == ((uint32_t)((int32_t)1617)))))
		{
			goto IL_0129;
		}
	}
	{
		// tashkeelLocation [index - 1].tashkeel = (char)0xFC61; // Shadda With DAMMA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_62 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_63 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_62);
		int32_t L_64 = V_1;
		NullCheck(L_63);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_65;
		L_65 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_63, ((int32_t)il2cpp_codegen_subtract(L_64, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_65);
		L_65->___tashkeel_0 = ((int32_t)64609);
		// continue;
		goto IL_02a5;
	}

IL_0129:
	{
		// tashkeelLocation.Add (new TashkeelLocation ((char)0x064F, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_66 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_67 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_66);
		int32_t L_68 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_69 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_69);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_69, ((int32_t)1615), L_68, NULL);
		NullCheck(L_67);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_67, L_69, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_70 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_70, 1));
		goto IL_02a5;
	}

IL_0144:
	{
		// else if (letters [i] == (char)0x0650) { // KASRA
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_71 = V_0;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint16_t L_74 = (uint16_t)(L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		if ((!(((uint32_t)L_74) == ((uint32_t)((int32_t)1616)))))
		{
			goto IL_01a3;
		}
	}
	{
		// if (index > 0 && combineTashkeel) {
		int32_t L_75 = V_1;
		if ((((int32_t)L_75) <= ((int32_t)0)))
		{
			goto IL_0188;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_76 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1;
		if (!L_76)
		{
			goto IL_0188;
		}
	}
	{
		// if (tashkeelLocation [index - 1].tashkeel == (char)0x0651) { // SHADDA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_77 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_78 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_77);
		int32_t L_79 = V_1;
		NullCheck(L_78);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_80;
		L_80 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_78, ((int32_t)il2cpp_codegen_subtract(L_79, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_80);
		Il2CppChar L_81 = L_80->___tashkeel_0;
		if ((!(((uint32_t)L_81) == ((uint32_t)((int32_t)1617)))))
		{
			goto IL_0188;
		}
	}
	{
		// tashkeelLocation [index - 1].tashkeel = (char)0xFC62; // Shadda With KASRA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_82 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_83 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_82);
		int32_t L_84 = V_1;
		NullCheck(L_83);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_85;
		L_85 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_83, ((int32_t)il2cpp_codegen_subtract(L_84, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_85);
		L_85->___tashkeel_0 = ((int32_t)64610);
		// continue;
		goto IL_02a5;
	}

IL_0188:
	{
		// tashkeelLocation.Add (new TashkeelLocation ((char)0x0650, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_86 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_87 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_86);
		int32_t L_88 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_89 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_89);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_89, ((int32_t)1616), L_88, NULL);
		NullCheck(L_87);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_87, L_89, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_90 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_90, 1));
		goto IL_02a5;
	}

IL_01a3:
	{
		// else if (letters [i] == (char)0x0651) { // SHADDA
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_91 = V_0;
		int32_t L_92 = V_2;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		uint16_t L_94 = (uint16_t)(L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		if ((!(((uint32_t)L_94) == ((uint32_t)((int32_t)1617)))))
		{
			goto IL_0263;
		}
	}
	{
		// if(index > 0 && combineTashkeel)
		int32_t L_95 = V_1;
		if ((((int32_t)L_95) <= ((int32_t)0)))
		{
			goto IL_024b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_96 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1;
		if (!L_96)
		{
			goto IL_024b;
		}
	}
	{
		// if(tashkeelLocation[index-1].tashkeel == (char)0x064E ) // FATHA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_97 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_98 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_97);
		int32_t L_99 = V_1;
		NullCheck(L_98);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_100;
		L_100 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_98, ((int32_t)il2cpp_codegen_subtract(L_99, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_100);
		Il2CppChar L_101 = L_100->___tashkeel_0;
		if ((!(((uint32_t)L_101) == ((uint32_t)((int32_t)1614)))))
		{
			goto IL_01f0;
		}
	}
	{
		// tashkeelLocation [index - 1].tashkeel = (char)0xFC60; // Shadda With Fatha
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_102 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_103 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_102);
		int32_t L_104 = V_1;
		NullCheck(L_103);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_105;
		L_105 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_103, ((int32_t)il2cpp_codegen_subtract(L_104, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_105);
		L_105->___tashkeel_0 = ((int32_t)64608);
		// continue;
		goto IL_02a5;
	}

IL_01f0:
	{
		// if(tashkeelLocation[index-1].tashkeel == (char)0x064F ) // DAMMA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_106 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_107 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_106);
		int32_t L_108 = V_1;
		NullCheck(L_107);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_109;
		L_109 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_107, ((int32_t)il2cpp_codegen_subtract(L_108, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_109);
		Il2CppChar L_110 = L_109->___tashkeel_0;
		if ((!(((uint32_t)L_110) == ((uint32_t)((int32_t)1615)))))
		{
			goto IL_021f;
		}
	}
	{
		// tashkeelLocation [index - 1].tashkeel = (char)0xFC61; // Shadda With DAMMA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_111 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_112 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_111);
		int32_t L_113 = V_1;
		NullCheck(L_112);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_114;
		L_114 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_112, ((int32_t)il2cpp_codegen_subtract(L_113, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_114);
		L_114->___tashkeel_0 = ((int32_t)64609);
		// continue;
		goto IL_02a5;
	}

IL_021f:
	{
		// if(tashkeelLocation[index-1].tashkeel == (char)0x0650 ) // KASRA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_115 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_116 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_115);
		int32_t L_117 = V_1;
		NullCheck(L_116);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_118;
		L_118 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_116, ((int32_t)il2cpp_codegen_subtract(L_117, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_118);
		Il2CppChar L_119 = L_118->___tashkeel_0;
		if ((!(((uint32_t)L_119) == ((uint32_t)((int32_t)1616)))))
		{
			goto IL_024b;
		}
	}
	{
		// tashkeelLocation [index - 1].tashkeel = (char)0xFC62; // Shadda With KASRA
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_120 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_121 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_120);
		int32_t L_122 = V_1;
		NullCheck(L_121);
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_123;
		L_123 = List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B(L_121, ((int32_t)il2cpp_codegen_subtract(L_122, 1)), List_1_get_Item_m0F7C15B189FA9D293021229760099E5B1D5DF30B_RuntimeMethod_var);
		NullCheck(L_123);
		L_123->___tashkeel_0 = ((int32_t)64610);
		// continue;
		goto IL_02a5;
	}

IL_024b:
	{
		// tashkeelLocation.Add (new TashkeelLocation ((char)0x0651, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_124 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_125 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_124);
		int32_t L_126 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_127 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_127);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_127, ((int32_t)1617), L_126, NULL);
		NullCheck(L_125);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_125, L_127, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_128 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_128, 1));
		goto IL_02a5;
	}

IL_0263:
	{
		// else if (letters [i] == (char)0x0652) { // SUKUN
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_129 = V_0;
		int32_t L_130 = V_2;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		uint16_t L_132 = (uint16_t)(L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		if ((!(((uint32_t)L_132) == ((uint32_t)((int32_t)1618)))))
		{
			goto IL_0285;
		}
	}
	{
		// tashkeelLocation.Add (new TashkeelLocation ((char)0x0652, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_133 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_134 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_133);
		int32_t L_135 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_136 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_136);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_136, ((int32_t)1618), L_135, NULL);
		NullCheck(L_134);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_134, L_136, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_137 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		goto IL_02a5;
	}

IL_0285:
	{
		// else if (letters [i] == (char)0x0653) { // MADDAH ABOVE
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_138 = V_0;
		int32_t L_139 = V_2;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		uint16_t L_141 = (uint16_t)(L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		if ((!(((uint32_t)L_141) == ((uint32_t)((int32_t)1619)))))
		{
			goto IL_02a5;
		}
	}
	{
		// tashkeelLocation.Add (new TashkeelLocation ((char)0x0653, i));
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A** L_142 = ___tashkeelLocation1;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_143 = *((List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A**)L_142);
		int32_t L_144 = V_2;
		TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_145 = (TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E*)il2cpp_codegen_object_new(TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E_il2cpp_TypeInfo_var);
		NullCheck(L_145);
		TashkeelLocation__ctor_m7AC3958E264FB007218D7D90408EEC17CAA41313(L_145, ((int32_t)1619), L_144, NULL);
		NullCheck(L_143);
		List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_inline(L_143, L_145, List_1_Add_mA805CC47BA320E28347E77A5B499DAC69740D11F_RuntimeMethod_var);
		// index++;
		int32_t L_146 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_146, 1));
	}

IL_02a5:
	{
		// for (int i = 0; i < letters.Length; i++) {
		int32_t L_147 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_02a9:
	{
		// for (int i = 0; i < letters.Length; i++) {
		int32_t L_148 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_149 = V_0;
		NullCheck(L_149);
		if ((((int32_t)L_148) < ((int32_t)((int32_t)(((RuntimeArray*)L_149)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		// string[] split = str.Split(new char[]{(char)0x064B,(char)0x064C,(char)0x064D,
		//     (char)0x064E,(char)0x064F,(char)0x0650,
		// 
		//     (char)0x0651,(char)0x0652,(char)0x0653,(char)0xFC60,(char)0xFC61,(char)0xFC62});
		String_t* L_150 = ___str0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_151 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)12));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_152 = L_151;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_153 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____6B37F2DC3CBC36CB512AAB959CD9F9E3A5ED19A1282D3D8D0EF02E14C2935C71_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_152, L_153, NULL);
		NullCheck(L_150);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_154;
		L_154 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_150, L_152, NULL);
		// str = "";
		___str0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach(string s in split)
		V_3 = L_154;
		V_4 = 0;
		goto IL_02ed;
	}

IL_02d7:
	{
		// foreach(string s in split)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_155 = V_3;
		int32_t L_156 = V_4;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		String_t* L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		V_5 = L_158;
		// str += s;
		String_t* L_159 = ___str0;
		String_t* L_160 = V_5;
		String_t* L_161;
		L_161 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_159, L_160, NULL);
		___str0 = L_161;
		int32_t L_162 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_162, 1));
	}

IL_02ed:
	{
		// foreach(string s in split)
		int32_t L_163 = V_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_164 = V_3;
		NullCheck(L_164);
		if ((((int32_t)L_163) < ((int32_t)((int32_t)(((RuntimeArray*)L_164)->max_length)))))
		{
			goto IL_02d7;
		}
	}
	{
		// return str;
		String_t* L_165 = ___str0;
		return L_165;
	}
}
// System.Char[] ArabicFixerTool::ReturnTashkeel(System.Char[],System.Collections.Generic.List`1<TashkeelLocation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ArabicFixerTool_ReturnTashkeel_mBD921208330E1FB9A2E82140C9FC5D9A0C2F087D (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___letters0, List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* ___tashkeelLocation1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD2739082D6BA89E946E80CC1066961CD560005D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA42AEE2EC9AFCF2F493842E77E2AD849A3FD1D43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC3B87EBDA3C2A113B5677AE7C24434CC6A1EDC77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mF3937B72448133DF6FACB8F4769A1625DF677BDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06 V_3;
	memset((&V_3), 0, sizeof(V_3));
	TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* V_4 = NULL;
	{
		// char[] lettersWithTashkeel = new char[letters.Length + tashkeelLocation.Count];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___letters0;
		NullCheck(L_0);
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_1 = ___tashkeelLocation1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_inline(L_1, List_1_get_Count_m9E4AA52D0625EBB4469A19806C57A54BFAFA8B7B_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_2)));
		V_0 = L_3;
		// int letterWithTashkeelTracker = 0;
		V_1 = 0;
		// for(int i = 0; i<letters.Length; i++)
		V_2 = 0;
		goto IL_0067;
	}

IL_0016:
	{
		// lettersWithTashkeel[letterWithTashkeelTracker] = letters[i];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = ___letters0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		uint16_t L_9 = (uint16_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)L_9);
		// letterWithTashkeelTracker++;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// foreach(TashkeelLocation hLocation in tashkeelLocation)
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_11 = ___tashkeelLocation1;
		NullCheck(L_11);
		Enumerator_tC5289E8818ABDB22B8AD8A4B27A62D723AA43F06 L_12;
		L_12 = List_1_GetEnumerator_mF3937B72448133DF6FACB8F4769A1625DF677BDE(L_11, List_1_GetEnumerator_mF3937B72448133DF6FACB8F4769A1625DF677BDE_RuntimeMethod_var);
		V_3 = L_12;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD2739082D6BA89E946E80CC1066961CD560005D9((&V_3), Enumerator_Dispose_mD2739082D6BA89E946E80CC1066961CD560005D9_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_0029_1:
			{
				// foreach(TashkeelLocation hLocation in tashkeelLocation)
				TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_13;
				L_13 = Enumerator_get_Current_mC3B87EBDA3C2A113B5677AE7C24434CC6A1EDC77_inline((&V_3), Enumerator_get_Current_mC3B87EBDA3C2A113B5677AE7C24434CC6A1EDC77_RuntimeMethod_var);
				V_4 = L_13;
				// if(hLocation.position == letterWithTashkeelTracker)
				TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_14 = V_4;
				NullCheck(L_14);
				int32_t L_15 = L_14->___position_1;
				int32_t L_16 = V_1;
				if ((!(((uint32_t)L_15) == ((uint32_t)L_16))))
				{
					goto IL_004a_1;
				}
			}
			{
				// lettersWithTashkeel[letterWithTashkeelTracker] = hLocation.tashkeel;
				CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = V_0;
				int32_t L_18 = V_1;
				TashkeelLocation_t5B5BA6AE458A902DE926B52C77F137B19C80AB2E* L_19 = V_4;
				NullCheck(L_19);
				Il2CppChar L_20 = L_19->___tashkeel_0;
				NullCheck(L_17);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (Il2CppChar)L_20);
				// letterWithTashkeelTracker++;
				int32_t L_21 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
			}

IL_004a_1:
			{
				// foreach(TashkeelLocation hLocation in tashkeelLocation)
				bool L_22;
				L_22 = Enumerator_MoveNext_mA42AEE2EC9AFCF2F493842E77E2AD849A3FD1D43((&V_3), Enumerator_MoveNext_mA42AEE2EC9AFCF2F493842E77E2AD849A3FD1D43_RuntimeMethod_var);
				if (L_22)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		// for(int i = 0; i<letters.Length; i++)
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0067:
	{
		// for(int i = 0; i<letters.Length; i++)
		int32_t L_24 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = ___letters0;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		// return lettersWithTashkeel;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_0;
		return L_26;
	}
}
// System.String ArabicFixerTool::FixLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207 (String_t* ___str0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* V_1 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_2 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_3 = NULL;
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* V_4 = NULL;
	List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* V_5 = NULL;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	{
		// string test = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string originString = RemoveTashkeel(str, out tashkeelLocation);
		String_t* L_0 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = ArabicFixerTool_RemoveTashkeel_mE75446D7D57219F9A3A5AD617D219F15F643707C(L_0, (&V_1), NULL);
		// char[] lettersOrigin = originString.ToCharArray();
		String_t* L_2 = L_1;
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3;
		L_3 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		V_2 = L_3;
		// char[] lettersFinal = originString.ToCharArray();
		NullCheck(L_2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4;
		L_4 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_2, NULL);
		V_3 = L_4;
		// for (int i = 0; i < lettersOrigin.Length; i++)
		V_6 = 0;
		goto IL_0039;
	}

IL_0020:
	{
		// lettersOrigin[i] = (char)ArabicTable.ArabicMapper.Convert(lettersOrigin[i]);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = V_2;
		int32_t L_6 = V_6;
		ArabicTable_tC73F27CD2C649BA48A443C0E25851D9383320448* L_7;
		L_7 = ArabicTable_get_ArabicMapper_m4CE6FA5ADE6C9C306AB6771B631F21C3A4F65841(NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_8 = V_2;
		int32_t L_9 = V_6;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		uint16_t L_11 = (uint16_t)(L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_7);
		int32_t L_12;
		L_12 = ArabicTable_Convert_mD6DD8122E0D6CA1E33760E3FDBEE7D1E6CFA69A4(L_7, L_11, NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Il2CppChar)((int32_t)(uint16_t)L_12));
		// for (int i = 0; i < lettersOrigin.Length; i++)
		int32_t L_13 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0039:
	{
		// for (int i = 0; i < lettersOrigin.Length; i++)
		int32_t L_14 = V_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_2;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		// for (int i = 0; i < lettersOrigin.Length; i++)
		V_7 = 0;
		goto IL_023f;
	}

IL_0048:
	{
		// bool skip = false;
		V_8 = (bool)0;
		// if (lettersOrigin[i] == (char)IsolatedArabicLetters.Lam)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = V_2;
		int32_t L_17 = V_7;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		uint16_t L_19 = (uint16_t)(L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)65245)))))
		{
			goto IL_00fb;
		}
	}
	{
		// if (i < lettersOrigin.Length - 1)
		int32_t L_20 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), 1)))))
		{
			goto IL_00fb;
		}
	}
	{
		// if ((lettersOrigin[i + 1] == (char)IsolatedArabicLetters.AlefMaksoor))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = V_2;
		int32_t L_23 = V_7;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)65159)))))
		{
			goto IL_008b;
		}
	}
	{
		// lettersOrigin[i] = (char)0xFEF7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_2;
		int32_t L_27 = V_7;
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Il2CppChar)((int32_t)65271));
		// lettersFinal[i + 1] = (char)0xFFFF;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_28 = V_3;
		int32_t L_29 = V_7;
		NullCheck(L_28);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_29, 1))), (Il2CppChar)((int32_t)65535));
		// skip = true;
		V_8 = (bool)1;
		goto IL_00fb;
	}

IL_008b:
	{
		// else if ((lettersOrigin[i + 1] == (char)IsolatedArabicLetters.Alef))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = V_2;
		int32_t L_31 = V_7;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		uint16_t L_33 = (uint16_t)(L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)65165)))))
		{
			goto IL_00b1;
		}
	}
	{
		// lettersOrigin[i] = (char)0xFEF9;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = V_2;
		int32_t L_35 = V_7;
		NullCheck(L_34);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (Il2CppChar)((int32_t)65273));
		// lettersFinal[i + 1] = (char)0xFFFF;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = V_3;
		int32_t L_37 = V_7;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_37, 1))), (Il2CppChar)((int32_t)65535));
		// skip = true;
		V_8 = (bool)1;
		goto IL_00fb;
	}

IL_00b1:
	{
		// else if ((lettersOrigin[i + 1] == (char)IsolatedArabicLetters.AlefHamza))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = V_2;
		int32_t L_39 = V_7;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
		uint16_t L_41 = (uint16_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)65155)))))
		{
			goto IL_00d7;
		}
	}
	{
		// lettersOrigin[i] = (char)0xFEF5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = V_2;
		int32_t L_43 = V_7;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Il2CppChar)((int32_t)65269));
		// lettersFinal[i + 1] = (char)0xFFFF;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_44 = V_3;
		int32_t L_45 = V_7;
		NullCheck(L_44);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_45, 1))), (Il2CppChar)((int32_t)65535));
		// skip = true;
		V_8 = (bool)1;
		goto IL_00fb;
	}

IL_00d7:
	{
		// else if ((lettersOrigin[i + 1] == (char)IsolatedArabicLetters.AlefMad))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = V_2;
		int32_t L_47 = V_7;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_add(L_47, 1));
		uint16_t L_49 = (uint16_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((!(((uint32_t)L_49) == ((uint32_t)((int32_t)65153)))))
		{
			goto IL_00fb;
		}
	}
	{
		// lettersOrigin[i] = (char)0xFEF3;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = V_2;
		int32_t L_51 = V_7;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(L_51), (Il2CppChar)((int32_t)65267));
		// lettersFinal[i + 1] = (char)0xFFFF;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_52 = V_3;
		int32_t L_53 = V_7;
		NullCheck(L_52);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_53, 1))), (Il2CppChar)((int32_t)65535));
		// skip = true;
		V_8 = (bool)1;
	}

IL_00fb:
	{
		// if (!IsIgnoredCharacter(lettersOrigin[i]))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_54 = V_2;
		int32_t L_55 = V_7;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		uint16_t L_57 = (uint16_t)(L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_58;
		L_58 = ArabicFixerTool_IsIgnoredCharacter_mD4266BD327FCF7EA06B0805129FEA7104088A046(L_57, NULL);
		if (L_58)
		{
			goto IL_0149;
		}
	}
	{
		// if (IsMiddleLetter(lettersOrigin, i))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59 = V_2;
		int32_t L_60 = V_7;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = ArabicFixerTool_IsMiddleLetter_m9610EB7249C81792676BF357316EA65849F1942F(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_011d;
		}
	}
	{
		// lettersFinal[i] = (char)(lettersOrigin[i] + 3);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = V_3;
		int32_t L_63 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_64 = V_2;
		int32_t L_65 = V_7;
		NullCheck(L_64);
		int32_t L_66 = L_65;
		uint16_t L_67 = (uint16_t)(L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_62);
		(L_62)->SetAt(static_cast<il2cpp_array_size_t>(L_63), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, 3))));
		goto IL_0149;
	}

IL_011d:
	{
		// else if (IsFinishingLetter(lettersOrigin, i))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_68 = V_2;
		int32_t L_69 = V_7;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = ArabicFixerTool_IsFinishingLetter_m34D81454EFE842A4E5135A5BBB5A1C8493B19FD1(L_68, L_69, NULL);
		if (!L_70)
		{
			goto IL_0134;
		}
	}
	{
		// lettersFinal[i] = (char)(lettersOrigin[i] + 1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_71 = V_3;
		int32_t L_72 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_73 = V_2;
		int32_t L_74 = V_7;
		NullCheck(L_73);
		int32_t L_75 = L_74;
		uint16_t L_76 = (uint16_t)(L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, 1))));
		goto IL_0149;
	}

IL_0134:
	{
		// else if (IsLeadingLetter(lettersOrigin, i))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_77 = V_2;
		int32_t L_78 = V_7;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = ArabicFixerTool_IsLeadingLetter_m3020D74BCBE1755BEA9E0402A92A371769B46CCE(L_77, L_78, NULL);
		if (!L_79)
		{
			goto IL_0149;
		}
	}
	{
		// lettersFinal[i] = (char)(lettersOrigin[i] + 2);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_80 = V_3;
		int32_t L_81 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_82 = V_2;
		int32_t L_83 = V_7;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint16_t L_85 = (uint16_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_80);
		(L_80)->SetAt(static_cast<il2cpp_array_size_t>(L_81), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add((int32_t)L_85, 2))));
	}

IL_0149:
	{
		// test += Convert.ToString((int)lettersOrigin[i], 16) + " ";
		String_t* L_86 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_87 = V_2;
		int32_t L_88 = V_7;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		uint16_t L_90 = (uint16_t)(L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_91;
		L_91 = Convert_ToString_mC3349029FE37EB00B5BFCB1F87022458A3834E35(L_90, ((int32_t)16), NULL);
		String_t* L_92;
		L_92 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_86, L_91, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_92;
		// if (skip)
		bool L_93 = V_8;
		if (!L_93)
		{
			goto IL_016a;
		}
	}
	{
		// i++;
		int32_t L_94 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_016a:
	{
		// if(useHinduNumbers){
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_95 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___useHinduNumbers_2;
		if (!L_95)
		{
			goto IL_0239;
		}
	}
	{
		// if(lettersOrigin[i] == (char)0x0030)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_96 = V_2;
		int32_t L_97 = V_7;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		uint16_t L_99 = (uint16_t)(L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		if ((!(((uint32_t)L_99) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_018a;
		}
	}
	{
		// lettersFinal[i] = (char)0x0660;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_100 = V_3;
		int32_t L_101 = V_7;
		NullCheck(L_100);
		(L_100)->SetAt(static_cast<il2cpp_array_size_t>(L_101), (Il2CppChar)((int32_t)1632));
		goto IL_0239;
	}

IL_018a:
	{
		// else if(lettersOrigin[i] == (char)0x0031)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_102 = V_2;
		int32_t L_103 = V_7;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		uint16_t L_105 = (uint16_t)(L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		if ((!(((uint32_t)L_105) == ((uint32_t)((int32_t)49)))))
		{
			goto IL_01a0;
		}
	}
	{
		// lettersFinal[i] = (char)0x0661;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_106 = V_3;
		int32_t L_107 = V_7;
		NullCheck(L_106);
		(L_106)->SetAt(static_cast<il2cpp_array_size_t>(L_107), (Il2CppChar)((int32_t)1633));
		goto IL_0239;
	}

IL_01a0:
	{
		// else if(lettersOrigin[i] == (char)0x0032)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_108 = V_2;
		int32_t L_109 = V_7;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		uint16_t L_111 = (uint16_t)(L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		if ((!(((uint32_t)L_111) == ((uint32_t)((int32_t)50)))))
		{
			goto IL_01b6;
		}
	}
	{
		// lettersFinal[i] = (char)0x0662;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_112 = V_3;
		int32_t L_113 = V_7;
		NullCheck(L_112);
		(L_112)->SetAt(static_cast<il2cpp_array_size_t>(L_113), (Il2CppChar)((int32_t)1634));
		goto IL_0239;
	}

IL_01b6:
	{
		// else if(lettersOrigin[i] == (char)0x0033)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_114 = V_2;
		int32_t L_115 = V_7;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		uint16_t L_117 = (uint16_t)(L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		if ((!(((uint32_t)L_117) == ((uint32_t)((int32_t)51)))))
		{
			goto IL_01c9;
		}
	}
	{
		// lettersFinal[i] = (char)0x0663;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_118 = V_3;
		int32_t L_119 = V_7;
		NullCheck(L_118);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (Il2CppChar)((int32_t)1635));
		goto IL_0239;
	}

IL_01c9:
	{
		// else if(lettersOrigin[i] == (char)0x0034)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_120 = V_2;
		int32_t L_121 = V_7;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		uint16_t L_123 = (uint16_t)(L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		if ((!(((uint32_t)L_123) == ((uint32_t)((int32_t)52)))))
		{
			goto IL_01dc;
		}
	}
	{
		// lettersFinal[i] = (char)0x0664;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_124 = V_3;
		int32_t L_125 = V_7;
		NullCheck(L_124);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (Il2CppChar)((int32_t)1636));
		goto IL_0239;
	}

IL_01dc:
	{
		// else if(lettersOrigin[i] == (char)0x0035)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_126 = V_2;
		int32_t L_127 = V_7;
		NullCheck(L_126);
		int32_t L_128 = L_127;
		uint16_t L_129 = (uint16_t)(L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		if ((!(((uint32_t)L_129) == ((uint32_t)((int32_t)53)))))
		{
			goto IL_01ef;
		}
	}
	{
		// lettersFinal[i] = (char)0x0665;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_130 = V_3;
		int32_t L_131 = V_7;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(L_131), (Il2CppChar)((int32_t)1637));
		goto IL_0239;
	}

IL_01ef:
	{
		// else if(lettersOrigin[i] == (char)0x0036)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_132 = V_2;
		int32_t L_133 = V_7;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		uint16_t L_135 = (uint16_t)(L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		if ((!(((uint32_t)L_135) == ((uint32_t)((int32_t)54)))))
		{
			goto IL_0202;
		}
	}
	{
		// lettersFinal[i] = (char)0x0666;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_136 = V_3;
		int32_t L_137 = V_7;
		NullCheck(L_136);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(L_137), (Il2CppChar)((int32_t)1638));
		goto IL_0239;
	}

IL_0202:
	{
		// else if(lettersOrigin[i] == (char)0x0037)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_138 = V_2;
		int32_t L_139 = V_7;
		NullCheck(L_138);
		int32_t L_140 = L_139;
		uint16_t L_141 = (uint16_t)(L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		if ((!(((uint32_t)L_141) == ((uint32_t)((int32_t)55)))))
		{
			goto IL_0215;
		}
	}
	{
		// lettersFinal[i] = (char)0x0667;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_142 = V_3;
		int32_t L_143 = V_7;
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(L_143), (Il2CppChar)((int32_t)1639));
		goto IL_0239;
	}

IL_0215:
	{
		// else if(lettersOrigin[i] == (char)0x0038)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_144 = V_2;
		int32_t L_145 = V_7;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		uint16_t L_147 = (uint16_t)(L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		if ((!(((uint32_t)L_147) == ((uint32_t)((int32_t)56)))))
		{
			goto IL_0228;
		}
	}
	{
		// lettersFinal[i] = (char)0x0668;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_148 = V_3;
		int32_t L_149 = V_7;
		NullCheck(L_148);
		(L_148)->SetAt(static_cast<il2cpp_array_size_t>(L_149), (Il2CppChar)((int32_t)1640));
		goto IL_0239;
	}

IL_0228:
	{
		// else if(lettersOrigin[i] == (char)0x0039)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_150 = V_2;
		int32_t L_151 = V_7;
		NullCheck(L_150);
		int32_t L_152 = L_151;
		uint16_t L_153 = (uint16_t)(L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		if ((!(((uint32_t)L_153) == ((uint32_t)((int32_t)57)))))
		{
			goto IL_0239;
		}
	}
	{
		// lettersFinal[i] = (char)0x0669;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_154 = V_3;
		int32_t L_155 = V_7;
		NullCheck(L_154);
		(L_154)->SetAt(static_cast<il2cpp_array_size_t>(L_155), (Il2CppChar)((int32_t)1641));
	}

IL_0239:
	{
		// for (int i = 0; i < lettersOrigin.Length; i++)
		int32_t L_156 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_156, 1));
	}

IL_023f:
	{
		// for (int i = 0; i < lettersOrigin.Length; i++)
		int32_t L_157 = V_7;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_158 = V_2;
		NullCheck(L_158);
		if ((((int32_t)L_157) < ((int32_t)((int32_t)(((RuntimeArray*)L_158)->max_length)))))
		{
			goto IL_0048;
		}
	}
	{
		// if(showTashkeel)
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		bool L_159 = ((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___showTashkeel_0;
		if (!L_159)
		{
			goto IL_0258;
		}
	}
	{
		// lettersFinal = ReturnTashkeel(lettersFinal, tashkeelLocation);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_160 = V_3;
		List_1_t61CF79F925103D4851840D8DA468BC8B88B9B56A* L_161 = V_1;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_162;
		L_162 = ArabicFixerTool_ReturnTashkeel_mBD921208330E1FB9A2E82140C9FC5D9A0C2F087D(L_160, L_161, NULL);
		V_3 = L_162;
	}

IL_0258:
	{
		// List<char> list = new List<char>();
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_163 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)il2cpp_codegen_object_new(List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		NullCheck(L_163);
		List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82(L_163, List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var);
		V_4 = L_163;
		// List<char> numberList = new List<char>();
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_164 = (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*)il2cpp_codegen_object_new(List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7_il2cpp_TypeInfo_var);
		NullCheck(L_164);
		List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82(L_164, List_1__ctor_mC679EFF5E634878F1897D71DC5160A96EA719E82_RuntimeMethod_var);
		V_5 = L_164;
		// for (int i = lettersFinal.Length - 1; i >= 0; i--)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_165 = V_3;
		NullCheck(L_165);
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_165)->max_length)), 1));
		goto IL_0531;
	}

IL_0272:
	{
		// if (char.IsPunctuation(lettersFinal[i]) && i>0 && i < lettersFinal.Length-1 &&
		//     (char.IsPunctuation(lettersFinal[i-1]) || char.IsPunctuation(lettersFinal[i+1])))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_166 = V_3;
		int32_t L_167 = V_9;
		NullCheck(L_166);
		int32_t L_168 = L_167;
		uint16_t L_169 = (uint16_t)(L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_170;
		L_170 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_169, NULL);
		if (!L_170)
		{
			goto IL_0353;
		}
	}
	{
		int32_t L_171 = V_9;
		if ((((int32_t)L_171) <= ((int32_t)0)))
		{
			goto IL_0353;
		}
	}
	{
		int32_t L_172 = V_9;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_173 = V_3;
		NullCheck(L_173);
		if ((((int32_t)L_172) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_173)->max_length)), 1)))))
		{
			goto IL_0353;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_174 = V_3;
		int32_t L_175 = V_9;
		NullCheck(L_174);
		int32_t L_176 = ((int32_t)il2cpp_codegen_subtract(L_175, 1));
		uint16_t L_177 = (uint16_t)(L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_178;
		L_178 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_177, NULL);
		if (L_178)
		{
			goto IL_02b1;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_179 = V_3;
		int32_t L_180 = V_9;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add(L_180, 1));
		uint16_t L_182 = (uint16_t)(L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_183;
		L_183 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_182, NULL);
		if (!L_183)
		{
			goto IL_0353;
		}
	}

IL_02b1:
	{
		// if (lettersFinal[i] == '(')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_184 = V_3;
		int32_t L_185 = V_9;
		NullCheck(L_184);
		int32_t L_186 = L_185;
		uint16_t L_187 = (uint16_t)(L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_186));
		if ((!(((uint32_t)L_187) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_02c7;
		}
	}
	{
		// list.Add(')');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_188 = V_4;
		NullCheck(L_188);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_188, ((int32_t)41), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_02c7:
	{
		// else if (lettersFinal[i] == ')')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_189 = V_3;
		int32_t L_190 = V_9;
		NullCheck(L_189);
		int32_t L_191 = L_190;
		uint16_t L_192 = (uint16_t)(L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		if ((!(((uint32_t)L_192) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_02dd;
		}
	}
	{
		// list.Add('(');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_193 = V_4;
		NullCheck(L_193);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_193, ((int32_t)40), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_02dd:
	{
		// else if (lettersFinal[i] == '<')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_194 = V_3;
		int32_t L_195 = V_9;
		NullCheck(L_194);
		int32_t L_196 = L_195;
		uint16_t L_197 = (uint16_t)(L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		if ((!(((uint32_t)L_197) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_02f3;
		}
	}
	{
		// list.Add('>');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_198 = V_4;
		NullCheck(L_198);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_198, ((int32_t)62), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_02f3:
	{
		// else if (lettersFinal[i] == '>')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_199 = V_3;
		int32_t L_200 = V_9;
		NullCheck(L_199);
		int32_t L_201 = L_200;
		uint16_t L_202 = (uint16_t)(L_199)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		if ((!(((uint32_t)L_202) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0309;
		}
	}
	{
		// list.Add('<');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_203 = V_4;
		NullCheck(L_203);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_203, ((int32_t)60), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_0309:
	{
		// else if (lettersFinal[i] == '[')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_204 = V_3;
		int32_t L_205 = V_9;
		NullCheck(L_204);
		int32_t L_206 = L_205;
		uint16_t L_207 = (uint16_t)(L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		if ((!(((uint32_t)L_207) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_031f;
		}
	}
	{
		// list.Add(']');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_208 = V_4;
		NullCheck(L_208);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_208, ((int32_t)93), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_031f:
	{
		// else if (lettersFinal[i] == ']')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_209 = V_3;
		int32_t L_210 = V_9;
		NullCheck(L_209);
		int32_t L_211 = L_210;
		uint16_t L_212 = (uint16_t)(L_209)->GetAt(static_cast<il2cpp_array_size_t>(L_211));
		if ((!(((uint32_t)L_212) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0335;
		}
	}
	{
		// list.Add('[');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_213 = V_4;
		NullCheck(L_213);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_213, ((int32_t)91), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_0335:
	{
		// else if (lettersFinal[i] != 0xFFFF)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_214 = V_3;
		int32_t L_215 = V_9;
		NullCheck(L_214);
		int32_t L_216 = L_215;
		uint16_t L_217 = (uint16_t)(L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		if ((((int32_t)L_217) == ((int32_t)((int32_t)65535))))
		{
			goto IL_052b;
		}
	}
	{
		// list.Add(lettersFinal[i]);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_218 = V_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_219 = V_3;
		int32_t L_220 = V_9;
		NullCheck(L_219);
		int32_t L_221 = L_220;
		uint16_t L_222 = (uint16_t)(L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		NullCheck(L_218);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_218, L_222, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_0353:
	{
		// else if(lettersFinal[i] == ' ' && i > 0 && i < lettersFinal.Length-1 &&
		//         (char.IsLower(lettersFinal[i-1]) || char.IsUpper(lettersFinal[i-1]) || char.IsNumber(lettersFinal[i-1])) &&
		//         (char.IsLower(lettersFinal[i+1]) || char.IsUpper(lettersFinal[i+1]) ||char.IsNumber(lettersFinal[i+1])))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_223 = V_3;
		int32_t L_224 = V_9;
		NullCheck(L_223);
		int32_t L_225 = L_224;
		uint16_t L_226 = (uint16_t)(L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		if ((!(((uint32_t)L_226) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_227 = V_9;
		if ((((int32_t)L_227) <= ((int32_t)0)))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_228 = V_9;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_229 = V_3;
		NullCheck(L_229);
		if ((((int32_t)L_228) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_229)->max_length)), 1)))))
		{
			goto IL_03c7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_230 = V_3;
		int32_t L_231 = V_9;
		NullCheck(L_230);
		int32_t L_232 = ((int32_t)il2cpp_codegen_subtract(L_231, 1));
		uint16_t L_233 = (uint16_t)(L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_234;
		L_234 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_233, NULL);
		if (L_234)
		{
			goto IL_0390;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_235 = V_3;
		int32_t L_236 = V_9;
		NullCheck(L_235);
		int32_t L_237 = ((int32_t)il2cpp_codegen_subtract(L_236, 1));
		uint16_t L_238 = (uint16_t)(L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_237));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_239;
		L_239 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_238, NULL);
		if (L_239)
		{
			goto IL_0390;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_240 = V_3;
		int32_t L_241 = V_9;
		NullCheck(L_240);
		int32_t L_242 = ((int32_t)il2cpp_codegen_subtract(L_241, 1));
		uint16_t L_243 = (uint16_t)(L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_244;
		L_244 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_243, NULL);
		if (!L_244)
		{
			goto IL_03c7;
		}
	}

IL_0390:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_245 = V_3;
		int32_t L_246 = V_9;
		NullCheck(L_245);
		int32_t L_247 = ((int32_t)il2cpp_codegen_add(L_246, 1));
		uint16_t L_248 = (uint16_t)(L_245)->GetAt(static_cast<il2cpp_array_size_t>(L_247));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_249;
		L_249 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_248, NULL);
		if (L_249)
		{
			goto IL_03b7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_250 = V_3;
		int32_t L_251 = V_9;
		NullCheck(L_250);
		int32_t L_252 = ((int32_t)il2cpp_codegen_add(L_251, 1));
		uint16_t L_253 = (uint16_t)(L_250)->GetAt(static_cast<il2cpp_array_size_t>(L_252));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_254;
		L_254 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_253, NULL);
		if (L_254)
		{
			goto IL_03b7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_255 = V_3;
		int32_t L_256 = V_9;
		NullCheck(L_255);
		int32_t L_257 = ((int32_t)il2cpp_codegen_add(L_256, 1));
		uint16_t L_258 = (uint16_t)(L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_259;
		L_259 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_258, NULL);
		if (!L_259)
		{
			goto IL_03c7;
		}
	}

IL_03b7:
	{
		// numberList.Add(lettersFinal[i]);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_260 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_261 = V_3;
		int32_t L_262 = V_9;
		NullCheck(L_261);
		int32_t L_263 = L_262;
		uint16_t L_264 = (uint16_t)(L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		NullCheck(L_260);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_260, L_264, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_03c7:
	{
		// else if (char.IsNumber(lettersFinal[i]) || char.IsLower(lettersFinal[i]) ||
		//          char.IsUpper(lettersFinal[i]) || char.IsSymbol(lettersFinal[i]) ||
		//          char.IsPunctuation(lettersFinal[i]))// || lettersFinal[i] == '^') //)
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_265 = V_3;
		int32_t L_266 = V_9;
		NullCheck(L_265);
		int32_t L_267 = L_266;
		uint16_t L_268 = (uint16_t)(L_265)->GetAt(static_cast<il2cpp_array_size_t>(L_267));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_269;
		L_269 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_268, NULL);
		if (L_269)
		{
			goto IL_0401;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_270 = V_3;
		int32_t L_271 = V_9;
		NullCheck(L_270);
		int32_t L_272 = L_271;
		uint16_t L_273 = (uint16_t)(L_270)->GetAt(static_cast<il2cpp_array_size_t>(L_272));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_274;
		L_274 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_273, NULL);
		if (L_274)
		{
			goto IL_0401;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_275 = V_3;
		int32_t L_276 = V_9;
		NullCheck(L_275);
		int32_t L_277 = L_276;
		uint16_t L_278 = (uint16_t)(L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_279;
		L_279 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_278, NULL);
		if (L_279)
		{
			goto IL_0401;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_280 = V_3;
		int32_t L_281 = V_9;
		NullCheck(L_280);
		int32_t L_282 = L_281;
		uint16_t L_283 = (uint16_t)(L_280)->GetAt(static_cast<il2cpp_array_size_t>(L_282));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_284;
		L_284 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_283, NULL);
		if (L_284)
		{
			goto IL_0401;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_285 = V_3;
		int32_t L_286 = V_9;
		NullCheck(L_285);
		int32_t L_287 = L_286;
		uint16_t L_288 = (uint16_t)(L_285)->GetAt(static_cast<il2cpp_array_size_t>(L_287));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_289;
		L_289 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_288, NULL);
		if (!L_289)
		{
			goto IL_0495;
		}
	}

IL_0401:
	{
		// if (lettersFinal[i] == '(')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_290 = V_3;
		int32_t L_291 = V_9;
		NullCheck(L_290);
		int32_t L_292 = L_291;
		uint16_t L_293 = (uint16_t)(L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_292));
		if ((!(((uint32_t)L_293) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0417;
		}
	}
	{
		// numberList.Add(')');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_294 = V_5;
		NullCheck(L_294);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_294, ((int32_t)41), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_0417:
	{
		// else if (lettersFinal[i] == ')')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_295 = V_3;
		int32_t L_296 = V_9;
		NullCheck(L_295);
		int32_t L_297 = L_296;
		uint16_t L_298 = (uint16_t)(L_295)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		if ((!(((uint32_t)L_298) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_042d;
		}
	}
	{
		// numberList.Add('(');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_299 = V_5;
		NullCheck(L_299);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_299, ((int32_t)40), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_042d:
	{
		// else if (lettersFinal[i] == '<')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_300 = V_3;
		int32_t L_301 = V_9;
		NullCheck(L_300);
		int32_t L_302 = L_301;
		uint16_t L_303 = (uint16_t)(L_300)->GetAt(static_cast<il2cpp_array_size_t>(L_302));
		if ((!(((uint32_t)L_303) == ((uint32_t)((int32_t)60)))))
		{
			goto IL_0443;
		}
	}
	{
		// numberList.Add('>');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_304 = V_5;
		NullCheck(L_304);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_304, ((int32_t)62), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_0443:
	{
		// else if (lettersFinal[i] == '>')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_305 = V_3;
		int32_t L_306 = V_9;
		NullCheck(L_305);
		int32_t L_307 = L_306;
		uint16_t L_308 = (uint16_t)(L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_307));
		if ((!(((uint32_t)L_308) == ((uint32_t)((int32_t)62)))))
		{
			goto IL_0459;
		}
	}
	{
		// numberList.Add('<');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_309 = V_5;
		NullCheck(L_309);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_309, ((int32_t)60), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_0459:
	{
		// else if (lettersFinal[i] == '[')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_310 = V_3;
		int32_t L_311 = V_9;
		NullCheck(L_310);
		int32_t L_312 = L_311;
		uint16_t L_313 = (uint16_t)(L_310)->GetAt(static_cast<il2cpp_array_size_t>(L_312));
		if ((!(((uint32_t)L_313) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_046f;
		}
	}
	{
		// list.Add(']');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_314 = V_4;
		NullCheck(L_314);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_314, ((int32_t)93), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_046f:
	{
		// else if (lettersFinal[i] == ']')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_315 = V_3;
		int32_t L_316 = V_9;
		NullCheck(L_315);
		int32_t L_317 = L_316;
		uint16_t L_318 = (uint16_t)(L_315)->GetAt(static_cast<il2cpp_array_size_t>(L_317));
		if ((!(((uint32_t)L_318) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0485;
		}
	}
	{
		// list.Add('[');
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_319 = V_4;
		NullCheck(L_319);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_319, ((int32_t)91), List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_0485:
	{
		// numberList.Add(lettersFinal[i]);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_320 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_321 = V_3;
		int32_t L_322 = V_9;
		NullCheck(L_321);
		int32_t L_323 = L_322;
		uint16_t L_324 = (uint16_t)(L_321)->GetAt(static_cast<il2cpp_array_size_t>(L_323));
		NullCheck(L_320);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_320, L_324, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_0495:
	{
		// else if( (lettersFinal[i] >= (char)0xD800 && lettersFinal[i] <= (char)0xDBFF) ||
		//         (lettersFinal[i] >= (char)0xDC00 && lettersFinal[i] <= (char)0xDFFF))
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_325 = V_3;
		int32_t L_326 = V_9;
		NullCheck(L_325);
		int32_t L_327 = L_326;
		uint16_t L_328 = (uint16_t)(L_325)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		if ((((int32_t)L_328) < ((int32_t)((int32_t)55296))))
		{
			goto IL_04ab;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_329 = V_3;
		int32_t L_330 = V_9;
		NullCheck(L_329);
		int32_t L_331 = L_330;
		uint16_t L_332 = (uint16_t)(L_329)->GetAt(static_cast<il2cpp_array_size_t>(L_331));
		if ((((int32_t)L_332) <= ((int32_t)((int32_t)56319))))
		{
			goto IL_04c1;
		}
	}

IL_04ab:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_333 = V_3;
		int32_t L_334 = V_9;
		NullCheck(L_333);
		int32_t L_335 = L_334;
		uint16_t L_336 = (uint16_t)(L_333)->GetAt(static_cast<il2cpp_array_size_t>(L_335));
		if ((((int32_t)L_336) < ((int32_t)((int32_t)56320))))
		{
			goto IL_04ce;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_337 = V_3;
		int32_t L_338 = V_9;
		NullCheck(L_337);
		int32_t L_339 = L_338;
		uint16_t L_340 = (uint16_t)(L_337)->GetAt(static_cast<il2cpp_array_size_t>(L_339));
		if ((((int32_t)L_340) > ((int32_t)((int32_t)57343))))
		{
			goto IL_04ce;
		}
	}

IL_04c1:
	{
		// numberList.Add(lettersFinal[i]);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_341 = V_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_342 = V_3;
		int32_t L_343 = V_9;
		NullCheck(L_342);
		int32_t L_344 = L_343;
		uint16_t L_345 = (uint16_t)(L_342)->GetAt(static_cast<il2cpp_array_size_t>(L_344));
		NullCheck(L_341);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_341, L_345, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		goto IL_052b;
	}

IL_04ce:
	{
		// if (numberList.Count > 0)
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_346 = V_5;
		NullCheck(L_346);
		int32_t L_347;
		L_347 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_346, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		if ((((int32_t)L_347) <= ((int32_t)0)))
		{
			goto IL_050f;
		}
	}
	{
		// for (int j = 0; j < numberList.Count; j++)
		V_10 = 0;
		goto IL_04fd;
	}

IL_04dd:
	{
		// list.Add(numberList[numberList.Count - 1 - j]);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_348 = V_4;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_349 = V_5;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_350 = V_5;
		NullCheck(L_350);
		int32_t L_351;
		L_351 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_350, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		int32_t L_352 = V_10;
		NullCheck(L_349);
		Il2CppChar L_353;
		L_353 = List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F(L_349, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_351, 1)), L_352)), List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var);
		NullCheck(L_348);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_348, L_353, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		// for (int j = 0; j < numberList.Count; j++)
		int32_t L_354 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_354, 1));
	}

IL_04fd:
	{
		// for (int j = 0; j < numberList.Count; j++)
		int32_t L_355 = V_10;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_356 = V_5;
		NullCheck(L_356);
		int32_t L_357;
		L_357 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_356, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		if ((((int32_t)L_355) < ((int32_t)L_357)))
		{
			goto IL_04dd;
		}
	}
	{
		// numberList.Clear();
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_358 = V_5;
		NullCheck(L_358);
		List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_inline(L_358, List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_RuntimeMethod_var);
	}

IL_050f:
	{
		// if (lettersFinal[i] != 0xFFFF && lettersFinal[i] != '\0')
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_359 = V_3;
		int32_t L_360 = V_9;
		NullCheck(L_359);
		int32_t L_361 = L_360;
		uint16_t L_362 = (uint16_t)(L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		if ((((int32_t)L_362) == ((int32_t)((int32_t)65535))))
		{
			goto IL_052b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_363 = V_3;
		int32_t L_364 = V_9;
		NullCheck(L_363);
		int32_t L_365 = L_364;
		uint16_t L_366 = (uint16_t)(L_363)->GetAt(static_cast<il2cpp_array_size_t>(L_365));
		if (!L_366)
		{
			goto IL_052b;
		}
	}
	{
		// list.Add(lettersFinal[i]);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_367 = V_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_368 = V_3;
		int32_t L_369 = V_9;
		NullCheck(L_368);
		int32_t L_370 = L_369;
		uint16_t L_371 = (uint16_t)(L_368)->GetAt(static_cast<il2cpp_array_size_t>(L_370));
		NullCheck(L_367);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_367, L_371, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
	}

IL_052b:
	{
		// for (int i = lettersFinal.Length - 1; i >= 0; i--)
		int32_t L_372 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_372, 1));
	}

IL_0531:
	{
		// for (int i = lettersFinal.Length - 1; i >= 0; i--)
		int32_t L_373 = V_9;
		if ((((int32_t)L_373) >= ((int32_t)0)))
		{
			goto IL_0272;
		}
	}
	{
		// if (numberList.Count > 0)
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_374 = V_5;
		NullCheck(L_374);
		int32_t L_375;
		L_375 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_374, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		if ((((int32_t)L_375) <= ((int32_t)0)))
		{
			goto IL_057a;
		}
	}
	{
		// for (int j = 0; j < numberList.Count; j++)
		V_11 = 0;
		goto IL_0568;
	}

IL_0548:
	{
		// list.Add(numberList[numberList.Count - 1 - j]);
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_376 = V_4;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_377 = V_5;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_378 = V_5;
		NullCheck(L_378);
		int32_t L_379;
		L_379 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_378, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		int32_t L_380 = V_11;
		NullCheck(L_377);
		Il2CppChar L_381;
		L_381 = List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F(L_377, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(L_379, 1)), L_380)), List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var);
		NullCheck(L_376);
		List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_inline(L_376, L_381, List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_RuntimeMethod_var);
		// for (int j = 0; j < numberList.Count; j++)
		int32_t L_382 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_382, 1));
	}

IL_0568:
	{
		// for (int j = 0; j < numberList.Count; j++)
		int32_t L_383 = V_11;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_384 = V_5;
		NullCheck(L_384);
		int32_t L_385;
		L_385 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_384, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		if ((((int32_t)L_383) < ((int32_t)L_385)))
		{
			goto IL_0548;
		}
	}
	{
		// numberList.Clear();
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_386 = V_5;
		NullCheck(L_386);
		List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_inline(L_386, List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_RuntimeMethod_var);
	}

IL_057a:
	{
		// lettersFinal = new char[list.Count];
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_387 = V_4;
		NullCheck(L_387);
		int32_t L_388;
		L_388 = List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_inline(L_387, List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_RuntimeMethod_var);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_389 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_388);
		V_3 = L_389;
		// for (int i = 0; i < lettersFinal.Length; i++)
		V_12 = 0;
		goto IL_059f;
	}

IL_058c:
	{
		// lettersFinal[i] = list[i];
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_390 = V_3;
		int32_t L_391 = V_12;
		List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* L_392 = V_4;
		int32_t L_393 = V_12;
		NullCheck(L_392);
		Il2CppChar L_394;
		L_394 = List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F(L_392, L_393, List_1_get_Item_mB9E0EA5FEE54A88C19874F86CBED5C48CD4A091F_RuntimeMethod_var);
		NullCheck(L_390);
		(L_390)->SetAt(static_cast<il2cpp_array_size_t>(L_391), (Il2CppChar)L_394);
		// for (int i = 0; i < lettersFinal.Length; i++)
		int32_t L_395 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_395, 1));
	}

IL_059f:
	{
		// for (int i = 0; i < lettersFinal.Length; i++)
		int32_t L_396 = V_12;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_397 = V_3;
		NullCheck(L_397);
		if ((((int32_t)L_396) < ((int32_t)((int32_t)(((RuntimeArray*)L_397)->max_length)))))
		{
			goto IL_058c;
		}
	}
	{
		// str = new string(lettersFinal);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_398 = V_3;
		String_t* L_399;
		L_399 = String_CreateString_mFBC28D2E3EB87D497F7E702E4FFAD65F635E44DF(NULL, L_398, NULL);
		___str0 = L_399;
		// return str;
		String_t* L_400 = ___str0;
		return L_400;
	}
}
// System.Boolean ArabicFixerTool::IsIgnoredCharacter(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsIgnoredCharacter_mD4266BD327FCF7EA06B0805129FEA7104088A046 (Il2CppChar ___ch0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool G_B5_0 = false;
	bool G_B1_0 = false;
	bool G_B2_0 = false;
	bool G_B3_0 = false;
	bool G_B4_0 = false;
	int32_t G_B6_0 = 0;
	bool G_B6_1 = false;
	bool G_B8_0 = false;
	bool G_B7_0 = false;
	int32_t G_B9_0 = 0;
	bool G_B9_1 = false;
	bool G_B11_0 = false;
	bool G_B10_0 = false;
	int32_t G_B12_0 = 0;
	bool G_B12_1 = false;
	{
		// bool isPunctuation = char.IsPunctuation(ch);
		Il2CppChar L_0 = ___ch0;
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_0, NULL);
		// bool isNumber = char.IsNumber(ch);
		Il2CppChar L_2 = ___ch0;
		bool L_3;
		L_3 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_2, NULL);
		V_0 = L_3;
		// bool isLower = char.IsLower(ch);
		Il2CppChar L_4 = ___ch0;
		bool L_5;
		L_5 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_4, NULL);
		V_1 = L_5;
		// bool isUpper = char.IsUpper(ch);
		Il2CppChar L_6 = ___ch0;
		bool L_7;
		L_7 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_6, NULL);
		V_2 = L_7;
		// bool isSymbol = char.IsSymbol(ch);
		Il2CppChar L_8 = ___ch0;
		bool L_9;
		L_9 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_8, NULL);
		V_3 = L_9;
		// bool isPersianCharacter = ch == (char)0xFB56 || ch == (char)0xFB7A || ch == (char)0xFB8A || ch == (char)0xFB92 || ch == (char)0xFB8E;
		Il2CppChar L_10 = ___ch0;
		G_B1_0 = L_1;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)64342))))
		{
			G_B5_0 = L_1;
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_11 = ___ch0;
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)64378))))
		{
			G_B5_0 = G_B1_0;
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_12 = ___ch0;
		G_B3_0 = G_B2_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)64394))))
		{
			G_B5_0 = G_B2_0;
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_13 = ___ch0;
		G_B4_0 = G_B3_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)64402))))
		{
			G_B5_0 = G_B3_0;
			goto IL_004c;
		}
	}
	{
		Il2CppChar L_14 = ___ch0;
		G_B6_0 = ((((int32_t)L_14) == ((int32_t)((int32_t)64398)))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_004d;
	}

IL_004c:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_004d:
	{
		V_4 = (bool)G_B6_0;
		// bool isPresentationFormB = (ch <= (char)0xFEFF && ch >= (char)0xFE70);
		Il2CppChar L_15 = ___ch0;
		G_B7_0 = G_B6_1;
		if ((((int32_t)L_15) > ((int32_t)((int32_t)65279))))
		{
			G_B8_0 = G_B6_1;
			goto IL_0064;
		}
	}
	{
		Il2CppChar L_16 = ___ch0;
		G_B9_0 = ((((int32_t)((((int32_t)L_16) < ((int32_t)((int32_t)65136)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B9_1 = G_B7_0;
		goto IL_0065;
	}

IL_0064:
	{
		G_B9_0 = 0;
		G_B9_1 = G_B8_0;
	}

IL_0065:
	{
		// bool isAcceptableCharacter = isPresentationFormB || isPersianCharacter || ch == (char)0xFBFC;
		bool L_17 = V_4;
		G_B10_0 = G_B9_1;
		if (((int32_t)(G_B9_0|(int32_t)L_17)))
		{
			G_B11_0 = G_B9_1;
			goto IL_0074;
		}
	}
	{
		Il2CppChar L_18 = ___ch0;
		G_B12_0 = ((((int32_t)L_18) == ((int32_t)((int32_t)64508)))? 1 : 0);
		G_B12_1 = G_B10_0;
		goto IL_0075;
	}

IL_0074:
	{
		G_B12_0 = 1;
		G_B12_1 = G_B11_0;
	}

IL_0075:
	{
		V_5 = (bool)G_B12_0;
		// return isPunctuation ||
		//     isNumber ||
		//         isLower ||
		//         isUpper ||
		//         isSymbol ||
		//         !isAcceptableCharacter ||
		//         ch == 'a' || ch == '>' || ch == '<' || ch == (char)0x061B;
		bool L_19 = V_0;
		bool L_20 = V_1;
		bool L_21 = V_2;
		bool L_22 = V_3;
		if (((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)G_B12_1|(int32_t)L_19))|(int32_t)L_20))|(int32_t)L_21))|(int32_t)L_22)))
		{
			goto IL_009d;
		}
	}
	{
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_24 = ___ch0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)97))))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_25 = ___ch0;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)62))))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_26 = ___ch0;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)60))))
		{
			goto IL_009d;
		}
	}
	{
		Il2CppChar L_27 = ___ch0;
		return (bool)((((int32_t)L_27) == ((int32_t)((int32_t)1563)))? 1 : 0);
	}

IL_009d:
	{
		return (bool)1;
	}
}
// System.Boolean ArabicFixerTool::IsLeadingLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsLeadingLetter_m3020D74BCBE1755BEA9E0402A92A371769B46CCE (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___letters0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B20_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B25_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B30_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B34_1 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B37_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B39_0 = 0;
	int32_t G_B40_0 = 0;
	int32_t G_B41_0 = 0;
	int32_t G_B42_0 = 0;
	int32_t G_B43_0 = 0;
	int32_t G_B45_0 = 0;
	int32_t G_B45_1 = 0;
	{
		// bool lettersThatCannotBeBeforeALeadingLetter = index == 0
		//     || letters[index - 1] == ' '
		//         || letters[index - 1] == '*' // ??? Remove?
		//         || letters[index - 1] == 'A' // ??? Remove?
		//         || char.IsPunctuation(letters[index - 1])
		//         || letters[index - 1] == '>'
		//         || letters[index - 1] == '<'
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Alef
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Dal
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Thal
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Ra2
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Zeen
		//         || letters[index - 1] == (int)IsolatedArabicLetters.PersianZe
		//         //|| letters[index - 1] == (int)IsolatedArabicLetters.AlefMaksora
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Waw
		//         || letters[index - 1] == (int)IsolatedArabicLetters.AlefMad
		//         || letters[index - 1] == (int)IsolatedArabicLetters.AlefHamza
		//         || letters[index - 1] == (int)IsolatedArabicLetters.Hamza
		//         || letters[index - 1] == (int)IsolatedArabicLetters.AlefMaksoor
		//         || letters[index - 1] == (int)IsolatedArabicLetters.WawHamza;
		int32_t L_0 = ___index1;
		if (!L_0)
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___letters0;
		int32_t L_2 = ___index1;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___letters0;
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_8) == ((int32_t)((int32_t)42))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___letters0;
		int32_t L_10 = ___index1;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((((int32_t)L_12) == ((int32_t)((int32_t)65))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___letters0;
		int32_t L_14 = ___index1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_16, NULL);
		if (L_17)
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_18 = ___letters0;
		int32_t L_19 = ___index1;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		uint16_t L_21 = (uint16_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		if ((((int32_t)L_21) == ((int32_t)((int32_t)62))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = ___letters0;
		int32_t L_23 = ___index1;
		NullCheck(L_22);
		int32_t L_24 = ((int32_t)il2cpp_codegen_subtract(L_23, 1));
		uint16_t L_25 = (uint16_t)(L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((((int32_t)L_25) == ((int32_t)((int32_t)60))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = ___letters0;
		int32_t L_27 = ___index1;
		NullCheck(L_26);
		int32_t L_28 = ((int32_t)il2cpp_codegen_subtract(L_27, 1));
		uint16_t L_29 = (uint16_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_29) == ((int32_t)((int32_t)65165))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = ___letters0;
		int32_t L_31 = ___index1;
		NullCheck(L_30);
		int32_t L_32 = ((int32_t)il2cpp_codegen_subtract(L_31, 1));
		uint16_t L_33 = (uint16_t)(L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		if ((((int32_t)L_33) == ((int32_t)((int32_t)65193))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_34 = ___letters0;
		int32_t L_35 = ___index1;
		NullCheck(L_34);
		int32_t L_36 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
		uint16_t L_37 = (uint16_t)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		if ((((int32_t)L_37) == ((int32_t)((int32_t)65195))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = ___letters0;
		int32_t L_39 = ___index1;
		NullCheck(L_38);
		int32_t L_40 = ((int32_t)il2cpp_codegen_subtract(L_39, 1));
		uint16_t L_41 = (uint16_t)(L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((((int32_t)L_41) == ((int32_t)((int32_t)65197))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = ___letters0;
		int32_t L_43 = ___index1;
		NullCheck(L_42);
		int32_t L_44 = ((int32_t)il2cpp_codegen_subtract(L_43, 1));
		uint16_t L_45 = (uint16_t)(L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		if ((((int32_t)L_45) == ((int32_t)((int32_t)65199))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = ___letters0;
		int32_t L_47 = ___index1;
		NullCheck(L_46);
		int32_t L_48 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
		uint16_t L_49 = (uint16_t)(L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		if ((((int32_t)L_49) == ((int32_t)((int32_t)64394))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = ___letters0;
		int32_t L_51 = ___index1;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint16_t L_53 = (uint16_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((((int32_t)L_53) == ((int32_t)((int32_t)65261))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_54 = ___letters0;
		int32_t L_55 = ___index1;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		uint16_t L_57 = (uint16_t)(L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65153))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = ___letters0;
		int32_t L_59 = ___index1;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		uint16_t L_61 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((((int32_t)L_61) == ((int32_t)((int32_t)65155))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = ___letters0;
		int32_t L_63 = ___index1;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
		uint16_t L_65 = (uint16_t)(L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		if ((((int32_t)L_65) == ((int32_t)((int32_t)65152))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_66 = ___letters0;
		int32_t L_67 = ___index1;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		uint16_t L_69 = (uint16_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		if ((((int32_t)L_69) == ((int32_t)((int32_t)65159))))
		{
			goto IL_00e6;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = ___letters0;
		int32_t L_71 = ___index1;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_subtract(L_71, 1));
		uint16_t L_73 = (uint16_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		G_B20_0 = ((((int32_t)L_73) == ((int32_t)((int32_t)65157)))? 1 : 0);
		goto IL_00e7;
	}

IL_00e6:
	{
		G_B20_0 = 1;
	}

IL_00e7:
	{
		// bool lettersThatCannotBeALeadingLetter = letters[index] != ' '
		//     && letters[index] != (int)IsolatedArabicLetters.Dal
		//     && letters[index] != (int)IsolatedArabicLetters.Thal
		//         && letters[index] != (int)IsolatedArabicLetters.Ra2
		//         && letters[index] != (int)IsolatedArabicLetters.Zeen
		//         && letters[index] != (int)IsolatedArabicLetters.PersianZe
		//         && letters[index] != (int)IsolatedArabicLetters.Alef
		//         && letters[index] != (int)IsolatedArabicLetters.AlefHamza
		//         && letters[index] != (int)IsolatedArabicLetters.AlefMaksoor
		//         && letters[index] != (int)IsolatedArabicLetters.AlefMad
		//         && letters[index] != (int)IsolatedArabicLetters.WawHamza
		//         && letters[index] != (int)IsolatedArabicLetters.Waw
		//         && letters[index] != (int)IsolatedArabicLetters.Hamza;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_74 = ___letters0;
		int32_t L_75 = ___index1;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		uint16_t L_77 = (uint16_t)(L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		G_B21_0 = G_B20_0;
		if ((((int32_t)L_77) == ((int32_t)((int32_t)32))))
		{
			G_B33_0 = G_B20_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_78 = ___letters0;
		int32_t L_79 = ___index1;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		uint16_t L_81 = (uint16_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		G_B22_0 = G_B21_0;
		if ((((int32_t)L_81) == ((int32_t)((int32_t)65193))))
		{
			G_B33_0 = G_B21_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_82 = ___letters0;
		int32_t L_83 = ___index1;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		uint16_t L_85 = (uint16_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		G_B23_0 = G_B22_0;
		if ((((int32_t)L_85) == ((int32_t)((int32_t)65195))))
		{
			G_B33_0 = G_B22_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_86 = ___letters0;
		int32_t L_87 = ___index1;
		NullCheck(L_86);
		int32_t L_88 = L_87;
		uint16_t L_89 = (uint16_t)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		G_B24_0 = G_B23_0;
		if ((((int32_t)L_89) == ((int32_t)((int32_t)65197))))
		{
			G_B33_0 = G_B23_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_90 = ___letters0;
		int32_t L_91 = ___index1;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		uint16_t L_93 = (uint16_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		G_B25_0 = G_B24_0;
		if ((((int32_t)L_93) == ((int32_t)((int32_t)65199))))
		{
			G_B33_0 = G_B24_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_94 = ___letters0;
		int32_t L_95 = ___index1;
		NullCheck(L_94);
		int32_t L_96 = L_95;
		uint16_t L_97 = (uint16_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		G_B26_0 = G_B25_0;
		if ((((int32_t)L_97) == ((int32_t)((int32_t)64394))))
		{
			G_B33_0 = G_B25_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_98 = ___letters0;
		int32_t L_99 = ___index1;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		uint16_t L_101 = (uint16_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		G_B27_0 = G_B26_0;
		if ((((int32_t)L_101) == ((int32_t)((int32_t)65165))))
		{
			G_B33_0 = G_B26_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_102 = ___letters0;
		int32_t L_103 = ___index1;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		uint16_t L_105 = (uint16_t)(L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		G_B28_0 = G_B27_0;
		if ((((int32_t)L_105) == ((int32_t)((int32_t)65155))))
		{
			G_B33_0 = G_B27_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_106 = ___letters0;
		int32_t L_107 = ___index1;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		uint16_t L_109 = (uint16_t)(L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		G_B29_0 = G_B28_0;
		if ((((int32_t)L_109) == ((int32_t)((int32_t)65159))))
		{
			G_B33_0 = G_B28_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_110 = ___letters0;
		int32_t L_111 = ___index1;
		NullCheck(L_110);
		int32_t L_112 = L_111;
		uint16_t L_113 = (uint16_t)(L_110)->GetAt(static_cast<il2cpp_array_size_t>(L_112));
		G_B30_0 = G_B29_0;
		if ((((int32_t)L_113) == ((int32_t)((int32_t)65153))))
		{
			G_B33_0 = G_B29_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_114 = ___letters0;
		int32_t L_115 = ___index1;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		uint16_t L_117 = (uint16_t)(L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		G_B31_0 = G_B30_0;
		if ((((int32_t)L_117) == ((int32_t)((int32_t)65157))))
		{
			G_B33_0 = G_B30_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_118 = ___letters0;
		int32_t L_119 = ___index1;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		uint16_t L_121 = (uint16_t)(L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		G_B32_0 = G_B31_0;
		if ((((int32_t)L_121) == ((int32_t)((int32_t)65261))))
		{
			G_B33_0 = G_B31_0;
			goto IL_016b;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_122 = ___letters0;
		int32_t L_123 = ___index1;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		uint16_t L_125 = (uint16_t)(L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		G_B34_0 = ((((int32_t)((((int32_t)L_125) == ((int32_t)((int32_t)65152)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B34_1 = G_B32_0;
		goto IL_016c;
	}

IL_016b:
	{
		G_B34_0 = 0;
		G_B34_1 = G_B33_0;
	}

IL_016c:
	{
		V_0 = (bool)G_B34_0;
		// bool lettersThatCannotBeAfterLeadingLetter = index < letters.Length - 1
		//         && letters[index + 1] != ' '
		//         && letters[index + 1] != '\n'
		//         && letters[index + 1] != '\r'
		//         && !char.IsPunctuation(letters[index + 1] )
		//         && !char.IsNumber(letters[index + 1])
		//         && !char.IsSymbol(letters[index + 1])
		//         && !char.IsLower(letters[index + 1])
		//         && !char.IsUpper(letters[index + 1])
		//         && letters[index + 1] != (int)IsolatedArabicLetters.Hamza;
		int32_t L_126 = ___index1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_127 = ___letters0;
		NullCheck(L_127);
		G_B35_0 = G_B34_1;
		if ((((int32_t)L_126) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_127)->max_length)), 1)))))
		{
			G_B44_0 = G_B34_1;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_128 = ___letters0;
		int32_t L_129 = ___index1;
		NullCheck(L_128);
		int32_t L_130 = ((int32_t)il2cpp_codegen_add(L_129, 1));
		uint16_t L_131 = (uint16_t)(L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		G_B36_0 = G_B35_0;
		if ((((int32_t)L_131) == ((int32_t)((int32_t)32))))
		{
			G_B44_0 = G_B35_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_132 = ___letters0;
		int32_t L_133 = ___index1;
		NullCheck(L_132);
		int32_t L_134 = ((int32_t)il2cpp_codegen_add(L_133, 1));
		uint16_t L_135 = (uint16_t)(L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		G_B37_0 = G_B36_0;
		if ((((int32_t)L_135) == ((int32_t)((int32_t)10))))
		{
			G_B44_0 = G_B36_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_136 = ___letters0;
		int32_t L_137 = ___index1;
		NullCheck(L_136);
		int32_t L_138 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		uint16_t L_139 = (uint16_t)(L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		G_B38_0 = G_B37_0;
		if ((((int32_t)L_139) == ((int32_t)((int32_t)13))))
		{
			G_B44_0 = G_B37_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_140 = ___letters0;
		int32_t L_141 = ___index1;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)il2cpp_codegen_add(L_141, 1));
		uint16_t L_143 = (uint16_t)(L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_144;
		L_144 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_143, NULL);
		G_B39_0 = G_B38_0;
		if (L_144)
		{
			G_B44_0 = G_B38_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_145 = ___letters0;
		int32_t L_146 = ___index1;
		NullCheck(L_145);
		int32_t L_147 = ((int32_t)il2cpp_codegen_add(L_146, 1));
		uint16_t L_148 = (uint16_t)(L_145)->GetAt(static_cast<il2cpp_array_size_t>(L_147));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_149;
		L_149 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_148, NULL);
		G_B40_0 = G_B39_0;
		if (L_149)
		{
			G_B44_0 = G_B39_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_150 = ___letters0;
		int32_t L_151 = ___index1;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 1));
		uint16_t L_153 = (uint16_t)(L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_154;
		L_154 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_153, NULL);
		G_B41_0 = G_B40_0;
		if (L_154)
		{
			G_B44_0 = G_B40_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_155 = ___letters0;
		int32_t L_156 = ___index1;
		NullCheck(L_155);
		int32_t L_157 = ((int32_t)il2cpp_codegen_add(L_156, 1));
		uint16_t L_158 = (uint16_t)(L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_159;
		L_159 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_158, NULL);
		G_B42_0 = G_B41_0;
		if (L_159)
		{
			G_B44_0 = G_B41_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_160 = ___letters0;
		int32_t L_161 = ___index1;
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_add(L_161, 1));
		uint16_t L_163 = (uint16_t)(L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_164;
		L_164 = Char_IsUpper_mF150C44B70F522A14B2A8DF71DE0ADE52F9A3392(L_163, NULL);
		G_B43_0 = G_B42_0;
		if (L_164)
		{
			G_B44_0 = G_B42_0;
			goto IL_01dd;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_165 = ___letters0;
		int32_t L_166 = ___index1;
		NullCheck(L_165);
		int32_t L_167 = ((int32_t)il2cpp_codegen_add(L_166, 1));
		uint16_t L_168 = (uint16_t)(L_165)->GetAt(static_cast<il2cpp_array_size_t>(L_167));
		G_B45_0 = ((((int32_t)((((int32_t)L_168) == ((int32_t)((int32_t)65152)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B45_1 = G_B43_0;
		goto IL_01de;
	}

IL_01dd:
	{
		G_B45_0 = 0;
		G_B45_1 = G_B44_0;
	}

IL_01de:
	{
		V_1 = (bool)G_B45_0;
		// if(lettersThatCannotBeBeforeALeadingLetter && lettersThatCannotBeALeadingLetter && lettersThatCannotBeAfterLeadingLetter)
		bool L_169 = V_0;
		bool L_170 = V_1;
		if (!((int32_t)(((int32_t)(G_B45_1&(int32_t)L_169))&(int32_t)L_170)))
		{
			goto IL_01e7;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_01e7:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean ArabicFixerTool::IsFinishingLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsFinishingLetter_m34D81454EFE842A4E5135A5BBB5A1C8493B19FD1 (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___letters0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B20_0 = 0;
	int32_t G_B22_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	{
		//         bool lettersThatCannotBeBeforeAFinishingLetter = (index == 0) ? false :
		//                 letters[index - 1] != ' '
		// //                && char.IsDigit(letters[index-1])
		// //                && char.IsLower(letters[index-1])
		// //                && char.IsUpper(letters[index-1])
		// //                && char.IsNumber(letters[index-1])
		// //                && char.IsWhiteSpace(letters[index-1])
		// //                && char.IsPunctuation(letters[index-1])
		// //                && char.IsSymbol(letters[index-1])
		// 
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.Dal
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.Thal
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.Ra2
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.Zeen
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.PersianZe
		//                 //&& letters[index - 1] != (int)IsolatedArabicLetters.AlefMaksora
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.Waw
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.Alef
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.AlefMad
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.AlefHamza
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.AlefMaksoor
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.WawHamza
		//                 && letters[index - 1] != (int)IsolatedArabicLetters.Hamza
		// 
		// 
		// 
		//                 && !char.IsPunctuation(letters[index - 1])
		//                 && !char.IsSymbol(letters[index-1])
		//                 && letters[index - 1] != '>'
		//                 && letters[index - 1] != '<';
		int32_t L_0 = ___index1;
		if (!L_0)
		{
			goto IL_00e3;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___letters0;
		int32_t L_2 = ___index1;
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)32))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___letters0;
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_8) == ((int32_t)((int32_t)65193))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___letters0;
		int32_t L_10 = ___index1;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((((int32_t)L_12) == ((int32_t)((int32_t)65195))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___letters0;
		int32_t L_14 = ___index1;
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65197))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ___letters0;
		int32_t L_18 = ___index1;
		NullCheck(L_17);
		int32_t L_19 = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		uint16_t L_20 = (uint16_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) == ((int32_t)((int32_t)65199))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = ___letters0;
		int32_t L_22 = ___index1;
		NullCheck(L_21);
		int32_t L_23 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		uint16_t L_24 = (uint16_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((((int32_t)L_24) == ((int32_t)((int32_t)64394))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = ___letters0;
		int32_t L_26 = ___index1;
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(L_26, 1));
		uint16_t L_28 = (uint16_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_28) == ((int32_t)((int32_t)65261))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = ___letters0;
		int32_t L_30 = ___index1;
		NullCheck(L_29);
		int32_t L_31 = ((int32_t)il2cpp_codegen_subtract(L_30, 1));
		uint16_t L_32 = (uint16_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((((int32_t)L_32) == ((int32_t)((int32_t)65165))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = ___letters0;
		int32_t L_34 = ___index1;
		NullCheck(L_33);
		int32_t L_35 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
		uint16_t L_36 = (uint16_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((((int32_t)L_36) == ((int32_t)((int32_t)65153))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = ___letters0;
		int32_t L_38 = ___index1;
		NullCheck(L_37);
		int32_t L_39 = ((int32_t)il2cpp_codegen_subtract(L_38, 1));
		uint16_t L_40 = (uint16_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((((int32_t)L_40) == ((int32_t)((int32_t)65155))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = ___letters0;
		int32_t L_42 = ___index1;
		NullCheck(L_41);
		int32_t L_43 = ((int32_t)il2cpp_codegen_subtract(L_42, 1));
		uint16_t L_44 = (uint16_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((((int32_t)L_44) == ((int32_t)((int32_t)65159))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_45 = ___letters0;
		int32_t L_46 = ___index1;
		NullCheck(L_45);
		int32_t L_47 = ((int32_t)il2cpp_codegen_subtract(L_46, 1));
		uint16_t L_48 = (uint16_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		if ((((int32_t)L_48) == ((int32_t)((int32_t)65157))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = ___letters0;
		int32_t L_50 = ___index1;
		NullCheck(L_49);
		int32_t L_51 = ((int32_t)il2cpp_codegen_subtract(L_50, 1));
		uint16_t L_52 = (uint16_t)(L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		if ((((int32_t)L_52) == ((int32_t)((int32_t)65152))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_53 = ___letters0;
		int32_t L_54 = ___index1;
		NullCheck(L_53);
		int32_t L_55 = ((int32_t)il2cpp_codegen_subtract(L_54, 1));
		uint16_t L_56 = (uint16_t)(L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_55));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_56, NULL);
		if (L_57)
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = ___letters0;
		int32_t L_59 = ___index1;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		uint16_t L_61 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_61, NULL);
		if (L_62)
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_63 = ___letters0;
		int32_t L_64 = ___index1;
		NullCheck(L_63);
		int32_t L_65 = ((int32_t)il2cpp_codegen_subtract(L_64, 1));
		uint16_t L_66 = (uint16_t)(L_63)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		if ((((int32_t)L_66) == ((int32_t)((int32_t)62))))
		{
			goto IL_00e0;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_67 = ___letters0;
		int32_t L_68 = ___index1;
		NullCheck(L_67);
		int32_t L_69 = ((int32_t)il2cpp_codegen_subtract(L_68, 1));
		uint16_t L_70 = (uint16_t)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		G_B20_0 = ((((int32_t)((((int32_t)L_70) == ((int32_t)((int32_t)60)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e4;
	}

IL_00e0:
	{
		G_B20_0 = 0;
		goto IL_00e4;
	}

IL_00e3:
	{
		G_B20_0 = 0;
	}

IL_00e4:
	{
		// bool lettersThatCannotBeFinishingLetters = letters[index] != ' ' && letters[index] != (int)IsolatedArabicLetters.Hamza;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_71 = ___letters0;
		int32_t L_72 = ___index1;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		uint16_t L_74 = (uint16_t)(L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		G_B21_0 = G_B20_0;
		if ((((int32_t)L_74) == ((int32_t)((int32_t)32))))
		{
			G_B22_0 = G_B20_0;
			goto IL_00fa;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_75 = ___letters0;
		int32_t L_76 = ___index1;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		uint16_t L_78 = (uint16_t)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		G_B23_0 = ((((int32_t)((((int32_t)L_78) == ((int32_t)((int32_t)65152)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B23_1 = G_B21_0;
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B23_0 = 0;
		G_B23_1 = G_B22_0;
	}

IL_00fb:
	{
		V_0 = (bool)G_B23_0;
		// if(lettersThatCannotBeBeforeAFinishingLetter && lettersThatCannotBeFinishingLetters)
		bool L_79 = V_0;
		if (!((int32_t)(G_B23_1&(int32_t)L_79)))
		{
			goto IL_0102;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_0102:
	{
		// return false;
		return (bool)0;
	}
}
// System.Boolean ArabicFixerTool::IsMiddleLetter(System.Char[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArabicFixerTool_IsMiddleLetter_m9610EB7249C81792676BF357316EA65849F1942F (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___letters0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B15_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B44_0 = 0;
	{
		// bool lettersThatCannotBeMiddleLetters = (index == 0) ? false :
		//     letters[index] != (int)IsolatedArabicLetters.Alef
		//         && letters[index] != (int)IsolatedArabicLetters.Dal
		//         && letters[index] != (int)IsolatedArabicLetters.Thal
		//         && letters[index] != (int)IsolatedArabicLetters.Ra2
		//         && letters[index] != (int)IsolatedArabicLetters.Zeen
		//         && letters[index] != (int)IsolatedArabicLetters.PersianZe
		//         //&& letters[index] != (int)IsolatedArabicLetters.AlefMaksora
		//         && letters[index] != (int)IsolatedArabicLetters.Waw
		//         && letters[index] != (int)IsolatedArabicLetters.AlefMad
		//         && letters[index] != (int)IsolatedArabicLetters.AlefHamza
		//         && letters[index] != (int)IsolatedArabicLetters.AlefMaksoor
		//         && letters[index] != (int)IsolatedArabicLetters.WawHamza
		//         && letters[index] != (int)IsolatedArabicLetters.Hamza;
		int32_t L_0 = ___index1;
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = ___letters0;
		int32_t L_2 = ___index1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint16_t L_4 = (uint16_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((((int32_t)L_4) == ((int32_t)((int32_t)65165))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = ___letters0;
		int32_t L_6 = ___index1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint16_t L_8 = (uint16_t)(L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((((int32_t)L_8) == ((int32_t)((int32_t)65193))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = ___letters0;
		int32_t L_10 = ___index1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		if ((((int32_t)L_12) == ((int32_t)((int32_t)65195))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = ___letters0;
		int32_t L_14 = ___index1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		uint16_t L_16 = (uint16_t)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65197))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_17 = ___letters0;
		int32_t L_18 = ___index1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		uint16_t L_20 = (uint16_t)(L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		if ((((int32_t)L_20) == ((int32_t)((int32_t)65199))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = ___letters0;
		int32_t L_22 = ___index1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		uint16_t L_24 = (uint16_t)(L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if ((((int32_t)L_24) == ((int32_t)((int32_t)64394))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = ___letters0;
		int32_t L_26 = ___index1;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		uint16_t L_28 = (uint16_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_28) == ((int32_t)((int32_t)65261))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = ___letters0;
		int32_t L_30 = ___index1;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		uint16_t L_32 = (uint16_t)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if ((((int32_t)L_32) == ((int32_t)((int32_t)65153))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = ___letters0;
		int32_t L_34 = ___index1;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		uint16_t L_36 = (uint16_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		if ((((int32_t)L_36) == ((int32_t)((int32_t)65155))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_37 = ___letters0;
		int32_t L_38 = ___index1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		uint16_t L_40 = (uint16_t)(L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		if ((((int32_t)L_40) == ((int32_t)((int32_t)65159))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_41 = ___letters0;
		int32_t L_42 = ___index1;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		uint16_t L_44 = (uint16_t)(L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((((int32_t)L_44) == ((int32_t)((int32_t)65157))))
		{
			goto IL_0083;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_45 = ___letters0;
		int32_t L_46 = ___index1;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		uint16_t L_48 = (uint16_t)(L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		G_B15_0 = ((((int32_t)((((int32_t)L_48) == ((int32_t)((int32_t)65152)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0087;
	}

IL_0083:
	{
		G_B15_0 = 0;
		goto IL_0087;
	}

IL_0086:
	{
		G_B15_0 = 0;
	}

IL_0087:
	{
		V_0 = (bool)G_B15_0;
		// bool lettersThatCannotBeBeforeMiddleCharacters = (index == 0) ? false :
		//         letters[index - 1] != (int)IsolatedArabicLetters.Alef
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Dal
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Thal
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Ra2
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Zeen
		//         && letters[index - 1] != (int)IsolatedArabicLetters.PersianZe
		//         //&& letters[index - 1] != (int)IsolatedArabicLetters.AlefMaksora
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Waw
		//         && letters[index - 1] != (int)IsolatedArabicLetters.AlefMad
		//         && letters[index - 1] != (int)IsolatedArabicLetters.AlefHamza
		//         && letters[index - 1] != (int)IsolatedArabicLetters.AlefMaksoor
		//         && letters[index - 1] != (int)IsolatedArabicLetters.WawHamza
		//         && letters[index - 1] != (int)IsolatedArabicLetters.Hamza
		//         && !char.IsPunctuation(letters[index - 1])
		//         && letters[index - 1] != '>'
		//         && letters[index - 1] != '<'
		//         && letters[index - 1] != ' '
		//         && letters[index - 1] != '*';
		int32_t L_49 = ___index1;
		if (!L_49)
		{
			goto IL_0165;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_50 = ___letters0;
		int32_t L_51 = ___index1;
		NullCheck(L_50);
		int32_t L_52 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
		uint16_t L_53 = (uint16_t)(L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		if ((((int32_t)L_53) == ((int32_t)((int32_t)65165))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_54 = ___letters0;
		int32_t L_55 = ___index1;
		NullCheck(L_54);
		int32_t L_56 = ((int32_t)il2cpp_codegen_subtract(L_55, 1));
		uint16_t L_57 = (uint16_t)(L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65193))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = ___letters0;
		int32_t L_59 = ___index1;
		NullCheck(L_58);
		int32_t L_60 = ((int32_t)il2cpp_codegen_subtract(L_59, 1));
		uint16_t L_61 = (uint16_t)(L_58)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		if ((((int32_t)L_61) == ((int32_t)((int32_t)65195))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = ___letters0;
		int32_t L_63 = ___index1;
		NullCheck(L_62);
		int32_t L_64 = ((int32_t)il2cpp_codegen_subtract(L_63, 1));
		uint16_t L_65 = (uint16_t)(L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		if ((((int32_t)L_65) == ((int32_t)((int32_t)65197))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_66 = ___letters0;
		int32_t L_67 = ___index1;
		NullCheck(L_66);
		int32_t L_68 = ((int32_t)il2cpp_codegen_subtract(L_67, 1));
		uint16_t L_69 = (uint16_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		if ((((int32_t)L_69) == ((int32_t)((int32_t)65199))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = ___letters0;
		int32_t L_71 = ___index1;
		NullCheck(L_70);
		int32_t L_72 = ((int32_t)il2cpp_codegen_subtract(L_71, 1));
		uint16_t L_73 = (uint16_t)(L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		if ((((int32_t)L_73) == ((int32_t)((int32_t)64394))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_74 = ___letters0;
		int32_t L_75 = ___index1;
		NullCheck(L_74);
		int32_t L_76 = ((int32_t)il2cpp_codegen_subtract(L_75, 1));
		uint16_t L_77 = (uint16_t)(L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		if ((((int32_t)L_77) == ((int32_t)((int32_t)65261))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_78 = ___letters0;
		int32_t L_79 = ___index1;
		NullCheck(L_78);
		int32_t L_80 = ((int32_t)il2cpp_codegen_subtract(L_79, 1));
		uint16_t L_81 = (uint16_t)(L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		if ((((int32_t)L_81) == ((int32_t)((int32_t)65153))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_82 = ___letters0;
		int32_t L_83 = ___index1;
		NullCheck(L_82);
		int32_t L_84 = ((int32_t)il2cpp_codegen_subtract(L_83, 1));
		uint16_t L_85 = (uint16_t)(L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		if ((((int32_t)L_85) == ((int32_t)((int32_t)65155))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_86 = ___letters0;
		int32_t L_87 = ___index1;
		NullCheck(L_86);
		int32_t L_88 = ((int32_t)il2cpp_codegen_subtract(L_87, 1));
		uint16_t L_89 = (uint16_t)(L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_88));
		if ((((int32_t)L_89) == ((int32_t)((int32_t)65159))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_90 = ___letters0;
		int32_t L_91 = ___index1;
		NullCheck(L_90);
		int32_t L_92 = ((int32_t)il2cpp_codegen_subtract(L_91, 1));
		uint16_t L_93 = (uint16_t)(L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		if ((((int32_t)L_93) == ((int32_t)((int32_t)65157))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_94 = ___letters0;
		int32_t L_95 = ___index1;
		NullCheck(L_94);
		int32_t L_96 = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		uint16_t L_97 = (uint16_t)(L_94)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		if ((((int32_t)L_97) == ((int32_t)((int32_t)65152))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_98 = ___letters0;
		int32_t L_99 = ___index1;
		NullCheck(L_98);
		int32_t L_100 = ((int32_t)il2cpp_codegen_subtract(L_99, 1));
		uint16_t L_101 = (uint16_t)(L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_102;
		L_102 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_101, NULL);
		if (L_102)
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_103 = ___letters0;
		int32_t L_104 = ___index1;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_subtract(L_104, 1));
		uint16_t L_106 = (uint16_t)(L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		if ((((int32_t)L_106) == ((int32_t)((int32_t)62))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_107 = ___letters0;
		int32_t L_108 = ___index1;
		NullCheck(L_107);
		int32_t L_109 = ((int32_t)il2cpp_codegen_subtract(L_108, 1));
		uint16_t L_110 = (uint16_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		if ((((int32_t)L_110) == ((int32_t)((int32_t)60))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_111 = ___letters0;
		int32_t L_112 = ___index1;
		NullCheck(L_111);
		int32_t L_113 = ((int32_t)il2cpp_codegen_subtract(L_112, 1));
		uint16_t L_114 = (uint16_t)(L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		if ((((int32_t)L_114) == ((int32_t)((int32_t)32))))
		{
			goto IL_0162;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_115 = ___letters0;
		int32_t L_116 = ___index1;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_subtract(L_116, 1));
		uint16_t L_118 = (uint16_t)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		G_B35_0 = ((((int32_t)((((int32_t)L_118) == ((int32_t)((int32_t)42)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0166;
	}

IL_0162:
	{
		G_B35_0 = 0;
		goto IL_0166;
	}

IL_0165:
	{
		G_B35_0 = 0;
	}

IL_0166:
	{
		V_1 = (bool)G_B35_0;
		// bool lettersThatCannotBeAfterMiddleCharacters = (index >= letters.Length - 1) ? false :
		//     letters[index + 1] != ' '
		//         && letters[index + 1] != '\r'
		//         && letters[index + 1] != (int)IsolatedArabicLetters.Hamza
		//         && !char.IsNumber(letters[index + 1])
		//         && !char.IsSymbol(letters[index + 1])
		//         && !char.IsPunctuation(letters[index + 1]);
		int32_t L_119 = ___index1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_120 = ___letters0;
		NullCheck(L_120);
		if ((((int32_t)L_119) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_120)->max_length)), 1)))))
		{
			goto IL_01b7;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_121 = ___letters0;
		int32_t L_122 = ___index1;
		NullCheck(L_121);
		int32_t L_123 = ((int32_t)il2cpp_codegen_add(L_122, 1));
		uint16_t L_124 = (uint16_t)(L_121)->GetAt(static_cast<il2cpp_array_size_t>(L_123));
		if ((((int32_t)L_124) == ((int32_t)((int32_t)32))))
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_125 = ___letters0;
		int32_t L_126 = ___index1;
		NullCheck(L_125);
		int32_t L_127 = ((int32_t)il2cpp_codegen_add(L_126, 1));
		uint16_t L_128 = (uint16_t)(L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		if ((((int32_t)L_128) == ((int32_t)((int32_t)13))))
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_129 = ___letters0;
		int32_t L_130 = ___index1;
		NullCheck(L_129);
		int32_t L_131 = ((int32_t)il2cpp_codegen_add(L_130, 1));
		uint16_t L_132 = (uint16_t)(L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		if ((((int32_t)L_132) == ((int32_t)((int32_t)65152))))
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_133 = ___letters0;
		int32_t L_134 = ___index1;
		NullCheck(L_133);
		int32_t L_135 = ((int32_t)il2cpp_codegen_add(L_134, 1));
		uint16_t L_136 = (uint16_t)(L_133)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_137;
		L_137 = Char_IsNumber_m9C6A6326BEF8A833F2FC7BA93F5E211D9423C5F3(L_136, NULL);
		if (L_137)
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_138 = ___letters0;
		int32_t L_139 = ___index1;
		NullCheck(L_138);
		int32_t L_140 = ((int32_t)il2cpp_codegen_add(L_139, 1));
		uint16_t L_141 = (uint16_t)(L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_140));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_142;
		L_142 = Char_IsSymbol_m8F3AA49AAF4615B3BFD614A083CD6530CD35DF2F(L_141, NULL);
		if (L_142)
		{
			goto IL_01b4;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_143 = ___letters0;
		int32_t L_144 = ___index1;
		NullCheck(L_143);
		int32_t L_145 = ((int32_t)il2cpp_codegen_add(L_144, 1));
		uint16_t L_146 = (uint16_t)(L_143)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_147;
		L_147 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_146, NULL);
		G_B44_0 = ((((int32_t)L_147) == ((int32_t)0))? 1 : 0);
		goto IL_01b8;
	}

IL_01b4:
	{
		G_B44_0 = 0;
		goto IL_01b8;
	}

IL_01b7:
	{
		G_B44_0 = 0;
	}

IL_01b8:
	{
		// if(lettersThatCannotBeAfterMiddleCharacters && lettersThatCannotBeBeforeMiddleCharacters && lettersThatCannotBeMiddleLetters)
		bool L_148 = V_1;
		bool L_149 = V_0;
		if (!((int32_t)(((int32_t)(G_B44_0&(int32_t)L_148))&(int32_t)L_149)))
		{
			goto IL_01d7;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// if (char.IsPunctuation(letters[index + 1]))
			CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_150 = ___letters0;
			int32_t L_151 = ___index1;
			NullCheck(L_150);
			int32_t L_152 = ((int32_t)il2cpp_codegen_add(L_151, 1));
			uint16_t L_153 = (uint16_t)(L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
			il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
			bool L_154;
			L_154 = Char_IsPunctuation_m619E42D942E22C9BA1DDB8E704BECA546C376473(L_153, NULL);
			if (!L_154)
			{
				goto IL_01ce_1;
			}
		}
		{
			// return false;
			V_2 = (bool)0;
			goto IL_01d9;
		}

IL_01ce_1:
		{
			// return true;
			V_2 = (bool)1;
			goto IL_01d9;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01d2;
		}
		throw e;
	}

CATCH_01d2:
	{// begin catch(System.Object)
		// catch
		// return false;
		V_2 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01d9;
	}// end catch (depth: 1)

IL_01d7:
	{
		// return false;
		return (bool)0;
	}

IL_01d9:
	{
		// }
		bool L_155 = V_2;
		return L_155;
	}
}
// System.Void ArabicFixerTool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool__ctor_mE49F25A33FB00659A30AFF076FA341CC0BEE1597 (ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void ArabicFixerTool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixerTool__cctor_mECBB81AC0146B9264BC45BA21FC0F9DCB97D9A6B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static bool showTashkeel = true;
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___showTashkeel_0 = (bool)1;
		// internal static bool combineTashkeel = true;
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1 = (bool)1;
		// internal static bool useHinduNumbers = false;
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___useHinduNumbers_2 = (bool)0;
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
// System.Void FixArabic3DText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixArabic3DText_Start_mDC649A542CECC5D7BF2F2DE899F12F04A3188DA9 (FixArabic3DText_t641D8A36CD5A21EDDFBC367D24C1520A49C89199* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// TextMesh textMesh = gameObject.GetComponent<TextMesh>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_1;
		L_1 = GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16(L_0, GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		// string fixedText = ArabicFixer.Fix(textMesh.text, showTashkeel, useHinduNumbers);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = TextMesh_get_text_mB3E900AED17390DE50DFC984428BC29EB1CA60A2(L_1, NULL);
		bool L_3 = __this->___showTashkeel_4;
		bool L_4 = __this->___useHinduNumbers_5;
		String_t* L_5;
		L_5 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(L_2, L_3, L_4, NULL);
		V_0 = L_5;
		// gameObject.GetComponent<TextMesh>().text = fixedText;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_6);
		TextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8* L_7;
		L_7 = GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16(L_6, GameObject_GetComponent_TisTextMesh_t7E1981C7B03E50D5CA5A3AD5B0D9BB0AB6EE91F8_mA4D0E031613166DF4F272D522F45B357243C2D16_RuntimeMethod_var);
		String_t* L_8 = V_0;
		NullCheck(L_7);
		TextMesh_set_text_mDF79D39638ED82797D0B0B3BB9E6B10712F8EA9E(L_7, L_8, NULL);
		// Debug.Log(fixedText);
		String_t* L_9 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_9, NULL);
		// }
		return;
	}
}
// System.Void FixArabic3DText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixArabic3DText__ctor_mE4B892B4A1B1AD92C60FD79DC157E86DB546A973 (FixArabic3DText_t641D8A36CD5A21EDDFBC367D24C1520A49C89199* __this, const RuntimeMethod* method) 
{
	{
		// public bool showTashkeel = true;
		__this->___showTashkeel_4 = (bool)1;
		// public bool useHinduNumbers = true;
		__this->___useHinduNumbers_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SetArabicText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetArabicText_Start_m846377FF2EAF3ED89314B4D1DBB5FE9C86E6BAA8 (SetArabicText_tAD09614C48732BC35B8C526D38F9234CF99BFE63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98E2F9660B9D89F61CAA2CB3C1D5670F78E1F2F0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Text>().text = ArabicFixer.Fix(text);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_2 = __this->___text_4;
		String_t* L_3;
		L_3 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_2, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// Debug.Log(ArabicFixer.Fix("?? ???? ??? ??????? ???? ?????", ShowTashkeel, UseHinduNumbers));
		bool L_4 = __this->___ShowTashkeel_5;
		bool L_5 = __this->___UseHinduNumbers_6;
		String_t* L_6;
		L_6 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(_stringLiteral98E2F9660B9D89F61CAA2CB3C1D5670F78E1F2F0, L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_6, NULL);
		// }
		return;
	}
}
// System.Void SetArabicText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetArabicText__ctor_mE80B9ED78551015909572DCA45874CA5536FAD51 (SetArabicText_tAD09614C48732BC35B8C526D38F9234CF99BFE63* __this, const RuntimeMethod* method) 
{
	{
		// public bool UseHinduNumbers = true;
		__this->___UseHinduNumbers_6 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SetArabicTextExample::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetArabicTextExample_Start_mF5BDB91178BFB35295B3A50F3D32454BACE27EC9 (SetArabicTextExample_tCE6C4FFEB444346DEAE0C54776F73EB80419D0B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF4310B12FE825EDACB73B9EAE95C8C262792A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC080800A3AA41BBFC76C0F45390DCA442A0D9DDA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.GetComponent<Text>().text = "This sentence (wrong display):\n" + text +
		//     "\n\nWill appear correctly as:\n" + ArabicFixer.Fix(text, ShowTashkeel, UseHinduNumbers);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		String_t* L_2 = __this->___text_4;
		String_t* L_3 = __this->___text_4;
		bool L_4 = __this->___ShowTashkeel_5;
		bool L_5 = __this->___UseHinduNumbers_6;
		String_t* L_6;
		L_6 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(L_3, L_4, L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral1CF4310B12FE825EDACB73B9EAE95C8C262792A5, L_2, _stringLiteralC080800A3AA41BBFC76C0F45390DCA442A0D9DDA, L_6, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_7);
		// }
		return;
	}
}
// System.Void SetArabicTextExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetArabicTextExample_Update_m056E6E3537D424CF52976F59ED4ED670B6F84DAF (SetArabicTextExample_tCE6C4FFEB444346DEAE0C54776F73EB80419D0B1* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SetArabicTextExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetArabicTextExample__ctor_mF6582EE7A2DBE55909FAC9B0EA4B6C899D7447E6 (SetArabicTextExample_tCE6C4FFEB444346DEAE0C54776F73EB80419D0B1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ArabicSupportTester::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicSupportTester_Start_m6626EB254D0454C275568740C17B3063D770E470 (ArabicSupportTester_tD15D817694B99F697C75D1F68F905E6523AEF85F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// ExpectedTexts = FindObjectsOfType(typeof(ExpectedFixedText)) as ExpectedFixedText[];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_2;
		L_2 = Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A(L_1, NULL);
		__this->___ExpectedTexts_4 = ((ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464*)IsInst((RuntimeObject*)L_2, ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ExpectedTexts_4), (void*)((ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464*)IsInst((RuntimeObject*)L_2, ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464_il2cpp_TypeInfo_var)));
		// foreach (var expectedText in ExpectedTexts)
		ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* L_3 = __this->___ExpectedTexts_4;
		V_0 = L_3;
		V_1 = 0;
		goto IL_0031;
	}

IL_0025:
	{
		// foreach (var expectedText in ExpectedTexts)
		ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		// expectedText.Fix();
		NullCheck(L_7);
		ExpectedFixedText_Fix_mEB1489C852AF322CC8F11E7AA83AFC8DB59A6D3F(L_7, NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0031:
	{
		// foreach (var expectedText in ExpectedTexts)
		int32_t L_9 = V_1;
		ExpectedFixedTextU5BU5D_tCF64F4D8875ACE0336BEC350C8D10D8496A04464* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ArabicSupportTester::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicSupportTester__ctor_m78E87DD94639BC95149E36521AFD7E9498A0A524 (ArabicSupportTester_tD15D817694B99F697C75D1F68F905E6523AEF85F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String ExpectedFixedText::get_Fixed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ExpectedFixedText_get_Fixed_m96969319F2315D194C226BBB69E2E9D0C186F8F5 (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, const RuntimeMethod* method) 
{
	{
		// public string Fixed { get; private set; }
		String_t* L_0 = __this->___U3CFixedU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void ExpectedFixedText::set_Fixed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpectedFixedText_set_Fixed_m3E83944782EDF806F7F31D8D5634CAB00AF28823 (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Fixed { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CFixedU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFixedU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void ExpectedFixedText::Fix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpectedFixedText_Fix_mEB1489C852AF322CC8F11E7AA83AFC8DB59A6D3F (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, const RuntimeMethod* method) 
{
	{
		// Fixed = ArabicFixer.Fix(Unfixed, ShowTashkeel, UseHinduNumbers);
		String_t* L_0 = __this->___Unfixed_4;
		bool L_1 = __this->___ShowTashkeel_7;
		bool L_2 = __this->___UseHinduNumbers_8;
		String_t* L_3;
		L_3 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(L_0, L_1, L_2, NULL);
		ExpectedFixedText_set_Fixed_m3E83944782EDF806F7F31D8D5634CAB00AF28823_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void ExpectedFixedText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpectedFixedText__ctor_m15BD37C6A07DAD77FEE27CA5EB83846ACF64AAF2 (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, const RuntimeMethod* method) 
{
	{
		// public bool UseHinduNumbers = true;
		__this->___UseHinduNumbers_8 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AutoPlacementOfObjectInPlane::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoPlacementOfObjectInPlane_Start_mEEFFEB3E88F9A860408579BD1C702C5C73719575 (AutoPlacementOfObjectInPlane_tEAC3C0C6774B2EF2DFF017258422B75F551070C5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AutoPlacementOfObjectInPlane::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoPlacementOfObjectInPlane_Update_m420F6B795F592F38A2669B5EB1D3EEEF5093B1FF (AutoPlacementOfObjectInPlane_tEAC3C0C6774B2EF2DFF017258422B75F551070C5* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AutoPlacementOfObjectInPlane::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoPlacementOfObjectInPlane__ctor_mDDD3C0E1FDD6442C4625CFBF176BD85EC67A08E6 (AutoPlacementOfObjectInPlane_tEAC3C0C6774B2EF2DFF017258422B75F551070C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.AddComponent<UnityMessageManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_1;
		L_1 = GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E(L_0, GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Rotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Start_mD322E77A3CF2BEF28C4DF71D3F529107F511B1FB (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		// RotateAmount = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___RotateAmount_4 = L_0;
		// }
		return;
	}
}
// System.Void Rotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_Update_m73D585515036D9B7AAD8336BFB8567283CE4C7E7 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D27829CAE2E3F203B547B0861A45BDAE1B6D3EB);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Touch_t03E51455ED508492B3F278903A0114FA0E87B417 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// gameObject.transform.Rotate(RotateAmount * Time.deltaTime * 10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___RotateAmount_4;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_2, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, (10.0f), NULL);
		NullCheck(L_1);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_5, NULL);
		// for (int i = 0; i < Input.touchCount; ++i)
		V_0 = 0;
		goto IL_0093;
	}

IL_002e:
	{
		// if (Input.GetTouch(i).phase.Equals(TouchPhase.Began))
		int32_t L_6 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_7;
		L_7 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_6, NULL);
		V_1 = L_7;
		int32_t L_8;
		L_8 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0((&V_1), NULL);
		V_2 = L_8;
		int32_t L_9 = 0;
		RuntimeObject* L_10 = Box(TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var, &L_9);
		Il2CppFakeBox<int32_t> L_11(TouchPhase_t54E0A1AF80465997849420A72317B733E1D49A9E_il2cpp_TypeInfo_var, (&V_2));
		bool L_12;
		L_12 = Enum_Equals_m96B1058BA6312E23F31A5FBF594E96EB692EAF4E((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_11), L_10, NULL);
		if (!L_12)
		{
			goto IL_008f;
		}
	}
	{
		// var hit = new RaycastHit();
		il2cpp_codegen_initobj((&V_3), sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		int32_t L_14 = V_0;
		Touch_t03E51455ED508492B3F278903A0114FA0E87B417 L_15;
		L_15 = Input_GetTouch_m75D99FE801A94279874FA8DC6B6ADAD35F5123B1(L_14, NULL);
		V_1 = L_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Touch_get_position_m41B9EB0F3F3E1BE98CEB388253A9E31979CB964A((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_16, NULL);
		NullCheck(L_13);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_18;
		L_18 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_13, L_17, NULL);
		// if (Physics.Raycast(ray, out hit))
		bool L_19;
		L_19 = Physics_Raycast_mCAC9F02A1AAB49E16B384EBC8318E2DF30F4B0E5(L_18, (&V_3), NULL);
		if (!L_19)
		{
			goto IL_008f;
		}
	}
	{
		// UnityMessageManager.Instance.SendMessageToFlutter("The cube feels touched.");
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_20;
		L_20 = UnityMessageManager_get_Instance_m47C1FACD4FB4D64E2F0612ECDF745A603DE63997_inline(NULL);
		NullCheck(L_20);
		UnityMessageManager_SendMessageToFlutter_m58436B596EA9228CC2CBE497DFD03F58DD589968(L_20, _stringLiteral9D27829CAE2E3F203B547B0861A45BDAE1B6D3EB, NULL);
	}

IL_008f:
	{
		// for (int i = 0; i < Input.touchCount; ++i)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_0093:
	{
		// for (int i = 0; i < Input.touchCount; ++i)
		int32_t L_22 = V_0;
		int32_t L_23;
		L_23 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_002e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Rotate::SetRotationSpeed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_SetRotationSpeed_mD754DB628A79A7B2ADAED25DE732A29E7548F2F1 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float value = float.Parse(message);
		String_t* L_0 = ___message0;
		float L_1;
		L_1 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_0, NULL);
		V_0 = L_1;
		// RotateAmount = new Vector3(value, value, value);
		float L_2 = V_0;
		float L_3 = V_0;
		float L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->___RotateAmount_4 = L_5;
		// }
		return;
	}
}
// System.Void Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_m0EE5CC8EB699542BFC438DC3D547D39E442E9EE4 (Rotate_t3280DFA30ADF04B60D2B142844F3B2364A472EAE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void SceneLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Start_mB9AA9E8ADCE59F893E3EF8E891ED5E1F3AB80DA0 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Update_m1F381D68B1B1F69A0F9A5876813BB7D437E3A713 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void SceneLoader::loadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_loadScene_m534680A0F0E8842FE2BBC5C1087A6831B5621731 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, int32_t ___idx0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD945C749A458FF6A175D75E12A5F6D40E433D7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("scene = " + idx);
		String_t* L_0;
		L_0 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___idx0), NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBDD945C749A458FF6A175D75E12A5F6D40E433D7, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// SceneManager.LoadScene(idx, LoadSceneMode.Single);
		int32_t L_2 = ___idx0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mC4BD32145437F282CAA13E1A8685001061E79D98(L_2, 0, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::messengerFlutter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_messengerFlutter_m266F7C43EEEBAF3CD548AD5C15577DD5BBA2DDF5 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7822DC3F47B87491C99A8723A4A41B27E9B9D6EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityMessageManager.Instance.SendMessageToFlutter("Hey man");
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0;
		L_0 = UnityMessageManager_get_Instance_m47C1FACD4FB4D64E2F0612ECDF745A603DE63997_inline(NULL);
		NullCheck(L_0);
		UnityMessageManager_SendMessageToFlutter_m58436B596EA9228CC2CBE497DFD03F58DD589968(L_0, _stringLiteral7822DC3F47B87491C99A8723A4A41B27E9B9D6EE, NULL);
		// }
		return;
	}
}
// System.Void SceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m2248766DF38AF07562AD31501C7275B8DF1B7D29 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// MessageHandler MessageHandler::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* MessageHandler_Deserialize_mD700ECE601B4BCF56FA48BF5F3006E2F12EFAE4F (String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	{
		// JObject m = JObject.Parse(message);
		String_t* L_0 = ___message0;
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_1;
		L_1 = JObject_Parse_mBC884661DD2708BA92BCE45E8C104924542A2D43(L_0, NULL);
		V_0 = L_1;
		// MessageHandler handler = new MessageHandler(
		//     m.GetValue("id").Value<int>(),
		//     m.GetValue("seq").Value<string>(),
		//     m.GetValue("name").Value<string>(),
		//     m.GetValue("data")
		// );
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_2 = V_0;
		NullCheck(L_2);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3;
		L_3 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_2, _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694, NULL);
		int32_t L_4;
		L_4 = Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8(L_3, Extensions_Value_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCC05EA9B86407E7E62E482BFF27A5F1E89A9AD8_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_5 = V_0;
		NullCheck(L_5);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_6;
		L_6 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_5, _stringLiteral24C049E512CD1B48036BD162FF63700A57CA3469, NULL);
		String_t* L_7;
		L_7 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_6, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_8 = V_0;
		NullCheck(L_8);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_9;
		L_9 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_8, _stringLiteralCE18B047107AA23D1AA9B2ED32D316148E02655F, NULL);
		String_t* L_10;
		L_10 = Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B(L_9, Extensions_Value_TisString_t_m77FB4D5124BB6107E421B95A105E6B7890F0C37B_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_11 = V_0;
		NullCheck(L_11);
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_12;
		L_12 = JObject_GetValue_m4F5588B32404E992D225DDF4DBB7B5B033A254A2(L_11, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469, NULL);
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_13 = (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*)il2cpp_codegen_object_new(MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MessageHandler__ctor_m6D62D4CD1FDC1ACBECA277EC939F7BF1A5C0EE0F(L_13, L_4, L_7, L_10, L_12, NULL);
		// return handler;
		return L_13;
	}
}
// System.Void MessageHandler::.ctor(System.Int32,System.String,System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler__ctor_m6D62D4CD1FDC1ACBECA277EC939F7BF1A5C0EE0F (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, int32_t ___id0, String_t* ___seq1, String_t* ___name2, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___data3, const RuntimeMethod* method) 
{
	{
		// public MessageHandler(int id, string seq, string name, JToken data)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.id = id;
		int32_t L_0 = ___id0;
		__this->___id_0 = L_0;
		// this.seq = seq;
		String_t* L_1 = ___seq1;
		__this->___seq_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___seq_1), (void*)L_1);
		// this.name = name;
		String_t* L_2 = ___name2;
		__this->___name_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___name_2), (void*)L_2);
		// this.data = data;
		JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* L_3 = ___data3;
		__this->___data_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___data_3), (void*)L_3);
		// }
		return;
	}
}
// System.Void MessageHandler::send(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandler_send_m3C7C735E5E60707CFF5545CB117B748643ABBA53 (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* __this, RuntimeObject* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_0 = NULL;
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = "end",
		//     name = name,
		//     data = data
		// });
		int32_t L_0 = __this->___id_0;
		String_t* L_1 = __this->___name_2;
		RuntimeObject* L_2 = ___data0;
		U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454* L_3 = (U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t4EE67C7C14929546FBC41AC6C44494555CA83454_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200(L_3, L_0, _stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_1, L_2, U3CU3Ef__AnonymousType0_4__ctor_mA9CA12BE8F40DB9F200816875B785E4FC23A2200_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_4;
		L_4 = JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD(L_3, NULL);
		V_0 = L_4;
		// UnityMessageManager.Instance.SendMessageToFlutter(UnityMessageManager.MessagePrefix + o.ToString());
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_5;
		L_5 = UnityMessageManager_get_Instance_m47C1FACD4FB4D64E2F0612ECDF745A603DE63997_inline(NULL);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_7, NULL);
		NullCheck(L_5);
		UnityMessageManager_SendMessageToFlutter_m58436B596EA9228CC2CBE497DFD03F58DD589968(L_5, L_8, NULL);
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
// System.Void UnityMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessage__ctor_mB0E205137A7DD4D3E27548C36A0749055E1F64CB (UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Int32 UnityMessageManager::generateId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityMessageManager_generateId_mAC837086CD47AA4AC316DD11E28926B8747AA30C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ID = ID + 1;
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___ID_5;
		((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___ID_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// return ID;
		int32_t L_1 = ((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___ID_5;
		return L_1;
	}
}
// UnityMessageManager UnityMessageManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* UnityMessageManager_get_Instance_m47C1FACD4FB4D64E2F0612ECDF745A603DE63997 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMessageManager Instance { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0 = ((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityMessageManager::set_Instance(UnityMessageManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_set_Instance_m00B42B2CAC4061379FC777409C11067C030B832B (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMessageManager Instance { get; private set; }
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.Void UnityMessageManager::add_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnMessage_m8842E4D444AF900692199658BFE2CB4088DF9E31 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_0 = NULL;
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_1 = NULL;
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_2 = NULL;
	{
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_2 = V_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D** L_5 = (&__this->___OnMessage_7);
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_6 = V_2;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_7 = V_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_9 = V_0;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)L_9) == ((RuntimeObject*)(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnMessage(UnityMessageManager/MessageDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnMessage_m979E48B4644FB584C09CB452AC98F9FD83FD02A0 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_0 = NULL;
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_1 = NULL;
	MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* V_2 = NULL;
	{
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_0 = __this->___OnMessage_7;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_1 = V_0;
		V_1 = L_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_2 = V_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)CastclassSealed((RuntimeObject*)L_4, MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D_il2cpp_TypeInfo_var));
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D** L_5 = (&__this->___OnMessage_7);
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_6 = V_2;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_7 = V_1;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_9 = V_0;
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)L_9) == ((RuntimeObject*)(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::add_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_add_OnFlutterMessage_m67E181A3FAC7FBFC2F52668FB5B26AFD5ED2D8F9 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_0 = NULL;
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_1 = NULL;
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_2 = NULL;
	{
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_0 = __this->___OnFlutterMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_2 = V_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8** L_5 = (&__this->___OnFlutterMessage_8);
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_6 = V_2;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_7 = V_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_9 = V_0;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::remove_OnFlutterMessage(UnityMessageManager/MessageHandlerDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_remove_OnFlutterMessage_m0F6986CFEE7B22A3AFAA04A315CFA296CE393B9E (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_0 = NULL;
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_1 = NULL;
	MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* V_2 = NULL;
	{
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_0 = __this->___OnFlutterMessage_8;
		V_0 = L_0;
	}

IL_0007:
	{
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_1 = V_0;
		V_1 = L_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_2 = V_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)CastclassSealed((RuntimeObject*)L_4, MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8_il2cpp_TypeInfo_var));
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8** L_5 = (&__this->___OnFlutterMessage_8);
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_6 = V_2;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_7 = V_1;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_8;
		L_8 = InterlockedCompareExchangeImpl<MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*>(L_5, L_6, L_7);
		V_0 = L_8;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_9 = V_0;
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_10 = V_1;
		if ((!(((RuntimeObject*)(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)L_9) == ((RuntimeObject*)(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityMessageManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__cctor_m8CC894AF0FFD0AD5679909D465B73F29ABE4195F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2D6DC29DE3D40BE0F06C25BD0CEB6AFDEAF1C4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject go = new GameObject("UnityMessageManager");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralE2D6DC29DE3D40BE0F06C25BD0CEB6AFDEAF1C4C, NULL);
		// DontDestroyOnLoad(go);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
		// Instance = go.AddComponent<UnityMessageManager>();
		NullCheck(L_1);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_2;
		L_2 = GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E(L_1, GameObject_AddComponent_TisUnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_mA22D83CA4AD22580593E79FD1964DBD57AA7671E_RuntimeMethod_var);
		UnityMessageManager_set_Instance_m00B42B2CAC4061379FC777409C11067C030B832B_inline(L_2, NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Awake_m1F073A61731A99C308D4A668248137DBD9E7F3C9 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_Start_mAE1B02EE254A2BF2AAC242DDEB3DB2F983D0E2C9 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_OnSceneLoaded_m680CA2A97F09F4FD54B10C042D4D624273DFB3D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, __this, (intptr_t)((void*)UnityMessageManager_OnSceneLoaded_m680CA2A97F09F4FD54B10C042D4D624273DFB3D6_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_0, NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_OnSceneLoaded_m680CA2A97F09F4FD54B10C042D4D624273DFB3D6 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___scene0, int32_t ___mode1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D09669BA97E809CC8DF8DEE21ADF9A0DB96A7DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugins.flutterunitywidget.UnityUtils");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D09669BA97E809CC8DF8DEE21ADF9A0DB96A7DC, NULL);
		// jc.CallStatic("onUnitySceneLoaded", scene.name, scene.buildIndex, scene.isLoaded, scene.IsValid());
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&___scene0), NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		int32_t L_5;
		L_5 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&___scene0), NULL);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_4;
		bool L_9;
		L_9 = Scene_get_isLoaded_m5BC54CEB27330040A0BC69E66E94EE97E87298BC((&___scene0), NULL);
		bool L_10 = L_9;
		RuntimeObject* L_11 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_8;
		bool L_13;
		L_13 = Scene_IsValid_m0D5200731D3E26ECBBB55803F9242965A14A4599((&___scene0), NULL);
		bool L_14 = L_13;
		RuntimeObject* L_15 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_15);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral50C349861105941F8CC6A38A2B8CC315ED6CD653, L_12, NULL);
		// }
		goto IL_005f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0053;
		}
		throw e;
	}

CATCH_0053:
	{// begin catch(System.Exception)
		// print(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_16, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_005f;
	}// end catch (depth: 1)

IL_005f:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m58436B596EA9228CC2CBE497DFD03F58DD589968 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D09669BA97E809CC8DF8DEE21ADF9A0DB96A7DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// AndroidJavaClass jc = new AndroidJavaClass("com.xraph.plugins.flutterunitywidget.UnityUtils");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D09669BA97E809CC8DF8DEE21ADF9A0DB96A7DC, NULL);
		// jc.CallStatic("onUnityMessage", message);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___message0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralFD518666B4F52417752311AE996CEA3A91ECF532, L_2, NULL);
		// }
		goto IL_002c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0020;
		}
		throw e;
	}

CATCH_0020:
	{// begin catch(System.Exception)
		// print(e.Message);
		NullCheck(((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*)));
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(L_4, NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_002c;
	}// end catch (depth: 1)

IL_002c:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::SendMessageToFlutter(UnityMessage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_SendMessageToFlutter_m2CD52D1AFC3D10D2172450BD5D29DD27E3CADDE8 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_1 = NULL;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	{
		// int id = generateId();
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = UnityMessageManager_generateId_mAC837086CD47AA4AC316DD11E28926B8747AA30C(NULL);
		V_0 = L_0;
		// if (message.callBack != null)
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_1 = ___message0;
		NullCheck(L_1);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = L_1->___callBack_2;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// waitCallbackMessageMap.Add(id, message);
		Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* L_3 = __this->___waitCallbackMessageMap_9;
		int32_t L_4 = V_0;
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_5 = ___message0;
		NullCheck(L_3);
		Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E(L_3, L_4, L_5, Dictionary_2_Add_mC6FC12DDCF60A4CF5763890CB20FEB4677B4194E_RuntimeMethod_var);
	}

IL_001b:
	{
		// JObject o = JObject.FromObject(new
		// {
		//     id = id,
		//     seq = message.callBack != null ? "start" : "",
		//     name = message.name,
		//     data = message.data
		// });
		int32_t L_6 = V_0;
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_7 = ___message0;
		NullCheck(L_7);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = L_7->___callBack_2;
		G_B3_0 = L_6;
		if (L_8)
		{
			G_B4_0 = L_6;
			goto IL_002b;
		}
	}
	{
		G_B5_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B5_1 = G_B3_0;
		goto IL_0030;
	}

IL_002b:
	{
		G_B5_0 = _stringLiteral2AD47C03F7A83F82E3B2ADFE8A60F1727FD3BEFD;
		G_B5_1 = G_B4_0;
	}

IL_0030:
	{
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_9 = ___message0;
		NullCheck(L_9);
		String_t* L_10 = L_9->___name_0;
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_11 = ___message0;
		NullCheck(L_11);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_12 = L_11->___data_1;
		U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39* L_13 = (U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39*)il2cpp_codegen_object_new(U3CU3Ef__AnonymousType0_4_t5FFD29B4BCAF7AC3517A208CD71554E9AC16EC39_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99(L_13, G_B5_1, G_B5_0, L_10, L_12, U3CU3Ef__AnonymousType0_4__ctor_m29CA8638117DD35A3ECF831C1C575ECD9A1CFF99_RuntimeMethod_var);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_14;
		L_14 = JObject_FromObject_m19DD8C1DB59132420FA3DE3E6EE27BDF2A4292AD(L_13, NULL);
		V_1 = L_14;
		// UnityMessageManager.Instance.SendMessageToFlutter(MessagePrefix + o.ToString());
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_15;
		L_15 = UnityMessageManager_get_Instance_m47C1FACD4FB4D64E2F0612ECDF745A603DE63997_inline(NULL);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_16 = V_1;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, L_17, NULL);
		NullCheck(L_15);
		UnityMessageManager_SendMessageToFlutter_m58436B596EA9228CC2CBE497DFD03F58DD589968(L_15, L_18, NULL);
		// }
		return;
	}
}
// System.Void UnityMessageManager::onMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onMessage_m844E444B72E9D34837224BE24F45BC4582962B97 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	{
		// if (OnMessage != null)
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_0 = __this->___OnMessage_7;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// OnMessage(message);
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* L_1 = __this->___OnMessage_7;
		String_t* L_2 = ___message0;
		NullCheck(L_1);
		MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_inline(L_1, L_2, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::onFlutterMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager_onFlutterMessage_m6D227EE9C962486D5BF3CEEFA0272AD3D674219F (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC);
		s_Il2CppMethodInitialized = true;
	}
	MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* V_0 = NULL;
	UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* V_1 = NULL;
	{
		// if (message.StartsWith(MessagePrefix))
		String_t* L_0 = ___message0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// message = message.Replace(MessagePrefix, "");
		String_t* L_2 = ___message0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_2, _stringLiteralEA64C610DFA863C445196F98AE1C59C7E6F1B8EC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		___message0 = L_3;
		goto IL_0022;
	}

IL_0021:
	{
		// return;
		return;
	}

IL_0022:
	{
		// MessageHandler handler = MessageHandler.Deserialize(message);
		String_t* L_4 = ___message0;
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_5;
		L_5 = MessageHandler_Deserialize_mD700ECE601B4BCF56FA48BF5F3006E2F12EFAE4F(L_4, NULL);
		V_0 = L_5;
		// if ("end".Equals(handler.seq))
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7 = L_6->___seq_1;
		NullCheck(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1);
		bool L_8;
		L_8 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(_stringLiteralA2F4AC9DD8E1FAC5257E5F7BA5EE1C7C7E5F7AB1, L_7, NULL);
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// if (waitCallbackMessageMap.TryGetValue(handler.id, out m))
		Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* L_9 = __this->___waitCallbackMessageMap_9;
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___id_0;
		NullCheck(L_9);
		bool L_12;
		L_12 = Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A(L_9, L_11, (&V_1), Dictionary_2_TryGetValue_mA4619F1FFBEBA7E77460219CD6B4E97AAB76C04A_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_007b;
		}
	}
	{
		// waitCallbackMessageMap.Remove(handler.id);
		Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* L_13 = __this->___waitCallbackMessageMap_9;
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = L_14->___id_0;
		NullCheck(L_13);
		bool L_16;
		L_16 = Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD(L_13, L_15, Dictionary_2_Remove_mC65CD0AF1E825A0B89893DF8BA2EA0416D2BC0CD_RuntimeMethod_var);
		// if (m.callBack != null)
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_17 = V_1;
		NullCheck(L_17);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = L_17->___callBack_2;
		if (!L_18)
		{
			goto IL_007b;
		}
	}
	{
		// m.callBack(handler.getData<object>()); // todo
		UnityMessage_t536476F96F550BF743BDE7AFEA8F4A4641F6F51F* L_19 = V_1;
		NullCheck(L_19);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_20 = L_19->___callBack_2;
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_21 = V_0;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888(L_21, MessageHandler_getData_TisRuntimeObject_m24756BF831B0D45AA5D8D4A1FF41A01DFD5E3888_RuntimeMethod_var);
		NullCheck(L_20);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_20, L_22, NULL);
	}

IL_007b:
	{
		// return;
		return;
	}

IL_007c:
	{
		// if (OnFlutterMessage != null)
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_23 = __this->___OnFlutterMessage_8;
		if (!L_23)
		{
			goto IL_0090;
		}
	}
	{
		// OnFlutterMessage(handler);
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* L_24 = __this->___OnFlutterMessage_8;
		MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* L_25 = V_0;
		NullCheck(L_24);
		MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_inline(L_24, L_25, NULL);
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void UnityMessageManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityMessageManager__ctor_mA4511CB120AE9C3096F93F3AC504156301DAB9F7 (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<int, UnityMessage> waitCallbackMessageMap = new Dictionary<int, UnityMessage>();
		Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275* L_0 = (Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275*)il2cpp_codegen_object_new(Dictionary_2_t7019529726DC9B660C51BEDBA75D6102D49A8275_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C(L_0, Dictionary_2__ctor_m793321E9D300EBEC85E1995E3128954E56A9703C_RuntimeMethod_var);
		__this->___waitCallbackMessageMap_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitCallbackMessageMap_9), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_Multicast(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* currentDelegate = reinterpret_cast<MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_OpenInst(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	NullCheck(___message0);
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_OpenStatic(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___message0, method);
}
void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_OpenStaticInvoker(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke(__this->___method_ptr_0, method, NULL, ___message0);
}
void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_ClosedStaticInvoker(MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___message0);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void UnityMessageManager/MessageDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate__ctor_m072A79953B4D2581E0213262217A4B6E4DC9EF3E (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_Multicast;
}
// System.Void UnityMessageManager/MessageDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityMessageManager/MessageDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageDelegate_BeginInvoke_mBE7EE70496B9C6B3A8161EA15F617E3CA836C016 (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityMessageManager/MessageDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageDelegate_EndInvoke_mB4EBDE0D4F999D929FD66E2D856F7A804D638148 (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_Multicast(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* currentDelegate = reinterpret_cast<MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___handler0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenInst(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	typedef void (*FunctionPointerType) (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___handler0, method);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenStatic(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___handler0, method);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenStaticInvoker(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* >::Invoke(__this->___method_ptr_0, method, NULL, ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_ClosedStaticInvoker(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenVirtual(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenInterface(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenGenericVirtual(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	GenericVirtualActionInvoker0::Invoke(method, ___handler0);
}
void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenGenericInterface(MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method)
{
	NullCheck(___handler0);
	GenericInterfaceActionInvoker0::Invoke(method, ___handler0);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate__ctor_m9D49A5D03589E382C69571E88278E84CA1F9FF4F (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_Multicast;
}
// System.Void UnityMessageManager/MessageHandlerDelegate::Invoke(MessageHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80 (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handler0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult UnityMessageManager/MessageHandlerDelegate::BeginInvoke(MessageHandler,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MessageHandlerDelegate_BeginInvoke_m1395182BD73CBCCF20E768F09ECEF37B9B835EA2 (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___handler0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityMessageManager/MessageHandlerDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessageHandlerDelegate_EndInvoke_mE403CD191F1F35E443B9221558466560258C80F6 (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void MathProblem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_Start_m7BF6C3FE7251C40077ABD77B8AF860BC5B9032BE (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// score.text = ArabicFixer.Fix(0 + "");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___score_26;
		V_0 = 0;
		String_t* L_1;
		L_1 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0018;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0018:
	{
		String_t* L_3;
		L_3 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B2_0, NULL);
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, L_3);
		// DisplayMathProblem();
		MathProblem_DisplayMathProblem_m24F653C91B2AD61FA914CF97729773CF0C62CE37(__this, NULL);
		// }
		return;
	}
}
// System.Void MathProblem::ShowLevelDialog(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_ShowLevelDialog_m3599F5E8862E03FE0118E1E489E9DA7724511AA4 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, String_t* ___status0, String_t* ___scores1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202_mF125C5616B8CB1CCBE3B6E5AFB8330507C1E1176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent < MathProblem > ().starArcheived();
		MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* L_0;
		L_0 = Component_GetComponent_TisMathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202_mF125C5616B8CB1CCBE3B6E5AFB8330507C1E1176(__this, Component_GetComponent_TisMathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202_mF125C5616B8CB1CCBE3B6E5AFB8330507C1E1176_RuntimeMethod_var);
		NullCheck(L_0);
		MathProblem_starArcheived_m157B053C9E9F41C4ACE60D78BC22B25E9B892C5A(L_0, NULL);
		// LevelDialog.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___LevelDialog_39;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// LevelStatus.text = status;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___LevelStatus_40;
		String_t* L_3 = ___status0;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// scoreText.text = scores;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___scoreText_41;
		String_t* L_5 = ___scores1;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// }
		return;
	}
}
// System.Void MathProblem::DisplayMathProblem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_DisplayMathProblem_m24F653C91B2AD61FA914CF97729773CF0C62CE37 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B10_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B10_1 = NULL;
	String_t* G_B9_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B9_1 = NULL;
	String_t* G_B12_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B12_1 = NULL;
	String_t* G_B11_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B11_1 = NULL;
	String_t* G_B15_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B15_1 = NULL;
	String_t* G_B14_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B14_1 = NULL;
	String_t* G_B17_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B17_1 = NULL;
	String_t* G_B16_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B16_1 = NULL;
	String_t* G_B19_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B19_1 = NULL;
	String_t* G_B18_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B18_1 = NULL;
	String_t* G_B21_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B21_1 = NULL;
	String_t* G_B20_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B20_1 = NULL;
	String_t* G_B25_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B25_1 = NULL;
	String_t* G_B24_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B24_1 = NULL;
	String_t* G_B27_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B27_1 = NULL;
	String_t* G_B26_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B26_1 = NULL;
	String_t* G_B29_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B29_1 = NULL;
	String_t* G_B28_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B28_1 = NULL;
	String_t* G_B31_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B31_1 = NULL;
	String_t* G_B30_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B30_1 = NULL;
	String_t* G_B35_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B35_1 = NULL;
	String_t* G_B34_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B34_1 = NULL;
	String_t* G_B37_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B37_1 = NULL;
	String_t* G_B36_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B36_1 = NULL;
	String_t* G_B39_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B39_1 = NULL;
	String_t* G_B38_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B38_1 = NULL;
	String_t* G_B41_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B41_1 = NULL;
	String_t* G_B40_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B40_1 = NULL;
	String_t* G_B44_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B44_1 = NULL;
	String_t* G_B43_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B43_1 = NULL;
	String_t* G_B46_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B46_1 = NULL;
	String_t* G_B45_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B45_1 = NULL;
	String_t* G_B48_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B48_1 = NULL;
	String_t* G_B47_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B47_1 = NULL;
	String_t* G_B50_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B50_1 = NULL;
	String_t* G_B49_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B49_1 = NULL;
	{
		// randomFirstNumber = Random.Range(0, easyMathList.Count + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___easyMathList_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_0, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		__this->___randomFirstNumber_12 = L_2;
		// randomSecondNumber = Random.Range(0, easyMathList.Count + 1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___easyMathList_11;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_3, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		int32_t L_5;
		L_5 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)il2cpp_codegen_add(L_4, 1)), NULL);
		__this->___randomSecondNumber_13 = L_5;
		// firstNumberInProblem = randomFirstNumber;
		int32_t L_6 = __this->___randomFirstNumber_12;
		__this->___firstNumberInProblem_14 = L_6;
		// secondNumberInProblem = randomSecondNumber;
		int32_t L_7 = __this->___randomSecondNumber_13;
		__this->___secondNumberInProblem_15 = L_7;
		// answerOne = firstNumberInProblem + secondNumberInProblem;
		int32_t L_8 = __this->___firstNumberInProblem_14;
		int32_t L_9 = __this->___secondNumberInProblem_15;
		__this->___answerOne_16 = ((int32_t)il2cpp_codegen_add(L_8, L_9));
		// displayRandomAnswer = Random.Range(0, 2);
		int32_t L_10;
		L_10 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 2, NULL);
		__this->___displayRandomAnswer_20 = L_10;
		// if (displayRandomAnswer == 0) {
		int32_t L_11 = __this->___displayRandomAnswer_20;
		if (L_11)
		{
			goto IL_00b4;
		}
	}
	{
		// answerTwo = answerOne + Random.Range(1, 3);
		int32_t L_12 = __this->___answerOne_16;
		int32_t L_13;
		L_13 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 3, NULL);
		__this->___answerTwo_17 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		// answerThree = answerOne + Random.Range(4, 6);
		int32_t L_14 = __this->___answerOne_16;
		int32_t L_15;
		L_15 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(4, 6, NULL);
		__this->___answerThree_18 = ((int32_t)il2cpp_codegen_add(L_14, L_15));
		// answerFour = answerOne + Random.Range(7, 9);
		int32_t L_16 = __this->___answerOne_16;
		int32_t L_17;
		L_17 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(7, ((int32_t)9), NULL);
		__this->___answerFour_19 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		goto IL_017c;
	}

IL_00b4:
	{
		// answerTwo = answerOne - Random.Range(1, 3);
		int32_t L_18 = __this->___answerOne_16;
		int32_t L_19;
		L_19 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 3, NULL);
		__this->___answerTwo_17 = ((int32_t)il2cpp_codegen_subtract(L_18, L_19));
		// answerThree = answerOne - Random.Range(4, 6);
		int32_t L_20 = __this->___answerOne_16;
		int32_t L_21;
		L_21 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(4, 6, NULL);
		__this->___answerThree_18 = ((int32_t)il2cpp_codegen_subtract(L_20, L_21));
		// answerFour = answerOne - Random.Range(7, 9);
		int32_t L_22 = __this->___answerOne_16;
		int32_t L_23;
		L_23 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(7, ((int32_t)9), NULL);
		__this->___answerFour_19 = ((int32_t)il2cpp_codegen_subtract(L_22, L_23));
		// if (answerTwo < 0) {
		int32_t L_24 = __this->___answerTwo_17;
		if ((((int32_t)L_24) >= ((int32_t)0)))
		{
			goto IL_011f;
		}
	}
	{
		// answerTwo = Mathf.Abs(answerTwo);
		int32_t L_25 = __this->___answerTwo_17;
		int32_t L_26;
		L_26 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_25, NULL);
		__this->___answerTwo_17 = L_26;
		// answerTwo = answerOne + Random.Range(1, 3);
		int32_t L_27 = __this->___answerOne_16;
		int32_t L_28;
		L_28 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 3, NULL);
		__this->___answerTwo_17 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
	}

IL_011f:
	{
		// if (answerThree < 0) {
		int32_t L_29 = __this->___answerThree_18;
		if ((((int32_t)L_29) >= ((int32_t)0)))
		{
			goto IL_014d;
		}
	}
	{
		// answerThree = Mathf.Abs(answerThree);
		int32_t L_30 = __this->___answerThree_18;
		int32_t L_31;
		L_31 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_30, NULL);
		__this->___answerThree_18 = L_31;
		// answerThree = answerOne + Random.Range(4, 6);
		int32_t L_32 = __this->___answerOne_16;
		int32_t L_33;
		L_33 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(4, 6, NULL);
		__this->___answerThree_18 = ((int32_t)il2cpp_codegen_add(L_32, L_33));
	}

IL_014d:
	{
		// if (answerFour < 0) {
		int32_t L_34 = __this->___answerFour_19;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_017c;
		}
	}
	{
		// answerFour = Mathf.Abs(answerFour);
		int32_t L_35 = __this->___answerFour_19;
		int32_t L_36;
		L_36 = Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline(L_35, NULL);
		__this->___answerFour_19 = L_36;
		// answerFour = answerOne + Random.Range(7, 9);
		int32_t L_37 = __this->___answerOne_16;
		int32_t L_38;
		L_38 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(7, ((int32_t)9), NULL);
		__this->___answerFour_19 = ((int32_t)il2cpp_codegen_add(L_37, L_38));
	}

IL_017c:
	{
		// firstNumber.text = ArabicFixer.Fix("" + firstNumberInProblem);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->___firstNumber_5;
		int32_t* L_40 = (&__this->___firstNumberInProblem_14);
		String_t* L_41;
		L_41 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_40, NULL);
		String_t* L_42 = L_41;
		G_B9_0 = L_42;
		G_B9_1 = L_39;
		if (L_42)
		{
			G_B10_0 = L_42;
			G_B10_1 = L_39;
			goto IL_0196;
		}
	}
	{
		G_B10_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B10_1 = G_B9_1;
	}

IL_0196:
	{
		String_t* L_43;
		L_43 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B10_0, NULL);
		NullCheck(G_B10_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B10_1, L_43);
		// secondNumber.text = ArabicFixer.Fix("" + secondNumberInProblem);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = __this->___secondNumber_6;
		int32_t* L_45 = (&__this->___secondNumberInProblem_15);
		String_t* L_46;
		L_46 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_45, NULL);
		String_t* L_47 = L_46;
		G_B11_0 = L_47;
		G_B11_1 = L_44;
		if (L_47)
		{
			G_B12_0 = L_47;
			G_B12_1 = L_44;
			goto IL_01ba;
		}
	}
	{
		G_B12_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B12_1 = G_B11_1;
	}

IL_01ba:
	{
		String_t* L_48;
		L_48 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B12_0, NULL);
		NullCheck(G_B12_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B12_1, L_48);
		// randomAnswerPlacement = Random.Range(0, 4);
		int32_t L_49;
		L_49 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 4, NULL);
		__this->___randomAnswerPlacement_21 = L_49;
		// if (randomAnswerPlacement == 0) {
		int32_t L_50 = __this->___randomAnswerPlacement_21;
		if (L_50)
		{
			goto IL_0278;
		}
	}
	{
		// answer1.text = ArabicFixer.Fix("" + answerOne);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_51 = __this->___answer1_7;
		int32_t* L_52 = (&__this->___answerOne_16);
		String_t* L_53;
		L_53 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_52, NULL);
		String_t* L_54 = L_53;
		G_B14_0 = L_54;
		G_B14_1 = L_51;
		if (L_54)
		{
			G_B15_0 = L_54;
			G_B15_1 = L_51;
			goto IL_01f6;
		}
	}
	{
		G_B15_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B15_1 = G_B14_1;
	}

IL_01f6:
	{
		String_t* L_55;
		L_55 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B15_0, NULL);
		NullCheck(G_B15_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B15_1, L_55);
		// answer2.text = ArabicFixer.Fix("" + answerTwo);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_56 = __this->___answer2_8;
		int32_t* L_57 = (&__this->___answerTwo_17);
		String_t* L_58;
		L_58 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_57, NULL);
		String_t* L_59 = L_58;
		G_B16_0 = L_59;
		G_B16_1 = L_56;
		if (L_59)
		{
			G_B17_0 = L_59;
			G_B17_1 = L_56;
			goto IL_021a;
		}
	}
	{
		G_B17_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B17_1 = G_B16_1;
	}

IL_021a:
	{
		String_t* L_60;
		L_60 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B17_0, NULL);
		NullCheck(G_B17_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B17_1, L_60);
		// answer3.text = ArabicFixer.Fix("" + answerThree);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_61 = __this->___answer3_9;
		int32_t* L_62 = (&__this->___answerThree_18);
		String_t* L_63;
		L_63 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_62, NULL);
		String_t* L_64 = L_63;
		G_B18_0 = L_64;
		G_B18_1 = L_61;
		if (L_64)
		{
			G_B19_0 = L_64;
			G_B19_1 = L_61;
			goto IL_023e;
		}
	}
	{
		G_B19_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B19_1 = G_B18_1;
	}

IL_023e:
	{
		String_t* L_65;
		L_65 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B19_0, NULL);
		NullCheck(G_B19_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B19_1, L_65);
		// answer4.text = ArabicFixer.Fix("" + answerFour);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_66 = __this->___answer4_10;
		int32_t* L_67 = (&__this->___answerFour_19);
		String_t* L_68;
		L_68 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_67, NULL);
		String_t* L_69 = L_68;
		G_B20_0 = L_69;
		G_B20_1 = L_66;
		if (L_69)
		{
			G_B21_0 = L_69;
			G_B21_1 = L_66;
			goto IL_0262;
		}
	}
	{
		G_B21_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B21_1 = G_B20_1;
	}

IL_0262:
	{
		String_t* L_70;
		L_70 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B21_0, NULL);
		NullCheck(G_B21_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B21_1, L_70);
		// currentAnswer = 0;
		__this->___currentAnswer_22 = 0;
		goto IL_045f;
	}

IL_0278:
	{
		// } else if (randomAnswerPlacement == 1) {
		int32_t L_71 = __this->___randomAnswerPlacement_21;
		if ((!(((uint32_t)L_71) == ((uint32_t)1))))
		{
			goto IL_0320;
		}
	}
	{
		// answer1.text = ArabicFixer.Fix("" + answerTwo);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_72 = __this->___answer1_7;
		int32_t* L_73 = (&__this->___answerTwo_17);
		String_t* L_74;
		L_74 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_73, NULL);
		String_t* L_75 = L_74;
		G_B24_0 = L_75;
		G_B24_1 = L_72;
		if (L_75)
		{
			G_B25_0 = L_75;
			G_B25_1 = L_72;
			goto IL_029e;
		}
	}
	{
		G_B25_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B25_1 = G_B24_1;
	}

IL_029e:
	{
		String_t* L_76;
		L_76 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B25_0, NULL);
		NullCheck(G_B25_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B25_1, L_76);
		// answer2.text = ArabicFixer.Fix("" + answerOne);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_77 = __this->___answer2_8;
		int32_t* L_78 = (&__this->___answerOne_16);
		String_t* L_79;
		L_79 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_78, NULL);
		String_t* L_80 = L_79;
		G_B26_0 = L_80;
		G_B26_1 = L_77;
		if (L_80)
		{
			G_B27_0 = L_80;
			G_B27_1 = L_77;
			goto IL_02c2;
		}
	}
	{
		G_B27_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B27_1 = G_B26_1;
	}

IL_02c2:
	{
		String_t* L_81;
		L_81 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B27_0, NULL);
		NullCheck(G_B27_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B27_1, L_81);
		// answer3.text = ArabicFixer.Fix("" + answerFour);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_82 = __this->___answer3_9;
		int32_t* L_83 = (&__this->___answerFour_19);
		String_t* L_84;
		L_84 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_83, NULL);
		String_t* L_85 = L_84;
		G_B28_0 = L_85;
		G_B28_1 = L_82;
		if (L_85)
		{
			G_B29_0 = L_85;
			G_B29_1 = L_82;
			goto IL_02e6;
		}
	}
	{
		G_B29_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B29_1 = G_B28_1;
	}

IL_02e6:
	{
		String_t* L_86;
		L_86 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B29_0, NULL);
		NullCheck(G_B29_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B29_1, L_86);
		// answer4.text = ArabicFixer.Fix("" + answerThree);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_87 = __this->___answer4_10;
		int32_t* L_88 = (&__this->___answerThree_18);
		String_t* L_89;
		L_89 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_88, NULL);
		String_t* L_90 = L_89;
		G_B30_0 = L_90;
		G_B30_1 = L_87;
		if (L_90)
		{
			G_B31_0 = L_90;
			G_B31_1 = L_87;
			goto IL_030a;
		}
	}
	{
		G_B31_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B31_1 = G_B30_1;
	}

IL_030a:
	{
		String_t* L_91;
		L_91 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B31_0, NULL);
		NullCheck(G_B31_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B31_1, L_91);
		// currentAnswer = 1;
		__this->___currentAnswer_22 = 1;
		goto IL_045f;
	}

IL_0320:
	{
		// } else if (randomAnswerPlacement == 2) {
		int32_t L_92 = __this->___randomAnswerPlacement_21;
		if ((!(((uint32_t)L_92) == ((uint32_t)2))))
		{
			goto IL_03c8;
		}
	}
	{
		// answer1.text = ArabicFixer.Fix("" + answerThree);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_93 = __this->___answer1_7;
		int32_t* L_94 = (&__this->___answerThree_18);
		String_t* L_95;
		L_95 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_94, NULL);
		String_t* L_96 = L_95;
		G_B34_0 = L_96;
		G_B34_1 = L_93;
		if (L_96)
		{
			G_B35_0 = L_96;
			G_B35_1 = L_93;
			goto IL_0346;
		}
	}
	{
		G_B35_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B35_1 = G_B34_1;
	}

IL_0346:
	{
		String_t* L_97;
		L_97 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B35_0, NULL);
		NullCheck(G_B35_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B35_1, L_97);
		// answer2.text = ArabicFixer.Fix("" + answerFour);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_98 = __this->___answer2_8;
		int32_t* L_99 = (&__this->___answerFour_19);
		String_t* L_100;
		L_100 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_99, NULL);
		String_t* L_101 = L_100;
		G_B36_0 = L_101;
		G_B36_1 = L_98;
		if (L_101)
		{
			G_B37_0 = L_101;
			G_B37_1 = L_98;
			goto IL_036a;
		}
	}
	{
		G_B37_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B37_1 = G_B36_1;
	}

IL_036a:
	{
		String_t* L_102;
		L_102 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B37_0, NULL);
		NullCheck(G_B37_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B37_1, L_102);
		// answer3.text = ArabicFixer.Fix("" + answerOne);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_103 = __this->___answer3_9;
		int32_t* L_104 = (&__this->___answerOne_16);
		String_t* L_105;
		L_105 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_104, NULL);
		String_t* L_106 = L_105;
		G_B38_0 = L_106;
		G_B38_1 = L_103;
		if (L_106)
		{
			G_B39_0 = L_106;
			G_B39_1 = L_103;
			goto IL_038e;
		}
	}
	{
		G_B39_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B39_1 = G_B38_1;
	}

IL_038e:
	{
		String_t* L_107;
		L_107 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B39_0, NULL);
		NullCheck(G_B39_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B39_1, L_107);
		// answer4.text = ArabicFixer.Fix("" + answerTwo);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_108 = __this->___answer4_10;
		int32_t* L_109 = (&__this->___answerTwo_17);
		String_t* L_110;
		L_110 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_109, NULL);
		String_t* L_111 = L_110;
		G_B40_0 = L_111;
		G_B40_1 = L_108;
		if (L_111)
		{
			G_B41_0 = L_111;
			G_B41_1 = L_108;
			goto IL_03b2;
		}
	}
	{
		G_B41_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B41_1 = G_B40_1;
	}

IL_03b2:
	{
		String_t* L_112;
		L_112 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B41_0, NULL);
		NullCheck(G_B41_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B41_1, L_112);
		// currentAnswer = 2;
		__this->___currentAnswer_22 = 2;
		goto IL_045f;
	}

IL_03c8:
	{
		// answer1.text = ArabicFixer.Fix("" + answerThree);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_113 = __this->___answer1_7;
		int32_t* L_114 = (&__this->___answerThree_18);
		String_t* L_115;
		L_115 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_114, NULL);
		String_t* L_116 = L_115;
		G_B43_0 = L_116;
		G_B43_1 = L_113;
		if (L_116)
		{
			G_B44_0 = L_116;
			G_B44_1 = L_113;
			goto IL_03e2;
		}
	}
	{
		G_B44_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B44_1 = G_B43_1;
	}

IL_03e2:
	{
		String_t* L_117;
		L_117 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B44_0, NULL);
		NullCheck(G_B44_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B44_1, L_117);
		// answer2.text = ArabicFixer.Fix("" + answerFour);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_118 = __this->___answer2_8;
		int32_t* L_119 = (&__this->___answerFour_19);
		String_t* L_120;
		L_120 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_119, NULL);
		String_t* L_121 = L_120;
		G_B45_0 = L_121;
		G_B45_1 = L_118;
		if (L_121)
		{
			G_B46_0 = L_121;
			G_B46_1 = L_118;
			goto IL_0406;
		}
	}
	{
		G_B46_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B46_1 = G_B45_1;
	}

IL_0406:
	{
		String_t* L_122;
		L_122 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B46_0, NULL);
		NullCheck(G_B46_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B46_1, L_122);
		// answer3.text = ArabicFixer.Fix("" + answerTwo);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_123 = __this->___answer3_9;
		int32_t* L_124 = (&__this->___answerTwo_17);
		String_t* L_125;
		L_125 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_124, NULL);
		String_t* L_126 = L_125;
		G_B47_0 = L_126;
		G_B47_1 = L_123;
		if (L_126)
		{
			G_B48_0 = L_126;
			G_B48_1 = L_123;
			goto IL_042a;
		}
	}
	{
		G_B48_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B48_1 = G_B47_1;
	}

IL_042a:
	{
		String_t* L_127;
		L_127 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B48_0, NULL);
		NullCheck(G_B48_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B48_1, L_127);
		// answer4.text = ArabicFixer.Fix("" + answerOne);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_128 = __this->___answer4_10;
		int32_t* L_129 = (&__this->___answerOne_16);
		String_t* L_130;
		L_130 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_129, NULL);
		String_t* L_131 = L_130;
		G_B49_0 = L_131;
		G_B49_1 = L_128;
		if (L_131)
		{
			G_B50_0 = L_131;
			G_B50_1 = L_128;
			goto IL_044e;
		}
	}
	{
		G_B50_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B50_1 = G_B49_1;
	}

IL_044e:
	{
		String_t* L_132;
		L_132 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B50_0, NULL);
		NullCheck(G_B50_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B50_1, L_132);
		// currentAnswer = 3;
		__this->___currentAnswer_22 = 3;
	}

IL_045f:
	{
		// answer1.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_133 = __this->___answer1_7;
		NullCheck(L_133);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_133, 1, NULL);
		// answer2.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_134 = __this->___answer2_8;
		NullCheck(L_134);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_134, 1, NULL);
		// answer3.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_135 = __this->___answer3_9;
		NullCheck(L_135);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_135, 1, NULL);
		// answer4.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_136 = __this->___answer4_10;
		NullCheck(L_136);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_136, 1, NULL);
		// }
		return;
	}
}
// System.Void MathProblem::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_AddScore_m9EF9693BA515F385C0C96A337719D7963BB00710 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	{
		// additionScore += 1;
		int32_t L_0 = __this->___additionScore_25;
		__this->___additionScore_25 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// score.text = ArabicFixer.Fix("" + additionScore);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___score_26;
		int32_t* L_2 = (&__this->___additionScore_25);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_1;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_1;
			goto IL_0028;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_0028:
	{
		String_t* L_5;
		L_5 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(G_B2_0, NULL);
		NullCheck(G_B2_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B2_1, L_5);
		// }
		return;
	}
}
// System.Void MathProblem::DisplayFinalScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_DisplayFinalScore_mF2608F6FA88FE93263AD9542E175B8C3B7785F12 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13C0EDD28E230E66BC3A932CBD9F95D38240A257);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48920660E3582A05094D20D42688D9CA45863565);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F58107EE6A427BA4B2F4C93700E9EAECC124EA4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9A257ED4FF5B22ECA3F4923DA317E5E24BB2C53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA50F4057951BA11CF0B6387E3AE7CB14FFE9D63);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (additionScore >= 7) {
		int32_t L_0 = __this->___additionScore_25;
		if ((((int32_t)L_0) < ((int32_t)7)))
		{
			goto IL_003e;
		}
	}
	{
		// result.text = ArabicFixer.Fix("?????! ??????: " + additionScore);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___result_27;
		int32_t* L_2 = (&__this->___additionScore_25);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral48920660E3582A05094D20D42688D9CA45863565, L_3, NULL);
		String_t* L_5;
		L_5 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_4, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// result.color = Color.green;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___result_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
	}

IL_003e:
	{
		// if (additionScore >= 4 && additionScore <= 6) {
		int32_t L_8 = __this->___additionScore_25;
		if ((((int32_t)L_8) < ((int32_t)4)))
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_9 = __this->___additionScore_25;
		if ((((int32_t)L_9) > ((int32_t)6)))
		{
			goto IL_0085;
		}
	}
	{
		// result.text = ArabicFixer.Fix("???! ??????: " + additionScore);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___result_27;
		int32_t* L_11 = (&__this->___additionScore_25);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7F58107EE6A427BA4B2F4C93700E9EAECC124EA4, L_12, NULL);
		String_t* L_14;
		L_14 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_13, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_14);
		// result.color = Color.yellow;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___result_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
	}

IL_0085:
	{
		// if (additionScore <= 3) {
		int32_t L_17 = __this->___additionScore_25;
		if ((((int32_t)L_17) > ((int32_t)3)))
		{
			goto IL_00c3;
		}
	}
	{
		// result.text = ArabicFixer.Fix("???? ??? ????! ??????: " + additionScore);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___result_27;
		int32_t* L_19 = (&__this->___additionScore_25);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB9A257ED4FF5B22ECA3F4923DA317E5E24BB2C53, L_20, NULL);
		String_t* L_22;
		L_22 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_21, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_22);
		// result.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___result_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_23, L_24);
	}

IL_00c3:
	{
		// replayButtonText.text= ArabicFixer.Fix("?????" );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___replayButtonText_37;
		String_t* L_26;
		L_26 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(_stringLiteralCA50F4057951BA11CF0B6387E3AE7CB14FFE9D63, NULL);
		NullCheck(L_25);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_25, L_26);
		// backButtonText.text= ArabicFixer.Fix("????" );
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___backButtonText_38;
		String_t* L_28;
		L_28 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(_stringLiteral13C0EDD28E230E66BC3A932CBD9F95D38240A257, NULL);
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_28);
		// }
		return;
	}
}
// System.Void MathProblem::starArcheived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_starArcheived_m157B053C9E9F41C4ACE60D78BC22B25E9B892C5A (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	{
		// if (additionScore >= 1 && additionScore < 4) {
		int32_t L_0 = __this->___additionScore_25;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = __this->___additionScore_25;
		if ((((int32_t)L_1) >= ((int32_t)4)))
		{
			goto IL_0021;
		}
	}
	{
		// star[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___star_32;
		NullCheck(L_2);
		int32_t L_3 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		return;
	}

IL_0021:
	{
		// } else if (additionScore >= 4 && additionScore < 7) {
		int32_t L_5 = __this->___additionScore_25;
		if ((((int32_t)L_5) < ((int32_t)4)))
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_6 = __this->___additionScore_25;
		if ((((int32_t)L_6) >= ((int32_t)7)))
		{
			goto IL_0050;
		}
	}
	{
		// star[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___star_32;
		NullCheck(L_7);
		int32_t L_8 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// star[1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_10 = __this->___star_32;
		NullCheck(L_10);
		int32_t L_11 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		return;
	}

IL_0050:
	{
		// } else if (additionScore >= 7 && additionScore <= 10) {
		int32_t L_13 = __this->___additionScore_25;
		if ((((int32_t)L_13) < ((int32_t)7)))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_14 = __this->___additionScore_25;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)10))))
		{
			goto IL_008d;
		}
	}
	{
		// star[0].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = __this->___star_32;
		NullCheck(L_15);
		int32_t L_16 = 0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// star[1].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_18 = __this->___star_32;
		NullCheck(L_18);
		int32_t L_19 = 1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
		// star[2].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_21 = __this->___star_32;
		NullCheck(L_21);
		int32_t L_22 = 2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void MathProblem::ButtonAnswer1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_ButtonAnswer1_mFF80294A02B5ACBFC25EF76B103578731A377583 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D485105DA3BDB7538E866E44FA87F51AD11B2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7484EEA35A5138F573F3BA3AA38839C5C019A31C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentAnswer == 0) {
		int32_t L_0 = __this->___currentAnswer_22;
		if (L_0)
		{
			goto IL_0057;
		}
	}
	{
		// rightOrWrong_Text.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___rightOrWrong_Text_23;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// rightOrWrong_Text.color = Color.green;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___rightOrWrong_Text_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// rightOrWrong_Text.text = ("?");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___rightOrWrong_Text_23;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral7484EEA35A5138F573F3BA3AA38839C5C019A31C);
		// answer1.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___answer1_7;
		NullCheck(L_5);
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_5, 1, NULL);
		// AddScore();
		MathProblem_AddScore_m9EF9693BA515F385C0C96A337719D7963BB00710(__this, NULL);
		// Invoke("TurnOffText", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66, (1.0f), NULL);
		return;
	}

IL_0057:
	{
		// rightOrWrong_Text.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___rightOrWrong_Text_23;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
		// rightOrWrong_Text.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___rightOrWrong_Text_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		L_8 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_7);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_8);
		// rightOrWrong_Text.text = ("?");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___rightOrWrong_Text_23;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteral62D485105DA3BDB7538E866E44FA87F51AD11B2D);
		// Invoke("TurnOffText", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void MathProblem::ButtonAnswer2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_ButtonAnswer2_mD84D9A2A7D3330E0FCC52781C402CFAE1015AB5E (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D485105DA3BDB7538E866E44FA87F51AD11B2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7484EEA35A5138F573F3BA3AA38839C5C019A31C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentAnswer == 1) {
		int32_t L_0 = __this->___currentAnswer_22;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// rightOrWrong_Text.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___rightOrWrong_Text_23;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// rightOrWrong_Text.color = Color.green;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___rightOrWrong_Text_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// rightOrWrong_Text.text = ("?");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___rightOrWrong_Text_23;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral7484EEA35A5138F573F3BA3AA38839C5C019A31C);
		// AddScore();
		MathProblem_AddScore_m9EF9693BA515F385C0C96A337719D7963BB00710(__this, NULL);
		// Invoke("TurnOffText", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66, (1.0f), NULL);
		return;
	}

IL_004c:
	{
		// rightOrWrong_Text.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___rightOrWrong_Text_23;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// rightOrWrong_Text.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___rightOrWrong_Text_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// rightOrWrong_Text.text = ("?");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___rightOrWrong_Text_23;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral62D485105DA3BDB7538E866E44FA87F51AD11B2D);
		// Invoke("TurnOffText", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void MathProblem::ButtonAnswer3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_ButtonAnswer3_m2F9D11DCACBDD21F3D2D4216B9E771A65A53F2D3 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D485105DA3BDB7538E866E44FA87F51AD11B2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7484EEA35A5138F573F3BA3AA38839C5C019A31C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentAnswer == 2) {
		int32_t L_0 = __this->___currentAnswer_22;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		// rightOrWrong_Text.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___rightOrWrong_Text_23;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// rightOrWrong_Text.color = Color.green;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___rightOrWrong_Text_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// rightOrWrong_Text.text = ("?");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___rightOrWrong_Text_23;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral7484EEA35A5138F573F3BA3AA38839C5C019A31C);
		// AddScore();
		MathProblem_AddScore_m9EF9693BA515F385C0C96A337719D7963BB00710(__this, NULL);
		// Invoke("TurnOffText", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66, (1.0f), NULL);
		return;
	}

IL_004c:
	{
		// rightOrWrong_Text.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___rightOrWrong_Text_23;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// rightOrWrong_Text.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___rightOrWrong_Text_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// rightOrWrong_Text.text = ("?");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___rightOrWrong_Text_23;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral62D485105DA3BDB7538E866E44FA87F51AD11B2D);
		// Invoke("TurnOffText", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void MathProblem::ButtonAnswer4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_ButtonAnswer4_mD9D3157E608B3B7A07CACB49F79661C75473D3A7 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62D485105DA3BDB7538E866E44FA87F51AD11B2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7484EEA35A5138F573F3BA3AA38839C5C019A31C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentAnswer == 3) {
		int32_t L_0 = __this->___currentAnswer_22;
		if ((!(((uint32_t)L_0) == ((uint32_t)3))))
		{
			goto IL_004c;
		}
	}
	{
		// rightOrWrong_Text.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___rightOrWrong_Text_23;
		NullCheck(L_1);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// rightOrWrong_Text.color = Color.green;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___rightOrWrong_Text_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline(NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// rightOrWrong_Text.text = ("?");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___rightOrWrong_Text_23;
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral7484EEA35A5138F573F3BA3AA38839C5C019A31C);
		// AddScore();
		MathProblem_AddScore_m9EF9693BA515F385C0C96A337719D7963BB00710(__this, NULL);
		// Invoke("TurnOffText", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66, (1.0f), NULL);
		return;
	}

IL_004c:
	{
		// rightOrWrong_Text.enabled = true;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___rightOrWrong_Text_23;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)1, NULL);
		// rightOrWrong_Text.color = Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___rightOrWrong_Text_23;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// rightOrWrong_Text.text = ("?");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___rightOrWrong_Text_23;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, _stringLiteral62D485105DA3BDB7538E866E44FA87F51AD11B2D);
		// Invoke("TurnOffText", 1);
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral61CE92F81D0888F7D15886C61173686F89F40B66, (1.0f), NULL);
		// }
		return;
	}
}
// System.Void MathProblem::TurnOffText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem_TurnOffText_m8A7131E35FDC6D0C4D7FDFEAE5571E1720890561 (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (rightOrWrong_Text != null) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___rightOrWrong_Text_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// rightOrWrong_Text.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___rightOrWrong_Text_23;
		NullCheck(L_2);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
	}

IL_001a:
	{
		// count = count - 1;
		int32_t L_3 = __this->___count_24;
		__this->___count_24 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		// if (count > 0)
		int32_t L_4 = __this->___count_24;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0038;
		}
	}
	{
		// DisplayMathProblem();
		MathProblem_DisplayMathProblem_m24F653C91B2AD61FA914CF97729773CF0C62CE37(__this, NULL);
		return;
	}

IL_0038:
	{
		// displayWindow.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___displayWindow_28;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// DisplayFinalScore();
		MathProblem_DisplayFinalScore_mF2608F6FA88FE93263AD9542E175B8C3B7785F12(__this, NULL);
		// starArcheived();
		MathProblem_starArcheived_m157B053C9E9F41C4ACE60D78BC22B25E9B892C5A(__this, NULL);
		// }
		return;
	}
}
// System.Void MathProblem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MathProblem__ctor_mD272D614BAF8B85C3D59383FB5767495007DF1FF (MathProblem_tB4CC96038B1857350FAED43A0FD9A9FAEF1ED202* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List < int > easyMathList = new List < int > ();
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_0, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___easyMathList_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___easyMathList_11), (void*)L_0);
		// public int count = 10; //??? ???? 10 ????? ????
		__this->___count_24 = ((int32_t)10);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ArabicTextScrpt::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicTextScrpt_Start_m2A0F81323D48DD2681D5394C5E16A0475D2B34C7 (ArabicTextScrpt_t7028C2BAC4D498ABBBFDBB9C05E15D486F31E91D* __this, const RuntimeMethod* method) 
{
	{
		// arabicText.text =  ArabicFixer.Fix(text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___arabicText_5;
		String_t* L_1 = __this->___text_4;
		String_t* L_2;
		L_2 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_1, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void ArabicTextScrpt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicTextScrpt__ctor_mF4766D638EC40EFF4B0E5BDC63044534CE2F73AF (ArabicTextScrpt_t7028C2BAC4D498ABBBFDBB9C05E15D486F31E91D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ARPlacement::Awak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_Awak_m2312538F06201D06D84C1FDDE97FFEAB279B948A (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacement_Dissmiss_m48FD6662E21B7D7743BEB23FF33E905F459C2461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARPlacement_PlaneChanged_mD2832FCCEC371CFE7D95C3DAAB0062936DDCDC7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// disimssButton.onClick.AddListener(Dissmiss);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___disimssButton_7;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)ARPlacement_Dissmiss_m48FD6662E21B7D7743BEB23FF33E905F459C2461_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// aRPlaneManager = GetComponent<ARPlaneManager>();
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_3;
		L_3 = Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF(__this, Component_GetComponent_TisARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928_m668A6CC15F573ABC389E612A2423599B5ADDC2EF_RuntimeMethod_var);
		__this->___aRPlaneManager_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aRPlaneManager_8), (void*)L_3);
		// aRPlaneManager.planesChanged += PlaneChanged;
		ARPlaneManager_t9DA6C512BDCFFBEE8B3DAA7170EB3BFFDE26A928* L_4 = __this->___aRPlaneManager_8;
		Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560* L_5 = (Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560*)il2cpp_codegen_object_new(Action_1_t009680BF19017ECA60753C7F605CBD85C56C6560_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_mBEDDD2BF96A8A407FBB833F764447E82E3D50BCF(L_5, __this, (intptr_t)((void*)ARPlacement_PlaneChanged_mD2832FCCEC371CFE7D95C3DAAB0062936DDCDC7F_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		ARPlaneManager_add_planesChanged_m295E8F0B09AF78A2D9249F3C07BFD4D4F749F36D(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ARPlacement::PlaneChanged(UnityEngine.XR.ARFoundation.ARPlanesChangedEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_PlaneChanged_mD2832FCCEC371CFE7D95C3DAAB0062936DDCDC7F (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, ARPlanesChangedEventArgs_t8D63E0257BF9942EF8F8C0445F2FD46421017872 ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE29CA81FF433DA79AB23285348CE4D3E1EA7F28F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* V_0 = NULL;
	{
		// if(args.added !=null && placedObject == null){
		List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* L_0;
		L_0 = ARPlanesChangedEventArgs_get_added_m6E00DD5F0B3261BCBAA8A029924A1F3F4179C747_inline((&___args0), NULL);
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___placedObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0046;
		}
	}
	{
		// ARPlane aRPlane = args.added[0];
		List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* L_3;
		L_3 = ARPlanesChangedEventArgs_get_added_m6E00DD5F0B3261BCBAA8A029924A1F3F4179C747_inline((&___args0), NULL);
		NullCheck(L_3);
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_4;
		L_4 = List_1_get_Item_mE29CA81FF433DA79AB23285348CE4D3E1EA7F28F(L_3, 0, List_1_get_Item_mE29CA81FF433DA79AB23285348CE4D3E1EA7F28F_RuntimeMethod_var);
		V_0 = L_4;
		// placedObject = Instantiate(placedPrefab , aRPlane.transform.position, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___placedPrefab_6;
		ARPlane_tB2F02248AD4019D141553B25C1B9005913E98EF0* L_6 = V_0;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_8, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___placedObject_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___placedObject_5), (void*)L_10);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void ARPlacement::Dissmiss()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement_Dissmiss_m48FD6662E21B7D7743BEB23FF33E905F459C2461 (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) 
{
	{
		// private void Dissmiss() => welcomePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___welcomePanel_4;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		return;
	}
}
// System.Void ARPlacement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARPlacement__ctor_m13D40B9A26B154DDB1ABAC3D5E6CF03F7EE3F9ED (ARPlacement_tA1308C1A97DE34EB044FD63BB22F99D72F2A60E7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void buttonOver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void buttonOver_Awake_mE96E8AAA634760CDD933CC5C0053530C01737400 (buttonOver_t45C4AB3C1E3F2A2D890F94A501AA62F8F5E41AA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rectTransform = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___rectTransform_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectTransform_5), (void*)L_0);
		// image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1;
		L_1 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___image_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image_6), (void*)L_1);
		// }
		return;
	}
}
// System.Void buttonOver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void buttonOver_Update_m33D25BBC5AAA130841E6966560719773D3F5809C (buttonOver_t45C4AB3C1E3F2A2D890F94A501AA62F8F5E41AA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		// var screenPoint = Camera.main.WorldToScreenPoint(targetTransform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___targetTransform_4;
		NullCheck(L_1);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Camera_WorldToScreenPoint_m26B4C8945C3B5731F1CC5944CFD96BF17126BAA3(L_0, L_2, NULL);
		V_0 = L_3;
		// rectTransform.position = screenPoint;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___rectTransform_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_5, NULL);
		// var viewportPoint =Camera.main.WorldToViewportPoint(targetTransform.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___targetTransform_4;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Camera_WorldToViewportPoint_m285523443225EDA79BBEF9C9EDD76B99CFED054B(L_6, L_8, NULL);
		// var distanceFormCenter =Vector2.Distance(viewportPoint,Vector2.one * 0.5f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_11, (0.5f), NULL);
		float L_13;
		L_13 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_10, L_12, NULL);
		// var show =distanceFormCenter<0.3f;
		V_1 = (bool)((((float)L_13) < ((float)(0.300000012f)))? 1 : 0);
		// GetComponent<Image>().enabled=show;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14;
		L_14 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		bool L_15 = V_1;
		NullCheck(L_14);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void buttonOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void buttonOver__ctor_m988DBC41AC93F9B30F526CB1FB98DC69FC411270 (buttonOver_t45C4AB3C1E3F2A2D890F94A501AA62F8F5E41AA8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void controlReplay::RestGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlReplay_RestGame_m2622C9E342FFEAA9FA163F5254037D3EEAE0044E (controlReplay_tF79ADAE88DDD1A57F8D6898BE95ABB5C354016DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDBC84C90A550DD80C35D058457A671B48C5F186F);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_1, NULL);
		// print("btn is working");
		MonoBehaviour_print_m9E6FF71C673B651F35DD418C293CFC50C46803B6(_stringLiteralDBC84C90A550DD80C35D058457A671B48C5F186F, NULL);
		// }
		return;
	}
}
// System.Void controlReplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void controlReplay__ctor_m880D514FF0B8F7292689DEC18C784507A23662B0 (controlReplay_tF79ADAE88DDD1A57F8D6898BE95ABB5C354016DF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.String ArabicSupport.ArabicFixer::Fix(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D (String_t* ___str0, const RuntimeMethod* method) 
{
	{
		// return Fix(str, false, true);
		String_t* L_0 = ___str0;
		String_t* L_1;
		L_1 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(L_0, (bool)0, (bool)1, NULL);
		return L_1;
	}
}
// System.String ArabicSupport.ArabicFixer::Fix(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m2BFEB0A15F621E65A6D7D6A57C4572802159A7BB (String_t* ___str0, bool ___rtl1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		// if(rtl)
		bool L_0 = ___rtl1;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return Fix(str);
		String_t* L_1 = ___str0;
		String_t* L_2;
		L_2 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_1, NULL);
		return L_2;
	}

IL_000a:
	{
		// string[] words = str.Split(' ');
		String_t* L_3 = ___str0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_3, ((int32_t)32), 0, NULL);
		// string result = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// string arabicToIgnore = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// foreach(string word in words)
		V_2 = L_4;
		V_3 = 0;
		goto IL_0073;
	}

IL_0024:
	{
		// foreach(string word in words)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_2;
		int32_t L_6 = V_3;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		// if(char.IsLower(word.ToLower()[word.Length/2]))
		String_t* L_9 = V_4;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_9, NULL);
		String_t* L_11 = V_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		NullCheck(L_10);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_10, ((int32_t)(L_12/2)), NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Char_IsLower_m9DDB41367F97CFFE6C46A3B5EDE7D11180B5F1AE(L_13, NULL);
		if (!L_14)
		{
			goto IL_0061;
		}
	}
	{
		// result += Fix(arabicToIgnore) + word + " ";
		String_t* L_15 = V_0;
		String_t* L_16 = V_1;
		String_t* L_17;
		L_17 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_16, NULL);
		String_t* L_18 = V_4;
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_15, L_17, L_18, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_0 = L_19;
		// arabicToIgnore = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_006f;
	}

IL_0061:
	{
		// arabicToIgnore += word + " ";
		String_t* L_20 = V_1;
		String_t* L_21 = V_4;
		String_t* L_22;
		L_22 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_20, L_21, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		V_1 = L_22;
	}

IL_006f:
	{
		int32_t L_23 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0073:
	{
		// foreach(string word in words)
		int32_t L_24 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_2;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		// if(arabicToIgnore != "")
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_26, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_27)
		{
			goto IL_0093;
		}
	}
	{
		// result += Fix(arabicToIgnore);
		String_t* L_28 = V_0;
		String_t* L_29 = V_1;
		String_t* L_30;
		L_30 = ArabicFixer_Fix_m36ECBECFC032D385D4EF102D019D4EC164073B6D(L_29, NULL);
		String_t* L_31;
		L_31 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_28, L_30, NULL);
		V_0 = L_31;
	}

IL_0093:
	{
		// return result;
		String_t* L_32 = V_0;
		return L_32;
	}
}
// System.String ArabicSupport.ArabicFixer::Fix(System.String,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7 (String_t* ___str0, bool ___showTashkeel1, bool ___useHinduNumbers2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// ArabicFixerTool.showTashkeel = showTashkeel;
		bool L_0 = ___showTashkeel1;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___showTashkeel_0 = L_0;
		// ArabicFixerTool.useHinduNumbers =useHinduNumbers;
		bool L_1 = ___useHinduNumbers2;
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___useHinduNumbers_2 = L_1;
		// if(str.Contains("\n"))
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		// str = str.Replace("\n", Environment.NewLine);
		String_t* L_4 = ___str0;
		String_t* L_5;
		L_5 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_4);
		String_t* L_6;
		L_6 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_4, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, L_5, NULL);
		___str0 = L_6;
	}

IL_002b:
	{
		// if(str.Contains(Environment.NewLine))
		String_t* L_7 = ___str0;
		String_t* L_8;
		L_8 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_7);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_009b;
		}
	}
	{
		// string[] stringSeparators = new string[] {Environment.NewLine};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		String_t* L_12;
		L_12 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		V_0 = L_11;
		// string[] strSplit = str.Split(stringSeparators, StringSplitOptions.None);
		String_t* L_13 = ___str0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_13);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15;
		L_15 = String_Split_m03F46561E2DF46D1E3AE749A77706EFC2F6488F4(L_13, L_14, 0, NULL);
		V_1 = L_15;
		// if(strSplit.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = V_1;
		NullCheck(L_16);
		if ((((RuntimeArray*)L_16)->max_length))
		{
			goto IL_005b;
		}
	}
	{
		// return ArabicFixerTool.FixLine(str);
		String_t* L_17 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_18;
		L_18 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_17, NULL);
		return L_18;
	}

IL_005b:
	{
		// else if(strSplit.Length == 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = V_1;
		NullCheck(L_19);
		if ((!(((uint32_t)((int32_t)(((RuntimeArray*)L_19)->max_length))) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		// return ArabicFixerTool.FixLine(str);
		String_t* L_20 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_21;
		L_21 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_20, NULL);
		return L_21;
	}

IL_0068:
	{
		// string outputString = ArabicFixerTool.FixLine(strSplit[0]);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_1;
		NullCheck(L_22);
		int32_t L_23 = 0;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_24, NULL);
		V_2 = L_25;
		// int iteration = 1;
		V_3 = 1;
		// if(strSplit.Length > 1)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_1;
		NullCheck(L_26);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0099;
		}
	}
	{
		goto IL_0093;
	}

IL_007b:
	{
		// outputString += Environment.NewLine + ArabicFixerTool.FixLine(strSplit[iteration]);
		String_t* L_27 = V_2;
		String_t* L_28;
		L_28 = Environment_get_NewLine_m8BF68A4EFDAFFB66500984CE779629811BA98FFF(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_1;
		int32_t L_30 = V_3;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		String_t* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_33;
		L_33 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_27, L_28, L_33, NULL);
		V_2 = L_34;
		// iteration++;
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0093:
	{
		// while(iteration < strSplit.Length)
		int32_t L_36 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37 = V_1;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_007b;
		}
	}

IL_0099:
	{
		// return outputString;
		String_t* L_38 = V_2;
		return L_38;
	}

IL_009b:
	{
		// return ArabicFixerTool.FixLine(str);
		String_t* L_39 = ___str0;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		String_t* L_40;
		L_40 = ArabicFixerTool_FixLine_m5441C7D2C05480BBC29B618CB9CE300200EDA207(L_39, NULL);
		return L_40;
	}
}
// System.String ArabicSupport.ArabicFixer::Fix(System.String,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ArabicFixer_Fix_m482EF8A387DADB5E3359D664C6CE4BE74B4ADD01 (String_t* ___str0, bool ___showTashkeel1, bool ___combineTashkeel2, bool ___useHinduNumbers3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ArabicFixerTool.combineTashkeel = combineTashkeel;
		bool L_0 = ___combineTashkeel2;
		il2cpp_codegen_runtime_class_init_inline(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var);
		((ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_StaticFields*)il2cpp_codegen_static_fields_for(ArabicFixerTool_t7AEDF071365CDB1A44DED11CA98318C9A39438FB_il2cpp_TypeInfo_var))->___combineTashkeel_1 = L_0;
		// return Fix(str, showTashkeel, useHinduNumbers);
		String_t* L_1 = ___str0;
		bool L_2 = ___showTashkeel1;
		bool L_3 = ___useHinduNumbers3;
		String_t* L_4;
		L_4 = ArabicFixer_Fix_m0F32E10C67A8F484A9BA9141798114862D7707F7(L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void ArabicSupport.ArabicFixer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArabicFixer__ctor_m1A17AACD8DA1A31DA9213254A2617ED71F229481 (ArabicFixer_t5BB0DCB99F68BE86B55A83D0E771BCBDD37CC506* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ExpectedFixedText_set_Fixed_m3E83944782EDF806F7F31D8D5634CAB00AF28823_inline (ExpectedFixedText_t1E9CAC7DBC7D44E941E471E55F2BB1B30DA13905* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Fixed { get; private set; }
		String_t* L_0 = ___value0;
		__this->___U3CFixedU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CFixedU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* UnityMessageManager_get_Instance_m47C1FACD4FB4D64E2F0612ECDF745A603DE63997_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMessageManager Instance { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0 = ((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityMessageManager_set_Instance_m00B42B2CAC4061379FC777409C11067C030B832B_inline (UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static UnityMessageManager Instance { get; private set; }
		UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var);
		((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_StaticFields*)il2cpp_codegen_static_fields_for(UnityMessageManager_t55C0CD8495B9BA2855D6C614E661E729DF614002_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageDelegate_Invoke_m5C88BF65BFF94836174CF133488C77B334853DCC_inline (MessageDelegate_tD14A044E192668727C7CA3FCCFF76C636F8C298D* __this, String_t* ___message0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___message0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MessageHandlerDelegate_Invoke_mC612A87743048C33E692A082D52C47AB68181A80_inline (MessageHandlerDelegate_tF830202AB59BFB778BA9227DA72E1E9FDFFA9CA8* __this, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5* ___handler0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, MessageHandler_t5CBA985A6A31029C3532CC5B3EABEDF44ACBCFB5*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___handler0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mD945EDDEA0D62D21BFDBAB7B1C0F18DFF1CEC905_inline (int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = il2cpp_codegen_abs(L_0);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_green_mEB001F2CD8C68C6BBAEF9101990B779D3AA2A6EF_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (0.0f), (1.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* ARPlanesChangedEventArgs_get_added_m6E00DD5F0B3261BCBAA8A029924A1F3F4179C747_inline (ARPlanesChangedEventArgs_t8D63E0257BF9942EF8F8C0445F2FD46421017872* __this, const RuntimeMethod* method) 
{
	{
		// public List<ARPlane> added { get; private set; }
		List_1_t10BA05B555C92BD54800DFF82DCAAFC9DE44A077* L_0 = __this->___U3CaddedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mF3227B0AAB9F7FED1883246395F1CEA0D0B06DC5_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, Il2CppChar ___item0, const RuntimeMethod* method) 
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		int32_t L_7 = V_1;
		Il2CppChar L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Il2CppChar)L_8);
		return;
	}

IL_0034:
	{
		Il2CppChar L_9 = ___item0;
		((  void (*) (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7*, Il2CppChar, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mFED740DB424BA5653895BDFFB0A06F7C156541D0_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m0586B319F89682059DD157C1EDC282A2888ECB9B_gshared_inline (List_1_t1FDED00FA37F39564E09D01CFDF33C22BCF5C8A7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
