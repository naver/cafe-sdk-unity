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

// System.UriParser
struct UriParser_t2_142;
// System.Uri
struct Uri_t2_20;
// System.UriFormatException
struct UriFormatException_t2_146;
// System.String
struct String_t;
// System.Collections.Hashtable
struct Hashtable_t1_171;

#include "codegen/il2cpp-codegen.h"

// System.Void System.UriParser::.ctor()
extern "C" void UriParser__ctor_m2_873 (UriParser_t2_142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::.cctor()
extern "C" void UriParser__cctor_m2_874 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InitializeAndValidate(System.Uri,System.UriFormatException&)
extern "C" void UriParser_InitializeAndValidate_m2_875 (UriParser_t2_142 * __this, Uri_t2_20 * ___uri, UriFormatException_t2_146 ** ___parsingError, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::OnRegister(System.String,System.Int32)
extern "C" void UriParser_OnRegister_m2_876 (UriParser_t2_142 * __this, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_SchemeName(System.String)
extern "C" void UriParser_set_SchemeName_m2_877 (UriParser_t2_142 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UriParser::get_DefaultPort()
extern "C" int32_t UriParser_get_DefaultPort_m2_878 (UriParser_t2_142 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::set_DefaultPort(System.Int32)
extern "C" void UriParser_set_DefaultPort_m2_879 (UriParser_t2_142 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::CreateDefaults()
extern "C" void UriParser_CreateDefaults_m2_880 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UriParser::InternalRegister(System.Collections.Hashtable,System.UriParser,System.String,System.Int32)
extern "C" void UriParser_InternalRegister_m2_881 (Object_t * __this /* static, unused */, Hashtable_t1_171 * ___table, UriParser_t2_142 * ___uriParser, String_t* ___schemeName, int32_t ___defaultPort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.UriParser::GetParser(System.String)
extern "C" UriParser_t2_142 * UriParser_GetParser_m2_882 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
