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

// System.Security.Cryptography.KeySizes
struct KeySizes_t1_565;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1_538;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.KeySizes::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void KeySizes__ctor_m1_3798 (KeySizes_t1_565 * __this, int32_t ___minSize, int32_t ___maxSize, int32_t ___skipSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MaxSize()
extern "C" int32_t KeySizes_get_MaxSize_m1_3799 (KeySizes_t1_565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_MinSize()
extern "C" int32_t KeySizes_get_MinSize_m1_3800 (KeySizes_t1_565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.KeySizes::get_SkipSize()
extern "C" int32_t KeySizes_get_SkipSize_m1_3801 (KeySizes_t1_565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegal(System.Int32)
extern "C" bool KeySizes_IsLegal_m1_3802 (KeySizes_t1_565 * __this, int32_t ___keySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.KeySizes::IsLegalKeySize(System.Security.Cryptography.KeySizes[],System.Int32)
extern "C" bool KeySizes_IsLegalKeySize_m1_3803 (Object_t * __this /* static, unused */, KeySizesU5BU5D_t1_538* ___legalKeys, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
