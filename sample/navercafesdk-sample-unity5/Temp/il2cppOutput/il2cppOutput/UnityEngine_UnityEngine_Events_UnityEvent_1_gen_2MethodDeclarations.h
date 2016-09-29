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

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t5_254;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5_280;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_210;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_1302_gshared (UnityEvent_1_t5_254 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_1302(__this, method) (( void (*) (UnityEvent_1_t5_254 *, const MethodInfo*))UnityEvent_1__ctor_m5_1302_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_1473_gshared (UnityEvent_1_t5_254 * __this, UnityAction_1_t5_280 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_1473(__this, ___call, method) (( void (*) (UnityEvent_1_t5_254 *, UnityAction_1_t5_280 *, const MethodInfo*))UnityEvent_1_AddListener_m5_1473_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_1474_gshared (UnityEvent_1_t5_254 * __this, UnityAction_1_t5_280 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_1474(__this, ___call, method) (( void (*) (UnityEvent_1_t5_254 *, UnityAction_1_t5_280 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_1474_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Int32>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_1475_gshared (UnityEvent_1_t5_254 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_1475(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_254 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_1475_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_210 * UnityEvent_1_GetDelegate_m5_1476_gshared (UnityEvent_1_t5_254 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_1476(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_210 * (*) (UnityEvent_1_t5_254 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_1476_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Int32>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_210 * UnityEvent_1_GetDelegate_m5_1477_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_280 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_1477(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_210 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_280 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_1477_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_1303_gshared (UnityEvent_1_t5_254 * __this, int32_t ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_1303(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_254 *, int32_t, const MethodInfo*))UnityEvent_1_Invoke_m5_1303_gshared)(__this, ___arg0, method)
