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
	{ 0xd31ccb06, "of_machine_is_compatible" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x3a6744, "generic_file_llseek" },
	{ 0x10e14fe1, "debugfs_create_dir" },
	{ 0xf4d47d8, "of_root" },
	{ 0xd736caea, "of_property_read_u32_index" },
	{ 0xead5c8e5, "clk_bulk_prepare" },
	{ 0xad317508, "arm_dma_ops" },
	{ 0x308aa754, "dma_set_mask" },
	{ 0xa51f16c7, "caam_little_end" },
	{ 0x65cdb64d, "devm_ioremap_resource" },
	{ 0xa5d674a2, "of_device_is_compatible" },
	{ 0x7f4e5df1, "platform_device_register_full" },
	{ 0x68ef3a7d, "debugfs_create_file" },
	{ 0x8b1e32e4, "dma_set_coherent_mask" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0x54027889, "simple_attr_read" },
	{ 0x83523a68, "soc_device_match" },
	{ 0x538c0c7d, "of_match_node" },
	{ 0xf124bffd, "debugfs_remove" },
	{ 0xb4905b34, "platform_device_unregister" },
	{ 0x83a87b8c, "simple_attr_release" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xeed23646, "devm_kmemdup" },
	{ 0xc7a7e770, "clk_bulk_enable" },
	{ 0xb4518284, "devm_add_action" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xe046c2ed, "devm_clk_bulk_get" },
	{ 0x2eed504a, "caam_ptr_sz" },
	{ 0x208f139f, "of_find_compatible_node" },
	{ 0x3e95d66, "of_get_next_available_child" },
	{ 0x963e8af8, "devm_remove_action" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x63c08029, "clk_bulk_unprepare" },
	{ 0x37a0cba, "kfree" },
	{ 0x36fbba1b, "debugfs_create_blob" },
	{ 0x479f7d4b, "clk_bulk_disable" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x547701d6, "of_address_to_resource" },
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0x9d6f0c6b, "of_property_read_variable_u32_array" },
	{ 0xae05e287, "of_node_put" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0xe80e5323, "simple_attr_open" },
	{ 0xd080d181, "devm_of_platform_populate" },
	{ 0xf355c9c, "simple_attr_write" },
	{ 0xbd67c092, "caam_imx" },
	{ 0xed6491e8, "devm_of_iomap" },
};

MODULE_INFO(depends, "error");

MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0C*");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0C*");

MODULE_INFO(srcversion, "30EE25C1A25A87D255E25CE");
