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
	{ 0xc69ded7c, "usb_gstrings_attach" },
	{ 0x67db4acc, "usb_free_all_descriptors" },
	{ 0x221fdd4e, "gether_get_qmult" },
	{ 0x600a75bf, "gether_setup_name_default" },
	{ 0x7d6a75e1, "gether_get_host_addr_cdc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x50c14684, "gether_get_ifname" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x2646e395, "usb_function_unregister" },
	{ 0xfdb19006, "gether_set_host_addr" },
	{ 0x9fbcd711, "gether_get_dev_addr" },
	{ 0x945790f9, "gether_connect" },
	{ 0xff13f6d, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xcd233e05, "usb_ep_autoconfig" },
	{ 0xc920b676, "free_netdev" },
	{ 0x2bdaf4dd, "gether_set_gadget" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x41e96d90, "gether_get_host_addr" },
	{ 0x3fa6edcb, "config_group_init_type_name" },
	{ 0xdf9e9501, "gether_set_qmult" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x6c1840d7, "usb_function_register" },
	{ 0xb5e602a4, "gether_register_netdev" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x98189a63, "gether_set_dev_addr" },
	{ 0xacd423d0, "config_ep_by_speed" },
	{ 0xf9060575, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x10aa45d, "usb_assign_descriptors" },
	{ 0xd48ad87a, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "41B19EEFCD1834143AA71B9");
