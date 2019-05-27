/* Provide Declarations */
#include <stdarg.h>
#include <setjmp.h>
#include <limits.h>
#ifdef NEED_CBEAPINT
#include <autopilot_cbe.h>
#else
#define aesl_fopen fopen
#define aesl_freopen freopen
#define aesl_tmpfile tmpfile
#endif
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#ifdef __STRICT_ANSI__
#define inline __inline__
#define typeof __typeof__ 
#endif
#define __isoc99_fscanf fscanf
#define __isoc99_sscanf sscanf
#undef ferror
#undef feof
/* get a declaration for alloca */
#if defined(__CYGWIN__) || defined(__MINGW32__)
#define  alloca(x) __builtin_alloca((x))
#define _alloca(x) __builtin_alloca((x))
#elif defined(__APPLE__)
extern void *__builtin_alloca(unsigned long);
#define alloca(x) __builtin_alloca(x)
#define longjmp _longjmp
#define setjmp _setjmp
#elif defined(__sun__)
#if defined(__sparcv9)
extern void *__builtin_alloca(unsigned long);
#else
extern void *__builtin_alloca(unsigned int);
#endif
#define alloca(x) __builtin_alloca(x)
#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__DragonFly__) || defined(__arm__)
#define alloca(x) __builtin_alloca(x)
#elif defined(_MSC_VER)
#define inline _inline
#define alloca(x) _alloca(x)
#else
#include <alloca.h>
#endif

#ifndef __GNUC__  /* Can only support "linkonce" vars with GCC */
#define __attribute__(X)
#endif

#if defined(__GNUC__) && defined(__APPLE_CC__)
#define __EXTERNAL_WEAK__ __attribute__((weak_import))
#elif defined(__GNUC__)
#define __EXTERNAL_WEAK__ __attribute__((weak))
#else
#define __EXTERNAL_WEAK__
#endif

#if defined(__GNUC__) && (defined(__APPLE_CC__) || defined(__CYGWIN__) || defined(__MINGW32__))
#define __ATTRIBUTE_WEAK__
#elif defined(__GNUC__)
#define __ATTRIBUTE_WEAK__ __attribute__((weak))
#else
#define __ATTRIBUTE_WEAK__
#endif

#if defined(__GNUC__)
#define __HIDDEN__ __attribute__((visibility("hidden")))
#endif

#ifdef __GNUC__
#define LLVM_NAN(NanStr)   __builtin_nan(NanStr)   /* Double */
#define LLVM_NANF(NanStr)  __builtin_nanf(NanStr)  /* Float */
#define LLVM_NANS(NanStr)  __builtin_nans(NanStr)  /* Double */
#define LLVM_NANSF(NanStr) __builtin_nansf(NanStr) /* Float */
#define LLVM_INF           __builtin_inf()         /* Double */
#define LLVM_INFF          __builtin_inff()        /* Float */
#define LLVM_PREFETCH(addr,rw,locality) __builtin_prefetch(addr,rw,locality)
#define __ATTRIBUTE_CTOR__ __attribute__((constructor))
#define __ATTRIBUTE_DTOR__ __attribute__((destructor))
#define LLVM_ASM           __asm__
#else
#define LLVM_NAN(NanStr)   ((double)0.0)           /* Double */
#define LLVM_NANF(NanStr)  0.0F                    /* Float */
#define LLVM_NANS(NanStr)  ((double)0.0)           /* Double */
#define LLVM_NANSF(NanStr) 0.0F                    /* Float */
#define LLVM_INF           ((double)0.0)           /* Double */
#define LLVM_INFF          0.0F                    /* Float */
#define LLVM_PREFETCH(addr,rw,locality)            /* PREFETCH */
#define __ATTRIBUTE_CTOR__
#define __ATTRIBUTE_DTOR__
#define LLVM_ASM(X)
#endif

#if __GNUC__ < 4 /* Old GCC's, or compilers not GCC */ 
#define __builtin_stack_save() 0   /* not implemented */
#define __builtin_stack_restore(X) /* noop */
#endif

#if __GNUC__ && __LP64__ /* 128-bit integer types */
typedef int __attribute__((mode(TI))) llvmInt128;
typedef unsigned __attribute__((mode(TI))) llvmUInt128;
#endif

#define CODE_FOR_MAIN() /* Any target-specific code for main()*/

#ifndef __cplusplus
typedef unsigned char bool;
#endif


/* Support for floating point constants */
typedef unsigned long long ConstantDoubleTy;
typedef unsigned int        ConstantFloatTy;
typedef struct { unsigned long long f1; unsigned short f2; unsigned short pad[3]; } ConstantFP80Ty;
typedef struct { unsigned long long f1; unsigned long long f2; } ConstantFP128Ty;


/* Global Declarations */
/* Helper union for bitcasts */
typedef union {
  unsigned int Int32;
  unsigned long long Int64;
  float Float;
  double Double;
} llvmBitCastUnion;

/* Function Declarations */
double fmod(double, double);
float fmodf(float, float);
long double fmodl(long double, long double);
double jacobi_HLS(signed int (*llvm_cbe_J)[4], signed int *llvm_cbe_b, signed int llvm_cbe_n, signed int llvm_cbe_iter, signed int *llvm_cbe_x);


