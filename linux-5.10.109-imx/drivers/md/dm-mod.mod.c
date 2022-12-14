#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcfe5891d, "module_layout" },
	{ 0x5989d487, "kobject_put" },
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5d0fce31, "bio_split" },
	{ 0xa13d5551, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xcb8c753b, "mempool_exit" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5171958, "blk_mq_requeue_request" },
	{ 0x9c834ad1, "blk_cleanup_queue" },
	{ 0xa7b3181c, "up_read" },
	{ 0x13f650d4, "bio_alloc_bioset" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x86f6b99d, "synchronize_rcu_expedited" },
	{ 0x3892fa63, "mem_map" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe9b88a72, "blk_mq_run_hw_queues" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x97255bdf, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xda81b156, "bioset_init_from_src" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x79bd15d4, "blk_limits_io_opt" },
	{ 0xeadf003f, "blk_mq_start_request" },
	{ 0x877ebab3, "bd_link_disk_holder" },
	{ 0x2ae43041, "kobject_uevent" },
	{ 0xaa4d8879, "__srcu_read_unlock" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb7eaf944, "blk_queue_split" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x50c89f23, "__alloc_percpu" },
	{ 0xf81a777f, "bioset_init" },
	{ 0xbaa65f43, "param_ops_bool" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xcede3f0e, "bio_advance" },
	{ 0x8aa6d38c, "bio_uninit" },
	{ 0x999e8297, "vfree" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x75b8c7a0, "blk_mq_complete_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7887d514, "blk_set_queue_dying" },
	{ 0x438c7ac4, "__alloc_pages_nodemask" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x72d6a8e3, "blk_limits_io_min" },
	{ 0x491c9b1b, "nonseekable_open" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x37917ffe, "lookup_bdev" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xfb1d7438, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0xd41a3015, "__alloc_disk_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x3588c767, "blk_insert_cloned_request" },
	{ 0x50bee32a, "bd_set_nr_sectors" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xf362dc7f, "arm_clear_user" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x2ba71c1b, "misc_register" },
	{ 0x4c99ad90, "__blkdev_driver_ioctl" },
	{ 0x5f754e5a, "memset" },
	{ 0xb16a4307, "bio_init" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xb1dad6bd, "bd_unlink_disk_holder" },
	{ 0xd471c4ae, "blk_alloc_queue" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc7461efb, "blk_set_stacking_limits" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x66657274, "kmalloc_order" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8039b3fd, "_totalram_pages" },
	{ 0xd273f33c, "cleanup_srcu_struct" },
	{ 0xf5328728, "del_gendisk" },
	{ 0x226f1b7, "disk_end_io_acct" },
	{ 0x6a8ab9b5, "blk_register_queue" },
	{ 0x54b9d193, "blk_mq_free_tag_set" },
	{ 0x76ddf02, "bio_add_page" },
	{ 0xad7319f7, "zero_fill_bio_iter" },
	{ 0xc2b13ffd, "kobject_init_and_add" },
	{ 0x8a965ddd, "blk_stack_limits" },
	{ 0xdc81901a, "wait_for_completion_io" },
	{ 0x301298a, "bio_chain" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0x328a05f1, "strncpy" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc10fddb8, "name_to_dev_t" },
	{ 0x93a6e0b2, "io_schedule" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0xf0ef52e8, "down" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x1d223c91, "noop_llseek" },
	{ 0x56beaf03, "submit_bio_noacct" },
	{ 0xbe5a737b, "thaw_bdev" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x40582fd2, "__srcu_read_lock" },
	{ 0x53c0aa7f, "blkdev_get_by_dev" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x879e977a, "blk_update_request" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0x985a1be6, "init_srcu_struct" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1b27d1b4, "bio_endio" },
	{ 0x93550459, "bio_put" },
	{ 0x6d94243b, "kobject_uevent_env" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xa346975c, "idr_remove" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0x40b36fa8, "bioset_exit" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xa3cb3b06, "blk_mq_init_allocated_queue" },
	{ 0x5489237b, "blk_queue_flag_clear" },
	{ 0x258e5df1, "module_put" },
	{ 0x94d7691b, "submit_bio" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd7dc9514, "__free_pages" },
	{ 0x54ff774e, "blkdev_put" },
	{ 0xd8410611, "mempool_alloc" },
	{ 0x67335bbf, "blk_queue_flag_set" },
	{ 0x21c1c5f2, "bdevname" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd7e8d5bf, "blk_queue_update_readahead" },
	{ 0x1000e51, "schedule" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x60e1ecc1, "put_disk" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x4446604b, "empty_zero_page" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x44f7287e, "blk_mq_alloc_tag_set" },
	{ 0x66aec4d5, "blk_mq_delay_kick_requeue_list" },
	{ 0x794765d1, "mempool_free" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x459b1237, "blk_mq_end_request" },
	{ 0xa63ff5f7, "kmem_cache_create" },
	{ 0xf2ee7a43, "synchronize_srcu" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x1984d421, "out_of_line_wait_on_bit" },
	{ 0x4723ff8e, "blk_rq_unprep_clone" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1dd2eae5, "blk_mq_kick_requeue_list" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2c4bf547, "blk_queue_write_cache" },
	{ 0x7d31a083, "freeze_bdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x4cfb8da1, "blk_mq_quiesce_queue" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x81e6e50d, "blk_mq_unquiesce_queue" },
	{ 0xb7eeef60, "blk_rq_prep_clone" },
	{ 0xc4657dc8, "mempool_init" },
	{ 0x581cde4e, "up" },
	{ 0xd63fafc2, "div64_u64_rem" },
	{ 0xea3fea9b, "dm_kobject_release" },
	{ 0x13c1c77a, "__bio_clone_fast" },
	{ 0x6fbe4717, "idr_replace" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x49970de8, "finish_wait" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x397733c6, "blk_mq_queue_inflight" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x807c3a, "vmalloc_to_page" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe3cc3c6f, "param_ops_ulong" },
	{ 0xced4b963, "param_ops_uint" },
	{ 0x47925794, "idr_find" },
	{ 0x54f56135, "bdget_disk" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0xac04ed3, "misc_deregister" },
	{ 0x159e3dd5, "bdput" },
	{ 0x42c15ef9, "disk_start_io_acct" },
	{ 0xcc66e479, "device_add_disk_no_queue_reg" },
	{ 0x825ff9f1, "try_module_get" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xe914e41e, "strcpy" },
	{ 0xcf5a03b8, "set_disk_ro" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "98F21EDE7CFEA9F767A68AA");
