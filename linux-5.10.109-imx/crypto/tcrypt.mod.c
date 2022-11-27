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
	{ 0x33a3d298, "param_ops_charp" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0xced4b963, "param_ops_uint" },
	{ 0x951a2773, "crypto_has_alg" },
	{ 0x3bdb5d28, "alg_test" },
	{ 0xf6ec3f5a, "crypto_aead_setkey" },
	{ 0xd60c4b1e, "crypto_aead_setauthsize" },
	{ 0xd64cfc68, "crypto_alloc_aead" },
	{ 0x90c912cd, "crypto_ahash_final" },
	{ 0xeec3a2d5, "crypto_ahash_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xaeb63722, "crypto_alloc_ahash" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf76b0a59, "read_current_timer" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7cc548ed, "crypto_skcipher_setkey" },
	{ 0x5f754e5a, "memset" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xf99924d3, "crypto_req_done" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x3474a07c, "crypto_alloc_skcipher" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x96a447, "crypto_ahash_digest" },
	{ 0x8b50fd75, "crypto_skcipher_decrypt" },
	{ 0x41c18ecf, "crypto_skcipher_encrypt" },
	{ 0xc5850110, "printk" },
	{ 0xf3635a97, "crypto_aead_decrypt" },
	{ 0x84d2f288, "crypto_aead_encrypt" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x3892fa63, "mem_map" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CA5C0BECAE3FB0AF078B7B8");
