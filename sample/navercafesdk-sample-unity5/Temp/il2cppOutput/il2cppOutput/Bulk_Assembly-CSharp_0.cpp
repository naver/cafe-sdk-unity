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

// SampleBehaviour/<SaveScreenShot>c__Iterator0
struct U3CSaveScreenShotU3Ec__Iterator0_t7_1;
// System.Object
struct Object_t;
// SampleBehaviour
struct SampleBehaviour_t7_2;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// GLink
struct GLink_t7_3;
// IGLink
struct IGLink_t7_4;
// GLinkAndroid
struct GLinkAndroid_t7_5;
// System.String
struct String_t;
// GLinkiOS/NCSDKDidLoadDelegate
struct NCSDKDidLoadDelegate_t7_7;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// GLinkiOS/NCSDKDidUnLoadDelegate
struct NCSDKDidUnLoadDelegate_t7_8;
// GLinkiOS/NCSDKJoinedCafeDelegate
struct NCSDKJoinedCafeDelegate_t7_9;
// GLinkiOS/NCSDKPostedArticleAtMenuDelegate
struct NCSDKPostedArticleAtMenuDelegate_t7_10;
// GLinkiOS/NCSDKPostedCommentAtArticleDelegate
struct NCSDKPostedCommentAtArticleDelegate_t7_11;
// GLinkiOS/NCSDKWidgetPostAriticleWithImageDelegate
struct NCSDKWidgetPostAriticleWithImageDelegate_t7_12;
// GLinkiOS/NCSDKDidVoteAtArticleDelegate
struct NCSDKDidVoteAtArticleDelegate_t7_13;
// GLinkiOS/<CoFunction>c__Iterator1
struct U3CCoFunctionU3Ec__Iterator1_t7_14;
// GLinkiOS
struct GLinkiOS_t7_15;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"
#include "AssemblyU2DCSharp_SampleBehaviour_U3CSaveScreenShotU3Ec__Ite.h"
#include "AssemblyU2DCSharp_SampleBehaviour_U3CSaveScreenShotU3Ec__IteMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_Boolean.h"
#include "UnityEngine_UnityEngine_WaitForEndOfFrameMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ScreenMethodDeclarations.h"
#include "UnityEngine_UnityEngine_Texture2DMethodDeclarations.h"
#include "UnityEngine_UnityEngine_RectMethodDeclarations.h"
#include "mscorlib_System_IO_FileMethodDeclarations.h"
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkMethodDeclarations.h"
#include "mscorlib_System_UInt32.h"
#include "mscorlib_System_Int32.h"
#include "UnityEngine_UnityEngine_WaitForEndOfFrame.h"
#include "mscorlib_System_String.h"
#include "UnityEngine_UnityEngine_Texture2D.h"
#include "UnityEngine_UnityEngine_TextureFormat.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "mscorlib_System_Single.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"
#include "UnityEngine_UnityEngine_Object.h"
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
#include "mscorlib_System_NotSupportedException.h"
#include "AssemblyU2DCSharp_SampleBehaviour.h"
#include "AssemblyU2DCSharp_SampleBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Coroutine.h"
#include "AssemblyU2DCSharp_GLink.h"
#include "AssemblyU2DCSharp_GLinkiOSMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkiOS.h"
#include "AssemblyU2DCSharp_GLinkAndroid.h"
#include "AssemblyU2DCSharp_GLinkAndroidMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkConfig.h"
#include "AssemblyU2DCSharp_GLinkConfigMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKDidLoadDelegate.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKDidLoadDelegateMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_AsyncCallback.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKDidUnLoadDelegate.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKDidUnLoadDelegateMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKJoinedCafeDelegate.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKJoinedCafeDelegateMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKPostedArticleAtMenuDelegate.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKPostedArticleAtMenuDelegateMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKPostedCommentAtArticleDelega.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKPostedCommentAtArticleDelegaMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKWidgetPostAriticleWithImageD.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKWidgetPostAriticleWithImageDMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKDidVoteAtArticleDelegate.h"
#include "AssemblyU2DCSharp_GLinkiOS_NCSDKDidVoteAtArticleDelegateMethodDeclarations.h"
#include "AssemblyU2DCSharp_GLinkiOS_U3CCoFunctionU3Ec__Iterator1.h"
#include "AssemblyU2DCSharp_GLinkiOS_U3CCoFunctionU3Ec__Iterator1MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject.h"

// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" Object_t * GameObject_AddComponent_TisObject_t_m5_1339_gshared (GameObject_t5_91 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisObject_t_m5_1339(__this, method) (( Object_t * (*) (GameObject_t5_91 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m5_1339_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<GLinkiOS>()
#define GameObject_AddComponent_TisGLinkiOS_t7_15_m5_1350(__this, method) (( GLinkiOS_t7_15 * (*) (GameObject_t5_91 *, const MethodInfo*))GameObject_AddComponent_TisObject_t_m5_1339_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SampleBehaviour/<SaveScreenShot>c__Iterator0::.ctor()
extern "C" void U3CSaveScreenShotU3Ec__Iterator0__ctor_m7_0 (U3CSaveScreenShotU3Ec__Iterator0_t7_1 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object SampleBehaviour/<SaveScreenShot>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CSaveScreenShotU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m7_1 (U3CSaveScreenShotU3Ec__Iterator0_t7_1 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Object SampleBehaviour/<SaveScreenShot>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CSaveScreenShotU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m7_2 (U3CSaveScreenShotU3Ec__Iterator0_t7_1 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_4);
		return L_0;
	}
}
// System.Boolean SampleBehaviour/<SaveScreenShot>c__Iterator0::MoveNext()
extern TypeInfo* WaitForEndOfFrame_t5_12_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Texture2D_t5_31_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t1_3_il2cpp_TypeInfo_var;
extern TypeInfo* GLink_t7_3_il2cpp_TypeInfo_var;
extern TypeInfo* IGLink_t7_4_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2717;
extern Il2CppCodeGenString* _stringLiteral2718;
extern Il2CppCodeGenString* _stringLiteral2719;
extern "C" bool U3CSaveScreenShotU3Ec__Iterator0_MoveNext_m7_3 (U3CSaveScreenShotU3Ec__Iterator0_t7_1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t5_12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1105);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Texture2D_t5_31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(850);
		Int32_t1_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		GLink_t7_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1162);
		IGLink_t7_4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1163);
		_stringLiteral2717 = il2cpp_codegen_string_literal_from_index(2717);
		_stringLiteral2718 = il2cpp_codegen_string_literal_from_index(2718);
		_stringLiteral2719 = il2cpp_codegen_string_literal_from_index(2719);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_3);
		V_0 = L_0;
		__this->___U24PC_3 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0025;
		}
		if (L_1 == 1)
		{
			goto IL_003c;
		}
		if (L_1 == 2)
		{
			goto IL_00a8;
		}
	}
	{
		goto IL_00f8;
	}

