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

// UnityEngine.UI.ScrollRect
struct ScrollRect_t6_117;
// UnityEngine.RectTransform
struct RectTransform_t5_62;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t6_113;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t6_116;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t6_36;
// UnityEngine.Transform
struct Transform_t5_63;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_MovementType.h"
#include "UnityEngine_UI_UnityEngine_UI_ScrollRect_ScrollbarVisibility.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.UI.ScrollRect::.ctor()
extern "C" void ScrollRect__ctor_m6_870 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C" RectTransform_t5_62 * ScrollRect_get_content_m6_871 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_content(UnityEngine.RectTransform)
extern "C" void ScrollRect_set_content_m6_872 (ScrollRect_t6_117 * __this, RectTransform_t5_62 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_horizontal()
extern "C" bool ScrollRect_get_horizontal_m6_873 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontal(System.Boolean)
extern "C" void ScrollRect_set_horizontal_m6_874 (ScrollRect_t6_117 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vertical()
extern "C" bool ScrollRect_get_vertical_m6_875 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_vertical(System.Boolean)
extern "C" void ScrollRect_set_vertical_m6_876 (ScrollRect_t6_117 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::get_movementType()
extern "C" int32_t ScrollRect_get_movementType_m6_877 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_movementType(UnityEngine.UI.ScrollRect/MovementType)
extern "C" void ScrollRect_set_movementType_m6_878 (ScrollRect_t6_117 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_elasticity()
extern "C" float ScrollRect_get_elasticity_m6_879 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_elasticity(System.Single)
extern "C" void ScrollRect_set_elasticity_m6_880 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_inertia()
extern "C" bool ScrollRect_get_inertia_m6_881 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_inertia(System.Boolean)
extern "C" void ScrollRect_set_inertia_m6_882 (ScrollRect_t6_117 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_decelerationRate()
extern "C" float ScrollRect_get_decelerationRate_m6_883 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_decelerationRate(System.Single)
extern "C" void ScrollRect_set_decelerationRate_m6_884 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_scrollSensitivity()
extern "C" float ScrollRect_get_scrollSensitivity_m6_885 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_scrollSensitivity(System.Single)
extern "C" void ScrollRect_set_scrollSensitivity_m6_886 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewport()
extern "C" RectTransform_t5_62 * ScrollRect_get_viewport_m6_887 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_viewport(UnityEngine.RectTransform)
extern "C" void ScrollRect_set_viewport_m6_888 (ScrollRect_t6_117 * __this, RectTransform_t5_62 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_horizontalScrollbar()
extern "C" Scrollbar_t6_113 * ScrollRect_get_horizontalScrollbar_m6_889 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_horizontalScrollbar_m6_890 (ScrollRect_t6_117 * __this, Scrollbar_t6_113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::get_verticalScrollbar()
extern "C" Scrollbar_t6_113 * ScrollRect_get_verticalScrollbar_m6_891 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbar(UnityEngine.UI.Scrollbar)
extern "C" void ScrollRect_set_verticalScrollbar_m6_892 (ScrollRect_t6_117 * __this, Scrollbar_t6_113 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_horizontalScrollbarVisibility()
extern "C" int32_t ScrollRect_get_horizontalScrollbarVisibility_m6_893 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C" void ScrollRect_set_horizontalScrollbarVisibility_m6_894 (ScrollRect_t6_117 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::get_verticalScrollbarVisibility()
extern "C" int32_t ScrollRect_get_verticalScrollbarVisibility_m6_895 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarVisibility(UnityEngine.UI.ScrollRect/ScrollbarVisibility)
extern "C" void ScrollRect_set_verticalScrollbarVisibility_m6_896 (ScrollRect_t6_117 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalScrollbarSpacing()
extern "C" float ScrollRect_get_horizontalScrollbarSpacing_m6_897 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalScrollbarSpacing(System.Single)
extern "C" void ScrollRect_set_horizontalScrollbarSpacing_m6_898 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalScrollbarSpacing()
extern "C" float ScrollRect_get_verticalScrollbarSpacing_m6_899 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalScrollbarSpacing(System.Single)
extern "C" void ScrollRect_set_verticalScrollbarSpacing_m6_900 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::get_onValueChanged()
extern "C" ScrollRectEvent_t6_116 * ScrollRect_get_onValueChanged_m6_901 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_onValueChanged(UnityEngine.UI.ScrollRect/ScrollRectEvent)
extern "C" void ScrollRect_set_onValueChanged_m6_902 (ScrollRect_t6_117 * __this, ScrollRectEvent_t6_116 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_viewRect()
extern "C" RectTransform_t5_62 * ScrollRect_get_viewRect_m6_903 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_velocity()
extern "C" Vector2_t5_45  ScrollRect_get_velocity_m6_904 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_velocity(UnityEngine.Vector2)
extern "C" void ScrollRect_set_velocity_m6_905 (ScrollRect_t6_117 * __this, Vector2_t5_45  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_rectTransform()
extern "C" RectTransform_t5_62 * ScrollRect_get_rectTransform_m6_906 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void ScrollRect_Rebuild_m6_907 (ScrollRect_t6_117 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LayoutComplete()
extern "C" void ScrollRect_LayoutComplete_m6_908 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::GraphicUpdateComplete()
extern "C" void ScrollRect_GraphicUpdateComplete_m6_909 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateCachedData()
extern "C" void ScrollRect_UpdateCachedData_m6_910 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEnable()
extern "C" void ScrollRect_OnEnable_m6_911 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDisable()
extern "C" void ScrollRect_OnDisable_m6_912 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::IsActive()
extern "C" bool ScrollRect_IsActive_m6_913 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::EnsureLayoutHasRebuilt()
extern "C" void ScrollRect_EnsureLayoutHasRebuilt_m6_914 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::StopMovement()
extern "C" void ScrollRect_StopMovement_m6_915 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnScroll(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnScroll_m6_916 (ScrollRect_t6_117 * __this, PointerEventData_t6_36 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnInitializePotentialDrag_m6_917 (ScrollRect_t6_117 * __this, PointerEventData_t6_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnBeginDrag_m6_918 (ScrollRect_t6_117 * __this, PointerEventData_t6_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnEndDrag_m6_919 (ScrollRect_t6_117 * __this, PointerEventData_t6_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void ScrollRect_OnDrag_m6_920 (ScrollRect_t6_117 * __this, PointerEventData_t6_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetContentAnchoredPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_SetContentAnchoredPosition_m6_921 (ScrollRect_t6_117 * __this, Vector2_t5_45  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::LateUpdate()
extern "C" void ScrollRect_LateUpdate_m6_922 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdatePrevData()
extern "C" void ScrollRect_UpdatePrevData_m6_923 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbars(UnityEngine.Vector2)
extern "C" void ScrollRect_UpdateScrollbars_m6_924 (ScrollRect_t6_117 * __this, Vector2_t5_45  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::get_normalizedPosition()
extern "C" Vector2_t5_45  ScrollRect_get_normalizedPosition_m6_925 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_normalizedPosition(UnityEngine.Vector2)
extern "C" void ScrollRect_set_normalizedPosition_m6_926 (ScrollRect_t6_117 * __this, Vector2_t5_45  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_horizontalNormalizedPosition()
extern "C" float ScrollRect_get_horizontalNormalizedPosition_m6_927 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_horizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_horizontalNormalizedPosition_m6_928 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_verticalNormalizedPosition()
extern "C" float ScrollRect_get_verticalNormalizedPosition_m6_929 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_verticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_set_verticalNormalizedPosition_m6_930 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetHorizontalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetHorizontalNormalizedPosition_m6_931 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetVerticalNormalizedPosition(System.Single)
extern "C" void ScrollRect_SetVerticalNormalizedPosition_m6_932 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetNormalizedPosition(System.Single,System.Int32)
extern "C" void ScrollRect_SetNormalizedPosition_m6_933 (ScrollRect_t6_117 * __this, float ___value, int32_t ___axis, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::RubberDelta(System.Single,System.Single)
extern "C" float ScrollRect_RubberDelta_m6_934 (Object_t * __this /* static, unused */, float ___overStretching, float ___viewSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::OnRectTransformDimensionsChange()
extern "C" void ScrollRect_OnRectTransformDimensionsChange_m6_935 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_hScrollingNeeded()
extern "C" bool ScrollRect_get_hScrollingNeeded_m6_936 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::get_vScrollingNeeded()
extern "C" bool ScrollRect_get_vScrollingNeeded_m6_937 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputHorizontal()
extern "C" void ScrollRect_CalculateLayoutInputHorizontal_m6_938 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::CalculateLayoutInputVertical()
extern "C" void ScrollRect_CalculateLayoutInputVertical_m6_939 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minWidth()
extern "C" float ScrollRect_get_minWidth_m6_940 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredWidth()
extern "C" float ScrollRect_get_preferredWidth_m6_941 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleWidth()
extern "C" float ScrollRect_get_flexibleWidth_m6_942 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::set_flexibleWidth(System.Single)
extern "C" void ScrollRect_set_flexibleWidth_m6_943 (ScrollRect_t6_117 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_minHeight()
extern "C" float ScrollRect_get_minHeight_m6_944 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_preferredHeight()
extern "C" float ScrollRect_get_preferredHeight_m6_945 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.ScrollRect::get_flexibleHeight()
extern "C" float ScrollRect_get_flexibleHeight_m6_946 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.ScrollRect::get_layoutPriority()
extern "C" int32_t ScrollRect_get_layoutPriority_m6_947 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutHorizontal()
extern "C" void ScrollRect_SetLayoutHorizontal_m6_948 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetLayoutVertical()
extern "C" void ScrollRect_SetLayoutVertical_m6_949 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarVisibility()
extern "C" void ScrollRect_UpdateScrollbarVisibility_m6_950 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateScrollbarLayout()
extern "C" void ScrollRect_UpdateScrollbarLayout_m6_951 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::UpdateBounds()
extern "C" void ScrollRect_UpdateBounds_m6_952 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.UI.ScrollRect::GetBounds()
extern "C" Bounds_t5_51  ScrollRect_GetBounds_m6_953 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::CalculateOffset(UnityEngine.Vector2)
extern "C" Vector2_t5_45  ScrollRect_CalculateOffset_m6_954 (ScrollRect_t6_117 * __this, Vector2_t5_45  ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirty()
extern "C" void ScrollRect_SetDirty_m6_955 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.ScrollRect::SetDirtyCaching()
extern "C" void ScrollRect_SetDirtyCaching_m6_956 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool ScrollRect_UnityEngine_UI_ICanvasElement_IsDestroyed_m6_957 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.ScrollRect::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t5_63 * ScrollRect_UnityEngine_UI_ICanvasElement_get_transform_m6_958 (ScrollRect_t6_117 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