/* Function Bodies */
static inline int llvm_fcmp_ord(double X, double Y) { return X == X && Y == Y; }
static inline int llvm_fcmp_uno(double X, double Y) { return X != X || Y != Y; }
static inline int llvm_fcmp_ueq(double X, double Y) { return X == Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_une(double X, double Y) { return X != Y; }
static inline int llvm_fcmp_ult(double X, double Y) { return X <  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ugt(double X, double Y) { return X >  Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_ule(double X, double Y) { return X <= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_uge(double X, double Y) { return X >= Y || llvm_fcmp_uno(X, Y); }
static inline int llvm_fcmp_oeq(double X, double Y) { return X == Y ; }
static inline int llvm_fcmp_one(double X, double Y) { return X != Y && llvm_fcmp_ord(X, Y); }
static inline int llvm_fcmp_olt(double X, double Y) { return X <  Y ; }
static inline int llvm_fcmp_ogt(double X, double Y) { return X >  Y ; }
static inline int llvm_fcmp_ole(double X, double Y) { return X <= Y ; }
static inline int llvm_fcmp_oge(double X, double Y) { return X >= Y ; }

double jacobi_HLS(signed int (*llvm_cbe_J)[4], signed int *llvm_cbe_b, signed int llvm_cbe_n, signed int llvm_cbe_iter, signed int *llvm_cbe_x) {
  static  unsigned long long aesl_llvm_cbe_x_prev_count = 0;
  signed int llvm_cbe_x_prev[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_x_new_count = 0;
  signed int llvm_cbe_x_new[16];    /* Address-exposed local */
  static  unsigned long long aesl_llvm_cbe_1_count = 0;
  static  unsigned long long aesl_llvm_cbe_2_count = 0;
  static  unsigned long long aesl_llvm_cbe_3_count = 0;
  static  unsigned long long aesl_llvm_cbe_4_count = 0;
  static  unsigned long long aesl_llvm_cbe_5_count = 0;
  static  unsigned long long aesl_llvm_cbe_6_count = 0;
  static  unsigned long long aesl_llvm_cbe_7_count = 0;
  static  unsigned long long aesl_llvm_cbe_8_count = 0;
  static  unsigned long long aesl_llvm_cbe_9_count = 0;
  static  unsigned long long aesl_llvm_cbe_10_count = 0;
  static  unsigned long long aesl_llvm_cbe_11_count = 0;
  static  unsigned long long aesl_llvm_cbe_12_count = 0;
  static  unsigned long long aesl_llvm_cbe_13_count = 0;
  static  unsigned long long aesl_llvm_cbe_14_count = 0;
  static  unsigned long long aesl_llvm_cbe_15_count = 0;
  static  unsigned long long aesl_llvm_cbe_16_count = 0;
  static  unsigned long long aesl_llvm_cbe_17_count = 0;
  static  unsigned long long aesl_llvm_cbe_18_count = 0;
  static  unsigned long long aesl_llvm_cbe_19_count = 0;
  static  unsigned long long aesl_llvm_cbe_20_count = 0;
  signed int *llvm_cbe_tmp__1;
  static  unsigned long long aesl_llvm_cbe_21_count = 0;
  static  unsigned long long aesl_llvm_cbe_22_count = 0;
  signed int *llvm_cbe_tmp__2;
  static  unsigned long long aesl_llvm_cbe_23_count = 0;
  static  unsigned long long aesl_llvm_cbe_24_count = 0;
  static  unsigned long long aesl_llvm_cbe_25_count = 0;
  static  unsigned long long aesl_llvm_cbe_26_count = 0;
  static  unsigned long long aesl_llvm_cbe_27_count = 0;
  static  unsigned long long aesl_llvm_cbe_28_count = 0;
  static  unsigned long long aesl_llvm_cbe_29_count = 0;
  signed int *llvm_cbe_tmp__3;
  static  unsigned long long aesl_llvm_cbe_30_count = 0;
  static  unsigned long long aesl_llvm_cbe_31_count = 0;
  signed int *llvm_cbe_tmp__4;
  static  unsigned long long aesl_llvm_cbe_32_count = 0;
  static  unsigned long long aesl_llvm_cbe_33_count = 0;
  static  unsigned long long aesl_llvm_cbe_34_count = 0;
  static  unsigned long long aesl_llvm_cbe_35_count = 0;
  static  unsigned long long aesl_llvm_cbe_36_count = 0;
  static  unsigned long long aesl_llvm_cbe_37_count = 0;
  static  unsigned long long aesl_llvm_cbe_38_count = 0;
  signed int *llvm_cbe_tmp__5;
  static  unsigned long long aesl_llvm_cbe_39_count = 0;
  static  unsigned long long aesl_llvm_cbe_40_count = 0;
  signed int *llvm_cbe_tmp__6;
  static  unsigned long long aesl_llvm_cbe_41_count = 0;
  static  unsigned long long aesl_llvm_cbe_42_count = 0;
  static  unsigned long long aesl_llvm_cbe_43_count = 0;
  static  unsigned long long aesl_llvm_cbe_44_count = 0;
  static  unsigned long long aesl_llvm_cbe_45_count = 0;
  static  unsigned long long aesl_llvm_cbe_46_count = 0;
  static  unsigned long long aesl_llvm_cbe_47_count = 0;
  signed int *llvm_cbe_tmp__7;
  static  unsigned long long aesl_llvm_cbe_48_count = 0;
  static  unsigned long long aesl_llvm_cbe_49_count = 0;
  signed int *llvm_cbe_tmp__8;
  static  unsigned long long aesl_llvm_cbe_50_count = 0;
  static  unsigned long long aesl_llvm_cbe_51_count = 0;
  static  unsigned long long aesl_llvm_cbe_52_count = 0;
  static  unsigned long long aesl_llvm_cbe_53_count = 0;
  static  unsigned long long aesl_llvm_cbe_54_count = 0;
  static  unsigned long long aesl_llvm_cbe_55_count = 0;
  static  unsigned long long aesl_llvm_cbe_56_count = 0;
  signed int *llvm_cbe_tmp__9;
  static  unsigned long long aesl_llvm_cbe_57_count = 0;
  static  unsigned long long aesl_llvm_cbe_58_count = 0;
  signed int *llvm_cbe_tmp__10;
  static  unsigned long long aesl_llvm_cbe_59_count = 0;
  static  unsigned long long aesl_llvm_cbe_60_count = 0;
  static  unsigned long long aesl_llvm_cbe_61_count = 0;
  static  unsigned long long aesl_llvm_cbe_62_count = 0;
  static  unsigned long long aesl_llvm_cbe_63_count = 0;
  static  unsigned long long aesl_llvm_cbe_64_count = 0;
  static  unsigned long long aesl_llvm_cbe_65_count = 0;
  signed int *llvm_cbe_tmp__11;
  static  unsigned long long aesl_llvm_cbe_66_count = 0;
  static  unsigned long long aesl_llvm_cbe_67_count = 0;
  signed int *llvm_cbe_tmp__12;
  static  unsigned long long aesl_llvm_cbe_68_count = 0;
  static  unsigned long long aesl_llvm_cbe_69_count = 0;
  static  unsigned long long aesl_llvm_cbe_70_count = 0;
  static  unsigned long long aesl_llvm_cbe_71_count = 0;
  static  unsigned long long aesl_llvm_cbe_72_count = 0;
  static  unsigned long long aesl_llvm_cbe_73_count = 0;
  static  unsigned long long aesl_llvm_cbe_74_count = 0;
  signed int *llvm_cbe_tmp__13;
  static  unsigned long long aesl_llvm_cbe_75_count = 0;
  static  unsigned long long aesl_llvm_cbe_76_count = 0;
  signed int *llvm_cbe_tmp__14;
  static  unsigned long long aesl_llvm_cbe_77_count = 0;
  static  unsigned long long aesl_llvm_cbe_78_count = 0;
  static  unsigned long long aesl_llvm_cbe_79_count = 0;
  static  unsigned long long aesl_llvm_cbe_80_count = 0;
  static  unsigned long long aesl_llvm_cbe_81_count = 0;
  static  unsigned long long aesl_llvm_cbe_82_count = 0;
  static  unsigned long long aesl_llvm_cbe_83_count = 0;
  signed int *llvm_cbe_tmp__15;
  static  unsigned long long aesl_llvm_cbe_84_count = 0;
  static  unsigned long long aesl_llvm_cbe_85_count = 0;
  signed int *llvm_cbe_tmp__16;
  static  unsigned long long aesl_llvm_cbe_86_count = 0;
  static  unsigned long long aesl_llvm_cbe_87_count = 0;
  static  unsigned long long aesl_llvm_cbe_88_count = 0;
  static  unsigned long long aesl_llvm_cbe_89_count = 0;
  static  unsigned long long aesl_llvm_cbe_90_count = 0;
  static  unsigned long long aesl_llvm_cbe_91_count = 0;
  static  unsigned long long aesl_llvm_cbe_92_count = 0;
  signed int *llvm_cbe_tmp__17;
  static  unsigned long long aesl_llvm_cbe_93_count = 0;
  static  unsigned long long aesl_llvm_cbe_94_count = 0;
  signed int *llvm_cbe_tmp__18;
  static  unsigned long long aesl_llvm_cbe_95_count = 0;
  static  unsigned long long aesl_llvm_cbe_96_count = 0;
  static  unsigned long long aesl_llvm_cbe_97_count = 0;
  static  unsigned long long aesl_llvm_cbe_98_count = 0;
  static  unsigned long long aesl_llvm_cbe_99_count = 0;
  static  unsigned long long aesl_llvm_cbe_100_count = 0;
  static  unsigned long long aesl_llvm_cbe_101_count = 0;
  signed int *llvm_cbe_tmp__19;
  static  unsigned long long aesl_llvm_cbe_102_count = 0;
  static  unsigned long long aesl_llvm_cbe_103_count = 0;
  signed int *llvm_cbe_tmp__20;
  static  unsigned long long aesl_llvm_cbe_104_count = 0;
  static  unsigned long long aesl_llvm_cbe_105_count = 0;
  static  unsigned long long aesl_llvm_cbe_106_count = 0;
  static  unsigned long long aesl_llvm_cbe_107_count = 0;
  static  unsigned long long aesl_llvm_cbe_108_count = 0;
  static  unsigned long long aesl_llvm_cbe_109_count = 0;
  static  unsigned long long aesl_llvm_cbe_110_count = 0;
  signed int *llvm_cbe_tmp__21;
  static  unsigned long long aesl_llvm_cbe_111_count = 0;
  static  unsigned long long aesl_llvm_cbe_112_count = 0;
  signed int *llvm_cbe_tmp__22;
  static  unsigned long long aesl_llvm_cbe_113_count = 0;
  static  unsigned long long aesl_llvm_cbe_114_count = 0;
  static  unsigned long long aesl_llvm_cbe_115_count = 0;
  static  unsigned long long aesl_llvm_cbe_116_count = 0;
  static  unsigned long long aesl_llvm_cbe_117_count = 0;
  static  unsigned long long aesl_llvm_cbe_118_count = 0;
  static  unsigned long long aesl_llvm_cbe_119_count = 0;
  signed int *llvm_cbe_tmp__23;
  static  unsigned long long aesl_llvm_cbe_120_count = 0;
  static  unsigned long long aesl_llvm_cbe_121_count = 0;
  signed int *llvm_cbe_tmp__24;
  static  unsigned long long aesl_llvm_cbe_122_count = 0;
  static  unsigned long long aesl_llvm_cbe_123_count = 0;
  static  unsigned long long aesl_llvm_cbe_124_count = 0;
  static  unsigned long long aesl_llvm_cbe_125_count = 0;
  static  unsigned long long aesl_llvm_cbe_126_count = 0;
  static  unsigned long long aesl_llvm_cbe_127_count = 0;
  static  unsigned long long aesl_llvm_cbe_128_count = 0;
  signed int *llvm_cbe_tmp__25;
  static  unsigned long long aesl_llvm_cbe_129_count = 0;
  static  unsigned long long aesl_llvm_cbe_130_count = 0;
  signed int *llvm_cbe_tmp__26;
  static  unsigned long long aesl_llvm_cbe_131_count = 0;
  static  unsigned long long aesl_llvm_cbe_132_count = 0;
  static  unsigned long long aesl_llvm_cbe_133_count = 0;
  static  unsigned long long aesl_llvm_cbe_134_count = 0;
  static  unsigned long long aesl_llvm_cbe_135_count = 0;
  static  unsigned long long aesl_llvm_cbe_136_count = 0;
  static  unsigned long long aesl_llvm_cbe_137_count = 0;
  signed int *llvm_cbe_tmp__27;
  static  unsigned long long aesl_llvm_cbe_138_count = 0;
  static  unsigned long long aesl_llvm_cbe_139_count = 0;
  signed int *llvm_cbe_tmp__28;
  static  unsigned long long aesl_llvm_cbe_140_count = 0;
  static  unsigned long long aesl_llvm_cbe_141_count = 0;
  static  unsigned long long aesl_llvm_cbe_142_count = 0;
  static  unsigned long long aesl_llvm_cbe_143_count = 0;
  static  unsigned long long aesl_llvm_cbe_144_count = 0;
  static  unsigned long long aesl_llvm_cbe_145_count = 0;
  static  unsigned long long aesl_llvm_cbe_146_count = 0;
  signed int *llvm_cbe_tmp__29;
  static  unsigned long long aesl_llvm_cbe_147_count = 0;
  static  unsigned long long aesl_llvm_cbe_148_count = 0;
  signed int *llvm_cbe_tmp__30;
  static  unsigned long long aesl_llvm_cbe_149_count = 0;
  static  unsigned long long aesl_llvm_cbe_150_count = 0;
  static  unsigned long long aesl_llvm_cbe_151_count = 0;
  static  unsigned long long aesl_llvm_cbe_152_count = 0;
  static  unsigned long long aesl_llvm_cbe_153_count = 0;
  static  unsigned long long aesl_llvm_cbe_154_count = 0;
  static  unsigned long long aesl_llvm_cbe_155_count = 0;
  signed int *llvm_cbe_tmp__31;
  static  unsigned long long aesl_llvm_cbe_156_count = 0;
  static  unsigned long long aesl_llvm_cbe_157_count = 0;
  signed int *llvm_cbe_tmp__32;
  static  unsigned long long aesl_llvm_cbe_158_count = 0;
  static  unsigned long long aesl_llvm_cbe_159_count = 0;
  static  unsigned long long aesl_llvm_cbe_160_count = 0;
  static  unsigned long long aesl_llvm_cbe_161_count = 0;
  static  unsigned long long aesl_llvm_cbe_162_count = 0;
  static  unsigned long long aesl_llvm_cbe_163_count = 0;
  static  unsigned long long aesl_llvm_cbe_164_count = 0;
  static  unsigned long long aesl_llvm_cbe_165_count = 0;
  static  unsigned long long aesl_llvm_cbe_166_count = 0;
  static  unsigned long long aesl_llvm_cbe_167_count = 0;
  static  unsigned long long aesl_llvm_cbe_168_count = 0;
  static  unsigned long long aesl_llvm_cbe_169_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge113_count = 0;
  unsigned int llvm_cbe_storemerge113;
  unsigned int llvm_cbe_storemerge113__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_170_count = 0;
  static  unsigned long long aesl_llvm_cbe_171_count = 0;
  static  unsigned long long aesl_llvm_cbe_172_count = 0;
  static  unsigned long long aesl_llvm_cbe_173_count = 0;
  static  unsigned long long aesl_llvm_cbe_174_count = 0;
  static  unsigned long long aesl_llvm_cbe_175_count = 0;
  static  unsigned long long aesl_llvm_cbe_176_count = 0;
  static  unsigned long long aesl_llvm_cbe_177_count = 0;
  static  unsigned long long aesl_llvm_cbe_178_count = 0;
  static  unsigned long long aesl_llvm_cbe_179_count = 0;
  unsigned long long llvm_cbe_tmp__33;
  static  unsigned long long aesl_llvm_cbe_180_count = 0;
  unsigned int llvm_cbe_tmp__34;
  static  unsigned long long aesl_llvm_cbe_181_count = 0;
  unsigned long long llvm_cbe_tmp__35;
  static  unsigned long long aesl_llvm_cbe_182_count = 0;
  signed int *llvm_cbe_tmp__36;
  static  unsigned long long aesl_llvm_cbe_183_count = 0;
  unsigned int llvm_cbe_tmp__37;
  static  unsigned long long aesl_llvm_cbe_184_count = 0;
  double llvm_cbe_tmp__38;
  static  unsigned long long aesl_llvm_cbe_185_count = 0;
  signed int *llvm_cbe_tmp__39;
  static  unsigned long long aesl_llvm_cbe_186_count = 0;
  unsigned int llvm_cbe_tmp__40;
  static  unsigned long long aesl_llvm_cbe_187_count = 0;
  double llvm_cbe_tmp__41;
  static  unsigned long long aesl_llvm_cbe_188_count = 0;
  double llvm_cbe_tmp__42;
  static  unsigned long long aesl_llvm_cbe_189_count = 0;
  double llvm_cbe_tmp__43;
  static  unsigned long long aesl_llvm_cbe_190_count = 0;
  double llvm_cbe_tmp__44;
  static  unsigned long long aesl_llvm_cbe_191_count = 0;
  unsigned int llvm_cbe_tmp__45;
  static  unsigned long long aesl_llvm_cbe_192_count = 0;
  signed int *llvm_cbe_tmp__46;
  static  unsigned long long aesl_llvm_cbe_193_count = 0;
  static  unsigned long long aesl_llvm_cbe_194_count = 0;
  unsigned int llvm_cbe_tmp__47;
  static  unsigned long long aesl_llvm_cbe_195_count = 0;
  static  unsigned long long aesl_llvm_cbe_196_count = 0;
  static  unsigned long long aesl_llvm_cbe_197_count = 0;
  static  unsigned long long aesl_llvm_cbe_198_count = 0;
  static  unsigned long long aesl_llvm_cbe_199_count = 0;
  static  unsigned long long aesl_llvm_cbe_200_count = 0;
  static  unsigned long long aesl_llvm_cbe_201_count = 0;
  static  unsigned long long aesl_llvm_cbe_202_count = 0;
  static  unsigned long long aesl_llvm_cbe_203_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond17_count = 0;
  static  unsigned long long aesl_llvm_cbe_204_count = 0;
  static  unsigned long long aesl_llvm_cbe_205_count = 0;
  double llvm_cbe_tmp__48;
  double llvm_cbe_tmp__48__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_206_count = 0;
  unsigned int llvm_cbe_tmp__49;
  static  unsigned long long aesl_llvm_cbe_207_count = 0;
  static  unsigned long long aesl_llvm_cbe_208_count = 0;
  static  unsigned long long aesl_llvm_cbe_209_count = 0;
  static  unsigned long long aesl_llvm_cbe_210_count = 0;
  static  unsigned long long aesl_llvm_cbe_211_count = 0;
  static  unsigned long long aesl_llvm_cbe_212_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond16_count = 0;
  static  unsigned long long aesl_llvm_cbe_213_count = 0;
  static  unsigned long long aesl_llvm_cbe_214_count = 0;
  unsigned long long llvm_cbe_tmp__50;
  static  unsigned long long aesl_llvm_cbe_215_count = 0;
  signed int *llvm_cbe_tmp__51;
  static  unsigned long long aesl_llvm_cbe_216_count = 0;
  unsigned int llvm_cbe_tmp__52;
  static  unsigned long long aesl_llvm_cbe_217_count = 0;
  signed int *llvm_cbe_tmp__53;
  static  unsigned long long aesl_llvm_cbe_218_count = 0;
  unsigned int llvm_cbe_tmp__54;
  static  unsigned long long aesl_llvm_cbe_219_count = 0;
  unsigned int llvm_cbe_tmp__55;
  static  unsigned long long aesl_llvm_cbe_220_count = 0;
  double llvm_cbe_tmp__56;
  static  unsigned long long aesl_llvm_cbe_221_count = 0;
  double llvm_cbe_tmp__57;
  static  unsigned long long aesl_llvm_cbe_222_count = 0;
  static  unsigned long long aesl_llvm_cbe_223_count = 0;
  static  unsigned long long aesl_llvm_cbe_224_count = 0;
  static  unsigned long long aesl_llvm_cbe_225_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge48_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge48_2e_us;
  unsigned int llvm_cbe_storemerge48_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_226_count = 0;
  double llvm_cbe_tmp__58;
  double llvm_cbe_tmp__58__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_227_count = 0;
  static  unsigned long long aesl_llvm_cbe_228_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge310_2e_us_count = 0;
  unsigned int llvm_cbe_storemerge310_2e_us;
  unsigned int llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_229_count = 0;
  static  unsigned long long aesl_llvm_cbe_230_count = 0;
  static  unsigned long long aesl_llvm_cbe_231_count = 0;
  static  unsigned long long aesl_llvm_cbe_232_count = 0;
  static  unsigned long long aesl_llvm_cbe_233_count = 0;
  static  unsigned long long aesl_llvm_cbe_234_count = 0;
  unsigned int llvm_cbe_tmp__59;
  static  unsigned long long aesl_llvm_cbe_235_count = 0;
  unsigned long long llvm_cbe_tmp__60;
  static  unsigned long long aesl_llvm_cbe_236_count = 0;
  static  unsigned long long aesl_llvm_cbe_237_count = 0;
  static  unsigned long long aesl_llvm_cbe_238_count = 0;
  static  unsigned long long aesl_llvm_cbe_239_count = 0;
  static  unsigned long long aesl_llvm_cbe_240_count = 0;
  static  unsigned long long aesl_llvm_cbe_241_count = 0;
  static  unsigned long long aesl_llvm_cbe_242_count = 0;
  static  unsigned long long aesl_llvm_cbe_243_count = 0;
  static  unsigned long long aesl_llvm_cbe_244_count = 0;
  static  unsigned long long aesl_llvm_cbe_245_count = 0;
  static  unsigned long long aesl_llvm_cbe_246_count = 0;
  unsigned int llvm_cbe_tmp__61;
  static  unsigned long long aesl_llvm_cbe_247_count = 0;
  static  unsigned long long aesl_llvm_cbe_248_count = 0;
  static  unsigned long long aesl_llvm_cbe_249_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond19_count = 0;
  static  unsigned long long aesl_llvm_cbe_250_count = 0;
  static  unsigned long long aesl_llvm_cbe_storemerge25_count = 0;
  unsigned int llvm_cbe_storemerge25;
  unsigned int llvm_cbe_storemerge25__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_251_count = 0;
  double llvm_cbe_tmp__62;
  double llvm_cbe_tmp__62__PHI_TEMPORARY;
  static  unsigned long long aesl_llvm_cbe_252_count = 0;
  unsigned long long llvm_cbe_tmp__63;
  static  unsigned long long aesl_llvm_cbe_253_count = 0;
  signed int *llvm_cbe_tmp__64;
  static  unsigned long long aesl_llvm_cbe_254_count = 0;
  unsigned int llvm_cbe_tmp__65;
  static  unsigned long long aesl_llvm_cbe_255_count = 0;
  signed int *llvm_cbe_tmp__66;
  static  unsigned long long aesl_llvm_cbe_256_count = 0;
  static  unsigned long long aesl_llvm_cbe_257_count = 0;
  signed int *llvm_cbe_tmp__67;
  static  unsigned long long aesl_llvm_cbe_258_count = 0;
  unsigned int llvm_cbe_tmp__68;
  static  unsigned long long aesl_llvm_cbe_259_count = 0;
  unsigned int llvm_cbe_tmp__69;
  static  unsigned long long aesl_llvm_cbe_260_count = 0;
  unsigned int llvm_cbe_tmp__70;
  static  unsigned long long aesl_llvm_cbe_261_count = 0;
  double llvm_cbe_tmp__71;
  static  unsigned long long aesl_llvm_cbe_262_count = 0;
  double llvm_cbe_tmp__72;
  static  unsigned long long aesl_llvm_cbe_263_count = 0;
  static  unsigned long long aesl_llvm_cbe_264_count = 0;
  static  unsigned long long aesl_llvm_cbe_265_count = 0;
  static  unsigned long long aesl_llvm_cbe_266_count = 0;
  unsigned int llvm_cbe_tmp__73;
  static  unsigned long long aesl_llvm_cbe_267_count = 0;
  static  unsigned long long aesl_llvm_cbe_268_count = 0;
  static  unsigned long long aesl_llvm_cbe_269_count = 0;
  static  unsigned long long aesl_llvm_cbe_270_count = 0;
  static  unsigned long long aesl_llvm_cbe_271_count = 0;
  static  unsigned long long aesl_llvm_cbe_272_count = 0;
  static  unsigned long long aesl_llvm_cbe_273_count = 0;
  static  unsigned long long aesl_llvm_cbe_274_count = 0;
  static  unsigned long long aesl_llvm_cbe_275_count = 0;
  static  unsigned long long aesl_llvm_cbe_exitcond_count = 0;
  static  unsigned long long aesl_llvm_cbe_276_count = 0;
  static  unsigned long long aesl_llvm_cbe_277_count = 0;
  double llvm_cbe_tmp__74;
  static  unsigned long long aesl_llvm_cbe_278_count = 0;
  static  unsigned long long aesl_llvm_cbe_279_count = 0;
  static  unsigned long long aesl_llvm_cbe_280_count = 0;

const char* AESL_DEBUG_TRACE = getenv("DEBUG_TRACE");
if (AESL_DEBUG_TRACE)
printf("\n\{ BEGIN @jacobi_HLS\n");
if (AESL_DEBUG_TRACE)
printf("\n  %%0 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 0, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_20_count);
  llvm_cbe_tmp__1 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%0, align 16, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_21_count);
  *llvm_cbe_tmp__1 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%1 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 0, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_22_count);
  llvm_cbe_tmp__2 = (signed int *)(&llvm_cbe_x_new[(((signed long long )0ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )0ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%1, align 16, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_23_count);
  *llvm_cbe_tmp__2 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%2 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 1, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_29_count);
  llvm_cbe_tmp__3 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%2, align 4, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_30_count);
  *llvm_cbe_tmp__3 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%3 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 1, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_31_count);
  llvm_cbe_tmp__4 = (signed int *)(&llvm_cbe_x_new[(((signed long long )1ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )1ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%3, align 4, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_32_count);
  *llvm_cbe_tmp__4 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%4 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 2, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_38_count);
  llvm_cbe_tmp__5 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%4, align 8, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_39_count);
  *llvm_cbe_tmp__5 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%5 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 2, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_40_count);
  llvm_cbe_tmp__6 = (signed int *)(&llvm_cbe_x_new[(((signed long long )2ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )2ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%5, align 8, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_41_count);
  *llvm_cbe_tmp__6 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%6 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 3, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_47_count);
  llvm_cbe_tmp__7 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%6, align 4, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_48_count);
  *llvm_cbe_tmp__7 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%7 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 3, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_49_count);
  llvm_cbe_tmp__8 = (signed int *)(&llvm_cbe_x_new[(((signed long long )3ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )3ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%7, align 4, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_50_count);
  *llvm_cbe_tmp__8 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%8 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 4, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_56_count);
  llvm_cbe_tmp__9 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%8, align 16, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_57_count);
  *llvm_cbe_tmp__9 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%9 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 4, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_58_count);
  llvm_cbe_tmp__10 = (signed int *)(&llvm_cbe_x_new[(((signed long long )4ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )4ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%9, align 16, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_59_count);
  *llvm_cbe_tmp__10 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%10 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 5, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_65_count);
  llvm_cbe_tmp__11 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%10, align 4, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_66_count);
  *llvm_cbe_tmp__11 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%11 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 5, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_67_count);
  llvm_cbe_tmp__12 = (signed int *)(&llvm_cbe_x_new[(((signed long long )5ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )5ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%11, align 4, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_68_count);
  *llvm_cbe_tmp__12 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%12 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 6, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_74_count);
  llvm_cbe_tmp__13 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )6ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%12, align 8, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_75_count);
  *llvm_cbe_tmp__13 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%13 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 6, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_76_count);
  llvm_cbe_tmp__14 = (signed int *)(&llvm_cbe_x_new[(((signed long long )6ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )6ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%13, align 8, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_77_count);
  *llvm_cbe_tmp__14 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%14 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 7, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_83_count);
  llvm_cbe_tmp__15 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )7ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%14, align 4, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_84_count);
  *llvm_cbe_tmp__15 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%15 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 7, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_85_count);
  llvm_cbe_tmp__16 = (signed int *)(&llvm_cbe_x_new[(((signed long long )7ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )7ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%15, align 4, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_86_count);
  *llvm_cbe_tmp__16 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%16 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 8, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_92_count);
  llvm_cbe_tmp__17 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )8ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%16, align 16, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_93_count);
  *llvm_cbe_tmp__17 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%17 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 8, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_94_count);
  llvm_cbe_tmp__18 = (signed int *)(&llvm_cbe_x_new[(((signed long long )8ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )8ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%17, align 16, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_95_count);
  *llvm_cbe_tmp__18 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%18 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 9, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_101_count);
  llvm_cbe_tmp__19 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )9ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%18, align 4, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_102_count);
  *llvm_cbe_tmp__19 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%19 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 9, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_103_count);
  llvm_cbe_tmp__20 = (signed int *)(&llvm_cbe_x_new[(((signed long long )9ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )9ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%19, align 4, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_104_count);
  *llvm_cbe_tmp__20 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%20 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 10, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_110_count);
  llvm_cbe_tmp__21 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )10ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%20, align 8, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_111_count);
  *llvm_cbe_tmp__21 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%21 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 10, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_112_count);
  llvm_cbe_tmp__22 = (signed int *)(&llvm_cbe_x_new[(((signed long long )10ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )10ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%21, align 8, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_113_count);
  *llvm_cbe_tmp__22 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%22 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 11, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_119_count);
  llvm_cbe_tmp__23 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )11ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%22, align 4, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_120_count);
  *llvm_cbe_tmp__23 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%23 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 11, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_121_count);
  llvm_cbe_tmp__24 = (signed int *)(&llvm_cbe_x_new[(((signed long long )11ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )11ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%23, align 4, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_122_count);
  *llvm_cbe_tmp__24 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%24 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 12, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_128_count);
  llvm_cbe_tmp__25 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )12ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%24, align 16, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_129_count);
  *llvm_cbe_tmp__25 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%25 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 12, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_130_count);
  llvm_cbe_tmp__26 = (signed int *)(&llvm_cbe_x_new[(((signed long long )12ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )12ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%25, align 16, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_131_count);
  *llvm_cbe_tmp__26 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%26 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 13, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_137_count);
  llvm_cbe_tmp__27 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )13ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%26, align 4, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_138_count);
  *llvm_cbe_tmp__27 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%27 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 13, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_139_count);
  llvm_cbe_tmp__28 = (signed int *)(&llvm_cbe_x_new[(((signed long long )13ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )13ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%27, align 4, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_140_count);
  *llvm_cbe_tmp__28 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%28 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 14, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_146_count);
  llvm_cbe_tmp__29 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )14ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%28, align 8, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_147_count);
  *llvm_cbe_tmp__29 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%29 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 14, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_148_count);
  llvm_cbe_tmp__30 = (signed int *)(&llvm_cbe_x_new[(((signed long long )14ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )14ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%29, align 8, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_149_count);
  *llvm_cbe_tmp__30 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%30 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 15, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_155_count);
  llvm_cbe_tmp__31 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )15ull) < 16 && "Write access out of array 'x_prev' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%30, align 4, !dbg !6 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_156_count);
  *llvm_cbe_tmp__31 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
