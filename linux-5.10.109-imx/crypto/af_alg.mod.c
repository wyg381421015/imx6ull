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
	{ 0x5fcb6d93, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xc2d22aff, "sock_init_data" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0xa7b3181c, "up_read" },
	{ 0x958a241e, "page_address" },
	{ 0x2da17760, "sock_no_ioctl" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x1cc49ce6, "sock_no_getname" },
	{ 0xfffa3100, "sg_next" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x438c7ac4, "__alloc_pages_nodemask" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb1d7438, "down_read" },
	{ 0xab2cf6cf, "sock_no_sendpage" },
	{ 0x65e8cca3, "sock_no_mmap" },
	{ 0xf6559999, "sock_no_recvmsg" },
	{ 0x5f754e5a, "memset" },
	{ 0x5cf67b14, "sock_no_socketpair" },
	{ 0xa24d155e, "sk_alloc" },
	{ 0xc5850110, "printk" },
	{ 0xd9d06dd, "lock_sock_nested" },
	{ 0x7e744fdd, "iov_iter_get_pages" },
	{ 0x586d09d0, "sock_no_listen" },
	{ 0xf49379b5, "sock_wake_async" },
	{ 0xa61da055, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xed45186c, "sock_kfree_s" },
	{ 0x15f59c3, "sock_no_shutdown" },
	{ 0x258e5df1, "module_put" },
	{ 0xf5b7e6e7, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x15c9752d, "proto_register" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd7dc9514, "__free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xf9a3ed2e, "sock_register" },
	{ 0xc837120f, "proto_unregister" },
	{ 0x5886c45, "_copy_from_iter_full" },
	{ 0xca5202f3, "sock_kmalloc" },
	{ 0x966605d5, "sock_no_connect" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x7db05b2f, "sock_no_sendmsg" },
	{ 0x291a2bea, "sock_kzfree_s" },
	{ 0xdb8d7081, "iov_iter_advance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x685b72c6, "__put_page" },
	{ 0x825ff9f1, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3092C45D2246C61841F0CA9");
