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

// System.Predicate`1<UnityEngine.Vector4>
struct Predicate_1_t1_1167;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Predicate`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m1_7769_gshared (Predicate_1_t1_1167 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1_7769(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1_1167 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1_7769_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m1_7770_gshared (Predicate_1_t1_1167 * __this, Vector4_t5_52  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m1_7770(__this, ___obj, method) (( bool (*) (Predicate_1_t1_1167 *, Vector4_t5_52 , const MethodInfo*))Predicate_1_Invoke_m1_7770_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Vector4>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m1_7771_gshared (Predicate_1_t1_1167 * __this, Vector4_t5_52  ___obj, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m1_7771(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1_1167 *, Vector4_t5_52 , AsyncCallback_t1_28 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m1_7771_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m1_7772_gshared (Predicate_1_t1_1167 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m1_7772(__this, ___result, method) (( bool (*) (Predicate_1_t1_1167 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m1_7772_gshared)(__this, ___result, method)
