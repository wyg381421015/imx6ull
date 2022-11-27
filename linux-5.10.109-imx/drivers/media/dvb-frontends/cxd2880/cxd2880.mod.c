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
	{ 0xb43f9365, "ktime_get" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3186467f, "spi_setup" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5f2b1d95, "intlog2" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x6054009e, "spi_sync" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x3e1bf01f, "spi_write_then_read" },
	{ 0x9d669763, "memcpy" },
	{ 0x8733236, "intlog10" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "36BE17DE5D2CEE943C51241");
