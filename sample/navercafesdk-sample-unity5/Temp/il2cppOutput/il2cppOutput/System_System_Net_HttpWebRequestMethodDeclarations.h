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

// System.Net.HttpWebRequest
struct HttpWebRequest_t3_32;
// System.Uri
struct Uri_t3_22;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Net.ServicePoint
struct ServicePoint_t3_34;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m3_108 (HttpWebRequest_t3_32 * __this, Uri_t3_22 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m3_109 (HttpWebRequest_t3_32 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_504  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m3_110 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m3_111 (HttpWebRequest_t3_32 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_504  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t3_22 * HttpWebRequest_get_Address_m3_112 (HttpWebRequest_t3_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t3_34 * HttpWebRequest_get_ServicePoint_m3_113 (HttpWebRequest_t3_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t3_34 * HttpWebRequest_GetServicePoint_m3_114 (HttpWebRequest_t3_32 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m3_115 (HttpWebRequest_t3_32 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_504  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
