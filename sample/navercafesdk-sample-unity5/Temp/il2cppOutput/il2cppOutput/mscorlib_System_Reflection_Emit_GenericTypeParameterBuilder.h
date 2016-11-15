#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1_270;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t1_277;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "mscorlib_System_Type.h"

// System.Reflection.Emit.GenericTypeParameterBuilder
struct  GenericTypeParameterBuilder_t1_276  : public Type_t
{
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.GenericTypeParameterBuilder::tbuilder
	TypeBuilder_t1_270 * ___tbuilder_7;
	// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.GenericTypeParameterBuilder::mbuilder
	MethodBuilder_t1_277 * ___mbuilder_8;
	// System.String System.Reflection.Emit.GenericTypeParameterBuilder::name
	String_t* ___name_9;
	// System.Type System.Reflection.Emit.GenericTypeParameterBuilder::base_type
	Type_t * ___base_type_10;
};
