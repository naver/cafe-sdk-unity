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

// GLinkAndroid
struct GLinkAndroid_t7_5;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void GLinkAndroid::.ctor()
extern "C" void GLinkAndroid__ctor_m7_13 (GLinkAndroid_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeHome()
extern "C" void GLinkAndroid_executeHome_m7_14 (GLinkAndroid_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeNotice()
extern "C" void GLinkAndroid_executeNotice_m7_15 (GLinkAndroid_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeEvent()
extern "C" void GLinkAndroid_executeEvent_m7_16 (GLinkAndroid_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeMenu()
extern "C" void GLinkAndroid_executeMenu_m7_17 (GLinkAndroid_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeProfile()
extern "C" void GLinkAndroid_executeProfile_m7_18 (GLinkAndroid_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeArticle(System.Int32)
extern "C" void GLinkAndroid_executeArticle_m7_19 (GLinkAndroid_t7_5 * __this, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeArticlePost(System.Int32,System.String,System.String)
extern "C" void GLinkAndroid_executeArticlePost_m7_20 (GLinkAndroid_t7_5 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeArticlePostWithImage(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkAndroid_executeArticlePostWithImage_m7_21 (GLinkAndroid_t7_5 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeArticlePostWithVideo(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkAndroid_executeArticlePostWithVideo_m7_22 (GLinkAndroid_t7_5 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeMore()
extern "C" void GLinkAndroid_executeMore_m7_23 (GLinkAndroid_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::syncGameUserId(System.String)
extern "C" void GLinkAndroid_syncGameUserId_m7_24 (GLinkAndroid_t7_5 * __this, String_t* ___gameUserId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::startWidget()
extern "C" void GLinkAndroid_startWidget_m7_25 (GLinkAndroid_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::stopWidget()
extern "C" void GLinkAndroid_stopWidget_m7_26 (GLinkAndroid_t7_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::setUseWidgetVideoRecord(System.Boolean)
extern "C" void GLinkAndroid_setUseWidgetVideoRecord_m7_27 (GLinkAndroid_t7_5 * __this, bool ___useVideoRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::setShowWidgetWhenUnloadSDK(System.Boolean)
extern "C" void GLinkAndroid_setShowWidgetWhenUnloadSDK_m7_28 (GLinkAndroid_t7_5 * __this, bool ___useWidget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
