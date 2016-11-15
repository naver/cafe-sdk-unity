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

// System.Array
struct Array_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array_InternalEnumerator_1_gen_57.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m1_6502_gshared (InternalEnumerator_1_t1_997 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m1_6502(__this, ___array, method) (( void (*) (InternalEnumerator_1_t1_997 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m1_6502_gshared)(__this, ___array, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.Reset()
extern "C" void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_6503_gshared (InternalEnumerator_1_t1_997 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_6503(__this, method) (( void (*) (InternalEnumerator_1_t1_997 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_Reset_m1_6503_gshared)(__this, method)
// System.Object System.Array/InternalEnumerator`1<System.TimeSpan>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_6504_gshared (InternalEnumerator_1_t1_997 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_6504(__this, method) (( Object_t * (*) (InternalEnumerator_1_t1_997 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m1_6504_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.TimeSpan>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m1_6505_gshared (InternalEnumerator_1_t1_997 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m1_6505(__this, method) (( void (*) (InternalEnumerator_1_t1_997 *, const MethodInfo*))InternalEnumerator_1_Dispose_m1_6505_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.TimeSpan>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m1_6506_gshared (InternalEnumerator_1_t1_997 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m1_6506(__this, method) (( bool (*) (InternalEnumerator_1_t1_997 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m1_6506_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.TimeSpan>::get_Current()
extern "C" TimeSpan_t1_209  InternalEnumerator_1_get_Current_m1_6507_gshared (InternalEnumerator_1_t1_997 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m1_6507(__this, method) (( TimeSpan_t1_209  (*) (InternalEnumerator_1_t1_997 *, const MethodInfo*))InternalEnumerator_1_get_Current_m1_6507_gshared)(__this, method)
