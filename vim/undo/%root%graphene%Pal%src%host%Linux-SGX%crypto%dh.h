Vim�UnDo� ~|���Q�'�@�g,�^bG�Mok   ;                 &       &   &   &    U ��    _�                     <        ����                                                                                                                                                                                                                                                                                                                            <           ?           v        U F�     �   ;   =   C      #ifdef __cplusplus       } /* extern "C" */   #endif       #endif /* CTAO_CRYPT_DH_H */5�_�                    =        ����                                                                                                                                                                                                                                                                                                                            <           <           v        U F�     �   <   =           5�_�                    =        ����                                                                                                                                                                                                                                                                                                                            <           <           v        U F�     �   <   =          #endif /* NO_DH */5�_�                    :        ����                                                                                                                                                                                                                                                                                                                            <           <           v        U F�     �   9   :           5�_�                            ����                                                                                                                                                                                                                                                                                                                            ;           ;           v        U F�     �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                            :           :           v        U F�     �                #ifndef NO_DH5�_�                            ����                                                                                                                                                                                                                                                                                                                            9           9           v        U F�     �                 5�_�      	                     ����                                                                                                                                                                                                                                                                                                                            8           8           v        U G     �         9      %#include <cyassl/ctaocrypt/integer.h>5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                            8           8           v        U G     �         9      #include "integer.h>5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                            8           8           v        U G     �                ##include <cyassl/ctaocrypt/types.h>5�_�   
                         ����                                                                                                                                                                                                                                                                                                                            7           7           v        U G	     �                $#include <cyassl/ctaocrypt/random.h>5�_�                            ����                                                                                                                                                                                                                                                                                                                            6           6           v        U G	     �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                            5           5           v        U G
     �                #ifdef __cplusplus5�_�                           ����                                                                                                                                                                                                                                                                                                                            4           4           v        U G
     �                    extern "C" {5�_�                            ����                                                                                                                                                                                                                                                                                                                            3           3           v        U G     �                #endif5�_�                            ����                                                                                                                                                                                                                                                                                                                            2           2           v        U G     �                 5�_�                    !        ����                                                                                                                                                                                                                                                                                                                            1           1           v        U G     �   -   /          DCYASSL_API int DhParamsLoad(const byte* input, word32 inSz, byte* p,�   +   -          MCYASSL_API int DhSetKey(DhKey* key, const byte* p, word32 pSz, const byte* g,�   )   +          KCYASSL_API int DhKeyDecode(const byte* input, word32* inOutIdx, DhKey* key,�   %   '          @CYASSL_API int DhAgree(DhKey* key, byte* agree, word32* agreeSz,�   #   %          BCYASSL_API int DhGenerateKeyPair(DhKey* key, RNG* rng, byte* priv,�   !   #          &CYASSL_API void FreeDhKey(DhKey* key);�       "          &CYASSL_API void InitDhKey(DhKey* key);5�_�                    $   ,    ����                                                                                                                                                                                                                                                                                                                            1           1           v        U G      �   #   %   2      7int DhGenerateKeyPair(DhKey* key, RNG* rng, byte* priv,5�_�                    2        ����                                                                                                                                                                                                                                                                                                                            1           1           v        U G,    �   1   2           5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             U GR     �      "   1       �         1    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             U GS     �         :      #include <stdint.h>5�_�                    "        ����                                                                                                                                                                                                                                                                                                                                                             U GU     �       "   ;           �   !   #   ;       5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             U G\     �   9   ;          #endif /* CTAO_CRYPT_DH_H */�   7   9          I                            word32* pInOutSz, byte* g, word32* gInOutSz);�   6   8          9int DhParamsLoad(const byte* input, word32 inSz, byte* p,�   4   6          Bint DhSetKey(DhKey* key, const byte* p, word32 pSz, const byte* g,�   2   4          @int DhKeyDecode(const byte* input, word32* inOutIdx, DhKey* key,�   /   1          M                       const byte* priv, word32 privSz, const byte* otherPub,�   .   0          5int DhAgree(DhKey* key, byte* agree, word32* agreeSz,�   -   /          K                                 word32* privSz, byte* pub, word32* pubSz);�   ,   .          -int DhGenerateKeyPair(DhKey* key, byte* priv,�   *   ,          void FreeDhKey(DhKey* key);�   )   +          void InitDhKey(DhKey* key);�   %   '          C    mp_int p, g;                            /* group parameters  */�   #   %          /* Diffie-Hellman Key */�                P * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA�                > * along with this program; if not, write to the Free Software�                D * You should have received a copy of the GNU General Public License�                / * GNU General Public License for more details.�                @ * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the�                A * but WITHOUT ANY WARRANTY; without even the implied warranty of�                < * CyaSSL is distributed in the hope that it will be useful,�   	             & * (at your option) any later version.�      
          D * the Free Software Foundation; either version 2 of the License, or�      	          G * it under the terms of the GNU General Public License as published by�                A * CyaSSL is free software; you can redistribute it and/or modify�                 * This file is part of CyaSSL.�                ' * Copyright (C) 2006-2014 wolfSSL Inc.�                 /* dh.h5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             U G`    �   9   ;          #endif / *CTAO_CRYPT_DH_H */�   %   '          C    mp_int p, g;                            / *group parameters  */�   #   %          / *Diffie-Hellman Key */�                 / *dh.h5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             U Gv     �          :      /* dh.h5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             U Gv     �          ;       �         ;    5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             U Gx    �                 5�_�                    1        ����                                                                                                                                                                                                                                                                                                                            -           <           v        U G�    �   :   <          I                            word32 *pInOutSz, byte *g, word32 *gInOutSz);�   8   :          $                        word32 gSz);�   6   8          #                           word32);�   3   5          %                       word32 pubSz);�   2   4          M                       const byte *priv, word32 privSz, const byte *otherPub,�   0   2          K                                 word32 *privSz, byte *pub, word32 *pubSz);5�_�                    $        ����                                                                                                                                                                                                                                                                                                                                                             U H�     �   #   '   =       5�_�                    %        ����                                                                                                                                                                                                                                                                                                                                                             U H�    �   $   &   ?       5�_�                     8       ����                                                                                                                                                                                                                                                                                                                                                             U `�     �   7   9   ?      @int DhKeyDecode(const byte *input, word32 *inOutIdx, DhKey *key,5�_�      !               8        ����                                                                                                                                                                                                                                                                                                                                                             U `�     �   7   8          Bint DhKeyDecode(const bytedd *input, word32 *inOutIdx, DhKey *key,5�_�       "           !   8       ����                                                                                                                                                                                                                                                                                                                                                             U `�     �   7   8                          word32);5�_�   !   #           "   :        ����                                                                                                                                                                                                                                                                                                                                                             U `�     �   9   :          9int DhParamsLoad(const byte *input, word32 inSz, byte *p,5�_�   "   &           #   :       ����                                                                                                                                                                                                                                                                                                                                                             U `�   	 �   9   :          >                 word32 *pInOutSz, byte *g, word32 *gInOutSz);5�_�   #       %       &           ����                                                                                                                                                                                                                                                                                                                                                             U ��    �                P  *Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA�                >  *along with this program; if not, write to the Free Software�                D  *You should have received a copy of the GNU General Public License�                /  *GNU General Public License for more details.�                @  *MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the�                A  *but WITHOUT ANY WARRANTY; without even the implied warranty of�                <  *CyaSSL is distributed in the hope that it will be useful,�                &  *(at your option) any later version.�                D  *the Free Software Foundation; either version 2 of the License, or�   
             G  *it under the terms of the GNU General Public License as published by�   	             A  *CyaSSL is free software; you can redistribute it and/or modify�      	            *This file is part of CyaSSL.�                '  *Copyright (C) 2006-2014 wolfSSL Inc.5�_�   #       $   &   %           ����                                                                                                                                                                                                                                                                                                                                                             U ��     �                ' * Copyright (C) 2006-2014 wolfSSL Inc.�      	           * This file is part of CyaSSL.�   	             A * CyaSSL is free software; you can redistribute it and/or modify�   
             G * it under the terms of the GNU General Public License as published by�                D * the Free Software Foundation; either version 2 of the License, or�                & * (at your option) any later version.�                < * CyaSSL is distributed in the hope that it will be useful,�                A * but WITHOUT ANY WARRANTY; without even the implied warranty of�                @ * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the�                / * GNU General Public License for more details.�                D * You should have received a copy of the GNU General Public License�                > * along with this program; if not, write to the Free Software�                P * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA�   *   ,          C    mp_int p, g;                            /* group parameters * /5�_�   #           %   $           ����                                                                                                                                                                                                                                                                                                                                                             U ��     �                ' * Copyright (C) 2006-2014 wolfSSL Inc.�      	           * This file is part of CyaSSL.�   	             A * CyaSSL is free software; you can redistribute it and/or modify�   
             G * it under the terms of the GNU General Public License as published by�                D * the Free Software Foundation; either version 2 of the License, or�                & * (at your option) any later version.�                < * CyaSSL is distributed in the hope that it will be useful,�                A * but WITHOUT ANY WARRANTY; without even the implied warranty of�                @ * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the�                / * GNU General Public License for more details.�                D * You should have received a copy of the GNU General Public License�                > * along with this program; if not, write to the Free Software�                P * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA�   *   ,          C    mp_int p, g;                            /* group parameters * /5��