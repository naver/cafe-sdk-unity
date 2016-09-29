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

// UnityEngine.UI.RawImage
struct RawImage_t6_107;
// UnityEngine.Texture
struct Texture_t5_30;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t6_77;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.UI.RawImage::.ctor()
extern "C" void RawImage__ctor_m6_801 (RawImage_t6_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_mainTexture()
extern "C" Texture_t5_30 * RawImage_get_mainTexture_m6_802 (RawImage_t6_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.UI.RawImage::get_texture()
extern "C" Texture_t5_30 * RawImage_get_texture_m6_803 (RawImage_t6_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
extern "C" void RawImage_set_texture_m6_804 (RawImage_t6_107 * __this, Texture_t5_30 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.UI.RawImage::get_uvRect()
extern "C" Rect_t5_49  RawImage_get_uvRect_m6_805 (RawImage_t6_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::set_uvRect(UnityEngine.Rect)
extern "C" void RawImage_set_uvRect_m6_806 (RawImage_t6_107 * __this, Rect_t5_49  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::SetNativeSize()
extern "C" void RawImage_SetNativeSize_m6_807 (RawImage_t6_107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.RawImage::OnPopulateMesh(UnityEngine.UI.VertexHelper)
extern "C" void RawImage_OnPopulateMesh_m6_808 (RawImage_t6_107 * __this, VertexHelper_t6_77 * ___vh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