if (AESL_DEBUG_TRACE)
printf("\n  %%31 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 15, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_157_count);
  llvm_cbe_tmp__32 = (signed int *)(&llvm_cbe_x_new[(((signed long long )15ull))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
}

#ifdef AESL_BC_SIM
  assert(((signed long long )15ull) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 0, i32* %%31, align 4, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_158_count);
  *llvm_cbe_tmp__32 = 0u;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", 0u);
  if ((((signed int )llvm_cbe_iter) > ((signed int )0u))) {
    goto llvm_cbe__2e_preheader9_2e_lr_2e_ph;
  } else {
    goto llvm_cbe__2e_preheader;
  }

llvm_cbe__2e_preheader9_2e_lr_2e_ph:
  llvm_cbe_storemerge113__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  goto llvm_cbe__2e_preheader9;

  do {     /* Syntactic loop '.preheader9' to make GCC happy */
llvm_cbe__2e_preheader9:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge113 = phi i32 [ 0, %%.preheader9.lr.ph ], [ %%67, %%._crit_edge11  for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_storemerge113_count);
  llvm_cbe_storemerge113 = (unsigned int )llvm_cbe_storemerge113__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge113 = 0x%X",llvm_cbe_storemerge113);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__61);
}
  if ((((signed int )llvm_cbe_n) > ((signed int )0u))) {
    llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  } else {
    goto llvm_cbe__2e__crit_edge11;
  }

llvm_cbe__2e__crit_edge11:
if (AESL_DEBUG_TRACE)
printf("\n  %%67 = add nsw i32 %%storemerge113, 1, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_246_count);
  llvm_cbe_tmp__61 = (unsigned int )((unsigned int )(llvm_cbe_storemerge113&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__61&4294967295ull)));
  if (((llvm_cbe_tmp__61&4294967295U) == (llvm_cbe_iter&4294967295U))) {
    goto llvm_cbe__2e_preheader;
  } else {
    llvm_cbe_storemerge113__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__61;   /* for PHI node */
    goto llvm_cbe__2e_preheader9;
  }

  do {     /* Syntactic loop '.lr.ph.us' to make GCC happy */
llvm_cbe__2e_lr_2e_ph_2e_us:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge310.us = phi i32 [ %%49, %%34 ], [ 0, %%.preheader9  for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_storemerge310_2e_us_count);
  llvm_cbe_storemerge310_2e_us = (unsigned int )llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge310.us = 0x%X",llvm_cbe_storemerge310_2e_us);
printf("\n = 0x%X",llvm_cbe_tmp__47);
printf("\n = 0x%X",0u);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%65 = add nsw i32 %%storemerge310.us, -1, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_234_count);
  llvm_cbe_tmp__59 = (unsigned int )((unsigned int )(llvm_cbe_storemerge310_2e_us&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__59&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%66 = sext i32 %%65 to i64, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_235_count);
  llvm_cbe_tmp__60 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__59);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__60);
  llvm_cbe_storemerge48_2e_us__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__58__PHI_TEMPORARY = (double )0x0p0;   /* for PHI node */
  goto llvm_cbe_tmp__75;

llvm_cbe_tmp__76:
if (AESL_DEBUG_TRACE)
printf("\n  %%35 = sext i32 %%storemerge310.us to i64, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_179_count);
  llvm_cbe_tmp__33 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge310_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__33);
if (AESL_DEBUG_TRACE)
printf("\n  %%36 = add nsw i32 %%storemerge310.us, -1, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_180_count);
  llvm_cbe_tmp__34 = (unsigned int )((unsigned int )(llvm_cbe_storemerge310_2e_us&4294967295ull)) + ((unsigned int )(4294967295u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__34&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%37 = sext i32 %%36 to i64, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_181_count);
  llvm_cbe_tmp__35 = (unsigned long long )((signed long long )(signed int )llvm_cbe_tmp__34);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__35);
if (AESL_DEBUG_TRACE)
printf("\n  %%38 = getelementptr inbounds [4 x i32]* %%J, i64 %%37, i64 %%35, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_182_count);
  llvm_cbe_tmp__36 = (signed int *)(&llvm_cbe_J[(((signed long long )llvm_cbe_tmp__35))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )llvm_cbe_tmp__33))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__35));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__33) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'J' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%39 = load i32* %%38, align 4, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_183_count);
  llvm_cbe_tmp__37 = (unsigned int )*llvm_cbe_tmp__36;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n  %%40 = sitofp i32 %%39 to double, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_184_count);
  llvm_cbe_tmp__38 = (double )((double )(signed int )llvm_cbe_tmp__37);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__38, *(long long*)(&llvm_cbe_tmp__38));
