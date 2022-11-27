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
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0xceee092d, "pm_runtime_enable" },
	{ 0x3b2af73e, "v4l2_async_notifier_register" },
	{ 0xdd33fee1, "of_graph_get_remote_port_parent" },
	{ 0xbf0586f, "of_get_next_child" },
	{ 0x7065d277, "v4l2_async_notifier_add_subdev" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3e95d66, "of_get_next_available_child" },
	{ 0xedab338f, "v4l2_async_notifier_init" },
	{ 0xf499f8e9, "v4l2_async_register_subdev" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4755c9e3, "v4l2_subdev_init" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x5c70148a, "v4l2_device_register" },
	{ 0xa81f8c13, "devm_request_threaded_irq" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbf88c30e, "dev_driver_string" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0xe5b127b5, "platform_get_irq" },
	{ 0x65cdb64d, "devm_ioremap_resource" },
	{ 0xbb9c87e6, "platform_get_resource" },
	{ 0x538c0c7d, "of_match_node" },
	{ 0xb38d173a, "regulator_set_voltage" },
	{ 0x521c56ca, "devm_regulator_get" },
	{ 0x15a97c71, "of_find_property" },
	{ 0x40aab84b, "of_graph_get_next_endpoint" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0x21e1de32, "regulator_enable" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x9dbe01c3, "__pm_runtime_set_status" },
	{ 0xac4c96bd, "__pm_runtime_disable" },
	{ 0x66101eb6, "v4l2_device_unregister" },
	{ 0x76c874ea, "v4l2_async_notifier_unregister" },
	{ 0x69d61f88, "v4l2_async_unregister_subdev" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5d28dd0f, "regulator_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc95f68ee, "regmap_update_bits_base" },
	{ 0xae05e287, "of_node_put" },
	{ 0xf70ba6d4, "syscon_node_to_regmap" },
	{ 0x23bb2f04, "of_find_node_by_phandle" },
	{ 0x9d6f0c6b, "of_property_read_variable_u32_array" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x4c88ce70, "__devm_reset_control_get" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xec2ffebf, "dev_fwnode" },
	{ 0x276c28a0, "__pm_runtime_resume" },
	{ 0x3155d9e, "__pm_runtime_idle" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x9d669763, "memcpy" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc5850110, "printk" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x137d1fd9, "v4l2_subdev_call_wrappers" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx7d-mipi-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx7d-mipi-csiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-mipi-csiC*");

MODULE_INFO(srcversion, "0D893FA4C88CB40E4B33A9B");
