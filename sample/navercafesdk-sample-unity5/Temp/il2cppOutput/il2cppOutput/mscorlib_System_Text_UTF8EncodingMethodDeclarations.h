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

// System.Text.UTF8Encoding
struct UTF8Encoding_t1_653;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t1_631;
// System.Text.Decoder
struct Decoder_t1_219;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.UTF8Encoding::.ctor()
extern "C" void UTF8Encoding__ctor_m1_4351 (UTF8Encoding_t1_653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean)
extern "C" void UTF8Encoding__ctor_m1_4352 (UTF8Encoding_t1_653 * __this, bool ___encoderShouldEmitUTF8Identifier, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::.ctor(System.Boolean,System.Boolean)
extern "C" void UTF8Encoding__ctor_m1_4353 (UTF8Encoding_t1_653 * __this, bool ___encoderShouldEmitUTF8Identifier, bool ___throwOnInvalidBytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char[],System.Int32,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m1_4354 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___chars, int32_t ___index, int32_t ___count, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetByteCount(System.Char*,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetByteCount_m1_4355 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetByteCount_m1_4356 (UTF8Encoding_t1_653 * __this, CharU5BU5D_t1_16* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t UTF8Encoding_GetByteCount_m1_4357 (UTF8Encoding_t1_653 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetBytes_m1_4358 (Object_t * __this /* static, unused */, CharU5BU5D_t1_16* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1_70* ___bytes, int32_t ___byteIndex, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetBytes(System.Char*,System.Int32,System.Byte*,System.Int32,System.Char&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetBytes_m1_4359 (Object_t * __this /* static, unused */, uint16_t* ___chars, int32_t ___count, uint8_t* ___bytes, int32_t ___bcount, uint16_t* ___leftOver, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m1_4360 (UTF8Encoding_t1_653 * __this, CharU5BU5D_t1_16* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1_70* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m1_4361 (UTF8Encoding_t1_653 * __this, String_t* ___s, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t1_70* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t UTF8Encoding_GetBytes_m1_4362 (UTF8Encoding_t1_653 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte[],System.Int32,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m1_4363 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_70* ___bytes, int32_t ___index, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1_631 ** ___fallbackBuffer, ByteU5BU5D_t1_70** ___bufferArg, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetCharCount(System.Byte*,System.Int32,System.UInt32,System.UInt32,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetCharCount_m1_4364 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___count, uint32_t ___leftOverBits, uint32_t ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1_631 ** ___fallbackBuffer, ByteU5BU5D_t1_70** ___bufferArg, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32)
extern "C" int32_t UTF8Encoding_Fallback_m1_4365 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1_631 ** ___buffer, ByteU5BU5D_t1_70** ___bufferArg, uint8_t* ___bytes, int64_t ___index, uint32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.UTF8Encoding::Fallback(System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Byte*,System.Int64,System.UInt32,System.Char*,System.Int32&)
extern "C" void UTF8Encoding_Fallback_m1_4366 (Object_t * __this /* static, unused */, Object_t * ___provider, DecoderFallbackBuffer_t1_631 ** ___buffer, ByteU5BU5D_t1_70** ___bufferArg, uint8_t* ___bytes, int64_t ___byteIndex, uint32_t ___size, uint16_t* ___chars, int32_t* ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t UTF8Encoding_GetCharCount_m1_4367 (UTF8Encoding_t1_653 * __this, ByteU5BU5D_t1_70* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetChars_m1_4368 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_70* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1_16* ___chars, int32_t ___charIndex, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1_631 ** ___fallbackBuffer, ByteU5BU5D_t1_70** ___bufferArg, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::InternalGetChars(System.Byte*,System.Int32,System.Char*,System.Int32,System.UInt32&,System.UInt32&,System.Object,System.Text.DecoderFallbackBuffer&,System.Byte[]&,System.Boolean)
extern "C" int32_t UTF8Encoding_InternalGetChars_m1_4369 (Object_t * __this /* static, unused */, uint8_t* ___bytes, int32_t ___byteCount, uint16_t* ___chars, int32_t ___charCount, uint32_t* ___leftOverBits, uint32_t* ___leftOverCount, Object_t * ___provider, DecoderFallbackBuffer_t1_631 ** ___fallbackBuffer, ByteU5BU5D_t1_70** ___bufferArg, bool ___flush, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UTF8Encoding_GetChars_m1_4370 (UTF8Encoding_t1_653 * __this, ByteU5BU5D_t1_70* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t1_16* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxByteCount(System.Int32)
extern "C" int32_t UTF8Encoding_GetMaxByteCount_m1_4371 (UTF8Encoding_t1_653 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetMaxCharCount(System.Int32)
extern "C" int32_t UTF8Encoding_GetMaxCharCount_m1_4372 (UTF8Encoding_t1_653 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.UTF8Encoding::GetDecoder()
extern "C" Decoder_t1_219 * UTF8Encoding_GetDecoder_m1_4373 (UTF8Encoding_t1_653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Text.UTF8Encoding::GetPreamble()
extern "C" ByteU5BU5D_t1_70* UTF8Encoding_GetPreamble_m1_4374 (UTF8Encoding_t1_653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.UTF8Encoding::Equals(System.Object)
extern "C" bool UTF8Encoding_Equals_m1_4375 (UTF8Encoding_t1_653 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetHashCode()
extern "C" int32_t UTF8Encoding_GetHashCode_m1_4376 (UTF8Encoding_t1_653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UTF8Encoding::GetByteCount(System.String)
extern "C" int32_t UTF8Encoding_GetByteCount_m1_4377 (UTF8Encoding_t1_653 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.UTF8Encoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* UTF8Encoding_GetString_m1_4378 (UTF8Encoding_t1_653 * __this, ByteU5BU5D_t1_70* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
