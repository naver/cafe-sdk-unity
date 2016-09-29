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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1304;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1_1303;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t1_1457;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t1_1458;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_448;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1_1308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m1_9874_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9874(__this, method) (( void (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2__ctor_m1_9874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_9876_gshared (Dictionary_2_t1_1304 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9876(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1304 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_9876_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_9878_gshared (Dictionary_2_t1_1304 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9878(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1304 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_9878_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_9880_gshared (Dictionary_2_t1_1304 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_9880(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1304 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2__ctor_m1_9880_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_9882_gshared (Dictionary_2_t1_1304 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_9882(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1304 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_9882_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_9884_gshared (Dictionary_2_t1_1304 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_9884(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1304 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_9884_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_9886_gshared (Dictionary_2_t1_1304 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_9886(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1304 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_9886_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_9888_gshared (Dictionary_2_t1_1304 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_9888(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1304 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_9888_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_9890_gshared (Dictionary_2_t1_1304 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_9890(__this, ___key, method) (( void (*) (Dictionary_2_t1_1304 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_9890_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9892_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9892(__this, method) (( bool (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_9892_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9894_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9894(__this, method) (( Object_t * (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_9894_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9896_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9896(__this, method) (( bool (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_9896_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9898_gshared (Dictionary_2_t1_1304 * __this, KeyValuePair_2_t1_1306  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9898(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1304 *, KeyValuePair_2_t1_1306 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_9898_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9900_gshared (Dictionary_2_t1_1304 * __this, KeyValuePair_2_t1_1306  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9900(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1304 *, KeyValuePair_2_t1_1306 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_9900_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9902_gshared (Dictionary_2_t1_1304 * __this, KeyValuePair_2U5BU5D_t1_1457* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9902(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1304 *, KeyValuePair_2U5BU5D_t1_1457*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_9902_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9904_gshared (Dictionary_2_t1_1304 * __this, KeyValuePair_2_t1_1306  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9904(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1304 *, KeyValuePair_2_t1_1306 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_9904_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_9906_gshared (Dictionary_2_t1_1304 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_9906(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1304 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_9906_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9908_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9908(__this, method) (( Object_t * (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_9908_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9910_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9910(__this, method) (( Object_t* (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_9910_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9912_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9912(__this, method) (( Object_t * (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_9912_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_9914_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_9914(__this, method) (( int32_t (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_get_Count_m1_9914_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m1_9916_gshared (Dictionary_2_t1_1304 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_9916(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1304 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m1_9916_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_9918_gshared (Dictionary_2_t1_1304 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_9918(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1304 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m1_9918_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_9920_gshared (Dictionary_2_t1_1304 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_9920(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1304 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_9920_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_9922_gshared (Dictionary_2_t1_1304 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_9922(__this, ___size, method) (( void (*) (Dictionary_2_t1_1304 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_9922_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_9924_gshared (Dictionary_2_t1_1304 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_9924(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1304 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_9924_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1306  Dictionary_2_make_pair_m1_9926_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_9926(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1306  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m1_9926_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m1_9928_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_9928(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m1_9928_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_9930_gshared (Dictionary_2_t1_1304 * __this, KeyValuePair_2U5BU5D_t1_1457* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_9930(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1304 *, KeyValuePair_2U5BU5D_t1_1457*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_9930_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m1_9932_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_9932(__this, method) (( void (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_Resize_m1_9932_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_9934_gshared (Dictionary_2_t1_1304 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_9934(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1304 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m1_9934_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m1_9936_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_9936(__this, method) (( void (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_Clear_m1_9936_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_9938_gshared (Dictionary_2_t1_1304 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_9938(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1304 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m1_9938_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_9940_gshared (Dictionary_2_t1_1304 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_9940(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1304 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m1_9940_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_9942_gshared (Dictionary_2_t1_1304 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_9942(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1304 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2_GetObjectData_m1_9942_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_9944_gshared (Dictionary_2_t1_1304 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_9944(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1304 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_9944_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_9946_gshared (Dictionary_2_t1_1304 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_9946(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1304 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m1_9946_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_9948_gshared (Dictionary_2_t1_1304 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_9948(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1304 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m1_9948_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1_1308 * Dictionary_2_get_Values_m1_9949_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_9949(__this, method) (( ValueCollection_t1_1308 * (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_get_Values_m1_9949_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m1_9951_gshared (Dictionary_2_t1_1304 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_9951(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1_1304 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_9951_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m1_9953_gshared (Dictionary_2_t1_1304 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_9953(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1_1304 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_9953_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_9955_gshared (Dictionary_2_t1_1304 * __this, KeyValuePair_2_t1_1306  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_9955(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1304 *, KeyValuePair_2_t1_1306 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_9955_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1_1310  Dictionary_2_GetEnumerator_m1_9956_gshared (Dictionary_2_t1_1304 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_9956(__this, method) (( Enumerator_t1_1310  (*) (Dictionary_2_t1_1304 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_9956_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_9958_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_9958(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_9958_gshared)(__this /* static, unused */, ___key, ___value, method)