if (AESL_DEBUG_TRACE)
printf("\n  %%41 = getelementptr inbounds i32* %%b, i64 %%35, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_185_count);
  llvm_cbe_tmp__39 = (signed int *)(&llvm_cbe_b[(((signed long long )llvm_cbe_tmp__33))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
}
if (AESL_DEBUG_TRACE)
printf("\n  %%42 = load i32* %%41, align 4, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_186_count);
  llvm_cbe_tmp__40 = (unsigned int )*llvm_cbe_tmp__39;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n  %%43 = sitofp i32 %%42 to double, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_187_count);
  llvm_cbe_tmp__41 = (double )((double )(signed int )llvm_cbe_tmp__40);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__41, *(long long*)(&llvm_cbe_tmp__41));
if (AESL_DEBUG_TRACE)
printf("\n  %%44 = fsub double %%43, %%51, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_188_count);
  llvm_cbe_tmp__42 = (double )llvm_cbe_tmp__41 - llvm_cbe_tmp__48;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__42, *(long long*)(&llvm_cbe_tmp__42));
if (AESL_DEBUG_TRACE)
printf("\n  %%45 = fmul double %%40, %%44, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_189_count);
  llvm_cbe_tmp__43 = (double )llvm_cbe_tmp__38 * llvm_cbe_tmp__42;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__43, *(long long*)(&llvm_cbe_tmp__43));
if (AESL_DEBUG_TRACE)
printf("\n  %%46 = fdiv double 1.000000e+00, %%45, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_190_count);
  llvm_cbe_tmp__44 = (double )0x1p0 / llvm_cbe_tmp__43;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__44, *(long long*)(&llvm_cbe_tmp__44));
if (AESL_DEBUG_TRACE)
printf("\n  %%47 = fptosi double %%46 to i32, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_191_count);
  llvm_cbe_tmp__45 = (unsigned int )((signed int )llvm_cbe_tmp__44&4294967295U);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%48 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 %%35, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_192_count);
  llvm_cbe_tmp__46 = (signed int *)(&llvm_cbe_x_new[(((signed long long )llvm_cbe_tmp__33))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__33));
}

