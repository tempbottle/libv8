#if V8_TARGET_ARCH_X64

// Copyright 2010 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if V8_TARGET_ARCH_X64

#include "src/assembler.h"
#include "src/frame-constants.h"
#include "src/x64/assembler-x64-inl.h"
#include "src/x64/assembler-x64.h"

#include "src/x64/frame-constants-x64.h"

namespace v8 {
namespace internal {

Register JavaScriptFrame::fp_register() { return rbp; }
Register JavaScriptFrame::context_register() { return rsi; }
Register JavaScriptFrame::constant_pool_pointer_register() { UNREACHABLE(); }

}  // namespace internal
}  // namespace v8

#endif  // V8_TARGET_ARCH_X64


#endif  // V8_TARGET_ARCH_X64