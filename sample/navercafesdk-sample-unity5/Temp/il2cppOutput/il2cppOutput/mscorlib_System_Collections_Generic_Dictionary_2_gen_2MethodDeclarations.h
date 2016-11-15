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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_925;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1069;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1_1070;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_446;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__1.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_5988_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5988(__this, method) (( void (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2__ctor_m1_5988_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_5989_gshared (Dictionary_2_t1_945 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5989(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_945 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_5989_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_5990_gshared (Dictionary_2_t1_945 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5990(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_945 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_5990_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_5991_gshared (Dictionary_2_t1_945 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5991(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_945 *, SerializationInfo_t1_176 *, StreamingContext_t1_502 , const MethodInfo*))Dictionary_2__ctor_m1_5991_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_5992_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_5992(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_945 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_5992_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_5993_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_5993(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_945 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_5993_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_5994_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_5994(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_945 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_5994_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_5995_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_5995(__this, ___key, method) (( bool (*) (Dictionary_2_t1_945 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_5995_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_5996_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_5996(__this, ___key, method) (( void (*) (Dictionary_2_t1_945 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_5996_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_5997_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_5997(__this, method) (( Object_t * (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_5997_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_5998_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_5998(__this, method) (( bool (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_5998_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_5999_gshared (Dictionary_2_t1_945 * __this, KeyValuePair_2_t1_947  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_5999(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_945 *, KeyValuePair_2_t1_947 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_5999_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6000_gshared (Dictionary_2_t1_945 * __this, KeyValuePair_2_t1_947  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6000(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_945 *, KeyValuePair_2_t1_947 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6000_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6001_gshared (Dictionary_2_t1_945 * __this, KeyValuePair_2U5BU5D_t1_1069* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6001(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_945 *, KeyValuePair_2U5BU5D_t1_1069*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6001_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6002_gshared (Dictionary_2_t1_945 * __this, KeyValuePair_2_t1_947  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6002(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_945 *, KeyValuePair_2_t1_947 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6002_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6003_gshared (Dictionary_2_t1_945 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6003(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_945 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6003_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6004_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6004(__this, method) (( Object_t * (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6004_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6005_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6005(__this, method) (( Object_t* (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6005_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6006_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6006(__this, method) (( Object_t * (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6006_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6007_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6007(__this, method) (( int32_t (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2_get_Count_m1_6007_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_6008_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6008(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_945 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6008_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6009_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6009(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_945 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_6009_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6010_gshared (Dictionary_2_t1_945 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6010(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_945 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6010_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6011_gshared (Dictionary_2_t1_945 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6011(__this, ___size, method) (( void (*) (Dictionary_2_t1_945 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6011_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6012_gshared (Dictionary_2_t1_945 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6012(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_945 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6012_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_947  Dictionary_2_make_pair_m1_6013_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6013(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_947  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_6013_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6014_gshared (Dictionary_2_t1_945 * __this, KeyValuePair_2U5BU5D_t1_1069* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6014(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_945 *, KeyValuePair_2U5BU5D_t1_1069*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6014_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_6015_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6015(__this, method) (( void (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2_Resize_m1_6015_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6016_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6016(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_945 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_6016_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_6017_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6017(__this, method) (( void (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2_Clear_m1_6017_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6018_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6018(__this, ___key, method) (( bool (*) (Dictionary_2_t1_945 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6018_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6019_gshared (Dictionary_2_t1_945 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6019(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_945 *, SerializationInfo_t1_176 *, StreamingContext_t1_502 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6019_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6020_gshared (Dictionary_2_t1_945 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6020(__this, ___sender, method) (( void (*) (Dictionary_2_t1_945 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6020_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6021_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6021(__this, ___key, method) (( bool (*) (Dictionary_2_t1_945 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6021_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6022_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6022(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_945 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_6022_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6023_gshared (Dictionary_2_t1_945 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6023(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_945 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6023_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_6024_gshared (Dictionary_2_t1_945 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6024(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_945 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6024_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6025_gshared (Dictionary_2_t1_945 * __this, KeyValuePair_2_t1_947  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6025(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_945 *, KeyValuePair_2_t1_947 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6025_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_950  Dictionary_2_GetEnumerator_m1_6026_gshared (Dictionary_2_t1_945 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6026(__this, method) (( Enumerator_t1_950  (*) (Dictionary_2_t1_945 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6026_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_6027_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6027(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6027_gshared)(__this /* static, unused */, ___key, ___value, method)
