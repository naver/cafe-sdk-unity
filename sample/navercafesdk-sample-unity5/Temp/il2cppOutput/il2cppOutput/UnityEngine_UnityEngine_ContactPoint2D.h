#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider2D
struct Collider2D_t5_105;

#include "mscorlib_System_ValueType.h"
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.ContactPoint2D
struct  ContactPoint2D_t5_107 
{
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t5_45  ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t5_45  ___m_Normal_1;
	// UnityEngine.Collider2D UnityEngine.ContactPoint2D::m_Collider
	Collider2D_t5_105 * ___m_Collider_2;
	// UnityEngine.Collider2D UnityEngine.ContactPoint2D::m_OtherCollider
	Collider2D_t5_105 * ___m_OtherCollider_3;
};
