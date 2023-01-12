#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// AnimacaoPersonagem
struct AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// Bala
struct Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// ControlaArma
struct ControlaArma_t9B94E7D61DE3ACD79046C0AD7DC4FE301A354280;
// ControlaAudio
struct ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B;
// ControlaCamera
struct ControlaCamera_t66CC0FC3C6BE5640F5AC76E91DA1CA4950A4F07A;
// ControlaInimigo
struct ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E;
// ControlaInterface
struct ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2;
// ControlaJogador
struct ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GeradorZumbis
struct GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MovimentoJogador
struct MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD;
// MovimentoPersonagem
struct MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// Status
struct Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// GeradorZumbis/<GerarNovoZumbi>d__10
struct U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral14F9A6672C9D4A48250AE8CCC1F025725709E984;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral588C2599A973D9F2F379A83A78612DFBDAF8BE7F;
IL2CPP_EXTERN_C String_t* _stringLiteral70770474A347C2428D76F7F0B8FAFF0CC33C3C96;
IL2CPP_EXTERN_C String_t* _stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8303F41E04AEBA788C09351D97CFFA0B1B8EB650;
IL2CPP_EXTERN_C String_t* _stringLiteral89E60AD6036ABDBE01553D4B6508F5D7E9ECA6E6;
IL2CPP_EXTERN_C String_t* _stringLiteral91A0A12CD7C94F51178CD4AAD5F27016CBE1E382;
IL2CPP_EXTERN_C String_t* _stringLiteralB60D72565057043A61268762E8159E0BBAD53659;
IL2CPP_EXTERN_C String_t* _stringLiteralD1106FD836C4442AE87B3A0089B056229022B394;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF8AD7CA3CF48101A968D63E95DCEED582B3963D9;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72_m755439E28D0D1B5917AB14FEA7DD2779BF86641A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E_m82F22F2E8F33E5994C7919A3EDA3E25F6F96032A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD_mFCFBE1137D2E464EBA1CC032F93F5FA950AA1AD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370_m3037BC3100A3F57026993A9B8D88770485EC52E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisStatus_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20_m5CD16DD7A628E1895A21668A5511204E061641EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294_mE09B0AE71323CA7A345965058416046AA41062F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGerarNovoZumbiU3Ed__10_System_Collections_IEnumerator_Reset_mF23CC08063A20F93740AC2CF85D600F69BAECDFD_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787;
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

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
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

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
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

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// GeradorZumbis/<GerarNovoZumbi>d__10
struct U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631  : public RuntimeObject
{
	// System.Int32 GeradorZumbis/<GerarNovoZumbi>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GeradorZumbis/<GerarNovoZumbi>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GeradorZumbis GeradorZumbis/<GerarNovoZumbi>d__10::<>4__this
	GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 GeradorZumbis/<GerarNovoZumbi>d__10::<posicaoDeCriacao>5__2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CposicaoDeCriacaoU3E5__2_3;
	// UnityEngine.Collider[] GeradorZumbis/<GerarNovoZumbi>d__10::<colisores>5__3
	ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* ___U3CcolisoresU3E5__3_4;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// AnimacaoPersonagem
struct AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator AnimacaoPersonagem::meuAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___meuAnimator_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// Bala
struct Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Bala::Velocidade
	float ___Velocidade_4;
	// UnityEngine.Rigidbody Bala::rigidbodyBala
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rigidbodyBala_5;
	// UnityEngine.AudioClip Bala::SomDeMorte
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SomDeMorte_6;
};

// ControlaArma
struct ControlaArma_t9B94E7D61DE3ACD79046C0AD7DC4FE301A354280  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ControlaArma::Bala
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Bala_4;
	// UnityEngine.GameObject ControlaArma::CanoDaArma
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___CanoDaArma_5;
	// UnityEngine.AudioClip ControlaArma::SomDoTiro
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SomDoTiro_6;
};

// ControlaAudio
struct ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource ControlaAudio::meuAudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___meuAudioSource_4;
};

// ControlaCamera
struct ControlaCamera_t66CC0FC3C6BE5640F5AC76E91DA1CA4950A4F07A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ControlaCamera::Jogador
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Jogador_4;
	// UnityEngine.Vector3 ControlaCamera::distCompensar
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___distCompensar_5;
};

// ControlaInimigo
struct ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ControlaInimigo::Jogador
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Jogador_4;
	// MovimentoPersonagem ControlaInimigo::movimentaInimigo
	MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* ___movimentaInimigo_5;
	// AnimacaoPersonagem ControlaInimigo::animacaoInimigo
	AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* ___animacaoInimigo_6;
	// Status ControlaInimigo::statusInimigo
	Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* ___statusInimigo_7;
	// UnityEngine.AudioClip ControlaInimigo::SomDeMorte
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SomDeMorte_8;
	// UnityEngine.Vector3 ControlaInimigo::posicaoAleatoria
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___posicaoAleatoria_9;
	// UnityEngine.Vector3 ControlaInimigo::direcao
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direcao_10;
	// System.Single ControlaInimigo::contadorVagar
	float ___contadorVagar_11;
	// System.Single ControlaInimigo::tempoEntrePosicoesAleatorias
	float ___tempoEntrePosicoesAleatorias_12;
};

// ControlaInterface
struct ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// ControlaJogador ControlaInterface::scriptControlaJogador
	ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* ___scriptControlaJogador_4;
	// UnityEngine.UI.Slider ControlaInterface::SliderVidaJogador
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___SliderVidaJogador_5;
	// UnityEngine.GameObject ControlaInterface::PainelDeGameOver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PainelDeGameOver_6;
	// UnityEngine.UI.Text ControlaInterface::TextoTempoDeSobrevivencia
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextoTempoDeSobrevivencia_7;
	// UnityEngine.UI.Text ControlaInterface::TextoPontuacaoMaxima
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___TextoPontuacaoMaxima_8;
	// System.Single ControlaInterface::tempoPontuacaoSalvo
	float ___tempoPontuacaoSalvo_9;
};

// ControlaJogador
struct ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 ControlaJogador::direcao
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direcao_4;
	// UnityEngine.LayerMask ControlaJogador::MascaraChao
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___MascaraChao_5;
	// UnityEngine.GameObject ControlaJogador::TextoGameOver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TextoGameOver_6;
	// ControlaInterface ControlaJogador::scriptControlaInterface
	ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* ___scriptControlaInterface_7;
	// UnityEngine.AudioClip ControlaJogador::SomDeDano
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___SomDeDano_8;
	// MovimentoJogador ControlaJogador::meuMovimentoJogador
	MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD* ___meuMovimentoJogador_9;
	// AnimacaoPersonagem ControlaJogador::animacaoJogador
	AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* ___animacaoJogador_10;
	// Status ControlaJogador::statusJogador
	Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* ___statusJogador_11;
};

// GeradorZumbis
struct GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GeradorZumbis::Zumbi
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Zumbi_4;
	// System.Single GeradorZumbis::contadorTempo
	float ___contadorTempo_5;
	// System.Single GeradorZumbis::TempoGerarZumbi
	float ___TempoGerarZumbi_6;
	// UnityEngine.LayerMask GeradorZumbis::LayerZumbi
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___LayerZumbi_7;
	// System.Single GeradorZumbis::distanciaDeGeracao
	float ___distanciaDeGeracao_8;
	// System.Single GeradorZumbis::DistanciaDoJogadorParaGeracao
	float ___DistanciaDoJogadorParaGeracao_9;
	// UnityEngine.GameObject GeradorZumbis::jogador
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jogador_10;
};