#ifdef AESL_BC_SIM
  assert(((signed long long )llvm_cbe_tmp__33) < 16 && "Write access out of array 'x_new' bound?");

#endif
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%47, i32* %%48, align 4, !dbg !4 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_193_count);
  *llvm_cbe_tmp__46 = llvm_cbe_tmp__45;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__45);
if (AESL_DEBUG_TRACE)
printf("\n  %%49 = add nsw i32 %%storemerge310.us, 1, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_194_count);
  llvm_cbe_tmp__47 = (unsigned int )((unsigned int )(llvm_cbe_storemerge310_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__47&4294967295ull)));
  if (((llvm_cbe_tmp__47&4294967295U) == (llvm_cbe_n&4294967295U))) {
    goto llvm_cbe__2e__crit_edge11;
  } else {
    llvm_cbe_storemerge310_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__47;   /* for PHI node */
    goto llvm_cbe__2e_lr_2e_ph_2e_us;
  }

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__75:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge48.us = phi i32 [ 0, %%.lr.ph.us ], [ %%52, %%50  for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_storemerge48_2e_us_count);
  llvm_cbe_storemerge48_2e_us = (unsigned int )llvm_cbe_storemerge48_2e_us__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge48.us = 0x%X",llvm_cbe_storemerge48_2e_us);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__49);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%63 = phi double [ 0.000000e+00, %%.lr.ph.us ], [ %%51, %%50  for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_226_count);
  llvm_cbe_tmp__58 = (double )llvm_cbe_tmp__58__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %lf",llvm_cbe_tmp__58);
