Vim�UnDo� n4���z���D�x
,x�?�78v����                                     T��    _�                             ����                                                                                                                                                                                                                                                                                                                                                             T     �          Q      /**5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             T     �          S       5�_�                            ����                                                                                                                                                                                                                                                                                                                                       R           v        T     �              Q   /**    *    * INTEL CONFIDENTIAL   ; * Copyright(c) 2013 Intel Corporation All Rights Reserved.    *   M * The source code contained or described herein and all documents related to   O * the source code ("Material") are owned by Intel Corporation or its suppliers   L * or licensors. Title to the Material remains with Intel Corporation or its   O * suppliers and licensors. The Material contains trade secrets and proprietary   L * and confidential information of Intel or its suppliers and licensors. The   P * Material is protected by worldwide copyright and trade secret laws and treaty   Q * provisions. No part of the Material may be used, copied, reproduced, modified,   M * published, uploaded, posted, transmitted, distributed, or disclosed in any   8 * way without Intel's prior express written permission.    *   M * No license under any patent, copyright, trade secret or other intellectual   O * property right is granted to or conferred upon you by disclosure or delivery   N * of the Materials, either expressly, by implication, inducement, estoppel or   I * otherwise. Any license under such intellectual property rights must be   . * express and approved by Intel(R)in writing.    *    */   #pragma once       #ifndef _SGX_ERROR_H_   #define _SGX_ERROR_H_       5#define SGX_MK_ERROR(x)              (0x00000000|(x))       typedef enum _status_t   {   8    SGX_SUCCESS                  = SGX_MK_ERROR(0x0000),       T    SGX_ERROR_UNEXPECTED         = SGX_MK_ERROR(0x0001),      /* Unexpected error */   ^    SGX_ERROR_INVALID_PARAMETER  = SGX_MK_ERROR(0x0002),      /* The parameter is incorrect */   }    SGX_ERROR_OUT_OF_MEMORY      = SGX_MK_ERROR(0x0003),      /* Not enough memory is available to complete this operation */   �    SGX_ERROR_ENCLAVE_LOST       = SGX_MK_ERROR(0x0004),      /* Enclave lost after power transition or used in child process created by linux:fork() */   r    SGX_ERROR_INVALID_STATE      = SGX_MK_ERROR(0x0005),      /* SGX API is invoked in incorrect order or state */       d    SGX_ERROR_INVALID_FUNCTION   = SGX_MK_ERROR(0x1001),      /* The ecall/ocall index is invalid */   ]    SGX_ERROR_OUT_OF_TCS         = SGX_MK_ERROR(0x1003),      /* The enclave is out of TCS */   Z    SGX_ERROR_ENCLAVE_CRASHED    = SGX_MK_ERROR(0x1006),      /* The enclave is crashed */   �    SGX_ERROR_ECALL_NOT_ALLOWED  = SGX_MK_ERROR(0x1007),      /* The ECALL is not allowed at this time, e.g. ecall is blocked by the dynamic entry table, or nested ecall is not allowed during initialization */   �    SGX_ERROR_OCALL_NOT_ALLOWED  = SGX_MK_ERROR(0x1008),      /* The OCALL is not allowed at this time, e.g. ocall is not allowed during exception handling */       k    SGX_ERROR_UNDEFINED_SYMBOL   = SGX_MK_ERROR(0x2000),      /* The enclave image has undefined symbol. */   e    SGX_ERROR_INVALID_ENCLAVE    = SGX_MK_ERROR(0x2001),      /* The enclave image is not correct. */   ]    SGX_ERROR_INVALID_ENCLAVE_ID = SGX_MK_ERROR(0x2002),      /* The enclave id is invalid */   \    SGX_ERROR_INVALID_SIGNATURE  = SGX_MK_ERROR(0x2003),      /* The signature is invalid */   �    SGX_ERROR_NDEBUG_ENCLAVE     = SGX_MK_ERROR(0x2004),      /* The enclave is signed as product enclave, and can not be created as debuggable enclave. */   s    SGX_ERROR_OUT_OF_EPC         = SGX_MK_ERROR(0x2005),      /* Not enough EPC is available to load the enclave */   Y    SGX_ERROR_NO_DEVICE          = SGX_MK_ERROR(0x2006),      /* Can't open SGX device */   a    SGX_ERROR_MEMORY_MAP_CONFLICT= SGX_MK_ERROR(0x2007),      /* Page mapping failed in driver */   ^    SGX_ERROR_INVALID_METADATA   = SGX_MK_ERROR(0x2009),      /* The metadata is incorrect. */   h    SGX_ERROR_DEVICE_BUSY        = SGX_MK_ERROR(0x200c),      /* Device is busy, mostly EINIT failed. */   �    SGX_ERROR_INVALID_VERSION    = SGX_MK_ERROR(0x200d),      /* Metadata version is inconsistent between uRTS and sgx_sign or uRTS is incompatible with current platform. */   �    SGX_ERROR_MODE_INCOMPATIBLE  = SGX_MK_ERROR(0x200e),      /* The target enclave 32/64 bit mode or sim/hw mode is incompatible with the mode of current uRTS. */   \    SGX_ERROR_ENCLAVE_FILE_ACCESS = SGX_MK_ERROR(0x200F),     /* Can't open enclave file. */           SGX_ERROR_MAC_MISMATCH       = SGX_MK_ERROR(0x3001),      /* Indicates verification error for reports, sealed datas, etc */   a    SGX_ERROR_INVALID_ATTRIBUTE  = SGX_MK_ERROR(0x3002),      /* The enclave is not authorized */   r    SGX_ERROR_INVALID_CPUSVN     = SGX_MK_ERROR(0x3003),      /* The cpu svn is beyond platform's cpu svn value */   u    SGX_ERROR_INVALID_ISVSVN     = SGX_MK_ERROR(0x3004),      /* The isv svn is greater than the enclave's isv svn */   h    SGX_ERROR_INVALID_KEYNAME    = SGX_MK_ERROR(0x3005),      /* The key name is an unsupported value */       �    SGX_ERROR_SERVICE_UNAVAILABLE       = SGX_MK_ERROR(0x4001),   /* Indicates aesm not response or the requested service is not supported */   `    SGX_ERROR_SERVICE_TIMEOUT           = SGX_MK_ERROR(0x4002),   /* Request to aesm time out */   n    SGX_ERROR_AE_INVALID_EPIDBLOB       = SGX_MK_ERROR(0x4003),   /* Indicates epid blob verification error */   ^    SGX_ERROR_SERVICE_INVALID_PRIVILEGE = SGX_MK_ERROR(0x4004),   /* Get launch token error */   j    SGX_ERROR_EPID_MEMBER_REVOKED       = SGX_MK_ERROR(0x4005),   /* The EPID group membership revoked. */   _    SGX_ERROR_UPDATE_NEEDED             = SGX_MK_ERROR(0x4006),   /* SGX needs to be updated */   m    SGX_ERROR_AE_SESSION_INVALID        = SGX_MK_ERROR(0x4008),   /* Session is invalid or ended by server */   y    SGX_ERROR_BUSY                      = SGX_MK_ERROR(0x400a),   /* The requested service is temporarily not availabe */   �    SGX_ERROR_MC_NOT_FOUND              = SGX_MK_ERROR(0x400c),   /* The Monotonic Counter doesn't exist or has been invalided */   }    SGX_ERROR_MC_NO_ACCESS_RIGHT        = SGX_MK_ERROR(0x400d),   /* Caller doesn't have the access right to specified VMC */   g    SGX_ERROR_MC_USED_UP                = SGX_MK_ERROR(0x400e),   /* Monotonic counters are used out */   s    SGX_ERROR_MC_OVER_QUOTA             = SGX_MK_ERROR(0x400f),   /* Monotonic counters exceeds quota limitation */       } sgx_status_t;       #endif5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v        T     �                #endif5�_�                            ����                                                                                                                                                                                                                                                                                                                                                  v        T    �                 5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             T     �                  #define SGX_SUCCESS   05�_�                            ����                                                                                                                                                                                                                                                                                                                                                             T     �                5�_�      	                     ����                                                                                                                                                                                                                                                                                                                                                             T     �               typedef sgx_status_t 5�_�      
           	          ����                                                                                                                                                                                                                                                                                                                                                             T     �               typedef int sgx_status_t 5�_�   	              
           ����                                                                                                                                                                                                                                                                                                                                                             T    �                  5�_�   
                        ����                                                                                                                                                                                                                                                                                                                                                             T     �                 #define SGX_SUCCESS   05�_�                            ����                                                                                                                                                                                                                                                                                                                                                             T��     �                 typedef int sgx_status_t;5�_�                            ����                                                                                                                                                                                                                                                                                                                                                             T��     �                  5�_�                             ����                                                                                                                                                                                                                                                                                                                                                             T��    �                 #define SGX_SUCCESS   05��