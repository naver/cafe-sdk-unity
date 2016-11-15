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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1_945;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_6048_gshared (Enumerator_t1_950 * __this, Dictionary_2_t1_945 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_6048(__this, ___dictionary, method) (( void (*) (Enumerator_t1_950 *, Dictionary_2_t1_945 *, const MethodInfo*))Enumerator__ctor_m1_6048_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_6049_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_6049(__this, method) (( Object_t * (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_6049_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_6050_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_6050(__this, method) (( void (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_6050_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6051_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6051(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6051_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6052_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6052(__this, method) (( Object_t * (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6052_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6053_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6053(__this, method) (( Object_t * (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6053_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_6054_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_6054(__this, method) (( bool (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_MoveNext_m1_6054_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_947  Enumerator_get_Current_m1_6055_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_6055(__this, method) (( KeyValuePair_2_t1_947  (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_get_Current_m1_6055_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_6056_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_6056(__this, method) (( Object_t * (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_6056_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_6057_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_6057(__this, method) (( Object_t * (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_6057_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_6058_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_6058(__this, method) (( void (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_Reset_m1_6058_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_6059_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_6059(__this, method) (( void (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_VerifyState_m1_6059_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_6060_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_6060(__this, method) (( void (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_6060_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_6061_gshared (Enumerator_t1_950 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_6061(__this, method) (( void (*) (Enumerator_t1_950 *, const MethodInfo*))Enumerator_Dispose_m1_6061_gshared)(__this, method)
