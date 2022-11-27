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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x65cdb64d, "devm_ioremap_resource" },
	{ 0x8b1e32e4, "dma_set_coherent_mask" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0xbb9c87e6, "platform_get_resource" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x37a0cba, "kfree" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc37335b0, "complete" },
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xa81f8c13, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx6q-vdoa");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-vdoaC*");

MODULE_INFO(srcversion, "86FA0F04972CACFCB9F15AB");
