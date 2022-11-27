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
	{ 0xe38671, "ethtool_op_get_link" },
	{ 0x50b13285, "eth_validate_addr" },
	{ 0x84af2356, "usb_deregister" },
	{ 0x465cfd4c, "usb_register_driver" },
	{ 0xc6cbbc89, "capable" },
	{ 0x9b8e952, "netdev_notice" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd2fe2875, "register_netdev" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x1cb16b9f, "alloc_etherdev_mqs" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x9f8a7ae4, "usb_control_msg_recv" },
	{ 0xfa7ddd01, "usb_control_msg_send" },
	{ 0x9d669763, "memcpy" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xc920b676, "free_netdev" },
	{ 0x63dccd14, "kfree_skb" },
	{ 0xf20f5389, "unregister_netdev" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x46a10817, "usb_alloc_urb" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x7984ca61, "__netdev_alloc_skb" },
	{ 0x29ce82ef, "netif_tx_wake_queue" },
	{ 0xb502c36c, "__dev_kfree_skb_irq" },
	{ 0x728b051b, "usb_unlink_urb" },
	{ 0x72d6f35f, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3cd93022, "usb_kill_urb" },
	{ 0x1120addc, "netif_device_attach" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xbf86db9e, "netif_carrier_on" },
	{ 0x128e1bbd, "netif_carrier_off" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x87cc842a, "netif_rx" },
	{ 0x2ad1a999, "eth_type_trans" },
	{ 0xb5ace906, "skb_put" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x67a2536f, "netif_device_detach" },
	{ 0xeb4808ed, "usb_submit_urb" },
	{ 0x676bbc0f, "_set_bit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3980p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p401Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p401Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5F2C962DA66DA30A7C06BEB");
