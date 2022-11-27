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
	{ 0x5e28563f, "usb_function_deactivate" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xc69ded7c, "usb_gstrings_attach" },
	{ 0x67db4acc, "usb_free_all_descriptors" },
	{ 0x42b9bff2, "gserial_connect" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2646e395, "usb_function_unregister" },
	{ 0xa88f05b2, "usb_function_activate" },
	{ 0xff13f6d, "usb_put_function_instance" },
	{ 0xcd233e05, "usb_ep_autoconfig" },
	{ 0xe26427f8, "gserial_disconnect" },
	{ 0x3fa6edcb, "config_group_init_type_name" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x6c1840d7, "usb_function_register" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xe89dc424, "gserial_alloc_line_no_console" },
	{ 0xacd423d0, "config_ep_by_speed" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0x10aa45d, "usb_assign_descriptors" },
	{ 0xd48ad87a, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "libcomposite,u_serial");


MODULE_INFO(srcversion, "BA5CCD81F3291C3650A4EBE");