// MovimentoPersonagem
struct MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Rigidbody MovimentoPersonagem::meuRigidbody
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___meuRigidbody_4;
};

// Status
struct Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Status::VidaInicial
	int32_t ___VidaInicial_4;
	// System.Int32 Status::Vida
	int32_t ___Vida_5;
	// System.Single Status::Velocidade
	float ___Velocidade_6;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// MovimentoJogador
struct MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD  : public MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370
{
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

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// <Module>

// <Module>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// UnityEngine.DrivenRectTransformTracker

// UnityEngine.DrivenRectTransformTracker

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.UI.Navigation

// UnityEngine.UI.Navigation

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.UI.SpriteState

// UnityEngine.UI.SpriteState

// UnityEngine.Vector2
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

// UnityEngine.Vector2

// UnityEngine.Vector3
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

// UnityEngine.Vector3

// UnityEngine.Vector4
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

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.UI.ColorBlock

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Ray

// UnityEngine.Ray

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// GeradorZumbis/<GerarNovoZumbi>d__10

// GeradorZumbis/<GerarNovoZumbi>d__10

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.SystemException

// System.SystemException

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// UnityEngine.Collider

// UnityEngine.Collider

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.AudioBehaviour

// UnityEngine.AudioBehaviour

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// AnimacaoPersonagem

// AnimacaoPersonagem

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// Bala

// Bala

// ControlaArma

// ControlaArma

// ControlaAudio
struct ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_StaticFields
{
	// UnityEngine.AudioSource ControlaAudio::instancia
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___instancia_5;
};

// ControlaAudio

// ControlaCamera

// ControlaCamera

// ControlaInimigo

// ControlaInimigo

// ControlaInterface

// ControlaInterface

// ControlaJogador

// ControlaJogador

// GeradorZumbis

// GeradorZumbis

// MovimentoPersonagem

// MovimentoPersonagem

// Status

// Status

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.EventSystems.UIBehaviour

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// MovimentoJogador

// MovimentoJogador

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Selectable

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.MaskableGraphic

// UnityEngine.UI.Slider

// UnityEngine.UI.Slider

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Collider[]
struct ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787  : public RuntimeArray
{
	ALIGN_FIELD (8) Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* m_Items[1];

	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MovePosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<ControlaInimigo>()
inline ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* Component_GetComponent_TisControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E_m82F22F2E8F33E5994C7919A3EDA3E25F6F96032A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ControlaInimigo::TomarDano(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_TomarDano_mCA56F01D036DBF447B66E0FB938C2169877413AA (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, int32_t ___0_dano, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579 (String_t* ___0_buttonName, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___0_clip, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5 (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<AnimacaoPersonagem>()
inline AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* Component_GetComponent_TisAnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72_m755439E28D0D1B5917AB14FEA7DD2779BF86641A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<MovimentoPersonagem>()
inline MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* Component_GetComponent_TisMovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370_m3037BC3100A3F57026993A9B8D88770485EC52E0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void ControlaInimigo::AleatorizarZumbis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_AleatorizarZumbis_mE5A1228E9C71CA272678F2036F0327233FF3C529 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Status>()
inline Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* Component_GetComponent_TisStatus_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20_m5CD16DD7A628E1895A21668A5511204E061641EC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Void MovimentoPersonagem::Rotacionar(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoPersonagem_Rotacionar_m9DD4097320D10FCCEB163ADAFC11494FDCCCBD74 (MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direcao, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void AnimacaoPersonagem::Movimentar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimacaoPersonagem_Movimentar_m24FE540386689B18FF50DC1B6CF02BCC1B1F472F (AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* __this, float ___0_valorDeMovimento, const RuntimeMethod* method) ;
// System.Void ControlaInimigo::Vagar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_Vagar_mBEC91DF4100F7C2CA596566842A965DEA2C9378E (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) ;
// System.Void MovimentoPersonagem::Movimentar(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoPersonagem_Movimentar_m61BA11533681E008B57A2A77EF028D4A5BA74E69 (MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direcao, float ___1_velocidade, const RuntimeMethod* method) ;
// System.Void AnimacaoPersonagem::Atacar(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimacaoPersonagem_Atacar_mA04FA0368D35A797B1371F00F606A94FD6C370A2 (AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* __this, bool ___0_estado, const RuntimeMethod* method) ;
// UnityEngine.Vector3 ControlaInimigo::AleatorizarPosicao()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControlaInimigo_AleatorizarPosicao_m8F48F50BDACFF94B58CD3A3B455939A18F9CF684 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<ControlaJogador>()
inline ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* GameObject_GetComponent_TisControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294_mE09B0AE71323CA7A345965058416046AA41062F1 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void ControlaJogador::TomarDano(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaJogador_TomarDano_m5334465FCB25021A7222D63F36478093C520C2B1 (ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* __this, int32_t ___0_dano, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void ControlaInimigo::Morrer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_Morrer_mA2CB1FBC8B69B37DFA788AC0F91D09B9BA259EC2 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE (Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void ControlaInterface::AtualizarSliderVidaJogador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInterface_AtualizarSliderVidaJogador_m74F36C118722561F2B0CB20B698308411395F0EC (ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_timeSinceLevelLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921 (const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Void ControlaInterface::AjustarPontuacaoMaxima(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInterface_AjustarPontuacaoMaxima_mDAC1908096290D1251D61D15CD19305D9E4D0F55 (ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* __this, int32_t ___0_min, int32_t ___1_seg, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<MovimentoJogador>()
inline MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD* Component_GetComponent_TisMovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD_mFCFBE1137D2E464EBA1CC032F93F5FA950AA1AD5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void MovimentoJogador::RotacaoJogador(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoJogador_RotacaoJogador_m5D392AFFC536982E6875E6DA680E31657A8031AA (MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_MascaraChao, const RuntimeMethod* method) ;
// System.Void ControlaJogador::Morrer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaJogador_Morrer_m0A9F5EE5BC36DC3F5821B13E53E779606EADB6B3 (ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* __this, const RuntimeMethod* method) ;
// System.Void ControlaInterface::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInterface_GameOver_mC3A2D83E3F0A5D9B72AA33C63A30F670FC05B521 (ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GeradorZumbis::GerarNovoZumbi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeradorZumbis_GerarNovoZumbi_m26CCC85CF4146683F2B0A8D0315B628BFA54AC41 (GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_center, float ___1_radius, const RuntimeMethod* method) ;
// System.Void GeradorZumbis/<GerarNovoZumbi>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGerarNovoZumbiU3Ed__10__ctor_m1AF5E34D0505A687A4EA45BA508CBFE0708C303C (U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 GeradorZumbis::AleatorizarPosicao()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GeradorZumbis_AleatorizarPosicao_m9DFB4F4561F39197054875668CAF1B9B8A979B55 (GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// UnityEngine.Collider[] UnityEngine.Physics::OverlapSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* Physics_OverlapSphere_m2D0C9BC78473512F1F89AE731FBAE1B734EDF3EE (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, float ___1_radius, int32_t ___2_layerMask, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_dir, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___2_color, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___0_ray, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___1_hitInfo, float ___2_maxDistance, int32_t ___3_layerMask, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void MovimentoPersonagem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoPersonagem__ctor_m3294E411B8955F3F75EBE0DED6A6ECDBE31AF222 (MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::MoveRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rot, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
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
// System.Void AnimacaoPersonagem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimacaoPersonagem_Awake_mFAA56F80915D8C2F9D1E0FDE85E440C750C9AE52 (AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meuAnimator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___meuAnimator_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meuAnimator_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void AnimacaoPersonagem::Atacar(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimacaoPersonagem_Atacar_mA04FA0368D35A797B1371F00F606A94FD6C370A2 (AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* __this, bool ___0_estado, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral588C2599A973D9F2F379A83A78612DFBDAF8BE7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meuAnimator.SetBool("Atacando", estado);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___meuAnimator_4;
		bool L_1 = ___0_estado;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_0, _stringLiteral588C2599A973D9F2F379A83A78612DFBDAF8BE7F, L_1, NULL);
		// }
		return;
	}
}
// System.Void AnimacaoPersonagem::Movimentar(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimacaoPersonagem_Movimentar_m24FE540386689B18FF50DC1B6CF02BCC1B1F472F (AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* __this, float ___0_valorDeMovimento, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89E60AD6036ABDBE01553D4B6508F5D7E9ECA6E6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meuAnimator.SetFloat("Movendo", valorDeMovimento);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___meuAnimator_4;
		float L_1 = ___0_valorDeMovimento;
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_0, _stringLiteral89E60AD6036ABDBE01553D4B6508F5D7E9ECA6E6, L_1, NULL);
		// }
		return;
	}
}
// System.Void AnimacaoPersonagem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimacaoPersonagem__ctor_m1DDAB1503759DFB8B5A2F7EB06ADA59C4E27478D (AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* __this, const RuntimeMethod* method) 
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
// System.Void Bala::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala_Start_m709F2B37E2B05A85BE1C018EC21244984211FC9B (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigidbodyBala = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___rigidbodyBala_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rigidbodyBala_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Bala::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala_FixedUpdate_m1DB80D0B10EA3C5157F30B841A331528CC53292A (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, const RuntimeMethod* method) 
{
	{
		// rigidbodyBala.MovePosition
		//     (rigidbodyBala.position +
		//     transform.forward * Velocidade * Time.deltaTime);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___rigidbodyBala_5;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___rigidbodyBala_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_3, NULL);
		float L_5 = __this->___Velocidade_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		float L_7;
		L_7 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_8, NULL);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_0, L_9, NULL);
		// }
		return;
	}
}
// System.Void Bala::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala_OnTriggerEnter_m906E43F942021A5424CEB0A47B0FF0AB4A4EF872 (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_objetoDeColisao, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E_m82F22F2E8F33E5994C7919A3EDA3E25F6F96032A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14F9A6672C9D4A48250AE8CCC1F025725709E984);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(objetoDeColisao.tag == "Inimigo")
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_objetoDeColisao;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral14F9A6672C9D4A48250AE8CCC1F025725709E984, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// objetoDeColisao.GetComponent<ControlaInimigo>().TomarDano(1);
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_3 = ___0_objetoDeColisao;
		ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* L_4;
		L_4 = Component_GetComponent_TisControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E_m82F22F2E8F33E5994C7919A3EDA3E25F6F96032A(L_3, Component_GetComponent_TisControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E_m82F22F2E8F33E5994C7919A3EDA3E25F6F96032A_RuntimeMethod_var);
		ControlaInimigo_TomarDano_mCA56F01D036DBF447B66E0FB938C2169877413AA(L_4, 1, NULL);
	}

IL_001e:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_5, NULL);
		// }
		return;
	}
}
// System.Void Bala::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bala__ctor_m7221ED9B6D5939A8DF7DBE39C290C0851F0469A8 (Bala_t47D1B550D7CEC9A607AEF14D466AA537D4503B37* __this, const RuntimeMethod* method) 
{
	{
		// public float Velocidade = 20;
		__this->___Velocidade_4 = (20.0f);
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
// System.Void ControlaArma::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaArma_Start_m293FB859EA8DBFF2D366859E80E0B928FCB2A063 (ControlaArma_t9B94E7D61DE3ACD79046C0AD7DC4FE301A354280* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ControlaArma::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaArma_Update_mBA304A278ACAC5D979BE8B4C0449C48396A1014A (ControlaArma_t9B94E7D61DE3ACD79046C0AD7DC4FE301A354280* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetButtonDown("Fire1"))
		bool L_0;
		L_0 = Input_GetButtonDown_mEF5F80C9E8F04104E807D9CBD6F70CDB98751579(_stringLiteralFBC1FBDF3F91C0637B6624C6C526B3718C7E46A2, NULL);
		if (!L_0)
		{
			goto IL_0048;
		}
	}
	{
		// Instantiate(Bala, CanoDaArma.transform.position, CanoDaArma.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Bala_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___CanoDaArma_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___CanoDaArma_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_1, L_4, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// ControlaAudio.instancia.PlayOneShot(SomDoTiro);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_9 = ((ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_StaticFields*)il2cpp_codegen_static_fields_for(ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var))->___instancia_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_10 = __this->___SomDoTiro_6;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_9, L_10, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void ControlaArma::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaArma__ctor_mCB71DC436E00EF7046AA43BD58FC3759A120C61A (ControlaArma_t9B94E7D61DE3ACD79046C0AD7DC4FE301A354280* __this, const RuntimeMethod* method) 
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
// System.Void ControlaAudio::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaAudio_Awake_m73FEE78F977F6F78950234B7F335E473647E18B9 (ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meuAudioSource = GetComponent<AudioSource>();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		__this->___meuAudioSource_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meuAudioSource_4), (void*)L_0);
		// instancia = meuAudioSource;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___meuAudioSource_4;
		((ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_StaticFields*)il2cpp_codegen_static_fields_for(ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var))->___instancia_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_StaticFields*)il2cpp_codegen_static_fields_for(ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var))->___instancia_5), (void*)L_1);
		// }
		return;
	}
}
// System.Void ControlaAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaAudio__ctor_m735AF5483D8F007D542FA3502EA8A525809B36D3 (ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B* __this, const RuntimeMethod* method) 
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
// System.Void ControlaCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaCamera_Start_mCDB35FAAB8053EF4E7F9F5E79FBD928231725DD6 (ControlaCamera_t66CC0FC3C6BE5640F5AC76E91DA1CA4950A4F07A* __this, const RuntimeMethod* method) 
{
	{
		// distCompensar = transform.position - Jogador.transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Jogador_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_4, NULL);
		__this->___distCompensar_5 = L_5;
		// }
		return;
	}
}
// System.Void ControlaCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaCamera_Update_m23108B766780E6D2CD09A5BECBF5B4612F3B7769 (ControlaCamera_t66CC0FC3C6BE5640F5AC76E91DA1CA4950A4F07A* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = Jogador.transform.position + distCompensar;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Jogador_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___distCompensar_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void ControlaCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaCamera__ctor_m971DF85984D5786DE7C2EBBA4681B9C7E1FB5806 (ControlaCamera_t66CC0FC3C6BE5640F5AC76E91DA1CA4950A4F07A* __this, const RuntimeMethod* method) 
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
// System.Void ControlaInimigo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_Start_m084DE117092C695C61D2E6B3A1BDA88A1E928B63 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72_m755439E28D0D1B5917AB14FEA7DD2779BF86641A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370_m3037BC3100A3F57026993A9B8D88770485EC52E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStatus_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20_m5CD16DD7A628E1895A21668A5511204E061641EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB60D72565057043A61268762E8159E0BBAD53659);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Jogador = GameObject.FindWithTag("Jogador");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteralB60D72565057043A61268762E8159E0BBAD53659, NULL);
		__this->___Jogador_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Jogador_4), (void*)L_0);
		// animacaoInimigo = GetComponent<AnimacaoPersonagem>();
		AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* L_1;
		L_1 = Component_GetComponent_TisAnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72_m755439E28D0D1B5917AB14FEA7DD2779BF86641A(__this, Component_GetComponent_TisAnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72_m755439E28D0D1B5917AB14FEA7DD2779BF86641A_RuntimeMethod_var);
		__this->___animacaoInimigo_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animacaoInimigo_6), (void*)L_1);
		// movimentaInimigo = GetComponent<MovimentoPersonagem>();
		MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* L_2;
		L_2 = Component_GetComponent_TisMovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370_m3037BC3100A3F57026993A9B8D88770485EC52E0(__this, Component_GetComponent_TisMovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370_m3037BC3100A3F57026993A9B8D88770485EC52E0_RuntimeMethod_var);
		__this->___movimentaInimigo_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___movimentaInimigo_5), (void*)L_2);
		// AleatorizarZumbis();
		ControlaInimigo_AleatorizarZumbis_mE5A1228E9C71CA272678F2036F0327233FF3C529(__this, NULL);
		// statusInimigo = GetComponent<Status>();
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_3;
		L_3 = Component_GetComponent_TisStatus_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20_m5CD16DD7A628E1895A21668A5511204E061641EC(__this, Component_GetComponent_TisStatus_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20_m5CD16DD7A628E1895A21668A5511204E061641EC_RuntimeMethod_var);
		__this->___statusInimigo_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___statusInimigo_7), (void*)L_3);
		// }
		return;
	}
}
// System.Void ControlaInimigo::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_FixedUpdate_m37BD39DC9B27F043D4D8F8B07FF716D6429986A9 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float distancia = Vector3.Distance(transform.position, Jogador.transform.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Jogador_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		V_0 = L_5;
		// movimentaInimigo.Rotacionar(direcao);
		MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* L_6 = __this->___movimentaInimigo_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___direcao_10;
		MovimentoPersonagem_Rotacionar_m9DD4097320D10FCCEB163ADAFC11494FDCCCBD74(L_6, L_7, NULL);
		// animacaoInimigo.Movimentar(direcao.magnitude);
		AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* L_8 = __this->___animacaoInimigo_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = (&__this->___direcao_10);
		float L_10;
		L_10 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_9, NULL);
		AnimacaoPersonagem_Movimentar_m24FE540386689B18FF50DC1B6CF02BCC1B1F472F(L_8, L_10, NULL);
		// if (distancia > 15)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(15.0f)))))
		{
			goto IL_0057;
		}
	}
	{
		// Vagar();
		ControlaInimigo_Vagar_mBEC91DF4100F7C2CA596566842A965DEA2C9378E(__this, NULL);
		return;
	}

