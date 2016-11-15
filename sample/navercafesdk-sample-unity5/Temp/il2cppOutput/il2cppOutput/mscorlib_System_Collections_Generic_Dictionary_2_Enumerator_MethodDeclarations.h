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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1_923;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_5906_gshared (Enumerator_t1_931 * __this, Dictionary_2_t1_923 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_5906(__this, ___dictionary, method) (( void (*) (Enumerator_t1_931 *, Dictionary_2_t1_923 *, const MethodInfo*))Enumerator__ctor_m1_5906_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_5907_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_5907(__this, method) (( Object_t * (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_5907_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_5908_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_5908(__this, method) (( void (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_5908_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_5909_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_5909(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_5909_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_5910_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_5910(__this, method) (( Object_t * (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_5910_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_5911_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_5911(__this, method) (( Object_t * (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_5911_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_5912_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_5912(__this, method) (( bool (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_MoveNext_m1_5912_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1_926  Enumerator_get_Current_m1_5913_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_5913(__this, method) (( KeyValuePair_2_t1_926  (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_get_Current_m1_5913_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_5914_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_5914(__this, method) (( Object_t * (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_5914_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m1_5915_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_5915(__this, method) (( int32_t (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_5915_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m1_5916_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_5916(__this, method) (( void (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_Reset_m1_5916_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_5917_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_5917(__this, method) (( void (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_VerifyState_m1_5917_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_5918_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_5918(__this, method) (( void (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_5918_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m1_5919_gshared (Enumerator_t1_931 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_5919(__this, method) (( void (*) (Enumerator_t1_931 *, const MethodInfo*))Enumerator_Dispose_m1_5919_gshared)(__this, method)
