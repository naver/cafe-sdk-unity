#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t2_57;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t2_58;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t2_59;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t2_47;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_535;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t2_60;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t2_61;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t2_53;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1_76;

#include "mscorlib_System_Object.h"
#include "System_System_Security_Cryptography_X509Certificates_StoreLo.h"

// System.Security.Cryptography.X509Certificates.X509Chain
struct  X509Chain_t2_56  : public Object_t
{
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Chain::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509Chain::elements
	X509ChainElementCollection_t2_57 * ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::policy
	X509ChainPolicy_t2_58 * ___policy_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::status
	X509ChainStatusU5BU5D_t2_59* ___status_3;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509Chain::max_path_length
	int32_t ___max_path_length_5;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Chain::working_issuer_name
	X500DistinguishedName_t2_47 * ___working_issuer_name_6;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Chain::working_public_key
	AsymmetricAlgorithm_t1_535 * ___working_public_key_7;
	// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509Chain::bce_restriction
	X509ChainElement_t2_60 * ___bce_restriction_8;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::roots
	X509Store_t2_61 * ___roots_9;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::cas
	X509Store_t2_61 * ___cas_10;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::collection
	X509Certificate2Collection_t2_53 * ___collection_11;
};
struct X509Chain_t2_56_StaticFields{
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::Empty
	X509ChainStatusU5BU5D_t2_59* ___Empty_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$mapB
	Dictionary_2_t1_76 * ___U3CU3Ef__switchU24mapB_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$mapC
	Dictionary_2_t1_76 * ___U3CU3Ef__switchU24mapC_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$mapD
	Dictionary_2_t1_76 * ___U3CU3Ef__switchU24mapD_14;
};
