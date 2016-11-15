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

// GLinkiOS/NCSDKPostedCommentAtArticleDelegate
struct NCSDKPostedCommentAtArticleDelegate_t6_16;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GLinkiOS/NCSDKPostedCommentAtArticleDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKPostedCommentAtArticleDelegate__ctor_m6_59 (NCSDKPostedCommentAtArticleDelegate_t6_16 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKPostedCommentAtArticleDelegate::Invoke(System.Int32)
extern "C" void NCSDKPostedCommentAtArticleDelegate_Invoke_m6_60 (NCSDKPostedCommentAtArticleDelegate_t6_16 * __this, int32_t ___articleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NCSDKPostedCommentAtArticleDelegate_t6_16(Il2CppObject* delegate, int32_t ___articleId);
// System.IAsyncResult GLinkiOS/NCSDKPostedCommentAtArticleDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKPostedCommentAtArticleDelegate_BeginInvoke_m6_61 (NCSDKPostedCommentAtArticleDelegate_t6_16 * __this, int32_t ___articleId, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKPostedCommentAtArticleDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKPostedCommentAtArticleDelegate_EndInvoke_m6_62 (NCSDKPostedCommentAtArticleDelegate_t6_16 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
