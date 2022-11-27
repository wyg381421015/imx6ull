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
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2ff5d592, "skcipher_walk_done" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x4185f264, "crypto_cipher_encrypt_one" },
	{ 0x4637f699, "skcipher_walk_virt" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc0fb0584, "skcipher_register_instance" },
	{ 0x80589b24, "skcipher_alloc_instance_simple" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B0DC57084A302B25783FC68");
