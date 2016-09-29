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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t1_1101;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m1_7036_gshared (DefaultComparer_t1_1101 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_7036(__this, method) (( void (*) (DefaultComparer_t1_1101 *, const MethodInfo*))DefaultComparer__ctor_m1_7036_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_7037_gshared (DefaultComparer_t1_1101 * __this, TimeSpan_t1_209  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_7037(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_1101 *, TimeSpan_t1_209 , const MethodInfo*))DefaultComparer_GetHashCode_m1_7037_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_7038_gshared (DefaultComparer_t1_1101 * __this, TimeSpan_t1_209  ___x, TimeSpan_t1_209  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_7038(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_1101 *, TimeSpan_t1_209 , TimeSpan_t1_209 , const MethodInfo*))DefaultComparer_Equals_m1_7038_gshared)(__this, ___x, ___y, method)
