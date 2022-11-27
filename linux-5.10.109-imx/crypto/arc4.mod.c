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
	{ 0x2689e094, "crypto_unregister_skcipher" },
	{ 0xf9995030, "crypto_register_skcipher" },
	{ 0xc5850110, "printk" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0x2bb32ad1, "arc4_setkey" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2ff5d592, "skcipher_walk_done" },
	{ 0xcd47fcc4, "arc4_crypt" },
	{ 0x4637f699, "skcipher_walk_virt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "15B8815818A02D9CC78C611");
