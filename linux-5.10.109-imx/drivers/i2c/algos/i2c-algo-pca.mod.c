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
	{ 0xf9a482f9, "msleep" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xff8e8ef0, "i2c_add_adapter" },
	{ 0xc5850110, "printk" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x3254e5c6, "i2c_add_numbered_adapter" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E50D226FB349CF41C044EC2");
