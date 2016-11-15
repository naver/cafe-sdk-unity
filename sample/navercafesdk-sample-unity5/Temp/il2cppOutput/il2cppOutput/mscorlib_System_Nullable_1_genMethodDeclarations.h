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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m1_5445_gshared (Nullable_1_t1_814 * __this, TimeSpan_t1_209  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m1_5445(__this, ___value, method) (( void (*) (Nullable_1_t1_814 *, TimeSpan_t1_209 , const MethodInfo*))Nullable_1__ctor_m1_5445_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m1_5446_gshared (Nullable_1_t1_814 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m1_5446(__this, method) (( bool (*) (Nullable_1_t1_814 *, const MethodInfo*))Nullable_1_get_HasValue_m1_5446_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1_209  Nullable_1_get_Value_m1_5447_gshared (Nullable_1_t1_814 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m1_5447(__this, method) (( TimeSpan_t1_209  (*) (Nullable_1_t1_814 *, const MethodInfo*))Nullable_1_get_Value_m1_5447_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m1_6593_gshared (Nullable_1_t1_814 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m1_6593(__this, ___other, method) (( bool (*) (Nullable_1_t1_814 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m1_6593_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m1_6594_gshared (Nullable_1_t1_814 * __this, Nullable_1_t1_814  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m1_6594(__this, ___other, method) (( bool (*) (Nullable_1_t1_814 *, Nullable_1_t1_814 , const MethodInfo*))Nullable_1_Equals_m1_6594_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m1_6595_gshared (Nullable_1_t1_814 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m1_6595(__this, method) (( int32_t (*) (Nullable_1_t1_814 *, const MethodInfo*))Nullable_1_GetHashCode_m1_6595_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m1_6596_gshared (Nullable_1_t1_814 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m1_6596(__this, method) (( String_t* (*) (Nullable_1_t1_814 *, const MethodInfo*))Nullable_1_ToString_m1_6596_gshared)(__this, method)
