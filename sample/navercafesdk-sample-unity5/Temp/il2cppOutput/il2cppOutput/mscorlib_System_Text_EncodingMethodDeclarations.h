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

// System.Text.Encoding
struct Encoding_t1_218;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t1_630;
// System.Text.EncoderFallback
struct EncoderFallback_t1_639;
// System.Object
struct Object_t;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.Text.Decoder
struct Decoder_t1_219;
// System.Object[]
struct ObjectU5BU5D_t1_156;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.Encoding::.ctor()
extern "C" void Encoding__ctor_m1_4217 (Encoding_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.ctor(System.Int32)
extern "C" void Encoding__ctor_m1_4218 (Encoding_t1_218 * __this, int32_t ___codePage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::.cctor()
extern "C" void Encoding__cctor_m1_4219 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::_(System.String)
extern "C" String_t* Encoding___m1_4220 (Object_t * __this /* static, unused */, String_t* ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::get_IsReadOnly()
extern "C" bool Encoding_get_IsReadOnly_m1_4221 (Encoding_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.DecoderFallback System.Text.Encoding::get_DecoderFallback()
extern "C" DecoderFallback_t1_630 * Encoding_get_DecoderFallback_m1_4222 (Encoding_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::set_DecoderFallback(System.Text.DecoderFallback)
extern "C" void Encoding_set_DecoderFallback_m1_4223 (Encoding_t1_218 * __this, DecoderFallback_t1_630 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.EncoderFallback System.Text.Encoding::get_EncoderFallback()
extern "C" EncoderFallback_t1_639 * Encoding_get_EncoderFallback_m1_4224 (Encoding_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.Encoding::SetFallbackInternal(System.Text.EncoderFallback,System.Text.DecoderFallback)
extern "C" void Encoding_SetFallbackInternal_m1_4225 (Encoding_t1_218 * __this, EncoderFallback_t1_639 * ___e, DecoderFallback_t1_630 * ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.Encoding::Equals(System.Object)
extern "C" bool Encoding_Equals_m1_4226 (Encoding_t1_218 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.String)
extern "C" int32_t Encoding_GetByteCount_m1_4227 (Encoding_t1_218 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char[])
extern "C" int32_t Encoding_GetByteCount_m1_4228 (Encoding_t1_218 * __this, CharU5BU5D_t1_16* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t Encoding_GetBytes_m1_4229 (Encoding_t1_218 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1_70* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.String)
extern "C" ByteU5BU5D_t1_70* Encoding_GetBytes_m1_4230 (Encoding_t1_218 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t1_70* Encoding_GetBytes_m1_4231 (Encoding_t1_218 * __this, CharU5BU5D_t1_16* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetBytes(System.Char[])
extern "C" ByteU5BU5D_t1_70* Encoding_GetBytes_m1_4232 (Encoding_t1_218 * __this, CharU5BU5D_t1_16* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Text.Encoding::GetChars(System.Byte[],System.Int32,System.Int32)
extern "C" CharU5BU5D_t1_16* Encoding_GetChars_m1_4233 (Encoding_t1_218 * __this, ByteU5BU5D_t1_70* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.Encoding::GetDecoder()
extern "C" Decoder_t1_219 * Encoding_GetDecoder_m1_4234 (Encoding_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::InvokeI18N(System.String,System.Object[])
extern "C" Object_t * Encoding_InvokeI18N_m1_4235 (Object_t * __this /* static, unused */, String_t* ___name, ObjectU5BU5D_t1_156* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.Int32)
extern "C" Encoding_t1_218 * Encoding_GetEncoding_m1_4236 (Object_t * __this /* static, unused */, int32_t ___codepage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Text.Encoding::Clone()
extern "C" Object_t * Encoding_Clone_m1_4237 (Encoding_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::GetEncoding(System.String)
extern "C" Encoding_t1_218 * Encoding_GetEncoding_m1_4238 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetHashCode()
extern "C" int32_t Encoding_GetHashCode_m1_4239 (Encoding_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.Encoding::GetPreamble()
extern "C" ByteU5BU5D_t1_70* Encoding_GetPreamble_m1_4240 (Encoding_t1_218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* Encoding_GetString_m1_4241 (Encoding_t1_218 * __this, ByteU5BU5D_t1_70* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::GetString(System.Byte[])
extern "C" String_t* Encoding_GetString_m1_4242 (Encoding_t1_218 * __this, ByteU5BU5D_t1_70* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
extern "C" Encoding_t1_218 * Encoding_get_ASCII_m1_4243 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
extern "C" Encoding_t1_218 * Encoding_get_BigEndianUnicode_m1_4244 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.Encoding::InternalCodePage(System.Int32&)
extern "C" String_t* Encoding_InternalCodePage_m1_4245 (Object_t * __this /* static, unused */, int32_t* ___code_page, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Default()
extern "C" Encoding_t1_218 * Encoding_get_Default_m1_4246 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_ISOLatin1()
extern "C" Encoding_t1_218 * Encoding_get_ISOLatin1_m1_4247 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF7()
extern "C" Encoding_t1_218 * Encoding_get_UTF7_m1_4248 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
extern "C" Encoding_t1_218 * Encoding_get_UTF8_m1_4249 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8Unmarked()
extern "C" Encoding_t1_218 * Encoding_get_UTF8Unmarked_m1_4250 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF8UnmarkedUnsafe()
extern "C" Encoding_t1_218 * Encoding_get_UTF8UnmarkedUnsafe_m1_4251 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_Unicode()
extern "C" Encoding_t1_218 * Encoding_get_Unicode_m1_4252 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_UTF32()
extern "C" Encoding_t1_218 * Encoding_get_UTF32_m1_4253 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Text.Encoding::get_BigEndianUTF32()
extern "C" Encoding_t1_218 * Encoding_get_BigEndianUTF32_m1_4254 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t Encoding_GetByteCount_m1_4255 (Encoding_t1_218 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t Encoding_GetBytes_m1_4256 (Encoding_t1_218 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
