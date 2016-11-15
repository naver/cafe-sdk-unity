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

// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1_267;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1_270;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1_272;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t1_800;
// System.Object
struct Object_t;
// System.Reflection.Binder
struct Binder_t1_318;
// System.Object[]
struct ObjectU5BU5D_t1_156;
// System.Globalization.CultureInfo
struct CultureInfo_t1_161;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1_269;
// System.Reflection.Module
struct Module_t1_284;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MethodAttributes.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_RuntimeMethodHandle.h"
#include "mscorlib_System_Reflection_Emit_MethodToken.h"

// System.Void System.Reflection.Emit.ConstructorBuilder::.ctor(System.Reflection.Emit.TypeBuilder,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" void ConstructorBuilder__ctor_m1_2392 (ConstructorBuilder_t1_267 * __this, TypeBuilder_t1_270 * ___tb, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t1_31* ___parameterTypes, TypeU5BU5DU5BU5D_t1_272* ___paramModReq, TypeU5BU5DU5BU5D_t1_272* ___paramModOpt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::get_CallingConvention()
extern "C" int32_t ConstructorBuilder_get_CallingConvention_m1_2393 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::get_TypeBuilder()
extern "C" TypeBuilder_t1_270 * ConstructorBuilder_get_TypeBuilder_m1_2394 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParameters()
extern "C" ParameterInfoU5BU5D_t1_800* ConstructorBuilder_GetParameters_m1_2395 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.Emit.ConstructorBuilder::GetParametersInternal()
extern "C" ParameterInfoU5BU5D_t1_800* ConstructorBuilder_GetParametersInternal_m1_2396 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::GetParameterCount()
extern "C" int32_t ConstructorBuilder_GetParameterCount_m1_2397 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m1_2398 (ConstructorBuilder_t1_267 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t1_318 * ___binder, ObjectU5BU5D_t1_156* ___parameters, CultureInfo_t1_161 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.ConstructorBuilder::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * ConstructorBuilder_Invoke_m1_2399 (ConstructorBuilder_t1_267 * __this, int32_t ___invokeAttr, Binder_t1_318 * ___binder, ObjectU5BU5D_t1_156* ___parameters, CultureInfo_t1_161 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.Emit.ConstructorBuilder::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1_748  ConstructorBuilder_get_MethodHandle_m1_2400 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::get_Attributes()
extern "C" int32_t ConstructorBuilder_get_Attributes_m1_2401 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_ReflectedType()
extern "C" Type_t * ConstructorBuilder_get_ReflectedType_m1_2402 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ConstructorBuilder::get_DeclaringType()
extern "C" Type_t * ConstructorBuilder_get_DeclaringType_m1_2403 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::get_Name()
extern "C" String_t* ConstructorBuilder_get_Name_m1_2404 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool ConstructorBuilder_IsDefined_m1_2405 (ConstructorBuilder_t1_267 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t1_156* ConstructorBuilder_GetCustomAttributes_m1_2406 (ConstructorBuilder_t1_267 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.ConstructorBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t1_156* ConstructorBuilder_GetCustomAttributes_m1_2407 (ConstructorBuilder_t1_267 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator()
extern "C" ILGenerator_t1_269 * ConstructorBuilder_GetILGenerator_m1_2408 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ILGenerator System.Reflection.Emit.ConstructorBuilder::GetILGenerator(System.Int32)
extern "C" ILGenerator_t1_269 * ConstructorBuilder_GetILGenerator_m1_2409 (ConstructorBuilder_t1_267 * __this, int32_t ___streamSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodToken System.Reflection.Emit.ConstructorBuilder::GetToken()
extern "C" MethodToken_t1_287  ConstructorBuilder_GetToken_m1_2410 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.ConstructorBuilder::get_Module()
extern "C" Module_t1_284 * ConstructorBuilder_get_Module_m1_2411 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ConstructorBuilder::ToString()
extern "C" String_t* ConstructorBuilder_ToString_m1_2412 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ConstructorBuilder::fixup()
extern "C" void ConstructorBuilder_fixup_m1_2413 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ConstructorBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t ConstructorBuilder_get_next_table_index_m1_2414 (ConstructorBuilder_t1_267 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ConstructorBuilder::get_IsCompilerContext()
extern "C" bool ConstructorBuilder_get_IsCompilerContext_m1_2415 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_supported()
extern "C" Exception_t1_33 * ConstructorBuilder_not_supported_m1_2416 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.ConstructorBuilder::not_created()
extern "C" Exception_t1_33 * ConstructorBuilder_not_created_m1_2417 (ConstructorBuilder_t1_267 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
