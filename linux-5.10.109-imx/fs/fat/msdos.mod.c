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
	{ 0x341716a3, "fat_detach" },
	{ 0x3e1d6006, "drop_nlink" },
	{ 0x3014e951, "mark_buffer_dirty_inode" },
	{ 0x33fdc28a, "__mark_inode_dirty" },
	{ 0x349cba85, "strchr" },
	{ 0x831dc54, "fat_flush_inodes" },
	{ 0x5cf0188a, "fat_truncate_time" },
	{ 0x8e73c08c, "inc_nlink" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa9dcfc6f, "mount_bdev" },
	{ 0x5c31b991, "fat_sync_inode" },
	{ 0xded0de92, "fat_add_entries" },
	{ 0x8817f6ad, "fat_remove_entries" },
	{ 0xe05f60a0, "fat_alloc_new_dir" },
	{ 0x73211b41, "fat_fill_super" },
	{ 0x1ca0886f, "fat_build_inode" },
	{ 0x8418a229, "fat_update_time" },
	{ 0xe9b8f199, "fat_attach" },
	{ 0x71c90087, "memcmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x717a5f10, "set_nlink" },
	{ 0x4d0c0aea, "sync_dirty_buffer" },
	{ 0x8bc4c3b3, "fat_getattr" },
	{ 0x83f9a4d5, "__brelse" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xdeb68cfd, "kill_block_super" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x677ed4de, "fat_scan" },
	{ 0x8220d90d, "register_filesystem" },
	{ 0xb70c7b15, "__fat_fs_error" },
	{ 0x33266aab, "current_time" },
	{ 0xa4c8be36, "d_splice_alias" },
	{ 0x13fd1bf, "fat_setattr" },
	{ 0x6902be4e, "fat_free_clusters" },
	{ 0xe2e0a0a6, "fat_get_dotdot_entry" },
	{ 0xb77ef22c, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa44a5803, "fat_time_unix2fat" },
	{ 0x19030ed4, "fat_dir_empty" },
	{ 0xf45c9a91, "d_instantiate" },
	{ 0x74d17dd0, "clear_nlink" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2FCDEFB369F007D821DC19A");
