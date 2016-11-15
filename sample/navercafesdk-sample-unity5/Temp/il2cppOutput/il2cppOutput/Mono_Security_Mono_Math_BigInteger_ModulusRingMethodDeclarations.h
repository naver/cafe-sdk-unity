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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3_17;
// Mono.Math.BigInteger
struct BigInteger_t3_18;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3_50 (ModulusRing_t3_17 * __this, BigInteger_t3_18 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3_51 (ModulusRing_t3_17 * __this, BigInteger_t3_18 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3_18 * ModulusRing_Multiply_m3_52 (ModulusRing_t3_17 * __this, BigInteger_t3_18 * ___a, BigInteger_t3_18 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3_18 * ModulusRing_Difference_m3_53 (ModulusRing_t3_17 * __this, BigInteger_t3_18 * ___a, BigInteger_t3_18 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3_18 * ModulusRing_Pow_m3_54 (ModulusRing_t3_17 * __this, BigInteger_t3_18 * ___a, BigInteger_t3_18 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3_18 * ModulusRing_Pow_m3_55 (ModulusRing_t3_17 * __this, uint32_t ___b, BigInteger_t3_18 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
