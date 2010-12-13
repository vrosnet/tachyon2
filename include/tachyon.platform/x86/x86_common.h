/* Copyright (c) 2010 by Markus Duft <mduft@gentoo.org>
 * This file is part of the 'tachyon' operating system. */

#pragma once

#include "asm/x86_common.h"

/* 
 * .--------------------------------.
 * | Low-level console related      |
 * '--------------------------------' 
 */

#define VRAM_LOCATION   0xB8000
#define KCON_WIDTH      80
#define KCON_HEIGHT     25
#define VRAM_SIZE       (KCON_WIDTH*KCON_HEIGHT*2)

/* 
 * .--------------------------------.
 * | C types for x86 and x86_64     |
 * '--------------------------------' 
 */

typedef signed      char        int8_t;
typedef signed      short       int16_t;
typedef signed      int         int32_t;
typedef signed      long long   int64_t;
typedef signed      long        ssize_t;

typedef unsigned    char        uint8_t;
typedef unsigned    short       uint16_t;
typedef unsigned    int         uint32_t;
typedef unsigned    long long   uint64_t;
typedef unsigned    long        size_t;

typedef intptr_t    intmax_t;
typedef uintptr_t   uintmax_t;
typedef intmax_t    off_t;

typedef struct {
    uintptr_t   cr4;
    uintptr_t   cr3;
    uintptr_t   cr2;
    uintptr_t   cr0;

    uintptr_t   rbp;
    uintptr_t   rsp;
    uintptr_t   rdi;
    uintptr_t   rsi;

    uintptr_t   rdx;
    uintptr_t   rcx;
    uintptr_t   rbx;
    uintptr_t   rax;

    uintptr_t   rfl;
    uintptr_t   rip;
} cpustate_t;

typedef struct {
    uintptr_t   r15;
    uintptr_t   r14;
    uintptr_t   r13;
    uintptr_t   r12;
    uintptr_t   r11;
    uintptr_t   r10;
    uintptr_t   r9;
    uintptr_t   r8;
} xcpustate_t;

#ifdef __cplusplus
extern "C" {
#endif

/* 
 * .--------------------------------.
 * | extern C functions             |
 * '--------------------------------' 
 */


#ifdef __cplusplus
} /* extern "C" */
#endif

