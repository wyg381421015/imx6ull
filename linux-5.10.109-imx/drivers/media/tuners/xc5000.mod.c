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
	{ 0x2d3385d3, "system_wq" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0xa011d56, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xa15d0131, "cancel_delayed_work" },
	{ 0xc5850110, "printk" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xed6d25b9, "request_firmware" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd0e9fb09, "release_firmware" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ABAF7418DF3468062C838EE");
