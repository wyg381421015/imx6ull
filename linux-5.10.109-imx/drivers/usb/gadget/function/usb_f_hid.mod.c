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
	{ 0x9f90f627, "cdev_del" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x762e703b, "cdev_init" },
	{ 0xc69ded7c, "usb_gstrings_attach" },
	{ 0x67db4acc, "usb_free_all_descriptors" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0x4ad470be, "device_destroy" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2646e395, "usb_function_unregister" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xff13f6d, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcd233e05, "usb_ep_autoconfig" },
	{ 0xa24491bf, "ida_free" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3fa6edcb, "config_group_init_type_name" },
	{ 0x1d223c91, "noop_llseek" },
	{ 0xfe47adbf, "device_create" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6c1840d7, "usb_function_register" },
	{ 0xc32fd89e, "cdev_add" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xf14b0edb, "alloc_ep_req" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xacd423d0, "config_ep_by_speed" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x1a51a7b7, "class_destroy" },
	{ 0x10aa45d, "usb_assign_descriptors" },
	{ 0x49970de8, "finish_wait" },
	{ 0xd48ad87a, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xeb9be462, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "83A1E29E7622B23238B353C");
