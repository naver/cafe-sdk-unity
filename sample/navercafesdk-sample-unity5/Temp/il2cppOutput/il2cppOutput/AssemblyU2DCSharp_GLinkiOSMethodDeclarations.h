#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GLinkiOS
struct GLinkiOS_t6_20;
// System.String
struct String_t;
// GLinkiOS/NCSDKDidLoadDelegate
struct NCSDKDidLoadDelegate_t6_12;
// GLinkiOS/NCSDKDidUnLoadDelegate
struct NCSDKDidUnLoadDelegate_t6_13;
// GLinkiOS/NCSDKJoinedCafeDelegate
struct NCSDKJoinedCafeDelegate_t6_14;
// GLinkiOS/NCSDKPostedArticleAtMenuDelegate
struct NCSDKPostedArticleAtMenuDelegate_t6_15;
// GLinkiOS/NCSDKPostedCommentAtArticleDelegate
struct NCSDKPostedCommentAtArticleDelegate_t6_16;
// GLinkiOS/NCSDKWidgetPostAriticleWithImageDelegate
struct NCSDKWidgetPostAriticleWithImageDelegate_t6_17;
// GLinkiOS/NCSDKDidVoteAtArticleDelegate
struct NCSDKDidVoteAtArticleDelegate_t6_18;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;

#include "codegen/il2cpp-codegen.h"

