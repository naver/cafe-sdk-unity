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

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>
struct DefaultComparer_t1_953;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::.ctor()
extern "C" void DefaultComparer__ctor_m1_5761_gshared (DefaultComparer_t1_953 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m1_5761(__this, method) (( void (*) (DefaultComparer_t1_953 *, const MethodInfo*))DefaultComparer__ctor_m1_5761_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m1_5762_gshared (DefaultComparer_t1_953 * __this, Object_t * ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m1_5762(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1_953 *, Object_t *, const MethodInfo*))DefaultComparer_GetHashCode_m1_5762_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Object>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m1_5763_gshared (DefaultComparer_t1_953 * __this, Object_t * ___x, Object_t * ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m1_5763(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1_953 *, Object_t *, Object_t *, const MethodInfo*))DefaultComparer_Equals_m1_5763_gshared)(__this, ___x, ___y, method)
