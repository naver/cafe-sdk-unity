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

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t5_279;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t5_280;
// System.Object[]
struct ObjectU5BU5D_t1_156;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m5_1398_gshared (InvokableCall_1_t5_279 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_1398(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t5_279 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m5_1398_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m5_1399_gshared (InvokableCall_1_t5_279 * __this, UnityAction_1_t5_280 * ___action, const MethodInfo* method);
#define InvokableCall_1__ctor_m5_1399(__this, ___action, method) (( void (*) (InvokableCall_1_t5_279 *, UnityAction_1_t5_280 *, const MethodInfo*))InvokableCall_1__ctor_m5_1399_gshared)(__this, ___action, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m5_1400_gshared (InvokableCall_1_t5_279 * __this, ObjectU5BU5D_t1_156* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m5_1400(__this, ___args, method) (( void (*) (InvokableCall_1_t5_279 *, ObjectU5BU5D_t1_156*, const MethodInfo*))InvokableCall_1_Invoke_m5_1400_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m5_1401_gshared (InvokableCall_1_t5_279 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m5_1401(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t5_279 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m5_1401_gshared)(__this, ___targetObj, ___method, method)
