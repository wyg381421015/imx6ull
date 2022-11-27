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
	{ 0x13e23842, "__spi_register_driver" },
	{ 0xea124bd1, "gcd" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x148e9eb7, "v4l2_ctrl_auto_cluster" },
	{ 0x315ebe0d, "v4l2_ctrl_new_std" },
	{ 0xcd14ff4a, "v4l2_ctrl_handler_init_class" },
	{ 0xa6dfe5a, "v4l2_spi_subdev_init" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6054009e, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xeea0399, "strscpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x42cfbc31, "v4l2_ctrl_handler_free" },
	{ 0xe9c1741e, "v4l2_device_unregister_subdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:msi001");

MODULE_INFO(srcversion, "E9A23DE58A72333574594E0");
