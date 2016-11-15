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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1020;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_6763_gshared (Enumerator_t1_1025 * __this, Dictionary_2_t1_1020 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_6763(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1025 *, Dictionary_2_t1_1020 *, const MethodInfo*))Enumerator__ctor_m1_6763_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_6764_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_6764(__this, method) (( Object_t * (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_6764_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_6765_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_6765(__this, method) (( void (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_6765_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_166  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6766_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6766(__this, method) (( DictionaryEntry_t1_166  (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_6766_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6767_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6767(__this, method) (( Object_t * (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_6767_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6768_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6768(__this, method) (( Object_t * (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_6768_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_6769_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_6769(__this, method) (( bool (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_MoveNext_m1_6769_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1_1022  Enumerator_get_Current_m1_6770_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_6770(__this, method) (( KeyValuePair_2_t1_1022  (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_get_Current_m1_6770_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_6771_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_6771(__this, method) (( Object_t * (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_6771_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m1_6772_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_6772(__this, method) (( bool (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_6772_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Reset()
extern "C" void Enumerator_Reset_m1_6773_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_6773(__this, method) (( void (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_Reset_m1_6773_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_6774_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_6774(__this, method) (( void (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_VerifyState_m1_6774_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_6775_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_6775(__this, method) (( void (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_6775_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m1_6776_gshared (Enumerator_t1_1025 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_6776(__this, method) (( void (*) (Enumerator_t1_1025 *, const MethodInfo*))Enumerator_Dispose_m1_6776_gshared)(__this, method)
