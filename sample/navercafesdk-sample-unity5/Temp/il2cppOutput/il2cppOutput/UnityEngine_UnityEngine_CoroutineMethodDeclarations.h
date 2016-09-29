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

// UnityEngine.Coroutine
struct Coroutine_t5_13;
struct Coroutine_t5_13_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m5_12 (Coroutine_t5_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m5_13 (Coroutine_t5_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m5_14 (Coroutine_t5_13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t5_13_marshal(const Coroutine_t5_13& unmarshaled, Coroutine_t5_13_marshaled& marshaled);
extern "C" void Coroutine_t5_13_marshal_back(const Coroutine_t5_13_marshaled& marshaled, Coroutine_t5_13& unmarshaled);
extern "C" void Coroutine_t5_13_marshal_cleanup(Coroutine_t5_13_marshaled& marshaled);
