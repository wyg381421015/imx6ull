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
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0x97255bdf, "strlen" },
	{ 0x221fdd4e, "gether_get_qmult" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0x600a75bf, "gether_setup_name_default" },
	{ 0xbf86db9e, "netif_carrier_on" },
	{ 0x128e1bbd, "netif_carrier_off" },
	{ 0x5985da7d, "__dev_kfree_skb_any" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x50c14684, "gether_get_ifname" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4c6e1564, "skb_realloc_headroom" },
	{ 0x8878cfa6, "gether_cleanup" },
	{ 0x2646e395, "usb_function_unregister" },
	{ 0x10960ce9, "skb_trim" },
	{ 0xfdb19006, "gether_set_host_addr" },
	{ 0x9fbcd711, "gether_get_dev_addr" },
	{ 0x5f754e5a, "memset" },
	{ 0x945790f9, "gether_connect" },
	{ 0x29ce82ef, "netif_tx_wake_queue" },
	{ 0xff13f6d, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcd233e05, "usb_ep_autoconfig" },
	{ 0xc920b676, "free_netdev" },
	{ 0xa24491bf, "ida_free" },
	{ 0x2bdaf4dd, "gether_set_gadget" },
	{ 0xf31456ba, "skb_push" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x41e96d90, "gether_get_host_addr" },
	{ 0x3fa6edcb, "config_group_init_type_name" },
	{ 0xdf9e9501, "gether_set_qmult" },
	{ 0x2d480842, "gether_get_host_addr_u8" },
	{ 0xf8ba5d95, "skb_pull" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x6c1840d7, "usb_function_register" },
	{ 0xa4c66deb, "skb_queue_tail" },
	{ 0xb5e602a4, "gether_register_netdev" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x63dccd14, "kfree_skb" },
	{ 0x98189a63, "gether_set_dev_addr" },
	{ 0xacd423d0, "config_ep_by_speed" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xf9060575, "gether_disconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x10aa45d, "usb_assign_descriptors" },
	{ 0xd48ad87a, "usb_interface_id" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x990404d6, "usb_os_desc_prepare_interf_dir" },
	{ 0xbaf6fc92, "dev_get_stats" },
	{ 0xa5684076, "ida_alloc_range" },
};

MODULE_INFO(depends, "libcomposite,u_ether");


MODULE_INFO(srcversion, "407E7523C8A126BBE04C86C");
