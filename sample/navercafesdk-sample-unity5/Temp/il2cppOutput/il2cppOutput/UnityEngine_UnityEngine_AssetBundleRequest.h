#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AssetBundle
struct AssetBundle_t5_4;
// System.String
struct String_t;
// System.Type
struct Type_t;

#include "UnityEngine_UnityEngine_AsyncOperation.h"

// UnityEngine.AssetBundleRequest
struct  AssetBundleRequest_t5_3  : public AsyncOperation_t5_2
{
	// UnityEngine.AssetBundle UnityEngine.AssetBundleRequest::m_AssetBundle
	AssetBundle_t5_4 * ___m_AssetBundle_1;
	// System.String UnityEngine.AssetBundleRequest::m_Path
	String_t* ___m_Path_2;
	// System.Type UnityEngine.AssetBundleRequest::m_Type
	Type_t * ___m_Type_3;
};
