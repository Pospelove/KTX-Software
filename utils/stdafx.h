// Copyright 2010-2020 The Khronos Group Inc.
// SPDX-License-Identifier: Apache-2.0

// stdafx.h

#pragma once

#define _CRT_SECURE_NO_WARNINGS // For _WIN32. Must be before <stdio.h>.
#include <assert.h>
#include <stdio.h>

#ifdef UNICODE
#undef UNICODE
#endif

#if WIN32
  #include <io.h>
  #if _MSC_VER < 1900
    #define snprintf _snprintf
  #endif
#endif

#if 0
  #include <io.h>
  #include <tchar.h>
  #if _MSC_VER < 1900
    #define snprintf _snprintf
  #endif
#else
  #ifndef WIN32
    #include <unistd.h>
  #endif

  #define _setmode(x, y) 0
  #define _tmain main
  #define _TCHAR char
  #define _tcsncmp strncmp
  #define _tcscmp strcmp
  #define _tgetenv getenv
  #define _tcscpy strcpy
  #define _tcsncpy strncpy
  #define _tcsnpcpy strnpcpy
  #define _stscanf sscanf
  #define _tcslen strlen
  #define _tcscat strcat
  #define _tcsrchr strrchr
  #define _tcschr strchr
  #define _tfopen fopen
  #define _trename rename
  #define _tunlink unlink
  #define _T(x) x
  #define _tfopen_s fopen_s
  #define _tmktemp_s _mktemp_s
#endif
#include <fcntl.h>
#include <errno.h>
#include <string.h>
