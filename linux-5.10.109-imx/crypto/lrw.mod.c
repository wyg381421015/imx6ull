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
	{ 0x8b50fd75, "crypto_skcipher_decrypt" },
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
	{ 0x41c18ecf, "crypto_skcipher_encrypt" },
	{ 0x37a0cba, "kfree" },
	{ 0xa9f7535a, "crypto_drop_spawn" },
	{ 0x13ba1a9f, "crypto_spawn_tfm2" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0x5e373fb4, "gf128mul_64k_bbe" },
	{ 0x3755f990, "gf128mul_init_64k_bbe" },
	{ 0xd60736ec, "gf128mul_free_64k" },
	{ 0x7cc548ed, "crypto_skcipher_setkey" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2ff5d592, "skcipher_walk_done" },
	{ 0x4637f699, "skcipher_walk_virt" },
};

MODULE_INFO(depends, "gf128mul");


MODULE_INFO(srcversion, "F2B97A009F363C8C2409E59");
