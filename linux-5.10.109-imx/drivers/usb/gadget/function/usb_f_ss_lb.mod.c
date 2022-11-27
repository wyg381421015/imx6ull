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
	{ 0x67db4acc, "usb_free_all_descriptors" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x29c5abed, "usb_ep_autoconfig_release" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd947a192, "usb_ep_set_halt" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2646e395, "usb_function_unregister" },
	{ 0x5f754e5a, "memset" },
	{ 0xff13f6d, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcd233e05, "usb_ep_autoconfig" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3fa6edcb, "config_group_init_type_name" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x6c1840d7, "usb_function_register" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xf14b0edb, "alloc_ep_req" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xacd423d0, "config_ep_by_speed" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x2dd05bd7, "usb_string_id" },
	{ 0x10aa45d, "usb_assign_descriptors" },
	{ 0xd48ad87a, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "8B6CF6DA294CD1C4E512841");
