#pragma once

// Test these using #if AT_CUDNN_ENABLED(), not #ifdef, so that it's
// obvious if you forgot to include Config.h
//    c.f. https://stackoverflow.com/questions/33759787/generating-an-error-if-checked-boolean-macro-is-not-defined
//
// NB: This header MUST NOT be included from other headers; it should
// only be included from C++ files.

#define AT_CUDNN_ENABLED() 
#define AT_ROCM_ENABLED() 

#define NVCC_FLAGS_EXTRA ""
