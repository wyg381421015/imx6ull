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
	{ 0xf499f8e9, "v4l2_async_register_subdev" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb38d173a, "regulator_set_voltage" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa8cc57f0, "i2c_del_driver" },
	{ 0x5d28dd0f, "regulator_disable" },
	{ 0xc7379764, "pinctrl_select_state" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x6766f6f4, "devm_pinctrl_get" },
	{ 0x22be9531, "gpio_to_desc" },
	{ 0xb5607ff2, "pinctrl_lookup_state" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x1625688c, "devm_gpio_request_one" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x38059b4, "i2c_register_driver" },
	{ 0x521c56ca, "devm_regulator_get" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xba518e81, "of_get_named_gpio_flags" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xd8e86043, "i2c_transfer_buffer_flags" },
	{ 0x4c8de91, "devm_pinctrl_put" },
	{ 0x69d61f88, "v4l2_async_unregister_subdev" },
	{ 0x73621536, "gpiod_set_raw_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9d6f0c6b, "of_property_read_variable_u32_array" },
	{ 0x2758d09a, "v4l2_i2c_subdev_init" },
	{ 0x21e1de32, "regulator_enable" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Covti,ov5640");
MODULE_ALIAS("of:N*T*Covti,ov5640C*");
MODULE_ALIAS("i2c:ov5640");

MODULE_INFO(srcversion, "41AE4DFB7EAD484FBE1A861");
