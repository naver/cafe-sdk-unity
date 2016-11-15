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
struct GLinkAndroid_t6_5;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void GLinkAndroid::.ctor()
extern "C" void GLinkAndroid__ctor_m6_13 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeHome()
extern "C" void GLinkAndroid_executeHome_m6_14 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeNotice()
extern "C" void GLinkAndroid_executeNotice_m6_15 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeEvent()
extern "C" void GLinkAndroid_executeEvent_m6_16 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeMenu()
extern "C" void GLinkAndroid_executeMenu_m6_17 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeProfile()
extern "C" void GLinkAndroid_executeProfile_m6_18 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeArticle(System.Int32)
extern "C" void GLinkAndroid_executeArticle_m6_19 (GLinkAndroid_t6_5 * __this, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeArticlePost(System.Int32,System.String,System.String)
extern "C" void GLinkAndroid_executeArticlePost_m6_20 (GLinkAndroid_t6_5 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeArticlePostWithImage(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkAndroid_executeArticlePostWithImage_m6_21 (GLinkAndroid_t6_5 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeArticlePostWithVideo(System.Int32,System.String,System.String,System.String)
extern "C" void GLinkAndroid_executeArticlePostWithVideo_m6_22 (GLinkAndroid_t6_5 * __this, int32_t ___menuId, String_t* ___subject, String_t* ___content, String_t* ___filePath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::executeMore()
extern "C" void GLinkAndroid_executeMore_m6_23 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::syncGameUserId(System.String)
extern "C" void GLinkAndroid_syncGameUserId_m6_24 (GLinkAndroid_t6_5 * __this, String_t* ___gameUserId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::startWidget()
extern "C" void GLinkAndroid_startWidget_m6_25 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::stopWidget()
extern "C" void GLinkAndroid_stopWidget_m6_26 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::setUseWidgetVideoRecord(System.Boolean)
extern "C" void GLinkAndroid_setUseWidgetVideoRecord_m6_27 (GLinkAndroid_t6_5 * __this, bool ___useVideoRecord, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::setShowWidgetWhenUnloadSDK(System.Boolean)
extern "C" void GLinkAndroid_setShowWidgetWhenUnloadSDK_m6_28 (GLinkAndroid_t6_5 * __this, bool ___useWidget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GLinkAndroid::getCafeLangCode()
extern "C" String_t* GLinkAndroid_getCafeLangCode_m6_29 (GLinkAndroid_t6_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkAndroid::setCafeLangCode(System.String)
extern "C" void GLinkAndroid_setCafeLangCode_m6_30 (GLinkAndroid_t6_5 * __this, String_t* ___cafeLangCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
