Vim�UnDo� Yw`Rϻ��aWQA*�����%槫�h��+   6                  .       .   .   .    T�Ш    _�                             ����                                                                                                                                                                                                                                                                                                                                                   v        T���     �         �      -#if defined(HAVE_HASHDRBG) || defined(NO_RC4)       #ifdef NO_SHA256   ,        #error "Hash DRBG requires SHA-256."       #endif /* NO_SHA256 */       (    #include <cyassl/ctaocrypt/sha256.h>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  v        T���     �         �      (    #include <cyassl/ctaocrypt/sha256.h>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  v        T���     �         �      $#include <cyassl/ctaocrypt/sha256.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v        T���     �                ##include <cyassl/ctaocrypt/types.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v        T���     �                 5�_�                       
    ����                                                                                                                                                                                                                                                                                                                                                  v        T���     �         �      #include <sha256.h>5�_�                           ����                                                                                                                                                                                                                                                                                                                                                  v        T���     �         �      #include "sha256.h>5�_�      	                      ����                                                                                                                                                                                                                                                                                                                                                  v        T���     �                 5�_�      
           	           ����                                                                                                                                                                                                                                                                                                                                       ,           v        T���     �         �      ##else /* HAVE_HASHDRBG || NO_RC4 */   &    #include <cyassl/ctaocrypt/arc4.h>   $#endif /* HAVE_HASHDRBG || NO_RC4 */       #ifdef __cplusplus       extern "C" {   #endif           #if defined(USE_WINDOWS_API)       #if defined(_WIN64)   0        typedef unsigned __int64 ProviderHandle;   9        /* type HCRYPTPROV, avoid #include <windows.h> */   	    #else   -        typedef unsigned long ProviderHandle;   
    #endif   #endif           /* OS specific seeder */5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                  v        T���     �         ~      /* OS specific seeder */5�_�   
                         ����                                                                                                                                                                                                                                                                                                                                          	       v   	    T���     �                    #if defined(USE_WINDOWS_API)           ProviderHandle handle;   	    #else           int fd;5�_�                            ����                                                                                                                                                                                                                                                                                                                                          	       v   	    T���     �                
    #endif5�_�                           ����                                                                                                                                                                                                                                                                                                                                          	       v   	    T���    �         {      typedef struct OS_Seed {   int fd;�         {              int fd;5�_�                    Z        ����                                                                                                                                                                                                                                                                                                                            Z           y           v        T��     �   Y   [   {   !   -#if defined(HAVE_HASHDRBG) || defined(NO_RC4)   !    CYASSL_API int FreeRng(RNG*);   -    CYASSL_API int RNG_HealthTest(int reseed,   P                                        const byte* entropyA, word32 entropyASz,   P                                        const byte* entropyB, word32 entropyBSz,   G                                        byte* output, word32 outputSz);   $#endif /* HAVE_HASHDRBG || NO_RC4 */           #ifdef HAVE_FIPS   2    /* fips wrapper calls, user can call direct */   *    CYASSL_API int InitRng_fips(RNG* rng);   *    CYASSL_API int FreeRng_fips(RNG* rng);   M    CYASSL_API int RNG_GenerateBlock_fips(RNG* rng, byte* buf, word32 bufSz);   2    CYASSL_API int RNG_HealthTest_fips(int reseed,   P                                        const byte* entropyA, word32 entropyASz,   P                                        const byte* entropyB, word32 entropyBSz,   G                                        byte* output, word32 outputSz);       #ifndef FIPS_NO_WRAPPERS   O        /* if not impl or fips.c impl wrapper force fips calls if fips build */   1        #define InitRng              InitRng_fips   1        #define FreeRng              FreeRng_fips   ;        #define RNG_GenerateBlock    RNG_GenerateBlock_fips   8        #define RNG_HealthTest       RNG_HealthTest_fips   !    #endif /* FIPS_NO_WRAPPERS */   #endif /* HAVE_FIPS */           #ifdef __cplusplus       } /* extern "C" */   #endif        #endif /* CTAO_CRYPT_RANDOM_H */5�_�                    [        ����                                                                                                                                                                                                                                                                                                                            Z           Z           v        T��     �   Z   [           5�_�                    Y        ����                                                                                                                                                                                                                                                                                                                            Z           Z           v        T��     �   X   Y           5�_�                    ;        ����                                                                                                                                                                                                                                                                                                                            ;           T           v        T��&     �   :   <   Y      ##else /* HAVE_HASHDRBG || NO_RC4 */           *#define CYASSL_RNG_CAVIUM_MAGIC 0xBEEF0004       $/* secure Random Number Generator */           typedef struct RNG {       OS_Seed seed;       Arc4    cipher;   #ifdef HAVE_CAVIUM   2    int    devId;           /* nitrox device id */   4    word32 magic;           /* using cavium magic */   #endif   } RNG;           #ifdef HAVE_CAVIUM   -    CYASSL_API int  InitRngCavium(RNG*, int);   #endif           %#endif /* HAVE_HASH_DRBG || NO_RC4 */           CYASSL_API int  InitRng(RNG*);5�_�                    :        ����                                                                                                                                                                                                                                                                                                                            ;           ;           v        T��'     �   9   :           5�_�                    2        ����                                                                                                                                                                                                                                                                                                                            :           :           v        T��2     �   1   2           5�_�                    /        ����                                                                                                                                                                                                                                                                                                                            9           9           v        T��3     �   .   /           5�_�                    :   $    ����                                                                                                                                                                                                                                                                                                                            8           8           v        T��B     �   9   ;   <      .CYASSL_API int  RNG_GenerateByte(RNG*, byte*);5�_�                    9   %    ����                                                                                                                                                                                                                                                                                                                            8           8           v        T��C     �   8   :   <      :CYASSL_API int  RNG_GenerateBlock(RNG*, byte*, word32 sz);5�_�                    9   -    ����                                                                                                                                                                                                                                                                                                                            8           8           v        T��E     �   8   :   <      ;CYASSL_API int  RNG_GenerateBlock(RNG *, byte*, word32 sz);5�_�                    :   ,    ����                                                                                                                                                                                                                                                                                                                            8           8           v        T��F     �   9   ;   <      /CYASSL_API int  RNG_GenerateByte(RNG *, byte*);5�_�                    4       ����                                                                                                                                                                                                                                                                                                                            8           8           v        T��J     �   3   5   <          struct DRBG* drbg;5�_�                    4       ����                                                                                                                                                                                                                                                                                                                            8           8           v        T��K    �   3   5   <          struct DRBG*drbg;5�_�                    !        ����                                                                                                                                                                                                                                                                                                                            8           8           v        T��X     �       !          CYASSL_LOCAL5�_�                             ����                                                                                                                                                                                                                                                                                                                            7           7           v        T��Y     �                  5�_�                    "        ����                                                                                                                                                                                                                                                                                                                            "           *           v        T��a    �   !   #   :   
   #if defined(CYASSL_MDK_ARM)   
#undef RNG   J#define RNG CyaSSL_RNG   /* for avoiding name conflict in "stm32f2xx.h" */   #endif           -#if defined(HAVE_HASHDRBG) || defined(NO_RC4)           #define DRBG_SEED_LEN (440/8)5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v        T��i     �         1      #include "sha256.h"       /* OS specific seeder */5�_�                             ����                                                                                                                                                                                                                                                                                                                                                  v        T��j     �         /       5�_�      !                       ����                                                                                                                                                                                                                                                                                                                                                  v        T��k     �         1       5�_�       "           !   !       ����                                                                                                                                                                                                                                                                                                                                                  v        T��     �       "   2      5int GenerateSeed(OS_Seed* os, byte* seed, word32 sz);5�_�   !   #           "   !       ����                                                                                                                                                                                                                                                                                                                                                  v        T�Ё     �       "   2      6int GenerateSeed(OS_Seed * os, byte* seed, word32 sz);5�_�   "   $           #   !   "    ����                                                                                                                                                                                                                                                                                                                                                  v        T�Ѓ     �       "   2      5int GenerateSeed(OS_Seed *os, byte* seed, word32 sz);5�_�   #   %           $   !   %    ����                                                                                                                                                                                                                                                                                                                                                  v        T�Є     �       "   2      6int GenerateSeed(OS_Seed *os, byte * seed, word32 sz);5�_�   $   &           %           ����                                                                                                                                                                                                                                                                                                                                                  v        T�Ў     �         2       5�_�   %   '           &          ����                                                                                                                                                                                                                                                                                                                                                  v        T�Г     �         3      typedef uint32_t wor32;5�_�   &   (           '          ����                                                                                                                                                                                                                                                                                                                                                  v        T�Д     �         3      typedef uint32_t wor 32;5�_�   '   )           (          ����                                                                                                                                                                                                                                                                                                                                                  v        T�Е     �         3      typedef uint32_t word 32;5�_�   (   *           )          ����                                                                                                                                                                                                                                                                                                                                                  v        T�И     �         3      #ifdef word325�_�   )   +           *           ����                                                                                                                                                                                                                                                                                                                                                  v        T�К     �         3      typedef uint8_t byte;5�_�   *   ,           +           ����                                                                                                                                                                                                                                                                                                                                                  v        T�Л     �         4       5�_�   +   -           ,          ����                                                                                                                                                                                                                                                                                                                                                    v        T�Т     �         6      #ifdef byte5�_�   ,   .           -           ����                                                                                                                                                                                                                                                                                                                                                    v        T�Ф     �      !   6       5�_�   -               .           ����                                                                                                                                                                                                                                                                                                                            !           !           v        T�Ч    �                 5��