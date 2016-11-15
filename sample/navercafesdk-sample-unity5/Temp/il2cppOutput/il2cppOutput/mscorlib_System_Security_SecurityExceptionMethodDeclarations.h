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

// System.Security.SecurityException
struct SecurityException_t1_619;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Security.IPermission
struct IPermission_t1_620;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.SecurityException::.ctor()
extern "C" void SecurityException__ctor_m1_4111 (SecurityException_t1_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.String)
extern "C" void SecurityException__ctor_m1_4112 (SecurityException_t1_619 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SecurityException__ctor_m1_4113 (SecurityException_t1_619 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.SecurityException::get_Demanded()
extern "C" Object_t * SecurityException_get_Demanded_m1_4114 (SecurityException_t1_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.SecurityException::get_FirstPermissionThatFailed()
extern "C" Object_t * SecurityException_get_FirstPermissionThatFailed_m1_4115 (SecurityException_t1_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_PermissionState()
extern "C" String_t* SecurityException_get_PermissionState_m1_4116 (SecurityException_t1_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Security.SecurityException::get_PermissionType()
extern "C" Type_t * SecurityException_get_PermissionType_m1_4117 (SecurityException_t1_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_GrantedSet()
extern "C" String_t* SecurityException_get_GrantedSet_m1_4118 (SecurityException_t1_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::get_RefusedSet()
extern "C" String_t* SecurityException_get_RefusedSet_m1_4119 (SecurityException_t1_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.SecurityException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void SecurityException_GetObjectData_m1_4120 (SecurityException_t1_619 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.SecurityException::ToString()
extern "C" String_t* SecurityException_ToString_m1_4121 (SecurityException_t1_619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
