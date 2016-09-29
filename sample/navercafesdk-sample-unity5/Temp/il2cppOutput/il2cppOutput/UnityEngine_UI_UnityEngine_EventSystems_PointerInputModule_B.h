#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t6_38;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEventData_Inp.h"

// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct  ButtonState_t6_37  : public Object_t
{
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::m_Button
	int32_t ___m_Button_0;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::m_EventData
	MouseButtonEventData_t6_38 * ___m_EventData_1;
};
