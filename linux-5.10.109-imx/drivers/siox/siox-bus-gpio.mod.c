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
	{ 0x9b97bd3, "gpiod_get_value_cansleep" },
	{ 0x1628665e, "gpiod_set_value_cansleep" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xbfd3dafb, "put_device" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x3093a0bd, "siox_master_register" },
	{ 0x5e23bb8c, "devm_gpiod_get" },
	{ 0xc6ecc59, "siox_master_alloc" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc637dfe4, "siox_master_unregister" },
};

MODULE_INFO(depends, "siox-core");

MODULE_ALIAS("of:N*T*Ceckelmann,siox-gpio");
MODULE_ALIAS("of:N*T*Ceckelmann,siox-gpioC*");

MODULE_INFO(srcversion, "9EC8A00287B249044C4E802");
