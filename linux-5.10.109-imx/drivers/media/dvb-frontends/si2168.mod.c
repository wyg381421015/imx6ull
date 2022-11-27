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
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0xecf87b12, "i2c_mux_add_adapter" },
	{ 0xb9cc06ae, "i2c_mux_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x66ed8480, "_dev_notice" },
	{ 0xed6d25b9, "request_firmware" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd8e86043, "i2c_transfer_buffer_flags" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x85b70aad, "i2c_mux_del_adapters" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:si2168");

MODULE_INFO(srcversion, "251A0EA02AA416D61EC0A7C");
