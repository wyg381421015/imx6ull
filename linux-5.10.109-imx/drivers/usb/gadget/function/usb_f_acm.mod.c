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
	{ 0xf8cdfe49, "gserial_resume" },
	{ 0xc69ded7c, "usb_gstrings_attach" },
	{ 0x67db4acc, "usb_free_all_descriptors" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x42b9bff2, "gserial_connect" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0xd947a192, "usb_ep_set_halt" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2646e395, "usb_function_unregister" },
	{ 0xff13f6d, "usb_put_function_instance" },
	{ 0xcd233e05, "usb_ep_autoconfig" },
	{ 0xe26427f8, "gserial_disconnect" },
	{ 0x27876423, "gserial_suspend" },
	{ 0x97b272b7, "gs_alloc_req" },
	{ 0x3fa6edcb, "config_group_init_type_name" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0x6c1840d7, "usb_function_register" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xacd423d0, "config_ep_by_speed" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0x10aa45d, "usb_assign_descriptors" },
	{ 0xd48ad87a, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x277fd1dc, "gs_free_req" },
};

MODULE_INFO(depends, "u_serial,libcomposite");


MODULE_INFO(srcversion, "B4C17A8AD715C8CA24C0169");
