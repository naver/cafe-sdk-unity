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

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1_483;
// System.Collections.ArrayList
struct ArrayList_t1_112;
// System.Collections.Hashtable
struct Hashtable_t1_171;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m1_3435 (ChannelData_t1_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t1_112 * ChannelData_get_ServerProviders_m1_3436 (ChannelData_t1_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t1_112 * ChannelData_get_ClientProviders_m1_3437 (ChannelData_t1_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t1_171 * ChannelData_get_CustomProperties_m1_3438 (ChannelData_t1_483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m1_3439 (ChannelData_t1_483 * __this, ChannelData_t1_483 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
