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

// System.MemberAccessException
struct MemberAccessException_t1_715;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MemberAccessException::.ctor()
extern "C" void MemberAccessException__ctor_m1_5026 (MemberAccessException_t1_715 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MemberAccessException::.ctor(System.String)
extern "C" void MemberAccessException__ctor_m1_5027 (MemberAccessException_t1_715 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MemberAccessException__ctor_m1_5028 (MemberAccessException_t1_715 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
