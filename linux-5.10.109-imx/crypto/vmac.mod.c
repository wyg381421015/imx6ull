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
	{ 0x7471d7ef, "crypto_unregister_template" },
	{ 0x6517c37c, "crypto_register_template" },
	{ 0x1284c055, "shash_register_instance" },
	{ 0xc7628f7a, "crypto_inst_setname" },
	{ 0x52f74750, "shash_free_singlespawn_instance" },
	{ 0x9d8ba377, "crypto_grab_spawn" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x3c1a67f8, "crypto_spawn_tfm" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0x9d669763, "memcpy" },
	{ 0x5f754e5a, "memset" },
	{ 0x4185f264, "crypto_cipher_encrypt_one" },
	{ 0xbd721930, "crypto_cipher_setkey" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8AF73B1ADA385C31391E5C5");
