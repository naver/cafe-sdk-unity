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

// Mono.Security.X509.SafeBag
struct SafeBag_t3_40;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t3_2;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C" void SafeBag__ctor_m3_223 (SafeBag_t3_40 * __this, String_t* ___bagOID, ASN1_t3_2 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C" String_t* SafeBag_get_BagOID_m3_224 (SafeBag_t3_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C" ASN1_t3_2 * SafeBag_get_ASN1_m3_225 (SafeBag_t3_40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
