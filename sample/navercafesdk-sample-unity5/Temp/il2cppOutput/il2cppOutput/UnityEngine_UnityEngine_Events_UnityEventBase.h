#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t5_128;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t5_127;
// System.String
struct String_t;

#include "mscorlib_System_Object.h"

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t5_129  : public Object_t
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t5_128 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t5_127 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;
};
