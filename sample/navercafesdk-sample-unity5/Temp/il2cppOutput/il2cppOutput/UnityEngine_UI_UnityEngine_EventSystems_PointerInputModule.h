#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t1_908;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t6_39;

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputModule.h"

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t6_40  : public BaseInputModule_t6_4
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t1_908 * ___m_PointerData_10;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t6_39 * ___m_MouseState_11;
};
