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
	{ 0x1cf15f87, "__regmap_init_i2c" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x8733236, "intlog10" },
	{ 0xa6a7a2ad, "div_s64_rem" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x9d669763, "memcpy" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x252ecea3, "regmap_bulk_write" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc95f68ee, "regmap_update_bits_base" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x7bca3a3d, "regmap_bulk_read" },
	{ 0x37a0cba, "kfree" },
	{ 0xcda03945, "regmap_exit" },
	{ 0x85b70aad, "i2c_mux_del_adapters" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:rtl2832");

MODULE_INFO(srcversion, "29C59FFF1E516EC2CA736E5");
