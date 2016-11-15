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

// System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
struct X509BasicConstraintsExtension_t2_49;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2_43;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor()
extern "C" void X509BasicConstraintsExtension__ctor_m2_220 (X509BasicConstraintsExtension_t2_49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509BasicConstraintsExtension__ctor_m2_221 (X509BasicConstraintsExtension_t2_49 * __this, AsnEncodedData_t2_43 * ___encodedBasicConstraints, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::.ctor(System.Boolean,System.Boolean,System.Int32,System.Boolean)
extern "C" void X509BasicConstraintsExtension__ctor_m2_222 (X509BasicConstraintsExtension_t2_49 * __this, bool ___certificateAuthority, bool ___hasPathLengthConstraint, int32_t ___pathLengthConstraint, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_CertificateAuthority()
extern "C" bool X509BasicConstraintsExtension_get_CertificateAuthority_m2_223 (X509BasicConstraintsExtension_t2_49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_HasPathLengthConstraint()
extern "C" bool X509BasicConstraintsExtension_get_HasPathLengthConstraint_m2_224 (X509BasicConstraintsExtension_t2_49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::get_PathLengthConstraint()
extern "C" int32_t X509BasicConstraintsExtension_get_PathLengthConstraint_m2_225 (X509BasicConstraintsExtension_t2_49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509BasicConstraintsExtension_CopyFrom_m2_226 (X509BasicConstraintsExtension_t2_49 * __this, AsnEncodedData_t2_43 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Decode(System.Byte[])
extern "C" int32_t X509BasicConstraintsExtension_Decode_m2_227 (X509BasicConstraintsExtension_t2_49 * __this, ByteU5BU5D_t1_70* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::Encode()
extern "C" ByteU5BU5D_t1_70* X509BasicConstraintsExtension_Encode_m2_228 (X509BasicConstraintsExtension_t2_49 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension::ToString(System.Boolean)
extern "C" String_t* X509BasicConstraintsExtension_ToString_m2_229 (X509BasicConstraintsExtension_t2_49 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
