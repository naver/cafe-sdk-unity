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

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_t3_22;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t3_111;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
extern "C" void PrimeGeneratorBase__ctor_m3_117 (PrimeGeneratorBase_t3_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
extern "C" int32_t PrimeGeneratorBase_get_Confidence_m3_118 (PrimeGeneratorBase_t3_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
extern "C" PrimalityTest_t3_111 * PrimeGeneratorBase_get_PrimalityTest_m3_119 (PrimeGeneratorBase_t3_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
extern "C" int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m3_120 (PrimeGeneratorBase_t3_22 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
