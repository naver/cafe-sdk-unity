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

// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3_78;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_533;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2_31;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m3_875 (CertificateSelectionCallback_t3_78 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1_533 * CertificateSelectionCallback_Invoke_m3_876 (CertificateSelectionCallback_t3_78 * __this, X509CertificateCollection_t2_31 * ___clientCertificates, X509Certificate_t1_533 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_31 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" X509Certificate_t1_533 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t3_78(Il2CppObject* delegate, X509CertificateCollection_t2_31 * ___clientCertificates, X509Certificate_t1_533 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_31 * ___serverRequestedCertificates);
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m3_877 (CertificateSelectionCallback_t3_78 * __this, X509CertificateCollection_t2_31 * ___clientCertificates, X509Certificate_t1_533 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_31 * ___serverRequestedCertificates, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t1_533 * CertificateSelectionCallback_EndInvoke_m3_878 (CertificateSelectionCallback_t3_78 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
