Vim�UnDo� +P͙��T�%_6��'�F��.ѱ5K1�R�x�   e   @int sgx_getkey (sgx_arch_keyrequest_t * keyrequest, void * key);   /         3       3   3   3    U ��    _�                            ����                                                                                                                                                                                                                                                                                                                                                             T�U     �         �      #ifndef SGX_ARCH_H5�_�                           ����                                                                                                                                                                                                                                                                                                                                                             T�W    �         �      #define AGX_ARCH_H5�_�                       	    ����                                                                                                                                                                                                                                                                                                                                                             T�\    �         �      #define AGX_API_H5�_�                    �       ����                                                                                                                                                                                                                                                                                                                                                             T�b    �                 #endif /* SGX_ARCH_H */5�_�                    X       ����                                                                                                                                                                                                                                                                                                                                                             T��     �   W   Y   �      typedef struct _cpu_context_t5�_�                    g        ����                                                                                                                                                                                                                                                                                                                                                             T��     �   f   h   �       typedef struct _exception_info_t5�_�                    B       ����                                                                                                                                                                                                                                                                                                                                                             T��     �   A   C   �      typedef struct _cpu_context_t5�_�      	              ;   "    ����                                                                                                                                                                                                                                                                                                                                                             T��     �   :   <   �      "typedef enum _sgx_exception_type_t5�_�      
           	   /   $    ����                                                                                                                                                                                                                                                                                                                                                             T��    �   .   0   �      $typedef enum _sgx_exception_vector_t5�_�   	              
   0        ����                                                                                                                                                                                                                                                                                                                                                             T��     �   .   0   �      typedef enum   {�   /   1   �      {5�_�   
                 ;        ����                                                                                                                                                                                                                                                                                                                                                             T��     �   9   ;         typedef enum   {�   :   <         {5�_�                    A        ����                                                                                                                                                                                                                                                                                                                                                             T��     �   ?   A   ~      typedef struct   {�   @   B   ~      {5�_�                    V        ����                                                                                                                                                                                                                                                                                                                                                             T��     �   T   V   }      typedef struct   {�   U   W   }      {5�_�                    d        ����                                                                                                                                                                                                                                                                                                                                                             T�    �   b   d   |      typedef struct   {�   c   e   |      {5�_�                    ?        ����                                                                                                                                                                                                                                                                                                                                                             T吝     �   >   ?          ,#if defined (_M_X64) || defined (__x86_64__)5�_�                    S        ����                                                                                                                                                                                                                                                                                                                            S           `          v���    T隣    �   R   T   z      #else   typedef struct {       uint32_t eax;       uint32_t ecx;       uint32_t edx;       uint32_t ebx;       uint32_t esp;       uint32_t ebp;       uint32_t esi;       uint32_t edi;       uint32_t eflags;       uint32_t eip;   } sgx_cpu_context_t;   #endif    5�_�                    Z   &    ����                                                                                                                                                                                                                                                                                                                                                             T���     �   Y   [   l      Dtypedef int (*sgx_exception_handler_t)(sgx_exception_info_t * info);5�_�                    $   '    ����                                                                                                                                                                                                                                                                                                                                                             T���     �   #   %   l      =sgx_status_t sgx_ocall (const unsigned int index, void * ms);5�_�                    $   ,    ����                                                                                                                                                                                                                                                                                                                                                             T���     �   #   %   l      >sgx_status_t sgx_ocall (const unsigned long index, void * ms);5�_�                    $       ����                                                                                                                                                                                                                                                                                                                                                             T���    �   #   %   l      =sgx_status_t sgx_ocall (const unsigned long code, void * ms);5�_�                    j        ����                                                                                                                                                                                                                                                                                                                                                             T���     �   i   j          6sgx_status_t sgx_read_rand (void * rand, size_t size);5�_�                    j        ����                                                                                                                                                                                                                                                                                                                                                             T���    �   i   j           5�_�                    +        ����                                                                                                                                                                                                                                                                                                                                                             U �E     �   *   -   j       5�_�                    j        ����                                                                                                                                                                                                                                                                                                                                                             U �J   	 �   i   l   k       5�_�                    +        ����                                                                                                                                                                                                                                                                                                                                                             U �T     �   *   .   l       5�_�                    ,        ����                                                                                                                                                                                                                                                                                                                                                             U �U     �   +   -   n       5�_�                    ,   >    ����                                                                                                                                                                                                                                                                                                                                                             U �r     �   +   -   n      Lint sgx_report (sgx_arch_hash_t mrenclave, sgx_arch_attributes *attributes);5�_�                    ,   ?    ����                                                                                                                                                                                                                                                                                                                                                             U �t     �   +   -   n      Mint sgx_report (sgx_arch_hash_t mrenclave, sgx_arch_attributes_ *attributes);5�_�                    ,        ����                                                                                                                                                                                                                                                                                                                                                             U �x     �   +   -   n      Nint sgx_report (sgx_arch_hash_t mrenclave, sgx_arch_attributes_t *attributes);5�_�                    ,   D    ����                                                                                                                                                                                                                                                                                                                                                             U �{     �   +   -   n      Pint sgx_report (sgx_arch_hash_t * mrenclave, sgx_arch_attributes_t *attributes);5�_�                     ,   -    ����                                                                                                                                                                                                                                                                                                                                                             U �~   
 �   +   .   n      Qint sgx_report (sgx_arch_hash_t * mrenclave, sgx_arch_attributes_t * attributes);5�_�      !               /        ����                                                                                                                                                                                                                                                                                                                                                             U �     �   .   /          #if 05�_�       "           !   l        ����                                                                                                                                                                                                                                                                                                                                                             U �     �   k   l          #endif5�_�   !   #           "   ]        ����                                                                                                                                                                                                                                                                                                                            ]           l           v        U �    �   \              Etypedef int (*sgx_exception_handler_t) (sgx_exception_info_t * info);       #/* sgx_register_exception_handler()   + *      register a custom exception handler    * Parameter   K *      is_first_handler - the order in which the handler should be called.   N * if the parameter is nonzero, the handler is the first handler to be called.   J * if the parameter is zero, the handler is the last handler to be called.   B *      exception_handler - a pointer to the handler to be called.    * Return Value    *      handler - success    *         NULL - fail   */   %void * sgx_register_exception_handler   8            (sgx_exception_handler_t exception_handler);       #endif /* SGX_API_H */5�_�   "   $           #   ,       ����                                                                                                                                                                                                                                                                                                                                                             U �     �   +   -   ]      ,int sgx_report (sgx_arch_hash_t * mrenclave,5�_�   #   %           $   -       ����                                                                                                                                                                                                                                                                                                                                                             U �     �   ,   .   ]      4                sgx_arch_attributes_t * attributes);5�_�   $   &           %   +        ����                                                                                                                                                                                                                                                                                                                                                             U �     �   *   .   ]       5�_�   %   '           &   ,        ����                                                                                                                                                                                                                                                                                                                                                             U �     �   +   /   _       5�_�   &   (           '   .       ����                                                                                                                                                                                                                                                                                                                                                             U ��    �   ,   .   a      "                void * reportdata,   sgx_arch_report_t * report);�   -   /   a      ,                sgx_arch_report_t * report);5�_�   '   )           (   0   6    ����                                                                                                                                                                                                                                                                                                                                                             U ��     �   /   2   `      8                    sgx_arch_attributes_t * attributes);5�_�   (   *           )   1   .    ����                                                                                                                                                                                                                                                                                                                                                             U ��     �   0   4   a      .                    sgx_arch_report * report);5�_�   )   +           *   3       ����                                                                                                                                                                                                                                                                                                                                                             U ��     �   2   4   c      int sgx_get_report5�_�   *   ,           +   3       ����                                                                                                                                                                                                                                                                                                                                                             U ��     �   2   4   c      int sgx_verify_report5�_�   +   -           ,   3   &    ����                                                                                                                                                                                                                                                                                                                                                             U ��     �   2   4   c      &int sgx_verify_report (sgx_arch_report5�_�   ,   .           -   1   #    ����                                                                                                                                                                                                                                                                                                                                                             U ��     �   0   2   c      .                    sgx_arch_report * report);5�_�   -   /           .   3   (    ����                                                                                                                                                                                                                                                                                                                                                             U ��    �   2   4   c      (int sgx_verify_report (sgx_arch_report_t5�_�   .   0           /   .        ����                                                                                                                                                                                                                                                                                                                                                             U �     �   -   1   c       5�_�   /   1           0   /        ����                                                                                                                                                                                                                                                                                                                                                             U �    �   .   0   e       5�_�   0   2           1   ,       ����                                                                                                                                                                                                                                                                                                                                                             U ��     �   +   -   e      3int sgx_report (sgx_arch_targetinfo_t * targetinfo,5�_�   1   3           2   -       ����                                                                                                                                                                                                                                                                                                                                                             U ��     �   ,   .   e      ?                void * reportdata, sgx_arch_report_t * report);5�_�   2               3   /       ����                                                                                                                                                                                                                                                                                                                                                             U ��    �   .   0   e      @int sgx_getkey (sgx_arch_keyrequest_t * keyrequest, void * key);5��