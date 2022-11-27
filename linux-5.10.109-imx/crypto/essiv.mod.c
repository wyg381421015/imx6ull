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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0x3892fa63, "mem_map" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0x84d2f288, "crypto_aead_encrypt" },
	{ 0xf3635a97, "crypto_aead_decrypt" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xc0fb0584, "skcipher_register_instance" },
	{ 0x9322dbf5, "aead_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xcc11e98, "crypto_shash_alg_has_setkey" },
	{ 0x529a6140, "crypto_mod_put" },
	{ 0xe26efdfd, "crypto_alg_mod_lookup" },
	{ 0x9d669763, "memcpy" },
	{ 0xc5850110, "printk" },
	{ 0x349cba85, "strchr" },
	{ 0x9f984513, "strrchr" },
	{ 0x84b183ae, "strncmp" },
	{ 0xd40ead48, "crypto_grab_aead" },
	{ 0xcf0047b5, "crypto_grab_skcipher" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0xfdbd7a17, "crypto_get_attr_type" },
	{ 0x41c18ecf, "crypto_skcipher_encrypt" },
	{ 0x92926a88, "crypto_shash_tfm_digest" },
	{ 0x7cc548ed, "crypto_skcipher_setkey" },
	{ 0xf6ec3f5a, "crypto_aead_setkey" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbd721930, "crypto_cipher_setkey" },
	{ 0x3c44e43b, "crypto_shash_finup" },
	{ 0xdec33175, "crypto_shash_update" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xa9f7535a, "crypto_drop_spawn" },
	{ 0x8b50fd75, "crypto_skcipher_decrypt" },
	{ 0x4185f264, "crypto_cipher_encrypt_one" },
	{ 0xd60c4b1e, "crypto_aead_setauthsize" },
	{ 0xa61a931a, "crypto_alloc_shash" },
	{ 0x5ea48a26, "crypto_alloc_base" },
	{ 0x13ba1a9f, "crypto_spawn_tfm2" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0x37a0cba, "kfree" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "authenc");


MODULE_INFO(srcversion, "2D52EEC3DFF08C779E9B9C1");