printf("\n = %lf",0x0p0);
printf("\n = %lf",llvm_cbe_tmp__48);
}
  if (((llvm_cbe_storemerge48_2e_us&4294967295U) == (llvm_cbe_storemerge310_2e_us&4294967295U))) {
    goto llvm_cbe_tmp__77;
  } else {
    llvm_cbe_tmp__48__PHI_TEMPORARY = (double )llvm_cbe_tmp__58;   /* for PHI node */
    goto llvm_cbe_tmp__78;
  }

llvm_cbe_tmp__78:
if (AESL_DEBUG_TRACE)
printf("\n  %%51 = phi double [ %%63, %%62 ], [ %%61, %%53  for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_205_count);
  llvm_cbe_tmp__48 = (double )llvm_cbe_tmp__48__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %lf",llvm_cbe_tmp__48);
printf("\n = %lf",llvm_cbe_tmp__58);
printf("\n = %lf",llvm_cbe_tmp__57);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%52 = add nsw i32 %%storemerge48.us, 1, !dbg !7 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_206_count);
  llvm_cbe_tmp__49 = (unsigned int )((unsigned int )(llvm_cbe_storemerge48_2e_us&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__49&4294967295ull)));
  if (((llvm_cbe_tmp__49&4294967295U) == (llvm_cbe_n&4294967295U))) {
    goto llvm_cbe_tmp__76;
  } else {
    llvm_cbe_storemerge48_2e_us__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__49;   /* for PHI node */
    llvm_cbe_tmp__58__PHI_TEMPORARY = (double )llvm_cbe_tmp__48;   /* for PHI node */
    goto llvm_cbe_tmp__75;
  }

