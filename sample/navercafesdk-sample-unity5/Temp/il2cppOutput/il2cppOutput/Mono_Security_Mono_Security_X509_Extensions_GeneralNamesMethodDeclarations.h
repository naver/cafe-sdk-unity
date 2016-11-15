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

// Mono.Security.X509.Extensions.GeneralNames
struct GeneralNames_t3_47;
// Mono.Security.ASN1
struct ASN1_t3_2;
// System.String[]
struct StringU5BU5D_t1_198;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.Extensions.GeneralNames::.ctor(Mono.Security.ASN1)
extern "C" void GeneralNames__ctor_m3_361 (GeneralNames_t3_47 * __this, ASN1_t3_2 * ___sequence, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_DNSNames()
extern "C" StringU5BU5D_t1_198* GeneralNames_get_DNSNames_m3_362 (GeneralNames_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.X509.Extensions.GeneralNames::get_IPAddresses()
extern "C" StringU5BU5D_t1_198* GeneralNames_get_IPAddresses_m3_363 (GeneralNames_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.GeneralNames::ToString()
extern "C" String_t* GeneralNames_ToString_m3_364 (GeneralNames_t3_47 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
