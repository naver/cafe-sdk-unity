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

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t1_909;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1_5533_gshared (Comparison_1_t1_909 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1_5533(__this, ___object, ___method, method) (( void (*) (Comparison_1_t1_909 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1_5533_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m1_10153_gshared (Comparison_1_t1_909 * __this, RaycastHit_t5_102  ___x, RaycastHit_t5_102  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m1_10153(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t1_909 *, RaycastHit_t5_102 , RaycastHit_t5_102 , const MethodInfo*))Comparison_1_Invoke_m1_10153_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m1_10154_gshared (Comparison_1_t1_909 * __this, RaycastHit_t5_102  ___x, RaycastHit_t5_102  ___y, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m1_10154(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t1_909 *, RaycastHit_t5_102 , RaycastHit_t5_102 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m1_10154_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m1_10155_gshared (Comparison_1_t1_909 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m1_10155(__this, ___result, method) (( int32_t (*) (Comparison_1_t1_909 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m1_10155_gshared)(__this, ___result, method)
