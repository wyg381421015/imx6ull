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
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0xa011d56, "i2c_transfer" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9943bb, "param_ops_string" },
	{ 0x5f754e5a, "memset" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xb41bf6fe, "request_firmware_nowait" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C281345BFE1BAF914DA4C6B");
