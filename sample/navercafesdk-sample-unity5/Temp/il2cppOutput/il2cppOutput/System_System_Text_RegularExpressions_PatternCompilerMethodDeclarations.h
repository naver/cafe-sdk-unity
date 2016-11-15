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

// System.Text.RegularExpressions.PatternCompiler
struct PatternCompiler_t2_108;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t2_93;
// System.Collections.BitArray
struct BitArray_t1_158;
// System.String
struct String_t;
// System.Text.RegularExpressions.LinkRef
struct LinkRef_t2_103;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Text_RegularExpressions_OpCode.h"
#include "System_System_Text_RegularExpressions_OpFlags.h"
#include "System_System_Text_RegularExpressions_Category.h"
#include "System_System_Text_RegularExpressions_Position.h"

// System.Void System.Text.RegularExpressions.PatternCompiler::.ctor()
extern "C" void PatternCompiler__ctor_m2_549 (PatternCompiler_t2_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Text.RegularExpressions.PatternCompiler::EncodeOp(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C" uint16_t PatternCompiler_EncodeOp_m2_550 (Object_t * __this /* static, unused */, uint16_t ___op, uint16_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.PatternCompiler::GetMachineFactory()
extern "C" Object_t * PatternCompiler_GetMachineFactory_m2_551 (PatternCompiler_t2_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFalse()
extern "C" void PatternCompiler_EmitFalse_m2_552 (PatternCompiler_t2_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTrue()
extern "C" void PatternCompiler_EmitTrue_m2_553 (PatternCompiler_t2_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCount(System.Int32)
extern "C" void PatternCompiler_EmitCount_m2_554 (PatternCompiler_t2_108 * __this, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCharacter(System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitCharacter_m2_555 (PatternCompiler_t2_108 * __this, uint16_t ___c, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitCategory_m2_556 (PatternCompiler_t2_108 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitNotCategory(System.Text.RegularExpressions.Category,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitNotCategory_m2_557 (PatternCompiler_t2_108 * __this, uint16_t ___cat, bool ___negate, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRange(System.Char,System.Char,System.Boolean,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitRange_m2_558 (PatternCompiler_t2_108 * __this, uint16_t ___lo, uint16_t ___hi, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSet(System.Char,System.Collections.BitArray,System.Boolean,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitSet_m2_559 (PatternCompiler_t2_108 * __this, uint16_t ___lo, BitArray_t1_158 * ___set, bool ___negate, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitString(System.String,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitString_m2_560 (PatternCompiler_t2_108 * __this, String_t* ___str, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitPosition(System.Text.RegularExpressions.Position)
extern "C" void PatternCompiler_EmitPosition_m2_561 (PatternCompiler_t2_108 * __this, uint16_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitOpen(System.Int32)
extern "C" void PatternCompiler_EmitOpen_m2_562 (PatternCompiler_t2_108 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitClose(System.Int32)
extern "C" void PatternCompiler_EmitClose_m2_563 (PatternCompiler_t2_108 * __this, int32_t ___gid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalanceStart(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitBalanceStart_m2_564 (PatternCompiler_t2_108 * __this, int32_t ___gid, int32_t ___balance, bool ___capture, LinkRef_t2_103 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBalance()
extern "C" void PatternCompiler_EmitBalance_m2_565 (PatternCompiler_t2_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitReference(System.Int32,System.Boolean,System.Boolean)
extern "C" void PatternCompiler_EmitReference_m2_566 (PatternCompiler_t2_108 * __this, int32_t ___gid, bool ___ignore, bool ___reverse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIfDefined(System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitIfDefined_m2_567 (PatternCompiler_t2_108 * __this, int32_t ___gid, LinkRef_t2_103 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitSub(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitSub_m2_568 (PatternCompiler_t2_108 * __this, LinkRef_t2_103 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitTest(System.Text.RegularExpressions.LinkRef,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitTest_m2_569 (PatternCompiler_t2_108 * __this, LinkRef_t2_103 * ___yes, LinkRef_t2_103 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranch(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitBranch_m2_570 (PatternCompiler_t2_108 * __this, LinkRef_t2_103 * ___next, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitJump(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitJump_m2_571 (PatternCompiler_t2_108 * __this, LinkRef_t2_103 * ___target, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitRepeat_m2_572 (PatternCompiler_t2_108 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t2_103 * ___until, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitUntil(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitUntil_m2_573 (PatternCompiler_t2_108 * __this, LinkRef_t2_103 * ___repeat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitFastRepeat(System.Int32,System.Int32,System.Boolean,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitFastRepeat_m2_574 (PatternCompiler_t2_108 * __this, int32_t ___min, int32_t ___max, bool ___lazy, LinkRef_t2_103 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitIn(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitIn_m2_575 (PatternCompiler_t2_108 * __this, LinkRef_t2_103 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAnchor(System.Boolean,System.Int32,System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitAnchor_m2_576 (PatternCompiler_t2_108 * __this, bool ___reverse, int32_t ___offset, LinkRef_t2_103 * ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitInfo(System.Int32,System.Int32,System.Int32)
extern "C" void PatternCompiler_EmitInfo_m2_577 (PatternCompiler_t2_108 * __this, int32_t ___count, int32_t ___min, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.LinkRef System.Text.RegularExpressions.PatternCompiler::NewLink()
extern "C" LinkRef_t2_103 * PatternCompiler_NewLink_m2_578 (PatternCompiler_t2_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::ResolveLink(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_ResolveLink_m2_579 (PatternCompiler_t2_108 * __this, LinkRef_t2_103 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitBranchEnd()
extern "C" void PatternCompiler_EmitBranchEnd_m2_580 (PatternCompiler_t2_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitAlternationEnd()
extern "C" void PatternCompiler_EmitAlternationEnd_m2_581 (PatternCompiler_t2_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.OpFlags System.Text.RegularExpressions.PatternCompiler::MakeFlags(System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" uint16_t PatternCompiler_MakeFlags_m2_582 (Object_t * __this /* static, unused */, bool ___negate, bool ___ignore, bool ___reverse, bool ___lazy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode)
extern "C" void PatternCompiler_Emit_m2_583 (PatternCompiler_t2_108 * __this, uint16_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.Text.RegularExpressions.OpCode,System.Text.RegularExpressions.OpFlags)
extern "C" void PatternCompiler_Emit_m2_584 (PatternCompiler_t2_108 * __this, uint16_t ___op, uint16_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::Emit(System.UInt16)
extern "C" void PatternCompiler_Emit_m2_585 (PatternCompiler_t2_108 * __this, uint16_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.PatternCompiler::get_CurrentAddress()
extern "C" int32_t PatternCompiler_get_CurrentAddress_m2_586 (PatternCompiler_t2_108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::BeginLink(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_BeginLink_m2_587 (PatternCompiler_t2_108 * __this, LinkRef_t2_103 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.PatternCompiler::EmitLink(System.Text.RegularExpressions.LinkRef)
extern "C" void PatternCompiler_EmitLink_m2_588 (PatternCompiler_t2_108 * __this, LinkRef_t2_103 * ___lref, const MethodInfo* method) IL2CPP_METHOD_ATTR;