llvm_cbe_tmp__77:
if (AESL_DEBUG_TRACE)
printf("\n  %%54 = sext i32 %%storemerge310.us to i64, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_214_count);
  llvm_cbe_tmp__50 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge310_2e_us);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__50);
if (AESL_DEBUG_TRACE)
printf("\n  %%55 = getelementptr inbounds [4 x i32]* %%J, i64 %%66, i64 %%54, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_215_count);
  llvm_cbe_tmp__51 = (signed int *)(&llvm_cbe_J[(((signed long long )llvm_cbe_tmp__60))
#ifdef AESL_BC_SIM
 % 4
#endif
][(((signed long long )llvm_cbe_tmp__50))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__60));
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__50));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__50) < 4)) fprintf(stderr, "%s:%d: warning: Read access out of array 'J' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%56 = load i32* %%55, align 4, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_216_count);
  llvm_cbe_tmp__52 = (unsigned int )*llvm_cbe_tmp__51;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__52);
if (AESL_DEBUG_TRACE)
printf("\n  %%57 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 %%54, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_217_count);
  llvm_cbe_tmp__53 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )llvm_cbe_tmp__50))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__50));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__50) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'x_prev' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%58 = load i32* %%57, align 4, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_218_count);
  llvm_cbe_tmp__54 = (unsigned int )*llvm_cbe_tmp__53;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__54);
if (AESL_DEBUG_TRACE)
printf("\n  %%59 = mul nsw i32 %%58, %%56, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_219_count);
  llvm_cbe_tmp__55 = (unsigned int )((unsigned int )(llvm_cbe_tmp__54&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__52&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__55&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%60 = sitofp i32 %%59 to double, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_220_count);
  llvm_cbe_tmp__56 = (double )((double )(signed int )llvm_cbe_tmp__55);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__56, *(long long*)(&llvm_cbe_tmp__56));
if (AESL_DEBUG_TRACE)
printf("\n  %%61 = fadd double %%63, %%60, !dbg !3 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_221_count);
  llvm_cbe_tmp__57 = (double )llvm_cbe_tmp__58 + llvm_cbe_tmp__56;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__57, *(long long*)(&llvm_cbe_tmp__57));
  llvm_cbe_tmp__48__PHI_TEMPORARY = (double )llvm_cbe_tmp__57;   /* for PHI node */
  goto llvm_cbe_tmp__78;

  } while (1); /* end of syntactic loop '' */
  } while (1); /* end of syntactic loop '.lr.ph.us' */
  } while (1); /* end of syntactic loop '.preheader9' */
