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
struct HttpWebRequest_t2_30;
// System.Uri
struct Uri_t2_20;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Net.ServicePoint
struct ServicePoint_t2_32;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m2_100 (HttpWebRequest_t2_30 * __this, Uri_t2_20 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m2_101 (HttpWebRequest_t2_30 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_502  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m2_102 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m2_103 (HttpWebRequest_t2_30 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_502  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t2_20 * HttpWebRequest_get_Address_m2_104 (HttpWebRequest_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t2_32 * HttpWebRequest_get_ServicePoint_m2_105 (HttpWebRequest_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t2_32 * HttpWebRequest_GetServicePoint_m2_106 (HttpWebRequest_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m2_107 (HttpWebRequest_t2_30 * __this, SerializationInfo_t1_176 * ___serializationInfo, StreamingContext_t1_502  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
