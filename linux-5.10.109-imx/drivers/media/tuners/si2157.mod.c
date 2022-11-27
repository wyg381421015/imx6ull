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
	{ 0x799c1de5, "param_ops_int" },
	{ 0xa8cc57f0, "i2c_del_driver" },
	{ 0x38059b4, "i2c_register_driver" },
	{ 0x78b2ed3b, "media_device_register_entity" },
	{ 0xc6d1b824, "media_entity_pads_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x9d669763, "memcpy" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xed6d25b9, "request_firmware" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd8e86043, "i2c_transfer_buffer_flags" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x5f754e5a, "memset" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:si2157");
MODULE_ALIAS("i2c:si2146");
MODULE_ALIAS("i2c:si2141");
MODULE_ALIAS("i2c:si2177");

MODULE_INFO(srcversion, "257EA02C06A8411C124E768");