IL_0057:
	{
		// else if (distancia > 2.5)
		float L_12 = V_0;
		if ((!(((double)((double)L_12)) > ((double)(2.5)))))
		{
			goto IL_00b3;
		}
	}
	{
		// direcao = Jogador.transform.position - transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___Jogador_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_17, NULL);
		__this->___direcao_10 = L_18;
		// movimentaInimigo.Movimentar(direcao, statusInimigo.Velocidade);
		MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* L_19 = __this->___movimentaInimigo_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___direcao_10;
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_21 = __this->___statusInimigo_7;
		float L_22 = L_21->___Velocidade_6;
		MovimentoPersonagem_Movimentar_m61BA11533681E008B57A2A77EF028D4A5BA74E69(L_19, L_20, L_22, NULL);
		// animacaoInimigo.Atacar(false);
		AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* L_23 = __this->___animacaoInimigo_6;
		AnimacaoPersonagem_Atacar_mA04FA0368D35A797B1371F00F606A94FD6C370A2(L_23, (bool)0, NULL);
		return;
	}

IL_00b3:
	{
		// direcao = Jogador.transform.position - transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___Jogador_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_28, NULL);
		__this->___direcao_10 = L_29;
		// animacaoInimigo.Atacar(true);
		AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* L_30 = __this->___animacaoInimigo_6;
		AnimacaoPersonagem_Atacar_mA04FA0368D35A797B1371F00F606A94FD6C370A2(L_30, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ControlaInimigo::Vagar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_Vagar_mBEC91DF4100F7C2CA596566842A965DEA2C9378E (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) 
{
	{
		// contadorVagar -= Time.deltaTime;
		float L_0 = __this->___contadorVagar_11;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___contadorVagar_11 = ((float)il2cpp_codegen_subtract(L_0, L_1));
		// if (contadorVagar <= 0)
		float L_2 = __this->___contadorVagar_11;
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_003e;
		}
	}
	{
		// posicaoAleatoria = AleatorizarPosicao();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = ControlaInimigo_AleatorizarPosicao_m8F48F50BDACFF94B58CD3A3B455939A18F9CF684(__this, NULL);
		__this->___posicaoAleatoria_9 = L_3;
		// contadorVagar += tempoEntrePosicoesAleatorias;
		float L_4 = __this->___contadorVagar_11;
		float L_5 = __this->___tempoEntrePosicoesAleatorias_12;
		__this->___contadorVagar_11 = ((float)il2cpp_codegen_add(L_4, L_5));
	}

IL_003e:
	{
		// bool ficouPertoOSuficiente = Vector3.Distance(transform.position, posicaoAleatoria) <= 0.05;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___posicaoAleatoria_9;
		float L_9;
		L_9 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_7, L_8, NULL);
		// if (ficouPertoOSuficiente)
		if (!((((int32_t)((!(((double)((double)L_9)) <= ((double)(0.050000000000000003))))? 1 : 0)) == ((int32_t)0))? 1 : 0))
		{
			goto IL_009d;
		}
	}
	{
		// direcao = posicaoAleatoria - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___posicaoAleatoria_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_10, L_12, NULL);
		__this->___direcao_10 = L_13;
		// movimentaInimigo.Movimentar(direcao, statusInimigo.Velocidade);
		MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* L_14 = __this->___movimentaInimigo_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___direcao_10;
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_16 = __this->___statusInimigo_7;
		float L_17 = L_16->___Velocidade_6;
		MovimentoPersonagem_Movimentar_m61BA11533681E008B57A2A77EF028D4A5BA74E69(L_14, L_15, L_17, NULL);
	}

IL_009d:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 ControlaInimigo::AleatorizarPosicao()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ControlaInimigo_AleatorizarPosicao_m8F48F50BDACFF94B58CD3A3B455939A18F9CF684 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 posicao = Random.insideUnitSphere * 10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (10.0f), NULL);
		V_0 = L_1;
		// posicao += transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_4, NULL);
		V_0 = L_5;
		// posicao.y = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		(&V_0)->___y_3 = L_8;
		// return posicao;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
