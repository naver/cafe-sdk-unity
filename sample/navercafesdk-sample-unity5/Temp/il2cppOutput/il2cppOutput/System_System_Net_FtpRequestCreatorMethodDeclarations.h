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

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t3_26;
// System.Net.WebRequest
struct WebRequest_t3_21;
// System.Uri
struct Uri_t3_22;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m3_99 (FtpRequestCreator_t3_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t3_21 * FtpRequestCreator_Create_m3_100 (FtpRequestCreator_t3_26 * __this, Uri_t3_22 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
