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
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xa8cc57f0, "i2c_del_driver" },
	{ 0xcda03945, "regmap_exit" },
	{ 0xc95f68ee, "regmap_update_bits_base" },
	{ 0x7bca3a3d, "regmap_bulk_read" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x252ecea3, "regmap_bulk_write" },
	{ 0x65c74ea8, "regmap_read" },
	{ 0xeea0399, "strscpy" },
	{ 0x898f6553, "gpiochip_remove" },
	{ 0xcc3b4911, "gpiochip_add_data_with_key" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0x5f754e5a, "memset" },
	{ 0xca858e01, "i2c_new_client_device" },
	{ 0x1cf15f87, "__regmap_init_i2c" },
	{ 0x4f7e1123, "i2c_unregister_device" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xba995442, "gpiochip_get_data" },
	{ 0x38059b4, "i2c_register_driver" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x86603d42, "i2c_new_dummy_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x323f531f, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:cxd2820r");

MODULE_INFO(srcversion, "900235B0A5C50B0E38AB67A");
