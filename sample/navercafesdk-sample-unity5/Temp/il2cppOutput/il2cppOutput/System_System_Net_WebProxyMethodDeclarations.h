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

// System.Net.WebProxy
struct WebProxy_t2_39;
// System.Uri
struct Uri_t2_20;
// System.String[]
struct StringU5BU5D_t1_198;
// System.Net.ICredentials
struct ICredentials_t2_40;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m2_187 (WebProxy_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m2_188 (WebProxy_t2_39 * __this, Uri_t2_20 * ___address, bool ___bypassOnLocal, StringU5BU5D_t1_198* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m2_189 (WebProxy_t2_39 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_502  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m2_190 (WebProxy_t2_39 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_502  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m2_191 (WebProxy_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t2_20 * WebProxy_GetProxy_m2_192 (WebProxy_t2_39 * __this, Uri_t2_20 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m2_193 (WebProxy_t2_39 * __this, Uri_t2_20 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m2_194 (WebProxy_t2_39 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_502  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m2_195 (WebProxy_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
