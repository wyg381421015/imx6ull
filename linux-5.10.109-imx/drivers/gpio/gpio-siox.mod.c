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
	{ 0xf662606b, "driver_unregister" },
	{ 0xa5d62e50, "__siox_driver_register" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x1afb1000, "devm_gpiochip_add_data_with_key" },
	{ 0x9fab5558, "handle_level_irq" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x84e484da, "irq_find_mapping" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
};

MODULE_INFO(depends, "siox-core");


MODULE_INFO(srcversion, "651B6E27E75B5B9BE70AA6C");
