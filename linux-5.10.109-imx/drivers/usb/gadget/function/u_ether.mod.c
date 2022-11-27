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
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0x97255bdf, "strlen" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbf86db9e, "netif_carrier_on" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x11f7ed4c, "hex_to_bin" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x128e1bbd, "netif_carrier_off" },
	{ 0x5985da7d, "__dev_kfree_skb_any" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x7984ca61, "__netdev_alloc_skb" },
	{ 0x87cc842a, "netif_rx" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x29ce82ef, "netif_tx_wake_queue" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xe38671, "ethtool_op_get_link" },
	{ 0xc920b676, "free_netdev" },
	{ 0xd2fe2875, "register_netdev" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xa4c66deb, "skb_queue_tail" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x2ad1a999, "eth_type_trans" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x50b13285, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x8c7f2657, "skb_dequeue" },
	{ 0xf20f5389, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xb5ace906, "skb_put" },
	{ 0xad433857, "eth_mac_addr" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x1cb16b9f, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9F0C987F01F29C79D8F756B");
