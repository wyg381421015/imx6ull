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
	{ 0xab2cf6cf, "sock_no_sendpage" },
	{ 0x65e8cca3, "sock_no_mmap" },
	{ 0x7db05b2f, "sock_no_sendmsg" },
	{ 0x15f59c3, "sock_no_shutdown" },
	{ 0x586d09d0, "sock_no_listen" },
	{ 0x2da17760, "sock_no_ioctl" },
	{ 0x1cc49ce6, "sock_no_getname" },
	{ 0x23bbb4fc, "sock_no_accept" },
	{ 0x5cf67b14, "sock_no_socketpair" },
	{ 0x966605d5, "sock_no_connect" },
	{ 0xa36a4a51, "sock_no_bind" },
	{ 0x22c31b39, "af_alg_release" },
	{ 0xf4777453, "af_alg_unregister_type" },
	{ 0xe48533cd, "af_alg_register_type" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6d159b4, "crypto_alloc_rng" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8637b5f2, "_copy_to_iter" },
	{ 0x5f754e5a, "memset" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0x5a7bea4c, "crypto_rng_reset" },
	{ 0x68be3dc8, "af_alg_release_parent" },
	{ 0xed45186c, "sock_kfree_s" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xca5202f3, "sock_kmalloc" },
};

MODULE_INFO(depends, "af_alg");


MODULE_INFO(srcversion, "C2EE585A86B2D95CD64DC74");
