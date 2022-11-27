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
	{ 0xa8cc57f0, "i2c_del_driver" },
	{ 0x38059b4, "i2c_register_driver" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x1cf15f87, "__regmap_init_i2c" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf88013c2, "regmap_raw_write" },
	{ 0x9d669763, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x29854b3c, "regmap_raw_read" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x65c74ea8, "regmap_read" },
	{ 0x323f531f, "regmap_write" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x37a0cba, "kfree" },
	{ 0xcda03945, "regmap_exit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:cxd2099");

MODULE_INFO(srcversion, "96E79247A3F092519A616CB");