IL_0025:
	{
		WaitForEndOfFrame_t5_12 * L_2 = (WaitForEndOfFrame_t5_12 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t5_12_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m5_11(L_2, /*hidden argument*/NULL);
		__this->___U24current_4 = L_2;
		__this->___U24PC_3 = 1;
		goto IL_00fa;
	}

IL_003c:
	{
		String_t* L_3 = Application_get_persistentDataPath_m5_523(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1_420(NULL /*static, unused*/, L_3, _stringLiteral2717, /*hidden argument*/NULL);
		__this->___U3CfilePathU3E__0_0 = L_4;
		int32_t L_5 = Screen_get_width_m5_143(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m5_144(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t5_31 * L_7 = (Texture2D_t5_31 *)il2cpp_codegen_object_new (Texture2D_t5_31_il2cpp_TypeInfo_var);
		Texture2D__ctor_m5_154(L_7, L_5, L_6, 3, 0, /*hidden argument*/NULL);
		__this->___U3CtextureU3E__1_1 = L_7;
		Texture2D_t5_31 * L_8 = (__this->___U3CtextureU3E__1_1);
		int32_t L_9 = Screen_get_width_m5_143(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_10 = Screen_get_height_m5_144(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t5_49  L_11 = {0};
		Rect__ctor_m5_281(&L_11, (0.0f), (0.0f), (((float)((float)L_9))), (((float)((float)L_10))), /*hidden argument*/NULL);
		NullCheck(L_8);
		Texture2D_ReadPixels_m5_161(L_8, L_11, 0, 0, /*hidden argument*/NULL);
		int32_t L_12 = 0;
		Object_t * L_13 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_12);
		__this->___U24current_4 = L_13;
		__this->___U24PC_3 = 2;
		goto IL_00fa;
	}

IL_00a8:
	{
		Texture2D_t5_31 * L_14 = (__this->___U3CtextureU3E__1_1);
		NullCheck(L_14);
		ByteU5BU5D_t1_70* L_15 = Texture2D_EncodeToPNG_m5_163(L_14, /*hidden argument*/NULL);
		__this->___U3CbytesU3E__2_2 = L_15;
		String_t* L_16 = (__this->___U3CfilePathU3E__0_0);
		ByteU5BU5D_t1_70* L_17 = (__this->___U3CbytesU3E__2_2);
		File_WriteAllBytes_m1_2116(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		Texture2D_t5_31 * L_18 = (__this->___U3CtextureU3E__1_1);
		Object_DestroyObject_m5_635(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GLink_t7_3_il2cpp_TypeInfo_var);
		Object_t * L_19 = GLink_sharedInstance_m7_12(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_20 = (__this->___U3CfilePathU3E__0_0);
		NullCheck(L_19);
		InterfaceActionInvoker4< int32_t, String_t*, String_t*, String_t* >::Invoke(7 /* System.Void IGLink::executeArticlePostWithImage(System.Int32,System.String,System.String,System.String) */, IGLink_t7_4_il2cpp_TypeInfo_var, L_19, ((int32_t)10), _stringLiteral2718, _stringLiteral2719, L_20);
		__this->___U24PC_3 = (-1);
	}

IL_00f8:
	{
		return 0;
	}

IL_00fa:
	{
		return 1;
	}
	// Dead block : IL_00fc: ldloc.1
}
// System.Void SampleBehaviour/<SaveScreenShot>c__Iterator0::Dispose()
extern "C" void U3CSaveScreenShotU3Ec__Iterator0_Dispose_m7_4 (U3CSaveScreenShotU3Ec__Iterator0_t7_1 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_3 = (-1);
		return;
	}
}
// System.Void SampleBehaviour/<SaveScreenShot>c__Iterator0::Reset()
extern TypeInfo* NotSupportedException_t1_740_il2cpp_TypeInfo_var;
extern "C" void U3CSaveScreenShotU3Ec__Iterator0_Reset_m7_5 (U3CSaveScreenShotU3Ec__Iterator0_t7_1 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1_740 * L_0 = (NotSupportedException_t1_740 *)il2cpp_codegen_object_new (NotSupportedException_t1_740_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5156(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void SampleBehaviour::.ctor()
extern "C" void SampleBehaviour__ctor_m7_6 (SampleBehaviour_t7_2 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m5_597(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SampleBehaviour::OnClickGlinkButton()
extern TypeInfo* GLink_t7_3_il2cpp_TypeInfo_var;
extern TypeInfo* IGLink_t7_4_il2cpp_TypeInfo_var;
extern "C" void SampleBehaviour_OnClickGlinkButton_m7_7 (SampleBehaviour_t7_2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GLink_t7_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1162);
		IGLink_t7_4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1163);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GLink_t7_3_il2cpp_TypeInfo_var);
		Object_t * L_0 = GLink_sharedInstance_m7_12(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void IGLink::executeHome() */, IGLink_t7_4_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void SampleBehaviour::OnClickScreenShotButton()
extern "C" void SampleBehaviour_OnClickScreenShotButton_m7_8 (SampleBehaviour_t7_2 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = SampleBehaviour_SaveScreenShot_m7_9(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m5_598(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator SampleBehaviour::SaveScreenShot()
extern TypeInfo* U3CSaveScreenShotU3Ec__Iterator0_t7_1_il2cpp_TypeInfo_var;
extern "C" Object_t * SampleBehaviour_SaveScreenShot_m7_9 (SampleBehaviour_t7_2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CSaveScreenShotU3Ec__Iterator0_t7_1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1164);
		s_Il2CppMethodIntialized = true;
	}
	U3CSaveScreenShotU3Ec__Iterator0_t7_1 * V_0 = {0};
	{
		U3CSaveScreenShotU3Ec__Iterator0_t7_1 * L_0 = (U3CSaveScreenShotU3Ec__Iterator0_t7_1 *)il2cpp_codegen_object_new (U3CSaveScreenShotU3Ec__Iterator0_t7_1_il2cpp_TypeInfo_var);
		U3CSaveScreenShotU3Ec__Iterator0__ctor_m7_0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CSaveScreenShotU3Ec__Iterator0_t7_1 * L_1 = V_0;
		return L_1;
	}
}
// System.Void GLink::.ctor()
extern "C" void GLink__ctor_m7_10 (GLink_t7_3 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLink::.cctor()
extern "C" void GLink__cctor_m7_11 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// IGLink GLink::sharedInstance()
extern TypeInfo* GLink_t7_3_il2cpp_TypeInfo_var;
extern TypeInfo* GLinkiOS_t7_15_il2cpp_TypeInfo_var;
extern "C" Object_t * GLink_sharedInstance_m7_12 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GLink_t7_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1162);
		GLinkiOS_t7_15_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1165);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(GLink_t7_3_il2cpp_TypeInfo_var);
		Object_t * L_0 = ((GLink_t7_3_StaticFields*)GLink_t7_3_il2cpp_TypeInfo_var->static_fields)->___glink_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		GLinkiOS_t7_15 * L_1 = (GLinkiOS_t7_15 *)il2cpp_codegen_object_new (GLinkiOS_t7_15_il2cpp_TypeInfo_var);
		GLinkiOS__ctor_m7_63(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GLink_t7_3_il2cpp_TypeInfo_var);
		((GLink_t7_3_StaticFields*)GLink_t7_3_il2cpp_TypeInfo_var->static_fields)->___glink_0 = L_1;
	}

IL_0014:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GLink_t7_3_il2cpp_TypeInfo_var);
		Object_t * L_2 = ((GLink_t7_3_StaticFields*)GLink_t7_3_il2cpp_TypeInfo_var->static_fields)->___glink_0;
		return L_2;
	}
}
// System.Void GLinkAndroid::.ctor()
extern "C" void GLinkAndroid__ctor_m7_13 (GLinkAndroid_t7_5 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkAndroid::executeHome()
extern "C" void GLinkAndroid_executeHome_m7_14 (GLinkAndroid_t7_5 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::executeNotice()
extern "C" void GLinkAndroid_executeNotice_m7_15 (GLinkAndroid_t7_5 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::executeEvent()
extern "C" void GLinkAndroid_executeEvent_m7_16 (GLinkAndroid_t7_5 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::executeMenu()
extern "C" void GLinkAndroid_executeMenu_m7_17 (GLinkAndroid_t7_5 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::executeProfile()
extern "C" void GLinkAndroid_executeProfile_m7_18 (GLinkAndroid_t7_5 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::executeArticle(System.Int32)
extern "C" void GLinkAndroid_executeArticle_m7_19 (GLinkAndroid_t7_5 * __this, int32_t ___articleId, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::executeArticlePost(System.Int32,System.String,System.String)
extern "C" void GLinkAndroid_executeArticlePost_m7_20 (GLinkAndroid_t7_5 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::executeArticlePostWithImage(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkAndroid_executeArticlePostWithImage_m7_21 (GLinkAndroid_t7_5 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::executeArticlePostWithVideo(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkAndroid_executeArticlePostWithVideo_m7_22 (GLinkAndroid_t7_5 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::executeMore()
extern "C" void GLinkAndroid_executeMore_m7_23 (GLinkAndroid_t7_5 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::syncGameUserId(System.String)
extern "C" void GLinkAndroid_syncGameUserId_m7_24 (GLinkAndroid_t7_5 * __this, String_t* ___gameUserId, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::startWidget()
extern "C" void GLinkAndroid_startWidget_m7_25 (GLinkAndroid_t7_5 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::stopWidget()
extern "C" void GLinkAndroid_stopWidget_m7_26 (GLinkAndroid_t7_5 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::setUseWidgetVideoRecord(System.Boolean)
extern "C" void GLinkAndroid_setUseWidgetVideoRecord_m7_27 (GLinkAndroid_t7_5 * __this, bool ___useVideoRecord, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkAndroid::setShowWidgetWhenUnloadSDK(System.Boolean)
extern "C" void GLinkAndroid_setShowWidgetWhenUnloadSDK_m7_28 (GLinkAndroid_t7_5 * __this, bool ___useWidget, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GLinkiOS/NCSDKDidLoadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKDidLoadDelegate__ctor_m7_29 (NCSDKDidLoadDelegate_t7_7 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GLinkiOS/NCSDKDidLoadDelegate::Invoke()
extern "C" void NCSDKDidLoadDelegate_Invoke_m7_30 (NCSDKDidLoadDelegate_t7_7 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		NCSDKDidLoadDelegate_Invoke_m7_30((NCSDKDidLoadDelegate_t7_7 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_NCSDKDidLoadDelegate_t7_7(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GLinkiOS/NCSDKDidLoadDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKDidLoadDelegate_BeginInvoke_m7_31 (NCSDKDidLoadDelegate_t7_7 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GLinkiOS/NCSDKDidLoadDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKDidLoadDelegate_EndInvoke_m7_32 (NCSDKDidLoadDelegate_t7_7 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void GLinkiOS/NCSDKDidUnLoadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKDidUnLoadDelegate__ctor_m7_33 (NCSDKDidUnLoadDelegate_t7_8 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GLinkiOS/NCSDKDidUnLoadDelegate::Invoke()
extern "C" void NCSDKDidUnLoadDelegate_Invoke_m7_34 (NCSDKDidUnLoadDelegate_t7_8 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		NCSDKDidUnLoadDelegate_Invoke_m7_34((NCSDKDidUnLoadDelegate_t7_8 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_NCSDKDidUnLoadDelegate_t7_8(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GLinkiOS/NCSDKDidUnLoadDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKDidUnLoadDelegate_BeginInvoke_m7_35 (NCSDKDidUnLoadDelegate_t7_8 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GLinkiOS/NCSDKDidUnLoadDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKDidUnLoadDelegate_EndInvoke_m7_36 (NCSDKDidUnLoadDelegate_t7_8 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void GLinkiOS/NCSDKJoinedCafeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKJoinedCafeDelegate__ctor_m7_37 (NCSDKJoinedCafeDelegate_t7_9 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GLinkiOS/NCSDKJoinedCafeDelegate::Invoke()
extern "C" void NCSDKJoinedCafeDelegate_Invoke_m7_38 (NCSDKJoinedCafeDelegate_t7_9 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		NCSDKJoinedCafeDelegate_Invoke_m7_38((NCSDKJoinedCafeDelegate_t7_9 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_NCSDKJoinedCafeDelegate_t7_9(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GLinkiOS/NCSDKJoinedCafeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKJoinedCafeDelegate_BeginInvoke_m7_39 (NCSDKJoinedCafeDelegate_t7_9 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GLinkiOS/NCSDKJoinedCafeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKJoinedCafeDelegate_EndInvoke_m7_40 (NCSDKJoinedCafeDelegate_t7_9 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void GLinkiOS/NCSDKPostedArticleAtMenuDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKPostedArticleAtMenuDelegate__ctor_m7_41 (NCSDKPostedArticleAtMenuDelegate_t7_10 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GLinkiOS/NCSDKPostedArticleAtMenuDelegate::Invoke(System.Int32,System.Int32,System.Int32)
extern "C" void NCSDKPostedArticleAtMenuDelegate_Invoke_m7_42 (NCSDKPostedArticleAtMenuDelegate_t7_10 * __this, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		NCSDKPostedArticleAtMenuDelegate_Invoke_m7_42((NCSDKPostedArticleAtMenuDelegate_t7_10 *)__this->___prev_9,___menuId, ___imageCount, ___videoCount, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___menuId, ___imageCount, ___videoCount,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___menuId, ___imageCount, ___videoCount,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_NCSDKPostedArticleAtMenuDelegate_t7_10(Il2CppObject* delegate, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t, int32_t, int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___menuId' to native representation

	// Marshaling of parameter '___imageCount' to native representation

	// Marshaling of parameter '___videoCount' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___menuId, ___imageCount, ___videoCount);

	// Marshaling cleanup of parameter '___menuId' native representation

	// Marshaling cleanup of parameter '___imageCount' native representation

	// Marshaling cleanup of parameter '___videoCount' native representation

}
// System.IAsyncResult GLinkiOS/NCSDKPostedArticleAtMenuDelegate::BeginInvoke(System.Int32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t1_3_il2cpp_TypeInfo_var;
extern "C" Object_t * NCSDKPostedArticleAtMenuDelegate_BeginInvoke_m7_43 (NCSDKPostedArticleAtMenuDelegate_t7_10 * __this, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t1_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t1_3_il2cpp_TypeInfo_var, &___menuId);
	__d_args[1] = Box(Int32_t1_3_il2cpp_TypeInfo_var, &___imageCount);
	__d_args[2] = Box(Int32_t1_3_il2cpp_TypeInfo_var, &___videoCount);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GLinkiOS/NCSDKPostedArticleAtMenuDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKPostedArticleAtMenuDelegate_EndInvoke_m7_44 (NCSDKPostedArticleAtMenuDelegate_t7_10 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void GLinkiOS/NCSDKPostedCommentAtArticleDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKPostedCommentAtArticleDelegate__ctor_m7_45 (NCSDKPostedCommentAtArticleDelegate_t7_11 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GLinkiOS/NCSDKPostedCommentAtArticleDelegate::Invoke(System.Int32)
extern "C" void NCSDKPostedCommentAtArticleDelegate_Invoke_m7_46 (NCSDKPostedCommentAtArticleDelegate_t7_11 * __this, int32_t ___articleId, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		NCSDKPostedCommentAtArticleDelegate_Invoke_m7_46((NCSDKPostedCommentAtArticleDelegate_t7_11 *)__this->___prev_9,___articleId, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___articleId, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___articleId,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___articleId, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___articleId,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_NCSDKPostedCommentAtArticleDelegate_t7_11(Il2CppObject* delegate, int32_t ___articleId)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___articleId' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___articleId);

	// Marshaling cleanup of parameter '___articleId' native representation

}
// System.IAsyncResult GLinkiOS/NCSDKPostedCommentAtArticleDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t1_3_il2cpp_TypeInfo_var;
extern "C" Object_t * NCSDKPostedCommentAtArticleDelegate_BeginInvoke_m7_47 (NCSDKPostedCommentAtArticleDelegate_t7_11 * __this, int32_t ___articleId, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t1_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t1_3_il2cpp_TypeInfo_var, &___articleId);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GLinkiOS/NCSDKPostedCommentAtArticleDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKPostedCommentAtArticleDelegate_EndInvoke_m7_48 (NCSDKPostedCommentAtArticleDelegate_t7_11 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void GLinkiOS/NCSDKWidgetPostAriticleWithImageDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKWidgetPostAriticleWithImageDelegate__ctor_m7_49 (NCSDKWidgetPostAriticleWithImageDelegate_t7_12 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GLinkiOS/NCSDKWidgetPostAriticleWithImageDelegate::Invoke()
extern "C" void NCSDKWidgetPostAriticleWithImageDelegate_Invoke_m7_50 (NCSDKWidgetPostAriticleWithImageDelegate_t7_12 * __this, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		NCSDKWidgetPostAriticleWithImageDelegate_Invoke_m7_50((NCSDKWidgetPostAriticleWithImageDelegate_t7_12 *)__this->___prev_9, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if ((__this->___m_target_2 != NULL || MethodHasParameters((MethodInfo*)(__this->___method_3.___m_value_0))) && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_NCSDKWidgetPostAriticleWithImageDelegate_t7_12(Il2CppObject* delegate)
{
	typedef void (STDCALL *native_function_ptr_type)();
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.IAsyncResult GLinkiOS/NCSDKWidgetPostAriticleWithImageDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKWidgetPostAriticleWithImageDelegate_BeginInvoke_m7_51 (NCSDKWidgetPostAriticleWithImageDelegate_t7_12 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[1] = {0};
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GLinkiOS/NCSDKWidgetPostAriticleWithImageDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKWidgetPostAriticleWithImageDelegate_EndInvoke_m7_52 (NCSDKWidgetPostAriticleWithImageDelegate_t7_12 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void GLinkiOS/NCSDKDidVoteAtArticleDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKDidVoteAtArticleDelegate__ctor_m7_53 (NCSDKDidVoteAtArticleDelegate_t7_13 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Void GLinkiOS/NCSDKDidVoteAtArticleDelegate::Invoke(System.Int32)
extern "C" void NCSDKDidVoteAtArticleDelegate_Invoke_m7_54 (NCSDKDidVoteAtArticleDelegate_t7_13 * __this, int32_t ___articleId, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		NCSDKDidVoteAtArticleDelegate_Invoke_m7_54((NCSDKDidVoteAtArticleDelegate_t7_13 *)__this->___prev_9,___articleId, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (Object_t *, Object_t * __this, int32_t ___articleId, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___articleId,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef void (*FunctionPointerType) (Object_t * __this, int32_t ___articleId, const MethodInfo* method);
		((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___articleId,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" void pinvoke_delegate_wrapper_NCSDKDidVoteAtArticleDelegate_t7_13(Il2CppObject* delegate, int32_t ___articleId)
{
	typedef void (STDCALL *native_function_ptr_type)(int32_t);
	native_function_ptr_type _il2cpp_pinvoke_func = ((native_function_ptr_type)((Il2CppDelegate*)delegate)->method->method);
	// Marshaling of parameter '___articleId' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___articleId);

	// Marshaling cleanup of parameter '___articleId' native representation

}
// System.IAsyncResult GLinkiOS/NCSDKDidVoteAtArticleDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* Int32_t1_3_il2cpp_TypeInfo_var;
extern "C" Object_t * NCSDKDidVoteAtArticleDelegate_BeginInvoke_m7_55 (NCSDKDidVoteAtArticleDelegate_t7_13 * __this, int32_t ___articleId, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t1_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t1_3_il2cpp_TypeInfo_var, &___articleId);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void GLinkiOS/NCSDKDidVoteAtArticleDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKDidVoteAtArticleDelegate_EndInvoke_m7_56 (NCSDKDidVoteAtArticleDelegate_t7_13 * __this, Object_t * ___result, const MethodInfo* method)
{
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// System.Void GLinkiOS/<CoFunction>c__Iterator1::.ctor()
extern "C" void U3CCoFunctionU3Ec__Iterator1__ctor_m7_57 (U3CCoFunctionU3Ec__Iterator1_t7_14 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object GLinkiOS/<CoFunction>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" Object_t * U3CCoFunctionU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m7_58 (U3CCoFunctionU3Ec__Iterator1_t7_14 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Object GLinkiOS/<CoFunction>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * U3CCoFunctionU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m7_59 (U3CCoFunctionU3Ec__Iterator1_t7_14 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U24current_1);
		return L_0;
	}
}
// System.Boolean GLinkiOS/<CoFunction>c__Iterator1::MoveNext()
extern TypeInfo* WaitForEndOfFrame_t5_12_il2cpp_TypeInfo_var;
extern "C" bool U3CCoFunctionU3Ec__Iterator1_MoveNext_m7_60 (U3CCoFunctionU3Ec__Iterator1_t7_14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		WaitForEndOfFrame_t5_12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1105);
		s_Il2CppMethodIntialized = true;
	}
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___U24PC_0);
		V_0 = L_0;
		__this->___U24PC_0 = (-1);
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0038;
		}
	}
	{
		goto IL_003f;
	}

IL_0021:
	{
		WaitForEndOfFrame_t5_12 * L_2 = (WaitForEndOfFrame_t5_12 *)il2cpp_codegen_object_new (WaitForEndOfFrame_t5_12_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m5_11(L_2, /*hidden argument*/NULL);
		__this->___U24current_1 = L_2;
		__this->___U24PC_0 = 1;
		goto IL_0041;
	}

IL_0038:
	{
		__this->___U24PC_0 = (-1);
	}

IL_003f:
	{
		return 0;
	}

IL_0041:
	{
		return 1;
	}
	// Dead block : IL_0043: ldloc.1
}
// System.Void GLinkiOS/<CoFunction>c__Iterator1::Dispose()
extern "C" void U3CCoFunctionU3Ec__Iterator1_Dispose_m7_61 (U3CCoFunctionU3Ec__Iterator1_t7_14 * __this, const MethodInfo* method)
{
	{
		__this->___U24PC_0 = (-1);
		return;
	}
}
// System.Void GLinkiOS/<CoFunction>c__Iterator1::Reset()
extern TypeInfo* NotSupportedException_t1_740_il2cpp_TypeInfo_var;
extern "C" void U3CCoFunctionU3Ec__Iterator1_Reset_m7_62 (U3CCoFunctionU3Ec__Iterator1_t7_14 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_740_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1_740 * L_0 = (NotSupportedException_t1_740 *)il2cpp_codegen_object_new (NotSupportedException_t1_740_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5156(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void GLinkiOS::.ctor()
extern TypeInfo* NCSDKDidLoadDelegate_t7_7_il2cpp_TypeInfo_var;
extern TypeInfo* NCSDKDidUnLoadDelegate_t7_8_il2cpp_TypeInfo_var;
extern TypeInfo* NCSDKJoinedCafeDelegate_t7_9_il2cpp_TypeInfo_var;
extern TypeInfo* NCSDKPostedArticleAtMenuDelegate_t7_10_il2cpp_TypeInfo_var;
extern TypeInfo* NCSDKPostedCommentAtArticleDelegate_t7_11_il2cpp_TypeInfo_var;
extern TypeInfo* NCSDKWidgetPostAriticleWithImageDelegate_t7_12_il2cpp_TypeInfo_var;
extern TypeInfo* NCSDKDidVoteAtArticleDelegate_t7_13_il2cpp_TypeInfo_var;
extern const MethodInfo* GLinkiOS__NCSDKDidLoadCallback_m7_90_MethodInfo_var;
extern const MethodInfo* GLinkiOS__NCSDKDidUnLoadCallback_m7_91_MethodInfo_var;
extern const MethodInfo* GLinkiOS__NCSDKJoinedCafeCallback_m7_92_MethodInfo_var;
extern const MethodInfo* GLinkiOS__NCSDKPostedArticleAtMenuCallback_m7_93_MethodInfo_var;
extern const MethodInfo* GLinkiOS__NCSDKPostedCommentAtArticleCallback_m7_94_MethodInfo_var;
extern const MethodInfo* GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m7_95_MethodInfo_var;
extern const MethodInfo* GLinkiOS__NCSDKDidVoteAtArticleCallback_m7_96_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2720;
extern Il2CppCodeGenString* _stringLiteral2721;
extern "C" void GLinkiOS__ctor_m7_63 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NCSDKDidLoadDelegate_t7_7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1166);
		NCSDKDidUnLoadDelegate_t7_8_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1167);
		NCSDKJoinedCafeDelegate_t7_9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1168);
		NCSDKPostedArticleAtMenuDelegate_t7_10_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1169);
		NCSDKPostedCommentAtArticleDelegate_t7_11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1170);
		NCSDKWidgetPostAriticleWithImageDelegate_t7_12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1171);
		NCSDKDidVoteAtArticleDelegate_t7_13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1172);
		GLinkiOS__NCSDKDidLoadCallback_m7_90_MethodInfo_var = il2cpp_codegen_method_info_from_index(369);
		GLinkiOS__NCSDKDidUnLoadCallback_m7_91_MethodInfo_var = il2cpp_codegen_method_info_from_index(370);
		GLinkiOS__NCSDKJoinedCafeCallback_m7_92_MethodInfo_var = il2cpp_codegen_method_info_from_index(371);
		GLinkiOS__NCSDKPostedArticleAtMenuCallback_m7_93_MethodInfo_var = il2cpp_codegen_method_info_from_index(372);
		GLinkiOS__NCSDKPostedCommentAtArticleCallback_m7_94_MethodInfo_var = il2cpp_codegen_method_info_from_index(373);
		GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m7_95_MethodInfo_var = il2cpp_codegen_method_info_from_index(374);
		GLinkiOS__NCSDKDidVoteAtArticleCallback_m7_96_MethodInfo_var = il2cpp_codegen_method_info_from_index(375);
		_stringLiteral2720 = il2cpp_codegen_string_literal_from_index(2720);
		_stringLiteral2721 = il2cpp_codegen_string_literal_from_index(2721);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour__ctor_m5_597(__this, /*hidden argument*/NULL);
		GLinkiOS__InitGLink_m7_64(NULL /*static, unused*/, _stringLiteral2720, _stringLiteral2721, ((int32_t)28290504), /*hidden argument*/NULL);
		IntPtr_t L_0 = { (void*)GLinkiOS__NCSDKDidLoadCallback_m7_90_MethodInfo_var };
		NCSDKDidLoadDelegate_t7_7 * L_1 = (NCSDKDidLoadDelegate_t7_7 *)il2cpp_codegen_object_new (NCSDKDidLoadDelegate_t7_7_il2cpp_TypeInfo_var);
		NCSDKDidLoadDelegate__ctor_m7_29(L_1, NULL, L_0, /*hidden argument*/NULL);
		GLinkiOS__SetSDKDidLoadDelegate_m7_77(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		IntPtr_t L_2 = { (void*)GLinkiOS__NCSDKDidUnLoadCallback_m7_91_MethodInfo_var };
		NCSDKDidUnLoadDelegate_t7_8 * L_3 = (NCSDKDidUnLoadDelegate_t7_8 *)il2cpp_codegen_object_new (NCSDKDidUnLoadDelegate_t7_8_il2cpp_TypeInfo_var);
		NCSDKDidUnLoadDelegate__ctor_m7_33(L_3, NULL, L_2, /*hidden argument*/NULL);
		GLinkiOS__SetSDKDidUnLoadDelegate_m7_78(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IntPtr_t L_4 = { (void*)GLinkiOS__NCSDKJoinedCafeCallback_m7_92_MethodInfo_var };
		NCSDKJoinedCafeDelegate_t7_9 * L_5 = (NCSDKJoinedCafeDelegate_t7_9 *)il2cpp_codegen_object_new (NCSDKJoinedCafeDelegate_t7_9_il2cpp_TypeInfo_var);
		NCSDKJoinedCafeDelegate__ctor_m7_37(L_5, NULL, L_4, /*hidden argument*/NULL);
		GLinkiOS__SetSDKJoinedCafeDelegate_m7_79(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IntPtr_t L_6 = { (void*)GLinkiOS__NCSDKPostedArticleAtMenuCallback_m7_93_MethodInfo_var };
		NCSDKPostedArticleAtMenuDelegate_t7_10 * L_7 = (NCSDKPostedArticleAtMenuDelegate_t7_10 *)il2cpp_codegen_object_new (NCSDKPostedArticleAtMenuDelegate_t7_10_il2cpp_TypeInfo_var);
		NCSDKPostedArticleAtMenuDelegate__ctor_m7_41(L_7, NULL, L_6, /*hidden argument*/NULL);
		GLinkiOS__SetSDKPostedArticleAtMenuDelegate_m7_80(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IntPtr_t L_8 = { (void*)GLinkiOS__NCSDKPostedCommentAtArticleCallback_m7_94_MethodInfo_var };
		NCSDKPostedCommentAtArticleDelegate_t7_11 * L_9 = (NCSDKPostedCommentAtArticleDelegate_t7_11 *)il2cpp_codegen_object_new (NCSDKPostedCommentAtArticleDelegate_t7_11_il2cpp_TypeInfo_var);
		NCSDKPostedCommentAtArticleDelegate__ctor_m7_45(L_9, NULL, L_8, /*hidden argument*/NULL);
		GLinkiOS__SetSDKPostedCommentAtArticleDelegate_m7_81(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IntPtr_t L_10 = { (void*)GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m7_95_MethodInfo_var };
		NCSDKWidgetPostAriticleWithImageDelegate_t7_12 * L_11 = (NCSDKWidgetPostAriticleWithImageDelegate_t7_12 *)il2cpp_codegen_object_new (NCSDKWidgetPostAriticleWithImageDelegate_t7_12_il2cpp_TypeInfo_var);
		NCSDKWidgetPostAriticleWithImageDelegate__ctor_m7_49(L_11, NULL, L_10, /*hidden argument*/NULL);
		GLinkiOS__SetSDKWidgetPostAriticleWithImageCallback_m7_82(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IntPtr_t L_12 = { (void*)GLinkiOS__NCSDKDidVoteAtArticleCallback_m7_96_MethodInfo_var };
		NCSDKDidVoteAtArticleDelegate_t7_13 * L_13 = (NCSDKDidVoteAtArticleDelegate_t7_13 *)il2cpp_codegen_object_new (NCSDKDidVoteAtArticleDelegate_t7_13_il2cpp_TypeInfo_var);
		NCSDKDidVoteAtArticleDelegate__ctor_m7_53(L_13, NULL, L_12, /*hidden argument*/NULL);
		GLinkiOS__SetSDKDidVoteAtArticleDelegate_m7_83(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::_InitGLink(System.String,System.String,System.Int32)
extern "C" {void DEFAULT_CALL _InitGLink(char*, char*, int32_t);}
extern "C" void GLinkiOS__InitGLink_m7_64 (Object_t * __this /* static, unused */, String_t* ___consumerKey, String_t* ___consumerSecret, int32_t ___cafeId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_InitGLink;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_InitGLink'"));
		}
	}

	// Marshaling of parameter '___consumerKey' to native representation
	char* ____consumerKey_marshaled = { 0 };
	____consumerKey_marshaled = il2cpp_codegen_marshal_string(___consumerKey);

	// Marshaling of parameter '___consumerSecret' to native representation
	char* ____consumerSecret_marshaled = { 0 };
	____consumerSecret_marshaled = il2cpp_codegen_marshal_string(___consumerSecret);

	// Marshaling of parameter '___cafeId' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(____consumerKey_marshaled, ____consumerSecret_marshaled, ___cafeId);

	// Marshaling cleanup of parameter '___consumerKey' native representation
	il2cpp_codegen_marshal_free(____consumerKey_marshaled);
	____consumerKey_marshaled = NULL;

	// Marshaling cleanup of parameter '___consumerSecret' native representation
	il2cpp_codegen_marshal_free(____consumerSecret_marshaled);
	____consumerSecret_marshaled = NULL;

	// Marshaling cleanup of parameter '___cafeId' native representation

}
// System.Void GLinkiOS::_ExecuteMain()
extern "C" {void DEFAULT_CALL _ExecuteMain();}
extern "C" void GLinkiOS__ExecuteMain_m7_65 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteMain;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteMain'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GLinkiOS::_ExecuteArticlePost(System.Int32,System.String,System.String)
extern "C" {void DEFAULT_CALL _ExecuteArticlePost(int32_t, char*, char*);}
extern "C" void GLinkiOS__ExecuteArticlePost_m7_66 (Object_t * __this /* static, unused */, int32_t ___menuId, String_t* ___subject, String_t* ___content, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteArticlePost;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteArticlePost'"));
		}
	}

	// Marshaling of parameter '___menuId' to native representation

	// Marshaling of parameter '___subject' to native representation
	char* ____subject_marshaled = { 0 };
	____subject_marshaled = il2cpp_codegen_marshal_string(___subject);

	// Marshaling of parameter '___content' to native representation
	char* ____content_marshaled = { 0 };
	____content_marshaled = il2cpp_codegen_marshal_string(___content);

	// Native function invocation
	_il2cpp_pinvoke_func(___menuId, ____subject_marshaled, ____content_marshaled);

	// Marshaling cleanup of parameter '___menuId' native representation

	// Marshaling cleanup of parameter '___subject' native representation
	il2cpp_codegen_marshal_free(____subject_marshaled);
	____subject_marshaled = NULL;

	// Marshaling cleanup of parameter '___content' native representation
	il2cpp_codegen_marshal_free(____content_marshaled);
	____content_marshaled = NULL;

}
// System.Void GLinkiOS::_ExecuteArticlePostWithImage(System.Int32,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL _ExecuteArticlePostWithImage(int32_t, char*, char*, char*);}
extern "C" void GLinkiOS__ExecuteArticlePostWithImage_m7_67 (Object_t * __this /* static, unused */, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteArticlePostWithImage;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteArticlePostWithImage'"));
		}
	}

	// Marshaling of parameter '___menuId' to native representation

	// Marshaling of parameter '___subject' to native representation
	char* ____subject_marshaled = { 0 };
	____subject_marshaled = il2cpp_codegen_marshal_string(___subject);

	// Marshaling of parameter '___content' to native representation
	char* ____content_marshaled = { 0 };
	____content_marshaled = il2cpp_codegen_marshal_string(___content);

	// Marshaling of parameter '___filePath' to native representation
	char* ____filePath_marshaled = { 0 };
	____filePath_marshaled = il2cpp_codegen_marshal_string(___filePath);

	// Native function invocation
	_il2cpp_pinvoke_func(___menuId, ____subject_marshaled, ____content_marshaled, ____filePath_marshaled);

	// Marshaling cleanup of parameter '___menuId' native representation

	// Marshaling cleanup of parameter '___subject' native representation
	il2cpp_codegen_marshal_free(____subject_marshaled);
	____subject_marshaled = NULL;

	// Marshaling cleanup of parameter '___content' native representation
	il2cpp_codegen_marshal_free(____content_marshaled);
	____content_marshaled = NULL;

	// Marshaling cleanup of parameter '___filePath' native representation
	il2cpp_codegen_marshal_free(____filePath_marshaled);
	____filePath_marshaled = NULL;

}
// System.Void GLinkiOS::_ExecuteArticlePostWithVideo(System.Int32,System.String,System.String,System.String)
extern "C" {void DEFAULT_CALL _ExecuteArticlePostWithVideo(int32_t, char*, char*, char*);}
extern "C" void GLinkiOS__ExecuteArticlePostWithVideo_m7_68 (Object_t * __this /* static, unused */, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t, char*, char*, char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteArticlePostWithVideo;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteArticlePostWithVideo'"));
		}
	}

	// Marshaling of parameter '___menuId' to native representation

	// Marshaling of parameter '___subject' to native representation
	char* ____subject_marshaled = { 0 };
	____subject_marshaled = il2cpp_codegen_marshal_string(___subject);

	// Marshaling of parameter '___content' to native representation
	char* ____content_marshaled = { 0 };
	____content_marshaled = il2cpp_codegen_marshal_string(___content);

	// Marshaling of parameter '___filePath' to native representation
	char* ____filePath_marshaled = { 0 };
	____filePath_marshaled = il2cpp_codegen_marshal_string(___filePath);

	// Native function invocation
	_il2cpp_pinvoke_func(___menuId, ____subject_marshaled, ____content_marshaled, ____filePath_marshaled);

	// Marshaling cleanup of parameter '___menuId' native representation

	// Marshaling cleanup of parameter '___subject' native representation
	il2cpp_codegen_marshal_free(____subject_marshaled);
	____subject_marshaled = NULL;

	// Marshaling cleanup of parameter '___content' native representation
	il2cpp_codegen_marshal_free(____content_marshaled);
	____content_marshaled = NULL;

	// Marshaling cleanup of parameter '___filePath' native representation
	il2cpp_codegen_marshal_free(____filePath_marshaled);
	____filePath_marshaled = NULL;

}
// System.Void GLinkiOS::_ExecuteNotice()
extern "C" {void DEFAULT_CALL _ExecuteNotice();}
extern "C" void GLinkiOS__ExecuteNotice_m7_69 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteNotice;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteNotice'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GLinkiOS::_ExecuteEvent()
extern "C" {void DEFAULT_CALL _ExecuteEvent();}
extern "C" void GLinkiOS__ExecuteEvent_m7_70 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteEvent;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteEvent'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GLinkiOS::_ExecuteMenu()
extern "C" {void DEFAULT_CALL _ExecuteMenu();}
extern "C" void GLinkiOS__ExecuteMenu_m7_71 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteMenu;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteMenu'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GLinkiOS::_ExecuteProfile()
extern "C" {void DEFAULT_CALL _ExecuteProfile();}
extern "C" void GLinkiOS__ExecuteProfile_m7_72 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteProfile;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteProfile'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GLinkiOS::_ExecuteArticle(System.Int32)
extern "C" {void DEFAULT_CALL _ExecuteArticle(int32_t);}
extern "C" void GLinkiOS__ExecuteArticle_m7_73 (Object_t * __this /* static, unused */, int32_t ___articleId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteArticle;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteArticle'"));
		}
	}

	// Marshaling of parameter '___articleId' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___articleId);

	// Marshaling cleanup of parameter '___articleId' native representation

}
// System.Void GLinkiOS::_SyncGameUserId(System.String)
extern "C" {void DEFAULT_CALL _SyncGameUserId(char*);}
extern "C" void GLinkiOS__SyncGameUserId_m7_74 (Object_t * __this /* static, unused */, String_t* ___gameUserId, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SyncGameUserId;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SyncGameUserId'"));
		}
	}

	// Marshaling of parameter '___gameUserId' to native representation
	char* ____gameUserId_marshaled = { 0 };
	____gameUserId_marshaled = il2cpp_codegen_marshal_string(___gameUserId);

	// Native function invocation
	_il2cpp_pinvoke_func(____gameUserId_marshaled);

	// Marshaling cleanup of parameter '___gameUserId' native representation
	il2cpp_codegen_marshal_free(____gameUserId_marshaled);
	____gameUserId_marshaled = NULL;

}
// System.Void GLinkiOS::_ShowMessageToast(System.String)
extern "C" {void DEFAULT_CALL _ShowMessageToast(char*);}
extern "C" void GLinkiOS__ShowMessageToast_m7_75 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ShowMessageToast;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ShowMessageToast'"));
		}
	}

	// Marshaling of parameter '___message' to native representation
	char* ____message_marshaled = { 0 };
	____message_marshaled = il2cpp_codegen_marshal_string(___message);

	// Native function invocation
	_il2cpp_pinvoke_func(____message_marshaled);

	// Marshaling cleanup of parameter '___message' native representation
	il2cpp_codegen_marshal_free(____message_marshaled);
	____message_marshaled = NULL;

}
// System.Void GLinkiOS::_SaveCameraRoll(System.String)
extern "C" {void DEFAULT_CALL _SaveCameraRoll(char*);}
extern "C" void GLinkiOS__SaveCameraRoll_m7_76 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SaveCameraRoll;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SaveCameraRoll'"));
		}
	}

	// Marshaling of parameter '___path' to native representation
	char* ____path_marshaled = { 0 };
	____path_marshaled = il2cpp_codegen_marshal_string(___path);

	// Native function invocation
	_il2cpp_pinvoke_func(____path_marshaled);

	// Marshaling cleanup of parameter '___path' native representation
	il2cpp_codegen_marshal_free(____path_marshaled);
	____path_marshaled = NULL;

}
// System.Void GLinkiOS::_SetSDKDidLoadDelegate(GLinkiOS/NCSDKDidLoadDelegate)
extern "C" {void DEFAULT_CALL _SetSDKDidLoadDelegate(methodPointerType);}
extern "C" void GLinkiOS__SetSDKDidLoadDelegate_m7_77 (Object_t * __this /* static, unused */, NCSDKDidLoadDelegate_t7_7 * ___callback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetSDKDidLoadDelegate;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetSDKDidLoadDelegate'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void GLinkiOS::_SetSDKDidUnLoadDelegate(GLinkiOS/NCSDKDidUnLoadDelegate)
extern "C" {void DEFAULT_CALL _SetSDKDidUnLoadDelegate(methodPointerType);}
extern "C" void GLinkiOS__SetSDKDidUnLoadDelegate_m7_78 (Object_t * __this /* static, unused */, NCSDKDidUnLoadDelegate_t7_8 * ___callback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetSDKDidUnLoadDelegate;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetSDKDidUnLoadDelegate'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void GLinkiOS::_SetSDKJoinedCafeDelegate(GLinkiOS/NCSDKJoinedCafeDelegate)
extern "C" {void DEFAULT_CALL _SetSDKJoinedCafeDelegate(methodPointerType);}
extern "C" void GLinkiOS__SetSDKJoinedCafeDelegate_m7_79 (Object_t * __this /* static, unused */, NCSDKJoinedCafeDelegate_t7_9 * ___callback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetSDKJoinedCafeDelegate;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetSDKJoinedCafeDelegate'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void GLinkiOS::_SetSDKPostedArticleAtMenuDelegate(GLinkiOS/NCSDKPostedArticleAtMenuDelegate)
extern "C" {void DEFAULT_CALL _SetSDKPostedArticleAtMenuDelegate(methodPointerType);}
extern "C" void GLinkiOS__SetSDKPostedArticleAtMenuDelegate_m7_80 (Object_t * __this /* static, unused */, NCSDKPostedArticleAtMenuDelegate_t7_10 * ___callback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetSDKPostedArticleAtMenuDelegate;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetSDKPostedArticleAtMenuDelegate'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void GLinkiOS::_SetSDKPostedCommentAtArticleDelegate(GLinkiOS/NCSDKPostedCommentAtArticleDelegate)
extern "C" {void DEFAULT_CALL _SetSDKPostedCommentAtArticleDelegate(methodPointerType);}
extern "C" void GLinkiOS__SetSDKPostedCommentAtArticleDelegate_m7_81 (Object_t * __this /* static, unused */, NCSDKPostedCommentAtArticleDelegate_t7_11 * ___callback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetSDKPostedCommentAtArticleDelegate;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetSDKPostedCommentAtArticleDelegate'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void GLinkiOS::_SetSDKWidgetPostAriticleWithImageCallback(GLinkiOS/NCSDKWidgetPostAriticleWithImageDelegate)
extern "C" {void DEFAULT_CALL _SetSDKWidgetPostAriticleWithImageCallback(methodPointerType);}
extern "C" void GLinkiOS__SetSDKWidgetPostAriticleWithImageCallback_m7_82 (Object_t * __this /* static, unused */, NCSDKWidgetPostAriticleWithImageDelegate_t7_12 * ___callback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetSDKWidgetPostAriticleWithImageCallback;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetSDKWidgetPostAriticleWithImageCallback'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void GLinkiOS::_SetSDKDidVoteAtArticleDelegate(GLinkiOS/NCSDKDidVoteAtArticleDelegate)
extern "C" {void DEFAULT_CALL _SetSDKDidVoteAtArticleDelegate(methodPointerType);}
extern "C" void GLinkiOS__SetSDKDidVoteAtArticleDelegate_m7_83 (Object_t * __this /* static, unused */, NCSDKDidVoteAtArticleDelegate_t7_13 * ___callback, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (methodPointerType);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetSDKDidVoteAtArticleDelegate;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetSDKDidVoteAtArticleDelegate'"));
		}
	}

	// Marshaling of parameter '___callback' to native representation
	methodPointerType ____callback_marshaled = { 0 };
	____callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<Il2CppCodeGenMulticastDelegate*>(___callback));

	// Native function invocation
	_il2cpp_pinvoke_func(____callback_marshaled);

	// Marshaling cleanup of parameter '___callback' native representation

}
// System.Void GLinkiOS::_StartWidget()
extern "C" {void DEFAULT_CALL _StartWidget();}
extern "C" void GLinkiOS__StartWidget_m7_84 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_StartWidget;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_StartWidget'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GLinkiOS::_StopWidget()
extern "C" {void DEFAULT_CALL _StopWidget();}
extern "C" void GLinkiOS__StopWidget_m7_85 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_StopWidget;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_StopWidget'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GLinkiOS::_SetUseWidgetVideoRecord(System.Boolean)
extern "C" {void DEFAULT_CALL _SetUseWidgetVideoRecord(int32_t);}
extern "C" void GLinkiOS__SetUseWidgetVideoRecord_m7_86 (Object_t * __this /* static, unused */, bool ___useVideoRecord, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetUseWidgetVideoRecord;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetUseWidgetVideoRecord'"));
		}
	}

	// Marshaling of parameter '___useVideoRecord' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___useVideoRecord);

	// Marshaling cleanup of parameter '___useVideoRecord' native representation

}
// System.Void GLinkiOS::_SetShowWidgetWhenUnloadSDK(System.Boolean)
extern "C" {void DEFAULT_CALL _SetShowWidgetWhenUnloadSDK(int32_t);}
extern "C" void GLinkiOS__SetShowWidgetWhenUnloadSDK_m7_87 (Object_t * __this /* static, unused */, bool ___useWidget, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_SetShowWidgetWhenUnloadSDK;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_SetShowWidgetWhenUnloadSDK'"));
		}
	}

	// Marshaling of parameter '___useWidget' to native representation

	// Native function invocation
	_il2cpp_pinvoke_func(___useWidget);

	// Marshaling cleanup of parameter '___useWidget' native representation

}
// System.Void GLinkiOS::_ExecuteCaptureScreenshopAndPostArticle()
extern "C" {void DEFAULT_CALL _ExecuteCaptureScreenshopAndPostArticle();}
extern "C" void GLinkiOS__ExecuteCaptureScreenshopAndPostArticle_m7_88 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteCaptureScreenshopAndPostArticle;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteCaptureScreenshopAndPostArticle'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GLinkiOS::_ExecuteEtc()
extern "C" {void DEFAULT_CALL _ExecuteEtc();}
extern "C" void GLinkiOS__ExecuteEtc_m7_89 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	static PInvokeFunc _il2cpp_pinvoke_func;
	if (!_il2cpp_pinvoke_func)
	{
		_il2cpp_pinvoke_func = (PInvokeFunc)_ExecuteEtc;

		if (_il2cpp_pinvoke_func == NULL)
		{
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Unable to find method for p/invoke: '_ExecuteEtc'"));
		}
	}

	// Native function invocation
	_il2cpp_pinvoke_func();

}
// System.Void GLinkiOS::_NCSDKDidLoadCallback()
void STDCALL native_delegate_wrapper_GLinkiOS__NCSDKDidLoadCallback_m7_90()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	GLinkiOS__NCSDKDidLoadCallback_m7_90(NULL, NULL);

}
extern const methodPointerType* native_delegate_wrapper_GLinkiOS__NCSDKDidLoadCallback_m7_90_indirect = (const methodPointerType*)&native_delegate_wrapper_GLinkiOS__NCSDKDidLoadCallback_m7_90;
extern Il2CppCodeGenString* _stringLiteral2722;
extern "C" void GLinkiOS__NCSDKDidLoadCallback_m7_90 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2722 = il2cpp_codegen_string_literal_from_index(2722);
		s_Il2CppMethodIntialized = true;
	}
	{
		GLinkiOS__ShowMessageToast_m7_75(NULL /*static, unused*/, _stringLiteral2722, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::_NCSDKDidUnLoadCallback()
void STDCALL native_delegate_wrapper_GLinkiOS__NCSDKDidUnLoadCallback_m7_91()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	GLinkiOS__NCSDKDidUnLoadCallback_m7_91(NULL, NULL);

}
extern const methodPointerType* native_delegate_wrapper_GLinkiOS__NCSDKDidUnLoadCallback_m7_91_indirect = (const methodPointerType*)&native_delegate_wrapper_GLinkiOS__NCSDKDidUnLoadCallback_m7_91;
extern Il2CppCodeGenString* _stringLiteral2723;
extern "C" void GLinkiOS__NCSDKDidUnLoadCallback_m7_91 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2723 = il2cpp_codegen_string_literal_from_index(2723);
		s_Il2CppMethodIntialized = true;
	}
	{
		GLinkiOS__ShowMessageToast_m7_75(NULL /*static, unused*/, _stringLiteral2723, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::_NCSDKJoinedCafeCallback()
void STDCALL native_delegate_wrapper_GLinkiOS__NCSDKJoinedCafeCallback_m7_92()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	GLinkiOS__NCSDKJoinedCafeCallback_m7_92(NULL, NULL);

}
extern const methodPointerType* native_delegate_wrapper_GLinkiOS__NCSDKJoinedCafeCallback_m7_92_indirect = (const methodPointerType*)&native_delegate_wrapper_GLinkiOS__NCSDKJoinedCafeCallback_m7_92;
extern Il2CppCodeGenString* _stringLiteral2724;
extern "C" void GLinkiOS__NCSDKJoinedCafeCallback_m7_92 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral2724 = il2cpp_codegen_string_literal_from_index(2724);
		s_Il2CppMethodIntialized = true;
	}
	{
		GLinkiOS__ShowMessageToast_m7_75(NULL /*static, unused*/, _stringLiteral2724, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::_NCSDKPostedArticleAtMenuCallback(System.Int32,System.Int32,System.Int32)
void STDCALL native_delegate_wrapper_GLinkiOS__NCSDKPostedArticleAtMenuCallback_m7_93(int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	// Marshaling of parameter '___menuId' to managed representation

	// Marshaling of parameter '___imageCount' to managed representation

	// Marshaling of parameter '___videoCount' to managed representation

	GLinkiOS__NCSDKPostedArticleAtMenuCallback_m7_93(NULL, ___menuId, ___imageCount, ___videoCount, NULL);

	// Marshaling of parameter '___menuId' to native representation

	// Marshaling of parameter '___imageCount' to native representation

	// Marshaling of parameter '___videoCount' to native representation

}
extern const methodPointerType* native_delegate_wrapper_GLinkiOS__NCSDKPostedArticleAtMenuCallback_m7_93_indirect = (const methodPointerType*)&native_delegate_wrapper_GLinkiOS__NCSDKPostedArticleAtMenuCallback_m7_93;
extern TypeInfo* Int32_t1_3_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2725;
extern "C" void GLinkiOS__NCSDKPostedArticleAtMenuCallback_m7_93 (Object_t * __this /* static, unused */, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t1_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral2725 = il2cpp_codegen_string_literal_from_index(2725);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	{
		int32_t L_0 = ___menuId;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_1);
		int32_t L_3 = ___imageCount;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = ___videoCount;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_7);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Format_m1_414(NULL /*static, unused*/, _stringLiteral2725, L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10 = V_0;
		GLinkiOS__ShowMessageToast_m7_75(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::_NCSDKPostedCommentAtArticleCallback(System.Int32)
void STDCALL native_delegate_wrapper_GLinkiOS__NCSDKPostedCommentAtArticleCallback_m7_94(int32_t ___articleId)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	// Marshaling of parameter '___articleId' to managed representation

	GLinkiOS__NCSDKPostedCommentAtArticleCallback_m7_94(NULL, ___articleId, NULL);

	// Marshaling of parameter '___articleId' to native representation

}
extern const methodPointerType* native_delegate_wrapper_GLinkiOS__NCSDKPostedCommentAtArticleCallback_m7_94_indirect = (const methodPointerType*)&native_delegate_wrapper_GLinkiOS__NCSDKPostedCommentAtArticleCallback_m7_94;
extern TypeInfo* Int32_t1_3_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2726;
extern "C" void GLinkiOS__NCSDKPostedCommentAtArticleCallback_m7_94 (Object_t * __this /* static, unused */, int32_t ___articleId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t1_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral2726 = il2cpp_codegen_string_literal_from_index(2726);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___articleId;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1_418(NULL /*static, unused*/, _stringLiteral2726, L_2, /*hidden argument*/NULL);
		GLinkiOS__ShowMessageToast_m7_75(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::_NCSDKWidgetPostAriticleWithImageCallback()
void STDCALL native_delegate_wrapper_GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m7_95()
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m7_95(NULL, NULL);

}
extern const methodPointerType* native_delegate_wrapper_GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m7_95_indirect = (const methodPointerType*)&native_delegate_wrapper_GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m7_95;
extern TypeInfo* GameObject_t5_91_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisGLinkiOS_t7_15_m5_1350_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2727;
extern Il2CppCodeGenString* _stringLiteral2728;
extern "C" void GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m7_95 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t5_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(998);
		GameObject_AddComponent_TisGLinkiOS_t7_15_m5_1350_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147484024);
		_stringLiteral2727 = il2cpp_codegen_string_literal_from_index(2727);
		_stringLiteral2728 = il2cpp_codegen_string_literal_from_index(2728);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	GameObject_t5_91 * V_1 = {0};
	{
		GLinkiOS__ShowMessageToast_m7_75(NULL /*static, unused*/, _stringLiteral2727, /*hidden argument*/NULL);
		V_0 = _stringLiteral2728;
		String_t* L_0 = V_0;
		GameObject_t5_91 * L_1 = GameObject_Find_m5_672(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		GameObject_t5_91 * L_2 = V_1;
		bool L_3 = Object_op_Equality_m5_645(NULL /*static, unused*/, L_2, (Object_t5_5 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		GameObject_t5_91 * L_4 = (GameObject_t5_91 *)il2cpp_codegen_object_new (GameObject_t5_91_il2cpp_TypeInfo_var);
		GameObject__ctor_m5_656(L_4, _stringLiteral2728, /*hidden argument*/NULL);
		V_1 = L_4;
		GameObject_t5_91 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_AddComponent_TisGLinkiOS_t7_15_m5_1350(L_5, /*hidden argument*/GameObject_AddComponent_TisGLinkiOS_t7_15_m5_1350_MethodInfo_var);
	}

IL_0035:
	{
		GLinkiOS__ExecuteCaptureScreenshopAndPostArticle_m7_88(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::_NCSDKDidVoteAtArticleCallback(System.Int32)
void STDCALL native_delegate_wrapper_GLinkiOS__NCSDKDidVoteAtArticleCallback_m7_96(int32_t ___articleId)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	// Marshaling of parameter '___articleId' to managed representation

	GLinkiOS__NCSDKDidVoteAtArticleCallback_m7_96(NULL, ___articleId, NULL);

	// Marshaling of parameter '___articleId' to native representation

}
extern const methodPointerType* native_delegate_wrapper_GLinkiOS__NCSDKDidVoteAtArticleCallback_m7_96_indirect = (const methodPointerType*)&native_delegate_wrapper_GLinkiOS__NCSDKDidVoteAtArticleCallback_m7_96;
extern TypeInfo* Int32_t1_3_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2729;
extern "C" void GLinkiOS__NCSDKDidVoteAtArticleCallback_m7_96 (Object_t * __this /* static, unused */, int32_t ___articleId, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t1_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral2729 = il2cpp_codegen_string_literal_from_index(2729);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___articleId;
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m1_418(NULL /*static, unused*/, _stringLiteral2729, L_2, /*hidden argument*/NULL);
		GLinkiOS__ShowMessageToast_m7_75(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator GLinkiOS::CoFunction()
extern TypeInfo* U3CCoFunctionU3Ec__Iterator1_t7_14_il2cpp_TypeInfo_var;
extern "C" Object_t * GLinkiOS_CoFunction_m7_97 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		U3CCoFunctionU3Ec__Iterator1_t7_14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1173);
		s_Il2CppMethodIntialized = true;
	}
	U3CCoFunctionU3Ec__Iterator1_t7_14 * V_0 = {0};
	{
		U3CCoFunctionU3Ec__Iterator1_t7_14 * L_0 = (U3CCoFunctionU3Ec__Iterator1_t7_14 *)il2cpp_codegen_object_new (U3CCoFunctionU3Ec__Iterator1_t7_14_il2cpp_TypeInfo_var);
		U3CCoFunctionU3Ec__Iterator1__ctor_m7_57(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCoFunctionU3Ec__Iterator1_t7_14 * L_1 = V_0;
		return L_1;
	}
}
// System.Void GLinkiOS::executeCaptureScreenshopAndPostArticle(System.String)
extern TypeInfo* Texture2D_t5_31_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* GLink_t7_3_il2cpp_TypeInfo_var;
extern TypeInfo* IGLink_t7_4_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2717;
extern "C" void GLinkiOS_executeCaptureScreenshopAndPostArticle_m7_98 (GLinkiOS_t7_15 * __this, String_t* ___dummy, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Texture2D_t5_31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(850);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		GLink_t7_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1162);
		IGLink_t7_4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1163);
		_stringLiteral2717 = il2cpp_codegen_string_literal_from_index(2717);
		s_Il2CppMethodIntialized = true;
	}
	Texture2D_t5_31 * V_0 = {0};
	ByteU5BU5D_t1_70* V_1 = {0};
	String_t* V_2 = {0};
	{
		Object_t * L_0 = GLinkiOS_CoFunction_m7_97(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m5_598(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = Screen_get_width_m5_143(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_m5_144(NULL /*static, unused*/, /*hidden argument*/NULL);
		Texture2D_t5_31 * L_3 = (Texture2D_t5_31 *)il2cpp_codegen_object_new (Texture2D_t5_31_il2cpp_TypeInfo_var);
		Texture2D__ctor_m5_154(L_3, L_1, L_2, 3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		Texture2D_t5_31 * L_4 = V_0;
		int32_t L_5 = Screen_get_width_m5_143(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_6 = Screen_get_height_m5_144(NULL /*static, unused*/, /*hidden argument*/NULL);
		Rect_t5_49  L_7 = {0};
		Rect__ctor_m5_281(&L_7, (0.0f), (0.0f), (((float)((float)L_5))), (((float)((float)L_6))), /*hidden argument*/NULL);
		NullCheck(L_4);
		Texture2D_ReadPixels_m5_160(L_4, L_7, 0, 0, 1, /*hidden argument*/NULL);
		Texture2D_t5_31 * L_8 = V_0;
		NullCheck(L_8);
		Texture2D_Apply_m5_159(L_8, /*hidden argument*/NULL);
		Texture2D_t5_31 * L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_t1_70* L_10 = Texture2D_EncodeToPNG_m5_163(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		String_t* L_11 = Application_get_persistentDataPath_m5_523(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m1_420(NULL /*static, unused*/, L_11, _stringLiteral2717, /*hidden argument*/NULL);
		V_2 = L_12;
		String_t* L_13 = V_2;
		ByteU5BU5D_t1_70* L_14 = V_1;
		File_WriteAllBytes_m1_2116(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GLink_t7_3_il2cpp_TypeInfo_var);
		Object_t * L_15 = GLink_sharedInstance_m7_12(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_16 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_17 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		String_t* L_18 = V_2;
		NullCheck(L_15);
		InterfaceActionInvoker4< int32_t, String_t*, String_t*, String_t* >::Invoke(7 /* System.Void IGLink::executeArticlePostWithImage(System.Int32,System.String,System.String,System.String) */, IGLink_t7_4_il2cpp_TypeInfo_var, L_15, 5, L_16, L_17, L_18);
		return;
	}
}
// System.Void GLinkiOS::executeHome()
extern "C" void GLinkiOS_executeHome_m7_99 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	{
		GLinkiOS__ExecuteMain_m7_65(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::executeNotice()
extern "C" void GLinkiOS_executeNotice_m7_100 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	{
		GLinkiOS__ExecuteNotice_m7_69(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::executeEvent()
extern "C" void GLinkiOS_executeEvent_m7_101 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	{
		GLinkiOS__ExecuteEvent_m7_70(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::executeMenu()
extern "C" void GLinkiOS_executeMenu_m7_102 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	{
		GLinkiOS__ExecuteMenu_m7_71(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::executeProfile()
extern "C" void GLinkiOS_executeProfile_m7_103 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	{
		GLinkiOS__ExecuteProfile_m7_72(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::executeArticle(System.Int32)
extern "C" void GLinkiOS_executeArticle_m7_104 (GLinkiOS_t7_15 * __this, int32_t ___articleId, const MethodInfo* method)
{
	{
		int32_t L_0 = ___articleId;
		GLinkiOS__ExecuteArticle_m7_73(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::executeArticlePost(System.Int32,System.String,System.String)
extern "C" void GLinkiOS_executeArticlePost_m7_105 (GLinkiOS_t7_15 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, const MethodInfo* method)
{
	{
		int32_t L_0 = ___menuId;
		String_t* L_1 = ___subject;
		String_t* L_2 = ___content;
		GLinkiOS__ExecuteArticlePost_m7_66(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::executeArticlePostWithImage(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS_executeArticlePostWithImage_m7_106 (GLinkiOS_t7_15 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method)
{
	{
		int32_t L_0 = ___menuId;
		String_t* L_1 = ___subject;
		String_t* L_2 = ___content;
		String_t* L_3 = ___filePath;
		GLinkiOS__ExecuteArticlePostWithImage_m7_67(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::executeArticlePostWithVideo(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS_executeArticlePostWithVideo_m7_107 (GLinkiOS_t7_15 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method)
{
	{
		int32_t L_0 = ___menuId;
		String_t* L_1 = ___subject;
		String_t* L_2 = ___content;
		String_t* L_3 = ___filePath;
		GLinkiOS__ExecuteArticlePostWithVideo_m7_68(NULL /*static, unused*/, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::syncGameUserId(System.String)
extern "C" void GLinkiOS_syncGameUserId_m7_108 (GLinkiOS_t7_15 * __this, String_t* ___gameUserId, const MethodInfo* method)
{
	{
		String_t* L_0 = ___gameUserId;
		GLinkiOS__SyncGameUserId_m7_74(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::executeMore()
extern "C" void GLinkiOS_executeMore_m7_109 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	{
		GLinkiOS__ExecuteEtc_m7_89(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::startWidget()
extern "C" void GLinkiOS_startWidget_m7_110 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	{
		GLinkiOS__StartWidget_m7_84(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::stopWidget()
extern "C" void GLinkiOS_stopWidget_m7_111 (GLinkiOS_t7_15 * __this, const MethodInfo* method)
{
	{
		GLinkiOS__StopWidget_m7_85(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::setUseWidgetVideoRecord(System.Boolean)
extern "C" void GLinkiOS_setUseWidgetVideoRecord_m7_112 (GLinkiOS_t7_15 * __this, bool ___useVideoRecord, const MethodInfo* method)
{
	{
		bool L_0 = ___useVideoRecord;
		GLinkiOS__SetUseWidgetVideoRecord_m7_86(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GLinkiOS::setShowWidgetWhenUnloadSDK(System.Boolean)
extern "C" void GLinkiOS_setShowWidgetWhenUnloadSDK_m7_113 (GLinkiOS_t7_15 * __this, bool ___useWidget, const MethodInfo* method)
{
	{
		bool L_0 = ___useWidget;
		GLinkiOS__SetShowWidgetWhenUnloadSDK_m7_87(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
