syn match ErrorLeadSpace /^ \+/
syn match ErrorTailSpace /\s\+$/
set textwidth=78

syn keyword cOperator likely unlikely __typeof__ __builtin_constant_p
syn keyword cOperator BUG BUG_ON assert_spin_locked might_sleep WARN_ON WARN
syn keyword cStorageClass __attribute__ __always_inline __user

syn keyword cStorageClass __list_add list_add list_add_tail __list_del list_del list_replace list_replace_init list_del_init list_move list_move_tail list_is_last list_empty list_empty_careful list_rotate_left list_is_singular __list_cut_position list_cut_position __list_splice list_splice list_splice_tail list_splice_init list_splice_tail_init list_entry list_first_entry list_prepare_entry list_safe_reset_next hlist_unhashed hlist_empty __hlist_del hlist_del hlist_del_init hlist_add_head hlist_add_before hlist_add_after hlist_move_list hlist_entry
syn keyword cRepeat list_for_each list_for_each_entry list_for_each_entry_continue list_for_each_entry_safe __list_for_each list_for_each_prev list_for_each_safe list_for_each_prev_safe list_for_each_entry_reverse list_for_each_entry_continue_reverse list_for_each_entry_from list_for_each_entry_safe_continue list_for_each_entry_safe_from list_for_each_entry_safe_reverse
syn keyword cRepeat hlist_for_each hlist_for_each_safe hlist_for_each_entry hlist_for_each_entry_continue hlist_for_each_entry_from hlist_for_each_entry_safe
syn keyword cStorageClass __list_add_rcu list_add_rcu list_add_tail_rcu list_del_rcu hlist_del_init_rcu list_replace_rcu list_splice_init_rcu list_entry_rcu list_first_entry_rcu hlist_del_rcu hlist_replace_rcu hlist_add_head_rcu hlist_add_before_rcu hlist_add_after_rcu
syn keyword cRepeat __list_for_each_rcu list_for_each_entry_rcu list_for_each_continue_rcu list_for_each_entry_continue_rcu __hlist_for_each_rcu hlist_for_each_entry_rcu hlist_for_each_entry_rcu_bh hlist_for_each_entry_continue_rcu hlist_for_each_entry_continue_rcu_bh

syn keyword cType __s8 __u8 __s16 __u16 __s32 __u32 __s64 __u64 s8 u8 s16 u16 s32 u32 s64 u64 loff_t

syn keyword cPreCondit mutex_lock mutex_lock_nested mutex_unlock mutex_lock_interruptible_nested
syn keyword cPreCondit spin_lock spin_unlock spin_lock_irqsave spin_unlock_irqrestore spin_lock_nested spin_lock_irq spin_unlock_irq write_lock_irq write_unlock_irq spin_lock_bh spin_unlock_bh
syn keyword cPreCondit read_lock read_unlock read_lock_irq read_unlock_irq
syn keyword cPreCondit rcu_read_lock rcu_read_unlock
syn keyword cPreCondit atomic_dec_and_lock

syn keyword cPreCondit kmalloc vmalloc kfree vfree kzalloc __get_free_pages kmem_cache_alloc kmem_cache_free
syn keyword cPreCondit up_write down_write up_read down_read down_read_nested down_write_nested

syn keyword cPreCondit rcu_synchronize schedule schedule_timeout

syn keyword cConstant GFP_ZONEMASK GFP_NOWAIT GFP_ATOMIC GFP_NOIO GFP_NOFS GFP_KERNEL GFP_TEMPORARY GFP_USER GFP_HIGHUSER GFP_HIGHUSER_MOVABLE GFP_IOFS GFP_THISNODE GFP_THISNODE GFP_MOVABLE_MASK GFP_RECLAIM_MASK GFP_BOOT_MASK GFP_CONSTRAINT_MASK GFP_SLAB_BUG_MASK GFP_DMA GFP_DMA32 GFP_ZONE_TABLE GFP_ZONE_BAD

syn keyword cConstant ERESTARTSYS ERESTARTNOINTR ERESTARTNOHAND ENOIOCTLCMD ERESTART_RESTARTBLOCK EDIVERGE ENODATA

syn keyword cType struct enum
syn match cType /ElfW(\w\+)/
syn match cType /Elf\(32\|64\)\?_\w\+/

syn match cPreProc /#\s*\(ifdef\|ifndef\|else\|elif\|endif\|define\|undef\)/
syn match cPreProc /#\s*if\s\+[^0\s].*/

syn keyword cStorageClass static inline auto __thread

set nofoldenable
set foldmethod=syntax