llvm_cbe__2e_preheader:
  llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )0u;   /* for PHI node */
  llvm_cbe_tmp__62__PHI_TEMPORARY = (double )0x0p0;   /* for PHI node */
  goto llvm_cbe_tmp__79;

  do {     /* Syntactic loop '' to make GCC happy */
llvm_cbe_tmp__79:
if (AESL_DEBUG_TRACE)
printf("\n  %%storemerge25 = phi i32 [ 0, %%.preheader ], [ %%80, %%68  for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_storemerge25_count);
  llvm_cbe_storemerge25 = (unsigned int )llvm_cbe_storemerge25__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\nstoremerge25 = 0x%X",llvm_cbe_storemerge25);
printf("\n = 0x%X",0u);
printf("\n = 0x%X",llvm_cbe_tmp__73);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%69 = phi double [ 0.000000e+00, %%.preheader ], [ %%79, %%68  for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_251_count);
  llvm_cbe_tmp__62 = (double )llvm_cbe_tmp__62__PHI_TEMPORARY;
if (AESL_DEBUG_TRACE) {
printf("\n = %lf",llvm_cbe_tmp__62);
printf("\n = %lf",0x0p0);
printf("\n = %lf",llvm_cbe_tmp__72);
}
if (AESL_DEBUG_TRACE)
printf("\n  %%70 = sext i32 %%storemerge25 to i64, !dbg !5 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_252_count);
  llvm_cbe_tmp__63 = (unsigned long long )((signed long long )(signed int )llvm_cbe_storemerge25);
if (AESL_DEBUG_TRACE)
printf("\n = 0x%I64X\n", llvm_cbe_tmp__63);
if (AESL_DEBUG_TRACE)
printf("\n  %%71 = getelementptr inbounds [16 x i32]* %%x_new, i64 0, i64 %%70, !dbg !5 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_253_count);
  llvm_cbe_tmp__64 = (signed int *)(&llvm_cbe_x_new[(((signed long long )llvm_cbe_tmp__63))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__63));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__63) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'x_new' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%72 = load i32* %%71, align 4, !dbg !5 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_254_count);
  llvm_cbe_tmp__65 = (unsigned int )*llvm_cbe_tmp__64;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%73 = getelementptr inbounds i32* %%x, i64 %%70, !dbg !5 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_255_count);
  llvm_cbe_tmp__66 = (signed int *)(&llvm_cbe_x[(((signed long long )llvm_cbe_tmp__63))]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__63));
}
if (AESL_DEBUG_TRACE)
printf("\n  store i32 %%72, i32* %%73, align 4, !dbg !5 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_256_count);
  *llvm_cbe_tmp__66 = llvm_cbe_tmp__65;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__65);
if (AESL_DEBUG_TRACE)
printf("\n  %%74 = getelementptr inbounds [16 x i32]* %%x_prev, i64 0, i64 %%70, !dbg !8 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_257_count);
  llvm_cbe_tmp__67 = (signed int *)(&llvm_cbe_x_prev[(((signed long long )llvm_cbe_tmp__63))
#ifdef AESL_BC_SIM
 % 16
#endif
]);
if (AESL_DEBUG_TRACE) {
printf("\n = 0x%I64X",((signed long long )llvm_cbe_tmp__63));
}

#ifdef AESL_BC_SIM
  if (!(((signed long long )llvm_cbe_tmp__63) < 16)) fprintf(stderr, "%s:%d: warning: Read access out of array 'x_prev' bound?\n", __FILE__, __LINE__);

#endif
if (AESL_DEBUG_TRACE)
printf("\n  %%75 = load i32* %%74, align 4, !dbg !8 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_258_count);
  llvm_cbe_tmp__68 = (unsigned int )*llvm_cbe_tmp__67;
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", llvm_cbe_tmp__68);
if (AESL_DEBUG_TRACE)
printf("\n  %%76 = sub nsw i32 %%72, %%75, !dbg !8 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_259_count);
  llvm_cbe_tmp__69 = (unsigned int )((unsigned int )(llvm_cbe_tmp__65&4294967295ull)) - ((unsigned int )(llvm_cbe_tmp__68&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__69&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%77 = mul nsw i32 %%76, %%76, !dbg !8 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_260_count);
  llvm_cbe_tmp__70 = (unsigned int )((unsigned int )(llvm_cbe_tmp__69&4294967295ull)) * ((unsigned int )(llvm_cbe_tmp__69&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__70&4294967295ull)));
if (AESL_DEBUG_TRACE)
printf("\n  %%78 = sitofp i32 %%77 to double, !dbg !8 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_261_count);
  llvm_cbe_tmp__71 = (double )((double )(signed int )llvm_cbe_tmp__70);
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__71, *(long long*)(&llvm_cbe_tmp__71));
if (AESL_DEBUG_TRACE)
printf("\n  %%79 = fadd double %%69, %%78, !dbg !8 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_262_count);
  llvm_cbe_tmp__72 = (double )llvm_cbe_tmp__62 + llvm_cbe_tmp__71;
if (AESL_DEBUG_TRACE)
printf("\n = %lf,  0x%llx\n", llvm_cbe_tmp__72, *(long long*)(&llvm_cbe_tmp__72));
if (AESL_DEBUG_TRACE)
printf("\n  %%80 = add nsw i32 %%storemerge25, 1, !dbg !8 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_266_count);
  llvm_cbe_tmp__73 = (unsigned int )((unsigned int )(llvm_cbe_storemerge25&4294967295ull)) + ((unsigned int )(1u&4294967295ull));
if (AESL_DEBUG_TRACE)
printf("\n = 0x%X\n", ((unsigned int )(llvm_cbe_tmp__73&4294967295ull)));
  if (((llvm_cbe_tmp__73&4294967295U) == (16u&4294967295U))) {
    goto llvm_cbe_tmp__80;
  } else {
    llvm_cbe_storemerge25__PHI_TEMPORARY = (unsigned int )llvm_cbe_tmp__73;   /* for PHI node */
    llvm_cbe_tmp__62__PHI_TEMPORARY = (double )llvm_cbe_tmp__72;   /* for PHI node */
    goto llvm_cbe_tmp__79;
  }

  } while (1); /* end of syntactic loop '' */
llvm_cbe_tmp__80:
if (AESL_DEBUG_TRACE)
printf("\n  %%82 = call double @sqrt(double %%79) nounwind readnone, !dbg !8 for 0x%I64xth hint within @jacobi_HLS  --> \n", ++aesl_llvm_cbe_277_count);
  llvm_cbe_tmp__74 = (double )sqrt(llvm_cbe_tmp__72);
if (AESL_DEBUG_TRACE) {
printf("\nArgument  = %lf,  0x%llx",llvm_cbe_tmp__72, *(long long*)(&llvm_cbe_tmp__72));
printf("\nReturn  = %lf",llvm_cbe_tmp__74);
}
  if (AESL_DEBUG_TRACE)
      printf("\nEND @jacobi_HLS}\n");
  return llvm_cbe_tmp__74;
}

