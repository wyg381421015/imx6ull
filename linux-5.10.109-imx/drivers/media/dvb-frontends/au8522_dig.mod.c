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
	{ 0x992e0b3f, "au8522_release_state" },
	{ 0xf9a482f9, "msleep" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0x515fc0a6, "au8522_led_ctrl" },
	{ 0x2df12e8e, "au8522_writereg" },
	{ 0xc3249c74, "au8522_readreg" },
	{ 0xc5850110, "printk" },
	{ 0x94fe32f1, "au8522_i2c_gate_ctrl" },
	{ 0xbf487082, "au8522_sleep" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5dbc8e76, "au8522_analog_i2c_gate_ctrl" },
	{ 0xa2352936, "au8522_get_state" },
	{ 0x9d669763, "memcpy" },
	{ 0xad89ea80, "au8522_init" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "au8522_common");


MODULE_INFO(srcversion, "9046C5BFE26DA6555A7C336");
