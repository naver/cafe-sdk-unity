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

// System.Reflection.MonoEvent
struct MonoEvent_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t1_156;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_EventAttributes.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoEvent::.ctor()
extern "C" void MonoEvent__ctor_m1_2803 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventAttributes System.Reflection.MonoEvent::get_Attributes()
extern "C" int32_t MonoEvent_get_Attributes_m1_2804 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.MonoEvent::GetAddMethod(System.Boolean)
extern "C" MethodInfo_t * MonoEvent_GetAddMethod_m1_2805 (MonoEvent_t * __this, bool ___nonPublic, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_DeclaringType()
extern "C" Type_t * MonoEvent_get_DeclaringType_m1_2806 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoEvent::get_ReflectedType()
extern "C" Type_t * MonoEvent_get_ReflectedType_m1_2807 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::get_Name()
extern "C" String_t* MonoEvent_get_Name_m1_2808 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoEvent::ToString()
extern "C" String_t* MonoEvent_ToString_m1_2809 (MonoEvent_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoEvent::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoEvent_IsDefined_m1_2810 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t1_156* MonoEvent_GetCustomAttributes_m1_2811 (MonoEvent_t * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoEvent::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t1_156* MonoEvent_GetCustomAttributes_m1_2812 (MonoEvent_t * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoEvent::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoEvent_GetObjectData_m1_2813 (MonoEvent_t * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
