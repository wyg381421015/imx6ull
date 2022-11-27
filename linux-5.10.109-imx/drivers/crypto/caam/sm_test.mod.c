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
	{ 0xac2bdeb0, "sm_keystore_slot_export" },
	{ 0x5f754e5a, "memset" },
	{ 0xb13414fc, "sm_keystore_slot_read" },
	{ 0x71c90087, "memcmp" },
	{ 0x1256a451, "sm_keystore_slot_dealloc" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x88899ad9, "sm_keystore_slot_load" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x208f139f, "of_find_compatible_node" },
	{ 0x98b6222d, "sm_keystore_cover_key" },
	{ 0x7967bed5, "sm_release_keystore" },
	{ 0x2ddbb6ec, "sm_keystore_slot_alloc" },
	{ 0x2e959cf2, "of_node_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x67885c79, "sm_keystore_slot_import" },
	{ 0xf143a0d9, "sm_establish_keystore" },
	{ 0x58b099d7, "sm_detect_keystore_units" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xb00b15da, "of_find_device_by_node" },
	{ 0xae05e287, "of_node_put" },
};

MODULE_INFO(depends, "caam_jr");


MODULE_INFO(srcversion, "0C5203B5D842AC4C3C1E4C3");
