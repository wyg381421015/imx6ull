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
	{ 0xf9a482f9, "msleep" },
	{ 0xb38d173a, "regulator_set_voltage" },
	{ 0x815588a6, "clk_enable" },
	{ 0x475f3bcd, "mipi_csi2_reset" },
	{ 0xa8cc57f0, "i2c_del_driver" },
	{ 0xbc5e7646, "mipi_csi2_set_datatype" },
	{ 0x5d28dd0f, "regulator_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x22be9531, "gpio_to_desc" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf123e3cd, "v4l2_int_device_register" },
	{ 0xc5850110, "printk" },
	{ 0x24b5f865, "mipi_csi2_enable" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xf3216677, "v4l2_int_device_unregister" },
	{ 0x1625688c, "devm_gpio_request_one" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x38059b4, "i2c_register_driver" },
	{ 0x521c56ca, "devm_regulator_get" },
	{ 0x6d60374e, "mipi_csi2_dphy_status" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6eeb9e80, "mipi_csi2_disable" },
	{ 0xba518e81, "of_get_named_gpio_flags" },
	{ 0x38194021, "mipi_csi2_set_lanes" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0x3d7d21ae, "mipi_csi2_get_status" },
	{ 0xd8e86043, "i2c_transfer_buffer_flags" },
	{ 0x6080cf00, "mipi_csi2_get_info" },
	{ 0x5edc52ac, "mipi_csi2_get_error1" },
	{ 0x54900687, "gpiod_set_raw_value" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d6f0c6b, "of_property_read_variable_u32_array" },
	{ 0x21e1de32, "regulator_enable" },
};

MODULE_INFO(depends, "v4l2-int-device");

MODULE_ALIAS("of:N*T*Covti,ov564x_mipi");
MODULE_ALIAS("of:N*T*Covti,ov564x_mipiC*");
MODULE_ALIAS("i2c:ov564x_mipi");

MODULE_INFO(srcversion, "633182EA6039CEC0FBC3D65");