// System.Void ControlaInimigo::AtacaJogador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_AtacaJogador_m536B1945912C404DFBC7E13C3CCCECD2B1C58541 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294_mE09B0AE71323CA7A345965058416046AA41062F1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int dano = Random.Range(20, 30);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(((int32_t)20), ((int32_t)30), NULL);
		V_0 = L_0;
		// Jogador.GetComponent<ControlaJogador>().TomarDano(dano);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Jogador_4;
		ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* L_2;
		L_2 = GameObject_GetComponent_TisControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294_mE09B0AE71323CA7A345965058416046AA41062F1(L_1, GameObject_GetComponent_TisControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294_mE09B0AE71323CA7A345965058416046AA41062F1_RuntimeMethod_var);
		int32_t L_3 = V_0;
		ControlaJogador_TomarDano_m5334465FCB25021A7222D63F36478093C520C2B1(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void ControlaInimigo::AleatorizarZumbis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_AleatorizarZumbis_mE5A1228E9C71CA272678F2036F0327233FF3C529 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int geraTipoZumbi = Random.Range(1, 28);
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)28), NULL);
		V_0 = L_0;
		// transform.GetChild(geraTipoZumbi).gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_2 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_1, L_2, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void ControlaInimigo::TomarDano(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_TomarDano_mCA56F01D036DBF447B66E0FB938C2169877413AA (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, int32_t ___0_dano, const RuntimeMethod* method) 
{
	{
		// statusInimigo.Vida -= dano;
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_0 = __this->___statusInimigo_7;
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_1 = L_0;
		int32_t L_2 = L_1->___Vida_5;
		int32_t L_3 = ___0_dano;
		L_1->___Vida_5 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// if (statusInimigo.Vida <= 0)
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_4 = __this->___statusInimigo_7;
		int32_t L_5 = L_4->___Vida_5;
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// Morrer();
		ControlaInimigo_Morrer_mA2CB1FBC8B69B37DFA788AC0F91D09B9BA259EC2(__this, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void ControlaInimigo::Morrer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo_Morrer_mA2CB1FBC8B69B37DFA788AC0F91D09B9BA259EC2 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_0, NULL);
		// ControlaAudio.instancia.PlayOneShot(SomDeMorte);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = ((ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_StaticFields*)il2cpp_codegen_static_fields_for(ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var))->___instancia_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___SomDeMorte_8;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void ControlaInimigo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInimigo__ctor_m7AD9298EE4F6015869C21A5CD0E423BE9D70B4A8 (ControlaInimigo_tFD524FDB9661DC12DB02F8643A61CBB99B3B702E* __this, const RuntimeMethod* method) 
{
	{
		// private float tempoEntrePosicoesAleatorias = 4;
		__this->___tempoEntrePosicoesAleatorias_12 = (4.0f);
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
// System.Void ControlaInterface::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInterface_Start_m5BFF9A3294904DB4D3B110638850B89E7684C006 (ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294_mE09B0AE71323CA7A345965058416046AA41062F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70770474A347C2428D76F7F0B8FAFF0CC33C3C96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB60D72565057043A61268762E8159E0BBAD53659);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scriptControlaJogador = GameObject.FindWithTag("Jogador")
		//                         .GetComponent<ControlaJogador>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteralB60D72565057043A61268762E8159E0BBAD53659, NULL);
		ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* L_1;
		L_1 = GameObject_GetComponent_TisControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294_mE09B0AE71323CA7A345965058416046AA41062F1(L_0, GameObject_GetComponent_TisControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294_mE09B0AE71323CA7A345965058416046AA41062F1_RuntimeMethod_var);
		__this->___scriptControlaJogador_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___scriptControlaJogador_4), (void*)L_1);
		// SliderVidaJogador.maxValue = scriptControlaJogador.statusJogador.Vida;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_2 = __this->___SliderVidaJogador_5;
		ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* L_3 = __this->___scriptControlaJogador_4;
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_4 = L_3->___statusJogador_11;
		int32_t L_5 = L_4->___Vida_5;
		Slider_set_maxValue_m43F3BF47C6D7063D80C578FD9B95AD88494203BE(L_2, ((float)L_5), NULL);
		// AtualizarSliderVidaJogador();
		ControlaInterface_AtualizarSliderVidaJogador_m74F36C118722561F2B0CB20B698308411395F0EC(__this, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// tempoPontuacaoSalvo = PlayerPrefs.GetFloat("PontuacaoMaxima");
		float L_6;
		L_6 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral70770474A347C2428D76F7F0B8FAFF0CC33C3C96, NULL);
		__this->___tempoPontuacaoSalvo_9 = L_6;
		// }
		return;
	}
}
// System.Void ControlaInterface::AtualizarSliderVidaJogador()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInterface_AtualizarSliderVidaJogador_m74F36C118722561F2B0CB20B698308411395F0EC (ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* __this, const RuntimeMethod* method) 
{
	{
		// SliderVidaJogador.value = scriptControlaJogador.statusJogador.Vida;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0 = __this->___SliderVidaJogador_5;
		ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* L_1 = __this->___scriptControlaJogador_4;
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_2 = L_1->___statusJogador_11;
		int32_t L_3 = L_2->___Vida_5;
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, ((float)L_3));
		// }
		return;
	}
}
// System.Void ControlaInterface::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInterface_GameOver_mC3A2D83E3F0A5D9B72AA33C63A30F670FC05B521 (ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8303F41E04AEBA788C09351D97CFFA0B1B8EB650);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1106FD836C4442AE87B3A0089B056229022B394);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8AD7CA3CF48101A968D63E95DCEED582B3963D9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// PainelDeGameOver.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___PainelDeGameOver_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// int minutos = (int)(Time.timeSinceLevelLoad / 60);
		float L_1;
		L_1 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)(L_1/(60.0f))));
		// int segundos = (int)(Time.timeSinceLevelLoad % 60);
		float L_2;
		L_2 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>((fmodf(L_2, (60.0f))));
		// TextoTempoDeSobrevivencia.text =
		//     "Voc? sobreviveu por " + minutos + "min e " + segundos + " segundos.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___TextoTempoDeSobrevivencia_7;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteralF8AD7CA3CF48101A968D63E95DCEED582B3963D9);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF8AD7CA3CF48101A968D63E95DCEED582B3963D9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_6;
		ArrayElementTypeCheck (L_8, _stringLiteralD1106FD836C4442AE87B3A0089B056229022B394);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralD1106FD836C4442AE87B3A0089B056229022B394);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_9;
		ArrayElementTypeCheck (L_11, _stringLiteral8303F41E04AEBA788C09351D97CFFA0B1B8EB650);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral8303F41E04AEBA788C09351D97CFFA0B1B8EB650);
		String_t* L_12;
		L_12 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_12);
		// AjustarPontuacaoMaxima(minutos, segundos);
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		ControlaInterface_AjustarPontuacaoMaxima_mDAC1908096290D1251D61D15CD19305D9E4D0F55(__this, L_13, L_14, NULL);
		// }
		return;
	}
}
// System.Void ControlaInterface::AjustarPontuacaoMaxima(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInterface_AjustarPontuacaoMaxima_mDAC1908096290D1251D61D15CD19305D9E4D0F55 (ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* __this, int32_t ___0_min, int32_t ___1_seg, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70770474A347C2428D76F7F0B8FAFF0CC33C3C96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91A0A12CD7C94F51178CD4AAD5F27016CBE1E382);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Time.timeSinceLevelLoad > tempoPontuacaoSalvo)
		float L_0;
		L_0 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		float L_1 = __this->___tempoPontuacaoSalvo_9;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0049;
		}
	}
	{
		// tempoPontuacaoSalvo = Time.timeSinceLevelLoad;
		float L_2;
		L_2 = Time_get_timeSinceLevelLoad_m65C386103A91B172781032CA1A6FFDEC8CFBA921(NULL);
		__this->___tempoPontuacaoSalvo_9 = L_2;
		// TextoPontuacaoMaxima.text =
		//     string.Format("Seu melhor tempo ? {0}min e {1}s.", min, seg);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___TextoPontuacaoMaxima_8;
		int32_t L_4 = ___0_min;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		int32_t L_7 = ___1_seg;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral91A0A12CD7C94F51178CD4AAD5F27016CBE1E382, L_6, L_9, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_10);
		// PlayerPrefs.SetFloat("PontuacaoMaxima", tempoPontuacaoSalvo);
		float L_11 = __this->___tempoPontuacaoSalvo_9;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral70770474A347C2428D76F7F0B8FAFF0CC33C3C96, L_11, NULL);
	}

