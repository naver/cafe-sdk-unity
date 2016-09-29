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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1_135;
// Mono.Security.ASN1
struct ASN1_t1_120;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1_134;
// System.Byte[]
struct ByteU5BU5D_t1_70;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m1_1452 (EncryptedData_t1_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m1_1453 (EncryptedData_t1_135 * __this, ASN1_t1_120 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t1_134 * EncryptedData_get_EncryptionAlgorithm_m1_1454 (EncryptedData_t1_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t1_70* EncryptedData_get_EncryptedContent_m1_1455 (EncryptedData_t1_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
