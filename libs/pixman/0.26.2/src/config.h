/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Whether we have alarm() */
/* #undef HAVE_ALARM */

/* Define to 1 if you have the <dlfcn.h> header file. */
/* #undef HAVE_DLFCN_H */

/* Whether we have feenableexcept() */
/* #undef HAVE_FEENABLEEXCEPT */

/* Define to 1 if we have <fenv.h> */
/* #undef HAVE_FENV_H */

/* Define to 1 if you have the `getisax' function. */
/* #undef HAVE_GETISAX */

/* Whether we have getpagesize() */
/* #undef HAVE_GETPAGESIZE */

/* Whether we have gettimeofday() */
/* #undef HAVE_GETTIMEOFDAY */

/* Define to 1 if you have the <inttypes.h> header file. */
#ifndef _MSC_VER
#define HAVE_INTTYPES_H 1
#endif

/* Define to 1 if you have the `pixman-1' library (-lpixman-1). */
/* #undef HAVE_LIBPIXMAN_1 */

/* Whether we have libpng */
#define HAVE_LIBPNG 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Whether we have mmap() */
/* #undef HAVE_MMAP */

/* Whether we have mprotect() */
/* #undef HAVE_MPROTECT */

/* Whether we have posix_memalign() */
/* #undef HAVE_POSIX_MEMALIGN */

/* Whether pthread_setspecific() is supported */
/* #undef HAVE_PTHREAD_SETSPECIFIC */

/* Whether we have sigaction() */
/* #undef HAVE_SIGACTION */

/* Define to 1 if you have the <stdint.h> header file. */
#if (!defined(_MSC_VER) || (_MSC_VER >= 1600))
#define HAVE_STDINT_H 1
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#ifndef _MSC_VER
#define HAVE_STRINGS_H 1
#endif

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H

/* Define to 1 if we have <sys/mman.h> */
/* #undef HAVE_SYS_MMAN_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#ifndef _MSC_VER
#define HAVE_UNISTD_H 1
#endif

/* Name of package */
#define PACKAGE "pixman"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "pixman@lists.freedesktop.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "pixman"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "pixman 0.26.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "pixman"

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.26.2"

/* enable TIMER_BEGIN/TIMER_END macros */
/* #undef PIXMAN_TIMERS */

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Whether the tool chain supports __attribute__((constructor)) */
/* #undef TOOLCHAIN_SUPPORTS_ATTRIBUTE_CONSTRUCTOR */

/* Whether the tool chain supports __thread */
/* #undef TOOLCHAIN_SUPPORTS__THREAD */

/* use ARM IWMMXT compiler intrinsics */
/* #undef USE_ARM_IWMMXT */

/* use ARM NEON assembly optimizations */
/* #undef USE_ARM_NEON */

/* use ARM SIMD assembly optimizations */
/* #undef USE_ARM_SIMD */

/* use GNU-style inline assembler */
/* #undef USE_GCC_INLINE_ASM */

/* use OpenMP in the test suite */
/* #undef USE_OPENMP */

/* use SSE2 compiler intrinsics */
#if !defined(_M_ARM)
#define USE_SSE2 1
#endif
/* use VMX compiler intrinsics */
/* #undef USE_VMX */

/* use x86 MMX compiler intrinsics */
#ifdef _M_IX86
#define USE_X86_MMX 1
#endif

/* Version number of package */
#define VERSION "0.26.2"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#ifdef _MSC_VER
#define inline __inline
#define __inline__ __inline
#endif
#endif
