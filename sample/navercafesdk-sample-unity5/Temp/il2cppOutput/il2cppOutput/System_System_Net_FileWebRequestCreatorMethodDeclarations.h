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
struct FileWebRequestCreator_t3_25;
// System.Net.WebRequest
struct WebRequest_t3_21;
// System.Uri
struct Uri_t3_22;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m3_97 (FileWebRequestCreator_t3_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3_21 * FileWebRequestCreator_Create_m3_98 (FileWebRequestCreator_t3_25 * __this, Uri_t3_22 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
