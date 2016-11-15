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
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_925;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1_1074;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1_1075;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_446;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_2.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m1_6665_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6665(__this, method) (( void (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2__ctor_m1_6665_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_6666_gshared (Dictionary_2_t1_1020 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6666(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_6666_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_6668_gshared (Dictionary_2_t1_1020 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6668(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1020 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_6668_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_6670_gshared (Dictionary_2_t1_1020 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_6670(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1020 *, SerializationInfo_t1_176 *, StreamingContext_t1_502 , const MethodInfo*))Dictionary_2__ctor_m1_6670_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_6672_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_6672(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_6672_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_6674_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_6674(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_6674_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_6676_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_6676(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_6676_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_6678_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_6678(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_6678_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_6680_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_6680(__this, ___key, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_6680_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6682_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6682(__this, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_6682_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6684_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6684(__this, method) (( bool (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_6684_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6686_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2_t1_1022  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6686(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1020 *, KeyValuePair_2_t1_1022 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_6686_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6688_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2_t1_1022  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6688(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1020 *, KeyValuePair_2_t1_1022 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_6688_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6690_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2U5BU5D_t1_1074* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6690(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1020 *, KeyValuePair_2U5BU5D_t1_1074*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_6690_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6692_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2_t1_1022  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6692(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1020 *, KeyValuePair_2_t1_1022 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_6692_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_6694_gshared (Dictionary_2_t1_1020 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_6694(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1020 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_6694_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6696_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6696(__this, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_6696_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6698_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6698(__this, method) (( Object_t* (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_6698_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6700_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6700(__this, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_6700_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_6702_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_6702(__this, method) (( int32_t (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_get_Count_m1_6702_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m1_6704_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_6704(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_6704_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_6706_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_6706(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m1_6706_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_6708_gshared (Dictionary_2_t1_1020 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_6708(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1020 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_6708_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_6710_gshared (Dictionary_2_t1_1020 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_6710(__this, ___size, method) (( void (*) (Dictionary_2_t1_1020 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_6710_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_6712_gshared (Dictionary_2_t1_1020 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_6712(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1020 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_6712_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1022  Dictionary_2_make_pair_m1_6714_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_6714(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1022  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m1_6714_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_6716_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2U5BU5D_t1_1074* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_6716(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1020 *, KeyValuePair_2U5BU5D_t1_1074*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_6716_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m1_6718_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_6718(__this, method) (( void (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_Resize_m1_6718_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_6720_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_6720(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m1_6720_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m1_6722_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_6722(__this, method) (( void (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_Clear_m1_6722_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_6724_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_6724(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_6724_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_6726_gshared (Dictionary_2_t1_1020 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_502  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_6726(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1020 *, SerializationInfo_t1_176 *, StreamingContext_t1_502 , const MethodInfo*))Dictionary_2_GetObjectData_m1_6726_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_6728_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_6728(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_6728_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_6730_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_6730(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_6730_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_6732_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_6732(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1020 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1_6732_gshared)(__this, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_6734_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_6734(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_6734_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m1_6736_gshared (Dictionary_2_t1_1020 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_6736(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1020 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_6736_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_6738_gshared (Dictionary_2_t1_1020 * __this, KeyValuePair_2_t1_1022  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_6738(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1020 *, KeyValuePair_2_t1_1022 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_6738_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1025  Dictionary_2_GetEnumerator_m1_6740_gshared (Dictionary_2_t1_1020 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_6740(__this, method) (( Enumerator_t1_1025  (*) (Dictionary_2_t1_1020 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_6740_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_6742_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_6742(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_6742_gshared)(__this /* static, unused */, ___key, ___value, method)
