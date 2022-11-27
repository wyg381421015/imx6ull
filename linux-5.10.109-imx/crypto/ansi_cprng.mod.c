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
	{ 0x799c1de5, "param_ops_int" },
	{ 0xdb7c1751, "crypto_unregister_rngs" },
	{ 0xab407389, "crypto_register_rngs" },
	{ 0x5f754e5a, "memset" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x71c90087, "memcmp" },
	{ 0x4185f264, "crypto_cipher_encrypt_one" },
	{ 0x4059792f, "print_hex_dump" },
	{ 0x5ea48a26, "crypto_alloc_base" },
	{ 0xc5850110, "printk" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0xbd721930, "crypto_cipher_setkey" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "BFC5CA73D9ACF515EA6C5EB");