IL_0049:
	{
		// if (TextoPontuacaoMaxima.text == "")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___TextoPontuacaoMaxima_8;
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_12);
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_14)
		{
			goto IL_0099;
		}
	}
	{
		// min = (int)tempoPontuacaoSalvo / 60;
		float L_15 = __this->___tempoPontuacaoSalvo_9;
		___0_min = ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_15)/((int32_t)60)));
		// seg = (int)tempoPontuacaoSalvo % 60;
		float L_16 = __this->___tempoPontuacaoSalvo_9;
		___1_seg = ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_16)%((int32_t)60)));
		// TextoPontuacaoMaxima.text =
		//     string.Format("Seu melhor tempo ? {0}min e {1}s.", min, seg);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___TextoPontuacaoMaxima_8;
		int32_t L_18 = ___0_min;
		int32_t L_19 = L_18;
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		int32_t L_21 = ___1_seg;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_22);
		String_t* L_24;
		L_24 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral91A0A12CD7C94F51178CD4AAD5F27016CBE1E382, L_20, L_23, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_24);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void ControlaInterface::Reiniciar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInterface_Reiniciar_mCD19BA2D91657723C18037735A6AF5846F77D22C (ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("game");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral7AA85CFCC1B14978AFCF12FABD54D2AC74400E8B, NULL);
		// }
		return;
	}
}
// System.Void ControlaInterface::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaInterface__ctor_m1D18F0206503D5BBAA7081101E8578C4C5E72D03 (ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* __this, const RuntimeMethod* method) 
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
// System.Void ControlaJogador::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaJogador_Start_mD3A7DAE4E105FF770F87DC26B09DF234F782B36A (ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72_m755439E28D0D1B5917AB14FEA7DD2779BF86641A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD_mFCFBE1137D2E464EBA1CC032F93F5FA950AA1AD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisStatus_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20_m5CD16DD7A628E1895A21668A5511204E061641EC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meuMovimentoJogador = GetComponent<MovimentoJogador>();
		MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD* L_0;
		L_0 = Component_GetComponent_TisMovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD_mFCFBE1137D2E464EBA1CC032F93F5FA950AA1AD5(__this, Component_GetComponent_TisMovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD_mFCFBE1137D2E464EBA1CC032F93F5FA950AA1AD5_RuntimeMethod_var);
		__this->___meuMovimentoJogador_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meuMovimentoJogador_9), (void*)L_0);
		// animacaoJogador = GetComponent<AnimacaoPersonagem>();
		AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* L_1;
		L_1 = Component_GetComponent_TisAnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72_m755439E28D0D1B5917AB14FEA7DD2779BF86641A(__this, Component_GetComponent_TisAnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72_m755439E28D0D1B5917AB14FEA7DD2779BF86641A_RuntimeMethod_var);
		__this->___animacaoJogador_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animacaoJogador_10), (void*)L_1);
		// statusJogador = GetComponent<Status>();
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_2;
		L_2 = Component_GetComponent_TisStatus_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20_m5CD16DD7A628E1895A21668A5511204E061641EC(__this, Component_GetComponent_TisStatus_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20_m5CD16DD7A628E1895A21668A5511204E061641EC_RuntimeMethod_var);
		__this->___statusJogador_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___statusJogador_11), (void*)L_2);
		// }
		return;
	}
}
// System.Void ControlaJogador::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaJogador_Update_m88FEA05474F50054E7940C7910320E7BEF181DA0 (ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float eixoX = Input.GetAxis("Horizontal");
		float L_0;
		L_0 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = L_0;
		// float eixoZ = Input.GetAxis("Vertical");
		float L_1;
		L_1 = Input_GetAxis_m10372E6C5FF591668D2DC5F58C58D213CC598A62(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = L_1;
		// direcao = new Vector3(eixoX, 0, eixoZ);
		float L_2 = V_0;
		float L_3 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_2, (0.0f), L_3, /*hidden argument*/NULL);
		__this->___direcao_4 = L_4;
		// animacaoJogador.Movimentar(direcao.magnitude);
		AnimacaoPersonagem_tF3286BDB8BBF910FF8DECC5A8971B2F4C69FFC72* L_5 = __this->___animacaoJogador_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&__this->___direcao_4);
		float L_7;
		L_7 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_6, NULL);
		AnimacaoPersonagem_Movimentar_m24FE540386689B18FF50DC1B6CF02BCC1B1F472F(L_5, L_7, NULL);
		// }
		return;
	}
}
// System.Void ControlaJogador::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaJogador_FixedUpdate_m8C28D478EC7452A312261C3CE6C0589EB9EA550D (ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* __this, const RuntimeMethod* method) 
{
	{
		// meuMovimentoJogador.Movimentar(direcao, statusJogador.Velocidade);
		MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD* L_0 = __this->___meuMovimentoJogador_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___direcao_4;
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_2 = __this->___statusJogador_11;
		float L_3 = L_2->___Velocidade_6;
		MovimentoPersonagem_Movimentar_m61BA11533681E008B57A2A77EF028D4A5BA74E69(L_0, L_1, L_3, NULL);
		// meuMovimentoJogador.RotacaoJogador(MascaraChao);
		MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD* L_4 = __this->___meuMovimentoJogador_9;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_5 = __this->___MascaraChao_5;
		MovimentoJogador_RotacaoJogador_m5D392AFFC536982E6875E6DA680E31657A8031AA(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void ControlaJogador::TomarDano(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaJogador_TomarDano_m5334465FCB25021A7222D63F36478093C520C2B1 (ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* __this, int32_t ___0_dano, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// statusJogador.Vida -= dano;
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_0 = __this->___statusJogador_11;
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_1 = L_0;
		int32_t L_2 = L_1->___Vida_5;
		int32_t L_3 = ___0_dano;
		L_1->___Vida_5 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// scriptControlaInterface.AtualizarSliderVidaJogador();
		ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* L_4 = __this->___scriptControlaInterface_7;
		ControlaInterface_AtualizarSliderVidaJogador_m74F36C118722561F2B0CB20B698308411395F0EC(L_4, NULL);
		// ControlaAudio.instancia.PlayOneShot(SomDeDano);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = ((ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_StaticFields*)il2cpp_codegen_static_fields_for(ControlaAudio_t73D528E850D94FC740CCB38B0D3E9110DBED687B_il2cpp_TypeInfo_var))->___instancia_5;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_6 = __this->___SomDeDano_8;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_5, L_6, NULL);
		// if(statusJogador.Vida <= 0)
		Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* L_7 = __this->___statusJogador_11;
		int32_t L_8 = L_7->___Vida_5;
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		// Morrer();
		ControlaJogador_Morrer_m0A9F5EE5BC36DC3F5821B13E53E779606EADB6B3(__this, NULL);
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void ControlaJogador::Morrer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaJogador_Morrer_m0A9F5EE5BC36DC3F5821B13E53E779606EADB6B3 (ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* __this, const RuntimeMethod* method) 
{
	{
		// scriptControlaInterface.GameOver();
		ControlaInterface_t49388D59F26BA70D54FFB788DDF28D94105443C2* L_0 = __this->___scriptControlaInterface_7;
		ControlaInterface_GameOver_mC3A2D83E3F0A5D9B72AA33C63A30F670FC05B521(L_0, NULL);
		// }
		return;
	}
}
// System.Void ControlaJogador::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControlaJogador__ctor_m8B550C7B60EC22038A457D1FE93CFF86C67CD174 (ControlaJogador_tAEE6A8480D6EF69E7EF91832B0DE30C3B9276294* __this, const RuntimeMethod* method) 
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
// System.Void GeradorZumbis::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeradorZumbis_Start_m312728CFF41A4A16C88B8BE8A97C30C97548A2F5 (GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB60D72565057043A61268762E8159E0BBAD53659);
		s_Il2CppMethodInitialized = true;
	}
	{
		// jogador = GameObject.FindWithTag("Jogador");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_FindWithTag_mDF825E000B03F4F3DE9D4F2EBABC96BFA34B62E5(_stringLiteralB60D72565057043A61268762E8159E0BBAD53659, NULL);
		__this->___jogador_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jogador_10), (void*)L_0);
		// }
		return;
	}
}
// System.Void GeradorZumbis::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeradorZumbis_Update_mCD5CFF3B1007F4F5F5CD4B8BA3974DC1EF0C92F0 (GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* __this, const RuntimeMethod* method) 
{
	{
		// if (Vector3.Distance(transform.position,
		//     jogador.transform.position) >
		//     DistanciaDoJogadorParaGeracao)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___jogador_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5;
		L_5 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_1, L_4, NULL);
		float L_6 = __this->___DistanciaDoJogadorParaGeracao_9;
		if ((!(((float)L_5) > ((float)L_6))))
		{
			goto IL_0060;
		}
	}
	{
		// contadorTempo += Time.deltaTime;
		float L_7 = __this->___contadorTempo_5;
		float L_8;
		L_8 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___contadorTempo_5 = ((float)il2cpp_codegen_add(L_7, L_8));
		// if (contadorTempo >= TempoGerarZumbi)
		float L_9 = __this->___contadorTempo_5;
		float L_10 = __this->___TempoGerarZumbi_6;
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_0060;
		}
	}
	{
		// StartCoroutine(GerarNovoZumbi());
		RuntimeObject* L_11;
		L_11 = GeradorZumbis_GerarNovoZumbi_m26CCC85CF4146683F2B0A8D0315B628BFA54AC41(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_12;
		L_12 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_11, NULL);
		// contadorTempo = 0;
		__this->___contadorTempo_5 = (0.0f);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void GeradorZumbis::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeradorZumbis_OnDrawGizmos_mA666AC664EDFD8C7DFBCCC2E251C34BCD282935F (GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* __this, const RuntimeMethod* method) 
{
	{
		// Gizmos.color = Color.yellow;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		L_0 = Color_get_yellow_m66637FA14383E8D74F24AE256B577CE1D55D469F_inline(NULL);
		Gizmos_set_color_m53927A2741937484180B20B55F7F20F8F60C5797(L_0, NULL);
		// Gizmos.DrawWireSphere(transform.position, distanciaDeGeracao);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___distanciaDeGeracao_8;
		Gizmos_DrawWireSphere_m12C01EC9334C32425074A214C5B876271B3DDBA1(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GeradorZumbis::GerarNovoZumbi()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GeradorZumbis_GerarNovoZumbi_m26CCC85CF4146683F2B0A8D0315B628BFA54AC41 (GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631* L_0 = (U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631*)il2cpp_codegen_object_new(U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631_il2cpp_TypeInfo_var);
		U3CGerarNovoZumbiU3Ed__10__ctor_m1AF5E34D0505A687A4EA45BA508CBFE0708C303C(L_0, 0, NULL);
		U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// UnityEngine.Vector3 GeradorZumbis::AleatorizarPosicao()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GeradorZumbis_AleatorizarPosicao_m9DFB4F4561F39197054875668CAF1B9B8A979B55 (GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 posicao = Random.insideUnitSphere * distanciaDeGeracao;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Random_get_insideUnitSphere_mA488D6859560B73565B8D890ED6B39DB4091C54F(NULL);
		float L_1 = __this->___distanciaDeGeracao_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_1, NULL);
		V_0 = L_2;
		// posicao += transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_5, NULL);
		V_0 = L_6;
		// posicao.y = 0;
		(&V_0)->___y_3 = (0.0f);
		// return posicao;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
// System.Void GeradorZumbis::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GeradorZumbis__ctor_mABA6274BE02FC979F0A41611E53F56B43492712A (GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* __this, const RuntimeMethod* method) 
{
	{
		// public float TempoGerarZumbi = 1;
		__this->___TempoGerarZumbi_6 = (1.0f);
		// private float distanciaDeGeracao = 3;
		__this->___distanciaDeGeracao_8 = (3.0f);
		// private float DistanciaDoJogadorParaGeracao = 20;
		__this->___DistanciaDoJogadorParaGeracao_9 = (20.0f);
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
// System.Void GeradorZumbis/<GerarNovoZumbi>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGerarNovoZumbiU3Ed__10__ctor_m1AF5E34D0505A687A4EA45BA508CBFE0708C303C (U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GeradorZumbis/<GerarNovoZumbi>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGerarNovoZumbiU3Ed__10_System_IDisposable_Dispose_m7C67B491DBF57C440C78402A2A47BA1E523CED3C (U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GeradorZumbis/<GerarNovoZumbi>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGerarNovoZumbiU3Ed__10_MoveNext_mBAC5E2F972A09C468F65E2B6341D9BDCCB2A34A0 (U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0085;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Vector3 posicaoDeCriacao = AleatorizarPosicao();
		GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* L_4 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = GeradorZumbis_AleatorizarPosicao_m9DFB4F4561F39197054875668CAF1B9B8A979B55(L_4, NULL);
		__this->___U3CposicaoDeCriacaoU3E5__2_3 = L_5;
		// Collider[] colisores = Physics.OverlapSphere(posicaoDeCriacao, 1, LayerZumbi);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___U3CposicaoDeCriacaoU3E5__2_3;
		GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* L_7 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = L_7->___LayerZumbi_7;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_8, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_10;
		L_10 = Physics_OverlapSphere_m2D0C9BC78473512F1F89AE731FBAE1B734EDF3EE(L_6, (1.0f), L_9, NULL);
		__this->___U3CcolisoresU3E5__3_4 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcolisoresU3E5__3_4), (void*)L_10);
		goto IL_008c;
	}

IL_004d:
	{
		// AleatorizarPosicao();
		GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* L_11 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = GeradorZumbis_AleatorizarPosicao_m9DFB4F4561F39197054875668CAF1B9B8A979B55(L_11, NULL);
		// colisores = Physics.OverlapSphere(posicaoDeCriacao, 1, LayerZumbi);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___U3CposicaoDeCriacaoU3E5__2_3;
		GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* L_14 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_15 = L_14->___LayerZumbi_7;
		int32_t L_16;
		L_16 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_15, NULL);
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_17;
		L_17 = Physics_OverlapSphere_m2D0C9BC78473512F1F89AE731FBAE1B734EDF3EE(L_13, (1.0f), L_16, NULL);
		__this->___U3CcolisoresU3E5__3_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcolisoresU3E5__3_4), (void*)L_17);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0085:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_008c:
	{
		// while (colisores.Length > 0)
		ColliderU5BU5D_t94A9D70F63D095AFF2A9B4613012A5F7F3141787* L_18 = __this->___U3CcolisoresU3E5__3_4;
		if ((((RuntimeArray*)L_18)->max_length))
		{
			goto IL_004d;
		}
	}
	{
		// Instantiate(Zumbi, posicaoDeCriacao, transform.rotation);
		GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* L_19 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___Zumbi_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___U3CposicaoDeCriacaoU3E5__2_3;
		GeradorZumbis_tC86F9259CC53ABDB68190FCAF30C48EFAD713431* L_22 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_20, L_21, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		// }
		return (bool)0;
	}
}
// System.Object GeradorZumbis/<GerarNovoZumbi>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGerarNovoZumbiU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB5BB04C26B6B51964212FF7E83DE7C49DA16CCAC (U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GeradorZumbis/<GerarNovoZumbi>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGerarNovoZumbiU3Ed__10_System_Collections_IEnumerator_Reset_mF23CC08063A20F93740AC2CF85D600F69BAECDFD (U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGerarNovoZumbiU3Ed__10_System_Collections_IEnumerator_Reset_mF23CC08063A20F93740AC2CF85D600F69BAECDFD_RuntimeMethod_var)));
	}
}
// System.Object GeradorZumbis/<GerarNovoZumbi>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGerarNovoZumbiU3Ed__10_System_Collections_IEnumerator_get_Current_m7732CF9FE20A6CD61C7C2C9F4BF2ABFD37302A57 (U3CGerarNovoZumbiU3Ed__10_tB9B9BAE27AFC9A7835104C489D82A522CB434631* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void MovimentoJogador::RotacaoJogador(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoJogador_RotacaoJogador_m5D392AFFC536982E6875E6DA680E31657A8031AA (MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD* __this, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_MascaraChao, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Ray raio = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		V_0 = L_2;
		// Debug.DrawRay(raio.origin, raio.direction * 100, Color.red);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, (100.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = Color_get_red_mA2E53E7173FDC97E68E335049AB0FAAEE43A844D_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_mB172868181856F153732BB56C0BE1C58EE598F53(L_3, L_5, L_6, NULL);
		// if (Physics.Raycast(raio, out impacto, 100, MascaraChao))
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7 = V_0;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_8 = ___0_MascaraChao;
		int32_t L_9;
		L_9 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_8, NULL);
		bool L_10;
		L_10 = Physics_Raycast_m34AC1210E893A9EF969BD2C7104B10BE5B580025(L_7, (&V_1), (100.0f), L_9, NULL);
		if (!L_10)
		{
			goto IL_007d;
		}
	}
	{
		// Vector3 posicaoMiraJogador = impacto.point - transform.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_1), NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_13, NULL);
		V_2 = L_14;
		// posicaoMiraJogador.y = transform.position.y;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___y_3;
		(&V_2)->___y_3 = L_17;
		// Rotacionar(posicaoMiraJogador);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_2;
		MovimentoPersonagem_Rotacionar_m9DD4097320D10FCCEB163ADAFC11494FDCCCBD74(__this, L_18, NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void MovimentoJogador::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoJogador__ctor_m27D7CD93CC0E36236141FD73AE36B74C27FE8375 (MovimentoJogador_t76414132DA269D349A19FB5AF2B342ABAA3EE4AD* __this, const RuntimeMethod* method) 
{
	{
		MovimentoPersonagem__ctor_m3294E411B8955F3F75EBE0DED6A6ECDBE31AF222(__this, NULL);
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
// System.Void MovimentoPersonagem::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoPersonagem_Awake_m6CB01AC700306383CEE1EACBDA94B20182A9C443 (MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// meuRigidbody = GetComponent<Rigidbody>();
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		__this->___meuRigidbody_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___meuRigidbody_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void MovimentoPersonagem::Movimentar(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoPersonagem_Movimentar_m61BA11533681E008B57A2A77EF028D4A5BA74E69 (MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direcao, float ___1_velocidade, const RuntimeMethod* method) 
{
	{
		// meuRigidbody.MovePosition(
		//         meuRigidbody.position +
		//         direcao.normalized * velocidade * Time.deltaTime);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___meuRigidbody_4;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_1 = __this->___meuRigidbody_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___0_direcao), NULL);
		float L_4 = ___1_velocidade;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_7, NULL);
		Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9(L_0, L_8, NULL);
		// }
		return;
	}
}
// System.Void MovimentoPersonagem::Rotacionar(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoPersonagem_Rotacionar_m9DD4097320D10FCCEB163ADAFC11494FDCCCBD74 (MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direcao, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Quaternion novaRotacao = Quaternion.LookRotation(direcao);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_direcao;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_LookRotation_mDB2CCA75B8E1AB98104F2A6E1A1EA57D0D1298D7(L_0, NULL);
		V_0 = L_1;
		// meuRigidbody.MoveRotation(novaRotacao);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = __this->___meuRigidbody_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		Rigidbody_MoveRotation_m85825C7206E770E39DED9EE6D792702F577A891D(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void MovimentoPersonagem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovimentoPersonagem__ctor_m3294E411B8955F3F75EBE0DED6A6ECDBE31AF222 (MovimentoPersonagem_t2F75808127763C0032AE92BC347536AE52D88370* __this, const RuntimeMethod* method) 
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
// System.Void Status::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status_Awake_m3877AF00AE3FDEBFBC5ECF28D6DE211BB3CA3135 (Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* __this, const RuntimeMethod* method) 
{
	{
		// Vida = VidaInicial;
		int32_t L_0 = __this->___VidaInicial_4;
		__this->___Vida_5 = L_0;
		// }
		return;
	}
}
// System.Void Status::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Status__ctor_mCD3A8B66754099A270AC6299DED340B74D998EE4 (Status_tB4DBB7C7039F0A158359471F89114CC4AF6E1B20* __this, const RuntimeMethod* method) 
{
	{
		// public int VidaInicial = 100;
		__this->___VidaInicial_4 = ((int32_t)100);
		// public float Velocidade = 5;
		__this->___Velocidade_6 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
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
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
