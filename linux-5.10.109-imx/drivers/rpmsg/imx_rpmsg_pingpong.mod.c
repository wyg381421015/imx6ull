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
	{ 0xa04a0b9a, "unregister_rpmsg_driver" },
	{ 0xadfa49aa, "__register_rpmsg_driver" },
	{ 0xd923aad0, "rpmsg_send" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xe7ba4a44, "rpmsg_sendto" },
	{ 0xc5850110, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7bd687ba, "_dev_info" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "545A209EFAB77DFBD584468");
