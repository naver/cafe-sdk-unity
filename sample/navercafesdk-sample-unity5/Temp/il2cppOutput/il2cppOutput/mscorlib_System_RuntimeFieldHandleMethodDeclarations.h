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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeFieldHandle.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.RuntimeFieldHandle::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeFieldHandle__ctor_m1_940 (RuntimeFieldHandle_t1_36 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.RuntimeFieldHandle::get_Value()
extern "C" IntPtr_t RuntimeFieldHandle_get_Value_m1_941 (RuntimeFieldHandle_t1_36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.RuntimeFieldHandle::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void RuntimeFieldHandle_GetObjectData_m1_942 (RuntimeFieldHandle_t1_36 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.RuntimeFieldHandle::Equals(System.Object)
extern "C" bool RuntimeFieldHandle_Equals_m1_943 (RuntimeFieldHandle_t1_36 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.RuntimeFieldHandle::GetHashCode()
extern "C" int32_t RuntimeFieldHandle_GetHashCode_m1_944 (RuntimeFieldHandle_t1_36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
