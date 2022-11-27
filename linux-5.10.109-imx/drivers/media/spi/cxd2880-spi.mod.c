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
	{ 0x4e50a1c9, "param_array_ops" },
	{ 0xb4c66234, "param_ops_short" },
	{ 0xf662606b, "driver_unregister" },
	{ 0x13e23842, "__spi_register_driver" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6d6880, "dvb_dmx_swfilter" },
	{ 0x3e1bf01f, "spi_write_then_read" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x39eb0287, "wake_up_process" },
	{ 0xdb4c9a5d, "kthread_create_on_node" },
	{ 0x66657274, "kmalloc_order" },
	{ 0x846049de, "kthread_stop" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x9d669763, "memcpy" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x7b37e608, "dvb_dmxdev_init" },
	{ 0x4be5c646, "dvb_dmx_init" },
	{ 0x29409c73, "dvb_register_frontend" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xca65a3ab, "dvb_register_adapter" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x21e1de32, "regulator_enable" },
	{ 0x933b2d9e, "devm_regulator_get_optional" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6054009e, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x5d28dd0f, "regulator_disable" },
	{ 0x3fa4f7e9, "dvb_unregister_adapter" },
	{ 0xb13766b1, "dvb_frontend_detach" },
	{ 0xa7bb7e5b, "dvb_unregister_frontend" },
	{ 0x7b334d3c, "dvb_dmx_release" },
	{ 0x5888ae30, "dvb_dmxdev_release" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880");
MODULE_ALIAS("of:N*T*Csony,cxd2880C*");

MODULE_INFO(srcversion, "60EAD6D0D766155182A6CBE");
