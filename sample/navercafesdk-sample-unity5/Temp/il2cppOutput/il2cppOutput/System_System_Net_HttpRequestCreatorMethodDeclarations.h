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

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t2_28;
// System.Net.WebRequest
struct WebRequest_t2_19;
// System.Uri
struct Uri_t2_20;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m2_97 (HttpRequestCreator_t2_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t2_19 * HttpRequestCreator_Create_m2_98 (HttpRequestCreator_t2_28 * __this, Uri_t2_20 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
