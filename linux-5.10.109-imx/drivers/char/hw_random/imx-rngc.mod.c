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
	{ 0xbaa65f43, "param_ops_bool" },
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0x2afc85bf, "__platform_driver_probe" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xc9aa1203, "hwrng_register" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xa81f8c13, "devm_request_threaded_irq" },
	{ 0xe5b127b5, "platform_get_irq" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0xbf0f574b, "devm_platform_ioremap_resource" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xc37335b0, "complete" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xda8cc3b9, "hwrng_unregister" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "rng-core");

MODULE_ALIAS("of:N*T*Cfsl,imx25-rngb");
MODULE_ALIAS("of:N*T*Cfsl,imx25-rngbC*");

MODULE_INFO(srcversion, "F5B4DC3DCAA539DE9B837AC");
