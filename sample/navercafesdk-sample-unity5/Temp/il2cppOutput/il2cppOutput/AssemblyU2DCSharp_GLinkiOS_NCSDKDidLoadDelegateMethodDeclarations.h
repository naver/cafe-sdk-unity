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

// GLinkiOS/NCSDKDidLoadDelegate
struct NCSDKDidLoadDelegate_t7_7;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GLinkiOS/NCSDKDidLoadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKDidLoadDelegate__ctor_m7_29 (NCSDKDidLoadDelegate_t7_7 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKDidLoadDelegate::Invoke()
extern "C" void NCSDKDidLoadDelegate_Invoke_m7_30 (NCSDKDidLoadDelegate_t7_7 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NCSDKDidLoadDelegate_t7_7(Il2CppObject* delegate);
// System.IAsyncResult GLinkiOS/NCSDKDidLoadDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKDidLoadDelegate_BeginInvoke_m7_31 (NCSDKDidLoadDelegate_t7_7 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKDidLoadDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKDidLoadDelegate_EndInvoke_m7_32 (NCSDKDidLoadDelegate_t7_7 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
