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
	{ 0x41c18ecf, "crypto_skcipher_encrypt" },
	{ 0x8b50fd75, "crypto_skcipher_decrypt" },
	{ 0x4185f264, "crypto_cipher_encrypt_one" },
	{ 0x2ff5d592, "skcipher_walk_done" },
	{ 0x4637f699, "skcipher_walk_virt" },
	{ 0xc0fb0584, "skcipher_register_instance" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc7628f7a, "crypto_inst_setname" },
	{ 0xcf0047b5, "crypto_grab_skcipher" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x7cc548ed, "crypto_skcipher_setkey" },
	{ 0xbd721930, "crypto_cipher_setkey" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9f7535a, "crypto_drop_spawn" },
	{ 0x5ea48a26, "crypto_alloc_base" },
	{ 0x13ba1a9f, "crypto_spawn_tfm2" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FCA761994F7AD8634FBA39A");
