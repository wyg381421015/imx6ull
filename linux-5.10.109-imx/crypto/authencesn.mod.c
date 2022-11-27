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
	{ 0x9322dbf5, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xcf0047b5, "crypto_grab_skcipher" },
	{ 0x60b1fb86, "crypto_grab_ahash" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9f7535a, "crypto_drop_spawn" },
	{ 0x576c860a, "crypto_get_default_null_skcipher" },
	{ 0x13ba1a9f, "crypto_spawn_tfm2" },
	{ 0x21cd536a, "crypto_put_default_null_skcipher" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0x7cc548ed, "crypto_skcipher_setkey" },
	{ 0xeec3a2d5, "crypto_ahash_setkey" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0x96a447, "crypto_ahash_digest" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x8b50fd75, "crypto_skcipher_decrypt" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x41c18ecf, "crypto_skcipher_encrypt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "B91C69A218B827CB7F6D8B5");
