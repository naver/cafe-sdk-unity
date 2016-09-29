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

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
struct EventFunction_1_t6_187;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t6_5;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void EventFunction_1__ctor_m6_1520_gshared (EventFunction_1_t6_187 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define EventFunction_1__ctor_m6_1520(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t6_187 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m6_1520_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
extern "C" void EventFunction_1_Invoke_m6_1522_gshared (EventFunction_1_t6_187 * __this, Object_t * ___handler, BaseEventData_t6_5 * ___eventData, const MethodInfo* method);
#define EventFunction_1_Invoke_m6_1522(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t6_187 *, Object_t *, BaseEventData_t6_5 *, const MethodInfo*))EventFunction_1_Invoke_m6_1522_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
extern "C" Object_t * EventFunction_1_BeginInvoke_m6_1524_gshared (EventFunction_1_t6_187 * __this, Object_t * ___handler, BaseEventData_t6_5 * ___eventData, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define EventFunction_1_BeginInvoke_m6_1524(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t6_187 *, Object_t *, BaseEventData_t6_5 *, AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m6_1524_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C" void EventFunction_1_EndInvoke_m6_1526_gshared (EventFunction_1_t6_187 * __this, Object_t * ___result, const MethodInfo* method);
#define EventFunction_1_EndInvoke_m6_1526(__this, ___result, method) (( void (*) (EventFunction_1_t6_187 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m6_1526_gshared)(__this, ___result, method)
