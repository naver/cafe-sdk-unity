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

// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1_457;
// System.Type
struct Type_t;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t1_473;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Identity
struct Identity_t1_465;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type)
extern "C" void RealProxy__ctor_m1_3315 (RealProxy_t1_457 * __this, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.Runtime.Remoting.ClientIdentity)
extern "C" void RealProxy__ctor_m1_3316 (RealProxy_t1_457 * __this, Type_t * ___classToProxy, ClientIdentity_t1_473 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::.ctor(System.Type,System.IntPtr,System.Object)
extern "C" void RealProxy__ctor_m1_3317 (RealProxy_t1_457 * __this, Type_t * ___classToProxy, IntPtr_t ___stub, Object_t * ___stubData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::InternalGetProxyType(System.Object)
extern "C" Type_t * RealProxy_InternalGetProxyType_m1_3318 (Object_t * __this /* static, unused */, Object_t * ___transparentProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Proxies.RealProxy::GetProxiedType()
extern "C" Type_t * RealProxy_GetProxiedType_m1_3319 (RealProxy_t1_457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::get_ObjectIdentity()
extern "C" Identity_t1_465 * RealProxy_get_ObjectIdentity_m1_3320 (RealProxy_t1_457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::InternalGetTransparentProxy(System.String)
extern "C" Object_t * RealProxy_InternalGetTransparentProxy_m1_3321 (RealProxy_t1_457 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Proxies.RealProxy::GetTransparentProxy()
extern "C" Object_t * RealProxy_GetTransparentProxy_m1_3322 (RealProxy_t1_457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Proxies.RealProxy::SetTargetDomain(System.Int32)
extern "C" void RealProxy_SetTargetDomain_m1_3323 (RealProxy_t1_457 * __this, int32_t ___domainId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
