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
	{ 0xa13d5551, "kmem_cache_destroy" },
	{ 0xf12b8a67, "iget_failed" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x89e1d7c9, "sb_min_blocksize" },
	{ 0x107e5878, "zlib_inflateEnd" },
	{ 0x3116b3a2, "unload_nls" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x3a6744, "generic_file_llseek" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x958a241e, "page_address" },
	{ 0xb597722e, "iget5_locked" },
	{ 0xa977f08d, "from_kuid_munged" },
	{ 0x5c47b0f8, "seq_puts" },
	{ 0x711d2658, "pagecache_get_page" },
	{ 0xacf4d843, "match_strdup" },
	{ 0xf8098ff9, "ll_rw_block" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x71b0679c, "seq_printf" },
	{ 0x44e9a829, "match_token" },
	{ 0xf42cd2e4, "init_user_ns" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0xa3f4e2d1, "mpage_readahead" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa9dcfc6f, "mount_bdev" },
	{ 0x85df9b6c, "strsep" },
	{ 0x227dd94f, "page_symlink_inode_operations" },
	{ 0xbbfed7ea, "generic_read_dir" },
	{ 0x999e8297, "vfree" },
	{ 0x736a84a9, "__getblk_gfp" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x438c7ac4, "__alloc_pages_nodemask" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb9d0ecc, "from_kgid_munged" },
	{ 0xf3160544, "make_kgid" },
	{ 0x5f754e5a, "memset" },
	{ 0xfe2aa3b2, "mpage_readpage" },
	{ 0x11089ac7, "_ctype" },
	{ 0x96bdc154, "__bread_gfp" },
	{ 0xc5850110, "printk" },
	{ 0x9aa5c012, "d_obtain_alias" },
	{ 0x71c90087, "memcmp" },
	{ 0xce5ac24f, "zlib_inflate_workspacesize" },
	{ 0x84b183ae, "strncmp" },
	{ 0xfc77b8b4, "kmem_cache_free" },
	{ 0x717a5f10, "set_nlink" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xdcfb95c3, "__wait_on_buffer" },
	{ 0xa97de0c5, "kunmap_high" },
	{ 0xdd27fa87, "memchr" },
	{ 0x4cb40e8, "generic_ro_fops" },
	{ 0x4e3567f7, "match_int" },
	{ 0xd79e9aed, "unlock_page" },
	{ 0x8fc4343f, "inode_nohighmem" },
	{ 0x83f9a4d5, "__brelse" },
	{ 0x581f98da, "zlib_inflate" },
	{ 0x6dced945, "inode_init_once" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd7dc9514, "__free_pages" },
	{ 0xad3a5819, "make_kuid" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xde590ce, "load_nls" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0xdb7b932, "unlock_new_inode" },
	{ 0xdeb68cfd, "kill_block_super" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xa63ff5f7, "kmem_cache_create" },
	{ 0x8220d90d, "register_filesystem" },
	{ 0x35a88f28, "zlib_inflateInit2" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x2b4973a3, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa80114d7, "load_nls_default" },
	{ 0xa4c8be36, "d_splice_alias" },
	{ 0x1bf55309, "sync_filesystem" },
	{ 0x4aead82e, "sb_set_blocksize" },
	{ 0x4517656f, "d_make_root" },
	{ 0xb77ef22c, "unregister_filesystem" },
	{ 0x7183c040, "init_special_inode" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x35d97520, "kmap_high" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x577e7db1, "flush_dcache_page" },
	{ 0x685b72c6, "__put_page" },
	{ 0xb0263b96, "generic_block_bmap" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F0262010B151220A01C6C47");
