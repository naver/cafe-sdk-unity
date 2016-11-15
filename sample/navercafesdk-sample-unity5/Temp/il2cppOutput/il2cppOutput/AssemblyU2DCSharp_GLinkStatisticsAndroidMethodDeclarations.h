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

// GLinkStatisticsAndroid
struct GLinkStatisticsAndroid_t6_11;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void GLinkStatisticsAndroid::.ctor()
extern "C" void GLinkStatisticsAndroid__ctor_m6_40 (GLinkStatisticsAndroid_t6_11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkStatisticsAndroid::sendNewUser(System.String,System.String)
extern "C" void GLinkStatisticsAndroid_sendNewUser_m6_41 (GLinkStatisticsAndroid_t6_11 * __this, String_t* ___gameUserId, String_t* ___market, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkStatisticsAndroid::sendPayUser(System.String,System.Double,System.String,System.String,System.String)
extern "C" void GLinkStatisticsAndroid_sendPayUser_m6_42 (GLinkStatisticsAndroid_t6_11 * __this, String_t* ___gameUserId, double ___pay, String_t* ___productCode, String_t* ___currency, String_t* ___market, const MethodInfo* method) IL2CPP_METHOD_ATTR;
