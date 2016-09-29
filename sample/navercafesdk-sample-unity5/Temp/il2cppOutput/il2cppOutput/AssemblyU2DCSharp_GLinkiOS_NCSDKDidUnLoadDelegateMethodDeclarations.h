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

// GLinkiOS/NCSDKDidUnLoadDelegate
struct NCSDKDidUnLoadDelegate_t7_8;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void GLinkiOS/NCSDKDidUnLoadDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void NCSDKDidUnLoadDelegate__ctor_m7_33 (NCSDKDidUnLoadDelegate_t7_8 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKDidUnLoadDelegate::Invoke()
extern "C" void NCSDKDidUnLoadDelegate_Invoke_m7_34 (NCSDKDidUnLoadDelegate_t7_8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NCSDKDidUnLoadDelegate_t7_8(Il2CppObject* delegate);
// System.IAsyncResult GLinkiOS/NCSDKDidUnLoadDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * NCSDKDidUnLoadDelegate_BeginInvoke_m7_35 (NCSDKDidUnLoadDelegate_t7_8 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkiOS/NCSDKDidUnLoadDelegate::EndInvoke(System.IAsyncResult)
extern "C" void NCSDKDidUnLoadDelegate_EndInvoke_m7_36 (NCSDKDidUnLoadDelegate_t7_8 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
