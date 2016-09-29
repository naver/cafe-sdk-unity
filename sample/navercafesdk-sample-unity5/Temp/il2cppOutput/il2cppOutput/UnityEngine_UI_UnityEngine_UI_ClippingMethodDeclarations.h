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

// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t1_918;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// UnityEngine.Rect UnityEngine.UI.Clipping::FindCullAndClipWorldRect(System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>,System.Boolean&)
extern "C" Rect_t5_49  Clipping_FindCullAndClipWorldRect_m6_1166 (Object_t * __this /* static, unused */, List_1_t1_918 * ___rectMaskParents, bool* ___validRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.Clipping::RectIntersect(UnityEngine.Rect,UnityEngine.Rect)
extern "C" Rect_t5_49  Clipping_RectIntersect_m6_1167 (Object_t * __this /* static, unused */, Rect_t5_49  ___a, Rect_t5_49  ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
