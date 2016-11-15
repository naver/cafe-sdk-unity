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

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t2_23;
// System.Net.WebRequest
struct WebRequest_t2_19;
// System.Uri
struct Uri_t2_20;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m2_89 (FileWebRequestCreator_t2_23 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t2_19 * FileWebRequestCreator_Create_m2_90 (FileWebRequestCreator_t2_23 * __this, Uri_t2_20 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
