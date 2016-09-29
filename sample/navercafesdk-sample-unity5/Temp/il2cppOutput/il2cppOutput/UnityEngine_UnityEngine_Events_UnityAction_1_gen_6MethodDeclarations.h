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

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5_280;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction_1__ctor_m5_1402_gshared (UnityAction_1_t5_280 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define UnityAction_1__ctor_m5_1402(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t5_280 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m5_1402_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::Invoke(T0)
extern "C" void UnityAction_1_Invoke_m5_1403_gshared (UnityAction_1_t5_280 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityAction_1_Invoke_m5_1403(__this, ___arg0, method) (( void (*) (UnityAction_1_t5_280 *, int32_t, const MethodInfo*))UnityAction_1_Invoke_m5_1403_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<System.Int32>::BeginInvoke(T0,System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_1_BeginInvoke_m5_1404_gshared (UnityAction_1_t5_280 * __this, int32_t ___arg0, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define UnityAction_1_BeginInvoke_m5_1404(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t5_280 *, int32_t, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m5_1404_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_1_EndInvoke_m5_1405_gshared (UnityAction_1_t5_280 * __this, Object_t * ___result, const MethodInfo* method);
#define UnityAction_1_EndInvoke_m5_1405(__this, ___result, method) (( void (*) (UnityAction_1_t5_280 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m5_1405_gshared)(__this, ___result, method)
