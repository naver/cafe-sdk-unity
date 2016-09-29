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

// UnityEngine.GameObject
struct GameObject_t5_91;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6_63;
// UnityEngine.UI.Selectable
struct Selectable_t6_55;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UI_UnityEngine_UI_DefaultControls_Resources.h"

// System.Void UnityEngine.UI.DefaultControls::.cctor()
extern "C" void DefaultControls__cctor_m6_363 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIElementRoot(System.String,UnityEngine.Vector2)
extern "C" GameObject_t5_91 * DefaultControls_CreateUIElementRoot_m6_364 (Object_t * __this /* static, unused */, String_t* ___name, Vector2_t5_45  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateUIObject(System.String,UnityEngine.GameObject)
extern "C" GameObject_t5_91 * DefaultControls_CreateUIObject_m6_365 (Object_t * __this /* static, unused */, String_t* ___name, GameObject_t5_91 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultTextValues(UnityEngine.UI.Text)
extern "C" void DefaultControls_SetDefaultTextValues_m6_366 (Object_t * __this /* static, unused */, Text_t6_63 * ___lbl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetDefaultColorTransitionValues(UnityEngine.UI.Selectable)
extern "C" void DefaultControls_SetDefaultColorTransitionValues_m6_367 (Object_t * __this /* static, unused */, Selectable_t6_55 * ___slider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetParentAndAlign(UnityEngine.GameObject,UnityEngine.GameObject)
extern "C" void DefaultControls_SetParentAndAlign_m6_368 (Object_t * __this /* static, unused */, GameObject_t5_91 * ___child, GameObject_t5_91 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.DefaultControls::SetLayerRecursively(UnityEngine.GameObject,System.Int32)
extern "C" void DefaultControls_SetLayerRecursively_m6_369 (Object_t * __this /* static, unused */, GameObject_t5_91 * ___go, int32_t ___layer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreatePanel(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreatePanel_m6_370 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateButton(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateButton_m6_371 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateText(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateText_m6_372 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateImage_m6_373 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateRawImage(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateRawImage_m6_374 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateSlider(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateSlider_m6_375 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollbar(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateScrollbar_m6_376 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateToggle(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateToggle_m6_377 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateInputField(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateInputField_m6_378 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateDropdown(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateDropdown_m6_379 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.UI.DefaultControls::CreateScrollView(UnityEngine.UI.DefaultControls/Resources)
extern "C" GameObject_t5_91 * DefaultControls_CreateScrollView_m6_380 (Object_t * __this /* static, unused */, Resources_t6_60  ___resources, const MethodInfo* method) IL2CPP_METHOD_ATTR;
