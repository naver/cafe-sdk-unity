#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Font
struct Font_t5_135;

#include "mscorlib_System_Object.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_TextAnchor.h"
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"

// UnityEngine.UI.FontData
struct  FontData_t6_73  : public Object_t
{
	// UnityEngine.Font UnityEngine.UI.FontData::m_Font
	Font_t5_135 * ___m_Font_0;
	// System.Int32 UnityEngine.UI.FontData::m_FontSize
	int32_t ___m_FontSize_1;
	// UnityEngine.FontStyle UnityEngine.UI.FontData::m_FontStyle
	int32_t ___m_FontStyle_2;
	// System.Boolean UnityEngine.UI.FontData::m_BestFit
	bool ___m_BestFit_3;
	// System.Int32 UnityEngine.UI.FontData::m_MinSize
	int32_t ___m_MinSize_4;
	// System.Int32 UnityEngine.UI.FontData::m_MaxSize
	int32_t ___m_MaxSize_5;
	// UnityEngine.TextAnchor UnityEngine.UI.FontData::m_Alignment
	int32_t ___m_Alignment_6;
	// System.Boolean UnityEngine.UI.FontData::m_RichText
	bool ___m_RichText_7;
	// UnityEngine.HorizontalWrapMode UnityEngine.UI.FontData::m_HorizontalOverflow
	int32_t ___m_HorizontalOverflow_8;
	// UnityEngine.VerticalWrapMode UnityEngine.UI.FontData::m_VerticalOverflow
	int32_t ___m_VerticalOverflow_9;
	// System.Single UnityEngine.UI.FontData::m_LineSpacing
	float ___m_LineSpacing_10;
};
