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

// System.Threading.EventWaitHandle
struct EventWaitHandle_t1_659;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Threading_EventResetMode.h"

// System.Void System.Threading.EventWaitHandle::.ctor(System.Boolean,System.Threading.EventResetMode)
extern "C" void EventWaitHandle__ctor_m1_4435 (EventWaitHandle_t1_659 * __this, bool ___initialState, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::IsManualReset(System.Threading.EventResetMode)
extern "C" bool EventWaitHandle_IsManualReset_m1_4436 (EventWaitHandle_t1_659 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Reset()
extern "C" bool EventWaitHandle_Reset_m1_4437 (EventWaitHandle_t1_659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.EventWaitHandle::Set()
extern "C" bool EventWaitHandle_Set_m1_4438 (EventWaitHandle_t1_659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
