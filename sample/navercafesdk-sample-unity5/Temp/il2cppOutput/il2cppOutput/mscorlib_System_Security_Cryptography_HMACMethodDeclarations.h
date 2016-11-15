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

// System.Security.Cryptography.HMAC
struct HMAC_t1_554;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// Mono.Security.Cryptography.BlockProcessor
struct BlockProcessor_t1_100;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.HMAC::.ctor()
extern "C" void HMAC__ctor_m1_3733 (HMAC_t1_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HMAC::get_BlockSizeValue()
extern "C" int32_t HMAC_get_BlockSizeValue_m1_3734 (HMAC_t1_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_BlockSizeValue(System.Int32)
extern "C" void HMAC_set_BlockSizeValue_m1_3735 (HMAC_t1_554 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_HashName(System.String)
extern "C" void HMAC_set_HashName_m1_3736 (HMAC_t1_554 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::get_Key()
extern "C" ByteU5BU5D_t1_70* HMAC_get_Key_m1_3737 (HMAC_t1_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::set_Key(System.Byte[])
extern "C" void HMAC_set_Key_m1_3738 (HMAC_t1_554 * __this, ByteU5BU5D_t1_70* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.BlockProcessor System.Security.Cryptography.HMAC::get_Block()
extern "C" BlockProcessor_t1_100 * HMAC_get_Block_m1_3739 (HMAC_t1_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::KeySetup(System.Byte[],System.Byte)
extern "C" ByteU5BU5D_t1_70* HMAC_KeySetup_m1_3740 (HMAC_t1_554 * __this, ByteU5BU5D_t1_70* ___key, uint8_t ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Dispose(System.Boolean)
extern "C" void HMAC_Dispose_m1_3741 (HMAC_t1_554 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void HMAC_HashCore_m1_3742 (HMAC_t1_554 * __this, ByteU5BU5D_t1_70* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HMAC::HashFinal()
extern "C" ByteU5BU5D_t1_70* HMAC_HashFinal_m1_3743 (HMAC_t1_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HMAC::Initialize()
extern "C" void HMAC_Initialize_m1_3744 (HMAC_t1_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create()
extern "C" HMAC_t1_554 * HMAC_Create_m1_3745 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HMAC System.Security.Cryptography.HMAC::Create(System.String)
extern "C" HMAC_t1_554 * HMAC_Create_m1_3746 (Object_t * __this /* static, unused */, String_t* ___algorithmName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
