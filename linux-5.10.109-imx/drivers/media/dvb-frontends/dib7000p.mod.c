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
	{ 0x799c1de5, "param_ops_int" },
	{ 0xa011d56, "i2c_transfer" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xff8e8ef0, "i2c_add_adapter" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa72dc36f, "dibx000_exit_i2c_master" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x18e41ae, "dibx000_reset_i2c_master" },
	{ 0xc7bdb53c, "i2c_del_adapter" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xf229cdcf, "dibx000_get_i2c_adapter" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x6e66a6b5, "dibx000_init_i2c_master" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "dibx000_common");


MODULE_INFO(srcversion, "C0427354D0DCB2C31EF825C");
