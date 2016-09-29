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

// Mono.Security.Protocol.Tls.HttpsClientStream
struct HttpsClientStream_t4_77;
// System.IO.Stream
struct Stream_t1_217;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3_33;
// System.Net.HttpWebRequest
struct HttpWebRequest_t3_32;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_535;
// System.Int32[]
struct Int32U5BU5D_t1_159;
// System.String
struct String_t;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_537;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.HttpsClientStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Net.HttpWebRequest,System.Byte[])
extern "C" void HttpsClientStream__ctor_m4_552 (HttpsClientStream_t4_77 * __this, Stream_t1_217 * ___stream, X509CertificateCollection_t3_33 * ___clientCertificates, HttpWebRequest_t3_32 * ___request, ByteU5BU5D_t1_70* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::get_TrustFailure()
extern "C" bool HttpsClientStream_get_TrustFailure_m4_553 (HttpsClientStream_t4_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.HttpsClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool HttpsClientStream_RaiseServerCertificateValidation_m4_554 (HttpsClientStream_t4_77 * __this, X509Certificate_t1_535 * ___certificate, Int32U5BU5D_t1_159* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__0(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1_535 * HttpsClientStream_U3CHttpsClientStreamU3Em__0_m4_555 (Object_t * __this /* static, unused */, X509CertificateCollection_t3_33 * ___clientCerts, X509Certificate_t1_535 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t3_33 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.HttpsClientStream::<HttpsClientStream>m__1(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_537 * HttpsClientStream_U3CHttpsClientStreamU3Em__1_m4_556 (Object_t * __this /* static, unused */, X509Certificate_t1_535 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
