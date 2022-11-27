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
	{ 0x6ddd6fd3, "pnfs_unregister_layoutdriver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc461aebc, "pnfs_generic_pg_init_write" },
	{ 0xec4b0e56, "fs_bio_set" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x13f650d4, "bio_alloc_bioset" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xaaa14361, "nfs_dreq_bytes_left" },
	{ 0x958a241e, "page_address" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xe2c2bea1, "rpc_unlink" },
	{ 0x411096f7, "pnfs_ld_write_done" },
	{ 0xd984f1b, "pnfs_error_mark_layout_for_return" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x61e2a07a, "dput" },
	{ 0x27c43a80, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x3f23a628, "nfs4_mark_deviceid_unavailable" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xcbda652a, "rpc_mkpipe_data" },
	{ 0xfdc4f800, "rpc_mkpipe_dentry" },
	{ 0x438c7ac4, "__alloc_pages_nodemask" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd9ad01a1, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0xc294d0ae, "rpc_get_sb_net" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x80fd83bc, "pnfs_generic_pg_cleanup" },
	{ 0xb9671072, "pnfs_generic_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x4f790161, "xdr_init_decode_pages" },
	{ 0x98166fd8, "rpc_queue_upcall" },
	{ 0x1c461321, "unregister_pernet_subsys" },
	{ 0xf8e0ade7, "kmap_atomic_high_prot" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x76ddf02, "bio_add_page" },
	{ 0xc191d016, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xae38fb0d, "blkdev_get_by_path" },
	{ 0xfc176fca, "nfs_pageio_reset_write_mds" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdd270658, "rpc_d_lookup_sb" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x53c0aa7f, "blkdev_get_by_dev" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xe902062a, "nfs4_put_deviceid_node" },
	{ 0x93550459, "bio_put" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x258e5df1, "module_put" },
	{ 0xfdffaae, "rpc_pipe_generic_upcall" },
	{ 0x94d7691b, "submit_bio" },
	{ 0xb1d3a15c, "blk_finish_plug" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0xd7dc9514, "__free_pages" },
	{ 0x9d6b6c83, "rpc_destroy_pipe_data" },
	{ 0x54ff774e, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xdbfd7e09, "register_pernet_subsys" },
	{ 0x54cede7b, "rpc_put_sb_net" },
	{ 0x2ec45cd0, "pnfs_generic_pg_readpages" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x70a6f12a, "page_cache_next_miss" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0xe7b86239, "pnfs_generic_pg_writepages" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0x4b8869bf, "pnfs_generic_pg_init_read" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0x7147c1e8, "xdr_inline_decode" },
	{ 0x807c3a, "vmalloc_to_page" },
	{ 0x7aec8927, "nfs_pageio_reset_read_mds" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xbc1e119c, "nfs4_init_deviceid_node" },
	{ 0xd31aa7a2, "pnfs_set_lo_fail" },
	{ 0x79ec8f93, "blk_start_plug" },
	{ 0xbe0640bf, "xdr_set_scratch_buffer" },
	{ 0x577e7db1, "flush_dcache_page" },
	{ 0x3166c385, "pnfs_ld_read_done" },
	{ 0x685b72c6, "__put_page" },
	{ 0x825ff9f1, "try_module_get" },
	{ 0xdf6bf04, "pnfs_register_layoutdriver" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8EFBDC960E33E6D97E0D610");
