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

// GLinkiOS/NCSDKJoinedCafeDelegate
struct NCSDKJoinedCafeDelegate_t7_9;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GLinkiOS/NCSDKJoinedCafeDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKJoinedCafeDelegate__ctor_m7_37 (NCSDKJoinedCafeDelegate_t7_9 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKJoinedCafeDelegate::Invoke()
extern "C" void NCSDKJoinedCafeDelegate_Invoke_m7_38 (NCSDKJoinedCafeDelegate_t7_9 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NCSDKJoinedCafeDelegate_t7_9(Il2CppObject* delegate);
// System.IAsyncResult GLinkiOS/NCSDKJoinedCafeDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKJoinedCafeDelegate_BeginInvoke_m7_39 (NCSDKJoinedCafeDelegate_t7_9 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKJoinedCafeDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKJoinedCafeDelegate_EndInvoke_m7_40 (NCSDKJoinedCafeDelegate_t7_9 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
