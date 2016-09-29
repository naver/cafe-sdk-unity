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

// GLinkiOS/NCSDKPostedArticleAtMenuDelegate
struct NCSDKPostedArticleAtMenuDelegate_t7_10;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GLinkiOS/NCSDKPostedArticleAtMenuDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKPostedArticleAtMenuDelegate__ctor_m7_41 (NCSDKPostedArticleAtMenuDelegate_t7_10 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKPostedArticleAtMenuDelegate::Invoke(System.Int32,System.Int32,System.Int32)
extern "C" void NCSDKPostedArticleAtMenuDelegate_Invoke_m7_42 (NCSDKPostedArticleAtMenuDelegate_t7_10 * __this, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NCSDKPostedArticleAtMenuDelegate_t7_10(Il2CppObject* delegate, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount);
// System.IAsyncResult GLinkiOS/NCSDKPostedArticleAtMenuDelegate::BeginInvoke(System.Int32,System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKPostedArticleAtMenuDelegate_BeginInvoke_m7_43 (NCSDKPostedArticleAtMenuDelegate_t7_10 * __this, int32_t ___menuId, int32_t ___imageCount, int32_t ___videoCount, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKPostedArticleAtMenuDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKPostedArticleAtMenuDelegate_EndInvoke_m7_44 (NCSDKPostedArticleAtMenuDelegate_t7_10 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
