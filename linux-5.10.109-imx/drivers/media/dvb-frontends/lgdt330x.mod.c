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
	{ 0x799c1de5, "param_ops_int" },
	{ 0xa8cc57f0, "i2c_del_driver" },
	{ 0xfd229c0c, "dev_printk" },
	{ 0xa011d56, "i2c_transfer" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xca858e01, "i2c_new_client_device" },
	{ 0x4f7e1123, "i2c_unregister_device" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x38059b4, "i2c_register_driver" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd8e86043, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lgdt330x");

MODULE_INFO(srcversion, "EDA1653955B2535CA8C5986");
