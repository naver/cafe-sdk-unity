#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t1_70;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.Text.Encoding
struct Encoding_t1_218;
// System.Text.Decoder
struct Decoder_t1_219;
// System.IO.Stream
struct Stream_t1_217;
// System.Text.StringBuilder
struct StringBuilder_t1_144;
// System.IO.StreamReader
struct StreamReader_t1_250;

#include "mscorlib_System_IO_TextReader.h"

// System.IO.StreamReader
struct  StreamReader_t1_250  : public TextReader_t1_143
{
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t1_70* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t1_16* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t1_218 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t1_219 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t1_217 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t1_144 * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;
};
struct StreamReader_t1_250_StaticFields{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t1_250 * ___Null_12;
};
