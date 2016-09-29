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

// Mono.Math.BigInteger
struct BigInteger_t1_94;
// Mono.Math.BigInteger[]
struct BigIntegerU5BU5D_t1_799;
// System.UInt32[]
struct UInt32U5BU5D_t1_96;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Mono_Math_BigInteger_Sign.h"

// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::AddSameSign(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_94 * Kernel_AddSameSign_m1_1126 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___bi1, BigInteger_t1_94 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::Subtract(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_94 * Kernel_Subtract_m1_1127 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___big, BigInteger_t1_94 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MinusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_MinusEq_m1_1128 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___big, BigInteger_t1_94 * ___small, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::PlusEq(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" void Kernel_PlusEq_m1_1129 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___bi1, BigInteger_t1_94 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger/Sign Mono.Math.BigInteger/Kernel::Compare(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" int32_t Kernel_Compare_m1_1130 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___bi1, BigInteger_t1_94 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::SingleByteDivideInPlace(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_SingleByteDivideInPlace_m1_1131 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::DwordMod(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_DwordMod_m1_1132 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::DwordDivMod(Mono.Math.BigInteger,System.UInt32)
extern "C" BigIntegerU5BU5D_t1_799* Kernel_DwordDivMod_m1_1133 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___n, uint32_t ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger[] Mono.Math.BigInteger/Kernel::multiByteDivide(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigIntegerU5BU5D_t1_799* Kernel_multiByteDivide_m1_1134 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___bi1, BigInteger_t1_94 * ___bi2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::LeftShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1_94 * Kernel_LeftShift_m1_1135 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::RightShift(Mono.Math.BigInteger,System.Int32)
extern "C" BigInteger_t1_94 * Kernel_RightShift_m1_1136 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___bi, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::MultiplyByDword(Mono.Math.BigInteger,System.UInt32)
extern "C" BigInteger_t1_94 * Kernel_MultiplyByDword_m1_1137 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___n, uint32_t ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::Multiply(System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32,System.UInt32,System.UInt32[],System.UInt32)
extern "C" void Kernel_Multiply_m1_1138 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1_96* ___x, uint32_t ___xOffset, uint32_t ___xLen, UInt32U5BU5D_t1_96* ___y, uint32_t ___yOffset, uint32_t ___yLen, UInt32U5BU5D_t1_96* ___d, uint32_t ___dOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/Kernel::MultiplyMod2p32pmod(System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32,System.UInt32[],System.Int32,System.Int32)
extern "C" void Kernel_MultiplyMod2p32pmod_m1_1139 (Object_t * __this /* static, unused */, UInt32U5BU5D_t1_96* ___x, int32_t ___xOffset, int32_t ___xLen, UInt32U5BU5D_t1_96* ___y, int32_t ___yOffest, int32_t ___yLen, UInt32U5BU5D_t1_96* ___d, int32_t ___dOffset, int32_t ___mod, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,System.UInt32)
extern "C" uint32_t Kernel_modInverse_m1_1140 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___bi, uint32_t ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/Kernel::modInverse(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1_94 * Kernel_modInverse_m1_1141 (Object_t * __this /* static, unused */, BigInteger_t1_94 * ___bi, BigInteger_t1_94 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
