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

// UnityEngine.Events.UnityEvent`1<UnityEngine.Color>
struct UnityEvent_1_t5_252;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t5_260;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_210;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::.ctor()
extern "C" void UnityEvent_1__ctor_m5_1281_gshared (UnityEvent_1_t5_252 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m5_1281(__this, method) (( void (*) (UnityEvent_1_t5_252 *, const MethodInfo*))UnityEvent_1__ctor_m5_1281_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m5_1283_gshared (UnityEvent_1_t5_252 * __this, UnityAction_1_t5_260 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m5_1283(__this, ___call, method) (( void (*) (UnityEvent_1_t5_252 *, UnityAction_1_t5_260 *, const MethodInfo*))UnityEvent_1_AddListener_m5_1283_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m5_1459_gshared (UnityEvent_1_t5_252 * __this, UnityAction_1_t5_260 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m5_1459(__this, ___call, method) (( void (*) (UnityEvent_1_t5_252 *, UnityAction_1_t5_260 *, const MethodInfo*))UnityEvent_1_RemoveListener_m5_1459_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m5_1460_gshared (UnityEvent_1_t5_252 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m5_1460(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t5_252 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m5_1460_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_210 * UnityEvent_1_GetDelegate_m5_1461_gshared (UnityEvent_1_t5_252 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_1461(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t5_210 * (*) (UnityEvent_1_t5_252 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_1461_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t5_210 * UnityEvent_1_GetDelegate_m5_1462_gshared (Object_t * __this /* static, unused */, UnityAction_1_t5_260 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m5_1462(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t5_210 * (*) (Object_t * /* static, unused */, UnityAction_1_t5_260 *, const MethodInfo*))UnityEvent_1_GetDelegate_m5_1462_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Color>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m5_1282_gshared (UnityEvent_1_t5_252 * __this, Color_t5_38  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m5_1282(__this, ___arg0, method) (( void (*) (UnityEvent_1_t5_252 *, Color_t5_38 , const MethodInfo*))UnityEvent_1_Invoke_m5_1282_gshared)(__this, ___arg0, method)
