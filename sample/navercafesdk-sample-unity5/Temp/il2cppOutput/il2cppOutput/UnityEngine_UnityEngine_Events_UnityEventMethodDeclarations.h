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

// UnityEngine.Events.UnityEvent
struct UnityEvent_t5_218;
// UnityEngine.Events.UnityAction
struct UnityAction_t5_212;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t5_210;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Events.UnityEvent::.ctor()
extern "C" void UnityEvent__ctor_m5_1242 (UnityEvent_t5_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
extern "C" void UnityEvent_AddListener_m5_1243 (UnityEvent_t5_218 * __this, UnityAction_t5_212 * ___call, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_FindMethod_Impl_m5_1244 (UnityEvent_t5_218 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t5_210 * UnityEvent_GetDelegate_m5_1245 (UnityEvent_t5_218 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent::GetDelegate(UnityEngine.Events.UnityAction)
extern "C" BaseInvokableCall_t5_210 * UnityEvent_GetDelegate_m5_1246 (Object_t * __this /* static, unused */, UnityAction_t5_212 * ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
extern "C" void UnityEvent_Invoke_m5_1247 (UnityEvent_t5_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
