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
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x323f531f, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x9d669763, "memcpy" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x86603d42, "i2c_new_dummy_device" },
	{ 0x67fe95ce, "__devm_regmap_init_i2c" },
	{ 0xbb981c00, "devm_gpiod_get_optional" },
	{ 0x9d6f0c6b, "of_property_read_variable_u32_array" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0x4566bb08, "of_device_get_match_data" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0xc95f68ee, "regmap_update_bits_base" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8733236, "intlog10" },
	{ 0x65c74ea8, "regmap_read" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x4f7e1123, "i2c_unregister_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1628665e, "gpiod_set_value_cansleep" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:mn884433");
MODULE_ALIAS("i2c:mn884434-0");
MODULE_ALIAS("i2c:mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884433");
MODULE_ALIAS("of:N*T*Csocionext,mn884433C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1C*");

MODULE_INFO(srcversion, "24082A730F31F1C823DD8D2");
