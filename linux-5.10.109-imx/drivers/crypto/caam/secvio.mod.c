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
	{ 0x95a29f92, "irq_of_parse_and_map" },
	{ 0xa51f16c7, "caam_little_end" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xaf624ccd, "devm_clk_get_optional" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc620baf0, "of_iomap" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x208f139f, "of_find_compatible_node" },
	{ 0xa3a5c11a, "of_get_property" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x37a0cba, "kfree" },
	{ 0xedc03953, "iounmap" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "error");

MODULE_ALIAS("of:N*T*Cfsl,imx6q-caam-snvs");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-caam-snvsC*");

MODULE_INFO(srcversion, "7C38479541F86BA2C105848");
