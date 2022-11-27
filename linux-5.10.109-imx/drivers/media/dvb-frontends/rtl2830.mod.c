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
	{ 0x7bd687ba, "_dev_info" },
	{ 0xecf87b12, "i2c_mux_add_adapter" },
	{ 0xb9cc06ae, "i2c_mux_alloc" },
	{ 0x5fed006c, "__regmap_init" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0x9d669763, "memcpy" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0xa8fd6ad7, "__i2c_transfer" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8733236, "intlog10" },
	{ 0x7bca3a3d, "regmap_bulk_read" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x252ecea3, "regmap_bulk_write" },
	{ 0xc95f68ee, "regmap_update_bits_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xcda03945, "regmap_exit" },
	{ 0x85b70aad, "i2c_mux_del_adapters" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:rtl2830");

MODULE_INFO(srcversion, "A815B8365BAF9E8559A3677");
