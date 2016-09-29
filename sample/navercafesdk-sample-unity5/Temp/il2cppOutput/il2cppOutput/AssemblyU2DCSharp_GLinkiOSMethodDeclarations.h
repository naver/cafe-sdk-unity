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
struct GLinkiOS_t7_15;
// System.String
struct String_t;
// GLinkiOS/NCSDKDidLoadDelegate
struct NCSDKDidLoadDelegate_t7_7;
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
// System.Collections.IEnumerator
struct IEnumerator_t1_129;

#include "codegen/il2cpp-codegen.h"

// System.Void GLinkiOS::.ctor()
extern "C" void GLinkiOS__ctor_m7_63 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_InitGLink(System.String,System.String,System.Int32)
extern "C" void GLinkiOS__InitGLink_m7_64 (Object_t * __this /* static, unused */, String_t* ___consumerKey, String_t* ___consumerSecret, int32_t ___cafeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteMain()
extern "C" void GLinkiOS__ExecuteMain_m7_65 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteArticlePost(System.Int32,System.String,System.String)
extern "C" void GLinkiOS__ExecuteArticlePost_m7_66 (Object_t * __this /* static, unused */, int32_t ___menuId, String_t* ___subject, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteArticlePostWithImage(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS__ExecuteArticlePostWithImage_m7_67 (Object_t * __this /* static, unused */, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteArticlePostWithVideo(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS__ExecuteArticlePostWithVideo_m7_68 (Object_t * __this /* static, unused */, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteNotice()
extern "C" void GLinkiOS__ExecuteNotice_m7_69 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteEvent()
extern "C" void GLinkiOS__ExecuteEvent_m7_70 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteMenu()
extern "C" void GLinkiOS__ExecuteMenu_m7_71 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteProfile()
extern "C" void GLinkiOS__ExecuteProfile_m7_72 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteArticle(System.Int32)
extern "C" void GLinkiOS__ExecuteArticle_m7_73 (Object_t * __this /* static, unused */, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SyncGameUserId(System.String)
extern "C" void GLinkiOS__SyncGameUserId_m7_74 (Object_t * __this /* static, unused */, String_t* ___gameUserId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ShowMessageToast(System.String)
extern "C" void GLinkiOS__ShowMessageToast_m7_75 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SaveCameraRoll(System.String)
extern "C" void GLinkiOS__SaveCameraRoll_m7_76 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKDidLoadDelegate(GLinkiOS/NCSDKDidLoadDelegate)
extern "C" void GLinkiOS__SetSDKDidLoadDelegate_m7_77 (Object_t * __this /* static, unused */, NCSDKDidLoadDelegate_t7_7 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKDidUnLoadDelegate(GLinkiOS/NCSDKDidUnLoadDelegate)
extern "C" void GLinkiOS__SetSDKDidUnLoadDelegate_m7_78 (Object_t * __this /* static, unused */, NCSDKDidUnLoadDelegate_t7_8 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKJoinedCafeDelegate(GLinkiOS/NCSDKJoinedCafeDelegate)
extern "C" void GLinkiOS__SetSDKJoinedCafeDelegate_m7_79 (Object_t * __this /* static, unused */, NCSDKJoinedCafeDelegate_t7_9 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKPostedArticleAtMenuDelegate(GLinkiOS/NCSDKPostedArticleAtMenuDelegate)
extern "C" void GLinkiOS__SetSDKPostedArticleAtMenuDelegate_m7_80 (Object_t * __this /* static, unused */, NCSDKPostedArticleAtMenuDelegate_t7_10 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKPostedCommentAtArticleDelegate(GLinkiOS/NCSDKPostedCommentAtArticleDelegate)
extern "C" void GLinkiOS__SetSDKPostedCommentAtArticleDelegate_m7_81 (Object_t * __this /* static, unused */, NCSDKPostedCommentAtArticleDelegate_t7_11 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKWidgetPostAriticleWithImageCallback(GLinkiOS/NCSDKWidgetPostAriticleWithImageDelegate)
extern "C" void GLinkiOS__SetSDKWidgetPostAriticleWithImageCallback_m7_82 (Object_t * __this /* static, unused */, NCSDKWidgetPostAriticleWithImageDelegate_t7_12 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetSDKDidVoteAtArticleDelegate(GLinkiOS/NCSDKDidVoteAtArticleDelegate)
extern "C" void GLinkiOS__SetSDKDidVoteAtArticleDelegate_m7_83 (Object_t * __this /* static, unused */, NCSDKDidVoteAtArticleDelegate_t7_13 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_StartWidget()
extern "C" void GLinkiOS__StartWidget_m7_84 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_StopWidget()
extern "C" void GLinkiOS__StopWidget_m7_85 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetUseWidgetVideoRecord(System.Boolean)
extern "C" void GLinkiOS__SetUseWidgetVideoRecord_m7_86 (Object_t * __this /* static, unused */, bool ___useVideoRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_SetShowWidgetWhenUnloadSDK(System.Boolean)
extern "C" void GLinkiOS__SetShowWidgetWhenUnloadSDK_m7_87 (Object_t * __this /* static, unused */, bool ___useWidget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteCaptureScreenshopAndPostArticle()
extern "C" void GLinkiOS__ExecuteCaptureScreenshopAndPostArticle_m7_88 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_ExecuteEtc()
extern "C" void GLinkiOS__ExecuteEtc_m7_89 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKDidLoadCallback()
extern "C" void GLinkiOS__NCSDKDidLoadCallback_m7_90 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKDidUnLoadCallback()
extern "C" void GLinkiOS__NCSDKDidUnLoadCallback_m7_91 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKJoinedCafeCallback()
extern "C" void GLinkiOS__NCSDKJoinedCafeCallback_m7_92 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKPostedArticleAtMenuCallback(System.Int32,System.Int32,System.Int32)
extern "C" void GLinkiOS__NCSDKPostedArticleAtMenuCallback_m7_93 (Object_t * __this /* static, unused */, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKPostedCommentAtArticleCallback(System.Int32)
extern "C" void GLinkiOS__NCSDKPostedCommentAtArticleCallback_m7_94 (Object_t * __this /* static, unused */, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKWidgetPostAriticleWithImageCallback()
extern "C" void GLinkiOS__NCSDKWidgetPostAriticleWithImageCallback_m7_95 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::_NCSDKDidVoteAtArticleCallback(System.Int32)
extern "C" void GLinkiOS__NCSDKDidVoteAtArticleCallback_m7_96 (Object_t * __this /* static, unused */, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GLinkiOS::CoFunction()
extern "C" Object_t * GLinkiOS_CoFunction_m7_97 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeCaptureScreenshopAndPostArticle(System.String)
extern "C" void GLinkiOS_executeCaptureScreenshopAndPostArticle_m7_98 (GLinkiOS_t7_15 * __this, String_t* ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeHome()
extern "C" void GLinkiOS_executeHome_m7_99 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeNotice()
extern "C" void GLinkiOS_executeNotice_m7_100 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeEvent()
extern "C" void GLinkiOS_executeEvent_m7_101 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeMenu()
extern "C" void GLinkiOS_executeMenu_m7_102 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeProfile()
extern "C" void GLinkiOS_executeProfile_m7_103 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeArticle(System.Int32)
extern "C" void GLinkiOS_executeArticle_m7_104 (GLinkiOS_t7_15 * __this, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeArticlePost(System.Int32,System.String,System.String)
extern "C" void GLinkiOS_executeArticlePost_m7_105 (GLinkiOS_t7_15 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeArticlePostWithImage(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS_executeArticlePostWithImage_m7_106 (GLinkiOS_t7_15 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeArticlePostWithVideo(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkiOS_executeArticlePostWithVideo_m7_107 (GLinkiOS_t7_15 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::syncGameUserId(System.String)
extern "C" void GLinkiOS_syncGameUserId_m7_108 (GLinkiOS_t7_15 * __this, String_t* ___gameUserId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::executeMore()
extern "C" void GLinkiOS_executeMore_m7_109 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::startWidget()
extern "C" void GLinkiOS_startWidget_m7_110 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::stopWidget()
extern "C" void GLinkiOS_stopWidget_m7_111 (GLinkiOS_t7_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::setUseWidgetVideoRecord(System.Boolean)
extern "C" void GLinkiOS_setUseWidgetVideoRecord_m7_112 (GLinkiOS_t7_15 * __this, bool ___useVideoRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS::setShowWidgetWhenUnloadSDK(System.Boolean)
extern "C" void GLinkiOS_setShowWidgetWhenUnloadSDK_m7_113 (GLinkiOS_t7_15 * __this, bool ___useWidget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
