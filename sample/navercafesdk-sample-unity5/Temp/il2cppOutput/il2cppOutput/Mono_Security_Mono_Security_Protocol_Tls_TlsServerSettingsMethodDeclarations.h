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

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t3_70;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3_10;
// System.Security.Cryptography.RSA
struct RSA_t1_117;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t3_97;
// System.String[]
struct StringU5BU5D_t1_198;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
extern "C" void TlsServerSettings__ctor_m3_755 (TlsServerSettings_t3_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
extern "C" bool TlsServerSettings_get_ServerKeyExchange_m3_756 (TlsServerSettings_t3_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
extern "C" void TlsServerSettings_set_ServerKeyExchange_m3_757 (TlsServerSettings_t3_70 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
extern "C" X509CertificateCollection_t3_10 * TlsServerSettings_get_Certificates_m3_758 (TlsServerSettings_t3_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void TlsServerSettings_set_Certificates_m3_759 (TlsServerSettings_t3_70 * __this, X509CertificateCollection_t3_10 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
extern "C" RSA_t1_117 * TlsServerSettings_get_CertificateRSA_m3_760 (TlsServerSettings_t3_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
extern "C" RSAParameters_t1_580  TlsServerSettings_get_RsaParameters_m3_761 (TlsServerSettings_t3_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
extern "C" void TlsServerSettings_set_RsaParameters_m3_762 (TlsServerSettings_t3_70 * __this, RSAParameters_t1_580  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
extern "C" void TlsServerSettings_set_SignedParams_m3_763 (TlsServerSettings_t3_70 * __this, ByteU5BU5D_t1_70* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
extern "C" bool TlsServerSettings_get_CertificateRequest_m3_764 (TlsServerSettings_t3_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
extern "C" void TlsServerSettings_set_CertificateRequest_m3_765 (TlsServerSettings_t3_70 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
extern "C" void TlsServerSettings_set_CertificateTypes_m3_766 (TlsServerSettings_t3_70 * __this, ClientCertificateTypeU5BU5D_t3_97* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
extern "C" void TlsServerSettings_set_DistinguisedNames_m3_767 (TlsServerSettings_t3_70 * __this, StringU5BU5D_t1_198* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
extern "C" void TlsServerSettings_UpdateCertificateRSA_m3_768 (TlsServerSettings_t3_70 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
