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
struct Dictionary_2_t1_1104;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_991;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_176;
// System.Object
struct Object_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1_1428;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_129;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>
struct IEnumerator_1_t1_1429;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_448;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t1_1108;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
extern "C" void Dictionary_2__ctor_m1_7040_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7040(__this, method) (( void (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2__ctor_m1_7040_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m1_7041_gshared (Dictionary_2_t1_1104 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7041(__this, ___comparer, method) (( void (*) (Dictionary_2_t1_1104 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m1_7041_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m1_7043_gshared (Dictionary_2_t1_1104 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7043(__this, ___capacity, method) (( void (*) (Dictionary_2_t1_1104 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m1_7043_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m1_7045_gshared (Dictionary_2_t1_1104 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m1_7045(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1104 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2__ctor_m1_7045_gshared)(__this, ___info, ___context, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m1_7047_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1_7047(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1104 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1_7047_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m1_7049_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m1_7049(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1104 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m1_7049_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m1_7051_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m1_7051(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1104 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m1_7051_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m1_7053_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m1_7053(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1104 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m1_7053_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m1_7055_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m1_7055(__this, ___key, method) (( void (*) (Dictionary_2_t1_1104 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m1_7055_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7057_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7057(__this, method) (( bool (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1_7057_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7059_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7059(__this, method) (( Object_t * (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m1_7059_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7061_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7061(__this, method) (( bool (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m1_7061_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7063_gshared (Dictionary_2_t1_1104 * __this, KeyValuePair_2_t1_1106  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7063(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1_1104 *, KeyValuePair_2_t1_1106 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m1_7063_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7065_gshared (Dictionary_2_t1_1104 * __this, KeyValuePair_2_t1_1106  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7065(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1104 *, KeyValuePair_2_t1_1106 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1_7065_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7067_gshared (Dictionary_2_t1_1104 * __this, KeyValuePair_2U5BU5D_t1_1428* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7067(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1104 *, KeyValuePair_2U5BU5D_t1_1428*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m1_7067_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7069_gshared (Dictionary_2_t1_1104 * __this, KeyValuePair_2_t1_1106  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7069(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1_1104 *, KeyValuePair_2_t1_1106 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m1_7069_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m1_7071_gshared (Dictionary_2_t1_1104 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m1_7071(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1104 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m1_7071_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7073_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7073(__this, method) (( Object_t * (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m1_7073_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7075_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7075(__this, method) (( Object_t* (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1_7075_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7077_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7077(__this, method) (( Object_t * (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m1_7077_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m1_7079_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m1_7079(__this, method) (( int32_t (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_get_Count_m1_7079_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(TKey)
extern "C" bool Dictionary_2_get_Item_m1_7081_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m1_7081(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1104 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m1_7081_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m1_7083_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m1_7083(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1104 *, Object_t *, bool, const MethodInfo*))Dictionary_2_set_Item_m1_7083_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m1_7085_gshared (Dictionary_2_t1_1104 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m1_7085(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1_1104 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m1_7085_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m1_7087_gshared (Dictionary_2_t1_1104 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m1_7087(__this, ___size, method) (( void (*) (Dictionary_2_t1_1104 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m1_7087_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m1_7089_gshared (Dictionary_2_t1_1104 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1_7089(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1104 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1_7089_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1_1106  Dictionary_2_make_pair_m1_7091_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m1_7091(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1_1106  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_make_pair_m1_7091_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::pick_value(TKey,TValue)
extern "C" bool Dictionary_2_pick_value_m1_7093_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m1_7093(__this /* static, unused */, ___key, ___value, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_pick_value_m1_7093_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m1_7095_gshared (Dictionary_2_t1_1104 * __this, KeyValuePair_2U5BU5D_t1_1428* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m1_7095(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1_1104 *, KeyValuePair_2U5BU5D_t1_1428*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m1_7095_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Resize()
extern "C" void Dictionary_2_Resize_m1_7097_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1_7097(__this, method) (( void (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_Resize_m1_7097_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m1_7099_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_Add_m1_7099(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1_1104 *, Object_t *, bool, const MethodInfo*))Dictionary_2_Add_m1_7099_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Clear()
extern "C" void Dictionary_2_Clear_m1_7101_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1_7101(__this, method) (( void (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_Clear_m1_7101_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m1_7103_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m1_7103(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1104 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m1_7103_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m1_7105_gshared (Dictionary_2_t1_1104 * __this, bool ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m1_7105(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1104 *, bool, const MethodInfo*))Dictionary_2_ContainsValue_m1_7105_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m1_7107_gshared (Dictionary_2_t1_1104 * __this, SerializationInfo_t1_176 * ___info, StreamingContext_t1_504  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1_7107(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1_1104 *, SerializationInfo_t1_176 *, StreamingContext_t1_504 , const MethodInfo*))Dictionary_2_GetObjectData_m1_7107_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m1_7109_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m1_7109(__this, ___sender, method) (( void (*) (Dictionary_2_t1_1104 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m1_7109_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m1_7111_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m1_7111(__this, ___key, method) (( bool (*) (Dictionary_2_t1_1104 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m1_7111_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m1_7113_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, bool* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m1_7113(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1_1104 *, Object_t *, bool*, const MethodInfo*))Dictionary_2_TryGetValue_m1_7113_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Values()
extern "C" ValueCollection_t1_1108 * Dictionary_2_get_Values_m1_7115_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m1_7115(__this, method) (( ValueCollection_t1_1108 * (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_get_Values_m1_7115_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m1_7117_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m1_7117(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1_1104 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m1_7117_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ToTValue(System.Object)
extern "C" bool Dictionary_2_ToTValue_m1_7119_gshared (Dictionary_2_t1_1104 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m1_7119(__this, ___value, method) (( bool (*) (Dictionary_2_t1_1104 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m1_7119_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m1_7121_gshared (Dictionary_2_t1_1104 * __this, KeyValuePair_2_t1_1106  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1_7121(__this, ___pair, method) (( bool (*) (Dictionary_2_t1_1104 *, KeyValuePair_2_t1_1106 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1_7121_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
extern "C" Enumerator_t1_1110  Dictionary_2_GetEnumerator_m1_7123_gshared (Dictionary_2_t1_1104 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m1_7123(__this, method) (( Enumerator_t1_1110  (*) (Dictionary_2_t1_1104 *, const MethodInfo*))Dictionary_2_GetEnumerator_m1_7123_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1_166  Dictionary_2_U3CCopyToU3Em__0_m1_7125_gshared (Object_t * __this /* static, unused */, Object_t * ___key, bool ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1_7125(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1_166  (*) (Object_t * /* static, unused */, Object_t *, bool, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1_7125_gshared)(__this /* static, unused */, ___key, ___value, method)
