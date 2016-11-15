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

// GLinkStatisticsiOS
struct GLinkStatisticsiOS_t6_10;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void GLinkStatisticsiOS::.ctor()
extern "C" void GLinkStatisticsiOS__ctor_m6_35 (GLinkStatisticsiOS_t6_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkStatisticsiOS::_SendNewUser(System.String,System.String)
extern "C" void GLinkStatisticsiOS__SendNewUser_m6_36 (Object_t * __this /* static, unused */, String_t* ___gameUserId, String_t* ___market, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkStatisticsiOS::_SendPayUser(System.String,System.Double,System.String,System.String,System.String)
extern "C" void GLinkStatisticsiOS__SendPayUser_m6_37 (Object_t * __this /* static, unused */, String_t* ___gameUserId, double ___pay, String_t* ___productCode, String_t* ___currency, String_t* ___market, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkStatisticsiOS::sendNewUser(System.String,System.String)
extern "C" void GLinkStatisticsiOS_sendNewUser_m6_38 (GLinkStatisticsiOS_t6_10 * __this, String_t* ___gameUserId, String_t* ___market, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GLinkStatisticsiOS::sendPayUser(System.String,System.Double,System.String,System.String,System.String)
extern "C" void GLinkStatisticsiOS_sendPayUser_m6_39 (GLinkStatisticsiOS_t6_10 * __this, String_t* ___gameUserId, double ___pay, String_t* ___productCode, String_t* ___currency, String_t* ___market, const MethodInfo* method) IL2CPP_METHOD_ATTR;
