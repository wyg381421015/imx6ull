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
	{ 0xa8cc57f0, "i2c_del_driver" },
	{ 0x38059b4, "i2c_register_driver" },
	{ 0x78b2fd0d, "regulator_bulk_disable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x37176c5, "v4l2_ctrl_handler_setup" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0xf499f8e9, "v4l2_async_register_subdev" },
	{ 0x148e9eb7, "v4l2_ctrl_auto_cluster" },
	{ 0x9051e3be, "v4l2_ctrl_new_std_menu" },
	{ 0x1d62f45b, "v4l2_ctrl_new_std_menu_items" },
	{ 0x315ebe0d, "v4l2_ctrl_new_std" },
	{ 0xcd14ff4a, "v4l2_ctrl_handler_init_class" },
	{ 0xc6d1b824, "media_entity_pads_init" },
	{ 0x2758d09a, "v4l2_i2c_subdev_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xa16f8310, "devm_regulator_bulk_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0xbb981c00, "devm_gpiod_get_optional" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x12a38747, "usleep_range" },
	{ 0xbfe5bd30, "gpiod_set_value" },
	{ 0x888a67fe, "regulator_bulk_enable" },
	{ 0x42cfbc31, "v4l2_ctrl_handler_free" },
	{ 0x69d61f88, "v4l2_async_unregister_subdev" },
	{ 0x5f754e5a, "memset" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xff76573f, "__v4l2_find_nearest_size" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa011d56, "i2c_transfer" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8e86043, "i2c_transfer_buffer_flags" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Covti,ov2680");
MODULE_ALIAS("of:N*T*Covti,ov2680C*");

MODULE_INFO(srcversion, "74D4897303DE478B4401444");
