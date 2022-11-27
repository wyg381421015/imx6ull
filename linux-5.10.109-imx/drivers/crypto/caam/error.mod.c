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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcfe5891d, "module_layout" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9A721353108BF247942B5A4");
