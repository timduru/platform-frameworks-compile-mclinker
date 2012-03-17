//===- FileSystem.cpp -----------------------------------------------------===//
//
//                     The MCLinker Project
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
#include "mcld/Support/FileSystem.h"
#include "mcld/Support/Path.h"

#if defined(ANDROID)
#include <llvm/Config/config.h>
#endif

using namespace mcld::sys::fs;


//===--------------------------------------------------------------------===//
// SearchDirs

//===--------------------------------------------------------------------===//
// non-member functions

// Include the truly platform-specific parts.
#if defined(LLVM_ON_UNIX)
#include "Unix/FileSystem.inc"
#include "Unix/PathV3.inc"
#endif
#if defined(LLVM_ON_WIN32)
#include "Windows/FileSystem.inc"
#include "Windows/PathV3.inc"
#endif
