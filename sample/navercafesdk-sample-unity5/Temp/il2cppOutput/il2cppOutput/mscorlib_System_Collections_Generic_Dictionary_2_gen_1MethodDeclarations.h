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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_925;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1_1067;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t1_1068;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_446;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator_.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m1_5796_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5796(__this, method) (( void (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2__ctor_m1_5796_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_5798_gshared (Dictionary_2_t1_923 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5798(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_923 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_5798_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_5799_gshared (Dictionary_2_t1_923 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5799(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_923 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_5799_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_5801_gshared (Dictionary_2_t1_923 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_5801(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_923 *, SerializationInfo_t1_176 *, StreamingContext_t1_502 , const MethodInfo*))Dictionary_2__ctor_m1_5801_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_5803_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_5803(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_923 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_5803_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_5805_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_5805(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_923 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_5805_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_5807_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_5807(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_923 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_5807_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_5809_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_5809(__this, ___key, method) (( bool (*) (Dictionary_2_t1_923 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_5809_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_5811_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_5811(__this, ___key, method) (( void (*) (Dictionary_2_t1_923 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_5811_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_5813_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_5813(__this, method) (( Object_t * (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_5813_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_5815_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_5815(__this, method) (( bool (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_5815_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_5817_gshared (Dictionary_2_t1_923 * __this, KeyValuePair_2_t1_926  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_5817(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_923 *, KeyValuePair_2_t1_926 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_5817_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_5819_gshared (Dictionary_2_t1_923 * __this, KeyValuePair_2_t1_926  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_5819(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_923 *, KeyValuePair_2_t1_926 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_5819_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_5821_gshared (Dictionary_2_t1_923 * __this, KeyValuePair_2U5BU5D_t1_1067* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_5821(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_923 *, KeyValuePair_2U5BU5D_t1_1067*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_5821_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_5823_gshared (Dictionary_2_t1_923 * __this, KeyValuePair_2_t1_926  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_5823(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_923 *, KeyValuePair_2_t1_926 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_5823_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_5825_gshared (Dictionary_2_t1_923 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_5825(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_923 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_5825_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_5827_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_5827(__this, method) (( Object_t * (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_5827_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_5829_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_5829(__this, method) (( Object_t* (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_5829_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_5831_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_5831(__this, method) (( Object_t * (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_5831_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_5833_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_5833(__this, method) (( int32_t (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2_get_Count_m1_5833_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m1_5835_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_5835(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_923 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_5835_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_5837_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_5837(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_923 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m1_5837_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_5839_gshared (Dictionary_2_t1_923 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_5839(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_923 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_5839_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_5841_gshared (Dictionary_2_t1_923 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_5841(__this, ___size, method) (( void (*) (Dictionary_2_t1_923 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_5841_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_5843_gshared (Dictionary_2_t1_923 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_5843(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_923 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_5843_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_926  Dictionary_2_make_pair_m1_5845_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_5845(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_926  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m1_5845_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_5847_gshared (Dictionary_2_t1_923 * __this, KeyValuePair_2U5BU5D_t1_1067* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_5847(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_923 *, KeyValuePair_2U5BU5D_t1_1067*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_5847_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m1_5849_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_5849(__this, method) (( void (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2_Resize_m1_5849_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_5851_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_5851(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_923 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m1_5851_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m1_5853_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_5853(__this, method) (( void (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2_Clear_m1_5853_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_5855_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_5855(__this, ___key, method) (( bool (*) (Dictionary_2_t1_923 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_5855_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_5857_gshared (Dictionary_2_t1_923 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_5857(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_923 *, SerializationInfo_t1_176 *, StreamingContext_t1_502 , const MethodInfo*))Dictionary_2_GetObjectData_m1_5857_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_5859_gshared (Dictionary_2_t1_923 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_5859(__this, ___sender, method) (( void (*) (Dictionary_2_t1_923 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_5859_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_5861_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_5861(__this, ___key, method) (( bool (*) (Dictionary_2_t1_923 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_5861_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_5863_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_5863(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_923 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m1_5863_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_5865_gshared (Dictionary_2_t1_923 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_5865(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_923 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_5865_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m1_5867_gshared (Dictionary_2_t1_923 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_5867(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1_923 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_5867_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_5869_gshared (Dictionary_2_t1_923 * __this, KeyValuePair_2_t1_926  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_5869(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_923 *, KeyValuePair_2_t1_926 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_5869_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_931  Dictionary_2_GetEnumerator_m1_5871_gshared (Dictionary_2_t1_923 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_5871(__this, method) (( Enumerator_t1_931  (*) (Dictionary_2_t1_923 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_5871_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_5873_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_5873(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_5873_gshared)(__this /* static, unused */, ___key, ___value, method)
