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
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0xedc03953, "iounmap" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xc620baf0, "of_iomap" },
	{ 0x208f139f, "of_find_compatible_node" },
	{ 0x1f651b59, "syscon_regmap_lookup_by_phandle" },
	{ 0x9d6f0c6b, "of_property_read_variable_u32_array" },
	{ 0x276c28a0, "__pm_runtime_resume" },
	{ 0xceee092d, "pm_runtime_enable" },
	{ 0xf499f8e9, "v4l2_async_register_subdev" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4755c9e3, "v4l2_subdev_init" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0x65cdb64d, "devm_ioremap_resource" },
	{ 0xa0ab0df4, "platform_get_resource_byname" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc95f68ee, "regmap_update_bits_base" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x69d61f88, "v4l2_async_unregister_subdev" },
	{ 0xac4c96bd, "__pm_runtime_disable" },
	{ 0x3155d9e, "__pm_runtime_idle" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc5850110, "printk" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx6sx-vadc");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-vadcC*");

MODULE_INFO(srcversion, "99D58F9C839B134410F1522");
