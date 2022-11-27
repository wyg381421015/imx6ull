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
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x9d669763, "memcpy" },
	{ 0x2758d09a, "v4l2_i2c_subdev_init" },
	{ 0x148e9eb7, "v4l2_ctrl_auto_cluster" },
	{ 0x315ebe0d, "v4l2_ctrl_new_std" },
	{ 0xcd14ff4a, "v4l2_ctrl_handler_init_class" },
	{ 0x67fe95ce, "__devm_regmap_init_i2c" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x7bca3a3d, "regmap_bulk_read" },
	{ 0xeea0399, "strscpy" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x252ecea3, "regmap_bulk_write" },
	{ 0x323f531f, "regmap_write" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x65c74ea8, "regmap_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x42cfbc31, "v4l2_ctrl_handler_free" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:e4000");

MODULE_INFO(srcversion, "01CCC01EA693DC0D44E72EC");