// System.Void GLinkiOS::.ctor()
extern "C" void GLinkiOS__ctor_m6_77 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_InitGLink(System.String,System.String,System.Int32)
extern "C" void GLinkiOS__InitGLink_m6_78 (Object_t * __this /* static, unused */, String_t* ___consumerKey, String_t* ___consumerSecret, int32_t ___cafeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_InitGLinkForGlobal(System.String,System.Int32,System.String)
extern "C" void GLinkiOS__InitGLinkForGlobal_m6_79 (Object_t * __this /* static, unused */, String_t* ___neoIdConsumerKey, int32_t ___globalCafeId, String_t* ___language, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteMain()
extern "C" void GLinkiOS__ExecuteMain_m6_80 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteArticlePost(System.Int32,System.String,System.String)
extern "C" void GLinkiOS__ExecuteArticlePost_m6_81 (Object_t * __this /* static, unused */, int32_t ___menuId, String_t* ___subject, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteArticlePostWithImage(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS__ExecuteArticlePostWithImage_m6_82 (Object_t * __this /* static, unused */, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteArticlePostWithVideo(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS__ExecuteArticlePostWithVideo_m6_83 (Object_t * __this /* static, unused */, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteNotice()
extern "C" void GLinkiOS__ExecuteNotice_m6_84 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteEvent()
extern "C" void GLinkiOS__ExecuteEvent_m6_85 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteMenu()
extern "C" void GLinkiOS__ExecuteMenu_m6_86 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteProfile()
extern "C" void GLinkiOS__ExecuteProfile_m6_87 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteArticle(System.Int32)
extern "C" void GLinkiOS__ExecuteArticle_m6_88 (Object_t * __this /* static, unused */, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SyncGameUserId(System.String)
extern "C" void GLinkiOS__SyncGameUserId_m6_89 (Object_t * __this /* static, unused */, String_t* ___gameUserId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GLinkiOS::_GetCafeLangCode()
extern "C" String_t* GLinkiOS__GetCafeLangCode_m6_90 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ShowMessageToast(System.String)
extern "C" void GLinkiOS__ShowMessageToast_m6_91 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SaveCameraRoll(System.String)
extern "C" void GLinkiOS__SaveCameraRoll_m6_92 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKDidLoadDelegate(GLinkiOS/NCSDKDidLoadDelegate)
extern "C" void GLinkiOS__SetSDKDidLoadDelegate_m6_93 (Object_t * __this /* static, unused */, NCSDKDidLoadDelegate_t6_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKDidUnLoadDelegate(GLinkiOS/NCSDKDidUnLoadDelegate)
extern "C" void GLinkiOS__SetSDKDidUnLoadDelegate_m6_94 (Object_t * __this /* static, unused */, NCSDKDidUnLoadDelegate_t6_13 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKJoinedCafeDelegate(GLinkiOS/NCSDKJoinedCafeDelegate)
extern "C" void GLinkiOS__SetSDKJoinedCafeDelegate_m6_95 (Object_t * __this /* static, unused */, NCSDKJoinedCafeDelegate_t6_14 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKPostedArticleAtMenuDelegate(GLinkiOS/NCSDKPostedArticleAtMenuDelegate)
extern "C" void GLinkiOS__SetSDKPostedArticleAtMenuDelegate_m6_96 (Object_t * __this /* static, unused */, NCSDKPostedArticleAtMenuDelegate_t6_15 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKPostedCommentAtArticleDelegate(GLinkiOS/NCSDKPostedCommentAtArticleDelegate)
extern "C" void GLinkiOS__SetSDKPostedCommentAtArticleDelegate_m6_97 (Object_t * __this /* static, unused */, NCSDKPostedCommentAtArticleDelegate_t6_16 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKWidgetPostAriticleWithImageCallback(GLinkiOS/NCSDKWidgetPostAriticleWithImageDelegate)
extern "C" void GLinkiOS__SetSDKWidgetPostAriticleWithImageCallback_m6_98 (Object_t * __this /* static, unused */, NCSDKWidgetPostAriticleWithImageDelegate_t6_17 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKDidVoteAtArticleDelegate(GLinkiOS/NCSDKDidVoteAtArticleDelegate)
extern "C" void GLinkiOS__SetSDKDidVoteAtArticleDelegate_m6_99 (Object_t * __this /* static, unused */, NCSDKDidVoteAtArticleDelegate_t6_18 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_StartWidget()
extern "C" void GLinkiOS__StartWidget_m6_100 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_StopWidget()
extern "C" void GLinkiOS__StopWidget_m6_101 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetUseWidgetVideoRecord(System.Boolean)
extern "C" void GLinkiOS__SetUseWidgetVideoRecord_m6_102 (Object_t * __this /* static, unused */, bool ___useVideoRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetShowWidgetWhenUnloadSDK(System.Boolean)
extern "C" void GLinkiOS__SetShowWidgetWhenUnloadSDK_m6_103 (Object_t * __this /* static, unused */, bool ___useWidget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetCafeLangCode(System.String)
extern "C" void GLinkiOS__SetCafeLangCode_m6_104 (Object_t * __this /* static, unused */, String_t* ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteCaptureScreenshopAndPostArticle()
extern "C" void GLinkiOS__ExecuteCaptureScreenshopAndPostArticle_m6_105 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteEtc()
extern "C" void GLinkiOS__ExecuteEtc_m6_106 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKDidLoadCallback()
extern "C" void GLinkiOS__NCSDKDidLoadCallback_m6_107 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKDidUnLoadCallback()
extern "C" void GLinkiOS__NCSDKDidUnLoadCallback_m6_108 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKJoinedCafeCallback()
extern "C" void GLinkiOS__NCSDKJoinedCafeCallback_m6_109 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKPostedArticleAtMenuCallback(System.Int32,System.Int32,System.Int32)
extern "C" void GLinkiOS__NCSDKPostedArticleAtMenuCallback_m6_110 (Object_t * __this /* static, unused */, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKPostedCommentAtArticleCallback(System.Int32)
extern "C" void GLinkiOS__NCSDKPostedCommentAtArticleCallback_m6_111 (Object_t * __this /* static, unused */, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKWidgetPostAriticleWithImageCallback()
extern "C" void GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m6_112 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKDidVoteAtArticleCallback(System.Int32)
extern "C" void GLinkiOS__NCSDKDidVoteAtArticleCallback_m6_113 (Object_t * __this /* static, unused */, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GLinkiOS::CoFunction()
extern "C" Object_t * GLinkiOS_CoFunction_m6_114 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeCaptureScreenshopAndPostArticle(System.String)
extern "C" void GLinkiOS_executeCaptureScreenshopAndPostArticle_m6_115 (GLinkiOS_t6_20 * __this, String_t* ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeHome()
extern "C" void GLinkiOS_executeHome_m6_116 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeNotice()
extern "C" void GLinkiOS_executeNotice_m6_117 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeEvent()
extern "C" void GLinkiOS_executeEvent_m6_118 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeMenu()
extern "C" void GLinkiOS_executeMenu_m6_119 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeProfile()
extern "C" void GLinkiOS_executeProfile_m6_120 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeArticle(System.Int32)
extern "C" void GLinkiOS_executeArticle_m6_121 (GLinkiOS_t6_20 * __this, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeArticlePost(System.Int32,System.String,System.String)
extern "C" void GLinkiOS_executeArticlePost_m6_122 (GLinkiOS_t6_20 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeArticlePostWithImage(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS_executeArticlePostWithImage_m6_123 (GLinkiOS_t6_20 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeArticlePostWithVideo(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS_executeArticlePostWithVideo_m6_124 (GLinkiOS_t6_20 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::syncGameUserId(System.String)
extern "C" void GLinkiOS_syncGameUserId_m6_125 (GLinkiOS_t6_20 * __this, String_t* ___gameUserId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeMore()
extern "C" void GLinkiOS_executeMore_m6_126 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::startWidget()
extern "C" void GLinkiOS_startWidget_m6_127 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::stopWidget()
extern "C" void GLinkiOS_stopWidget_m6_128 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::setUseWidgetVideoRecord(System.Boolean)
extern "C" void GLinkiOS_setUseWidgetVideoRecord_m6_129 (GLinkiOS_t6_20 * __this, bool ___useVideoRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::setShowWidgetWhenUnloadSDK(System.Boolean)
extern "C" void GLinkiOS_setShowWidgetWhenUnloadSDK_m6_130 (GLinkiOS_t6_20 * __this, bool ___useWidget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GLinkiOS::getCafeLangCode()
extern "C" String_t* GLinkiOS_getCafeLangCode_m6_131 (GLinkiOS_t6_20 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::setCafeLangCode(System.String)
extern "C" void GLinkiOS_setCafeLangCode_m6_132 (GLinkiOS_t6_20 * __this, String_t* ___cafeLangCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
