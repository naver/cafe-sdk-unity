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

// System.Threading.Timer/Scheduler
struct Scheduler_t1_669;
// System.Threading.Timer
struct Timer_t1_424;
// System.Collections.ArrayList
struct ArrayList_t1_112;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Threading.Timer/Scheduler::.ctor()
extern "C" void Scheduler__ctor_m1_4481 (Scheduler_t1_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::.cctor()
extern "C" void Scheduler__cctor_m1_4482 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Timer/Scheduler System.Threading.Timer/Scheduler::get_Instance()
extern "C" Scheduler_t1_669 * Scheduler_get_Instance_m1_4483 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Remove(System.Threading.Timer)
extern "C" void Scheduler_Remove_m1_4484 (Scheduler_t1_669 * __this, Timer_t1_424 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Change(System.Threading.Timer,System.Int64)
extern "C" void Scheduler_Change_m1_4485 (Scheduler_t1_669 * __this, Timer_t1_424 * ___timer, int64_t ___new_next_run, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::Add(System.Threading.Timer)
extern "C" void Scheduler_Add_m1_4486 (Scheduler_t1_669 * __this, Timer_t1_424 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Timer/Scheduler::InternalRemove(System.Threading.Timer)
extern "C" int32_t Scheduler_InternalRemove_m1_4487 (Scheduler_t1_669 * __this, Timer_t1_424 * ___timer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::SchedulerThread()
extern "C" void Scheduler_SchedulerThread_m1_4488 (Scheduler_t1_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer/Scheduler::ShrinkIfNeeded(System.Collections.ArrayList,System.Int32)
extern "C" void Scheduler_ShrinkIfNeeded_m1_4489 (Scheduler_t1_669 * __this, ArrayList_t1_112 * ___list, int32_t ___initial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
