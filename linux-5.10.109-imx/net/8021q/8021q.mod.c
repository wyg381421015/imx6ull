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
	{ 0xd704c733, "register_netdevice" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xe0050f6a, "dev_change_flags" },
	{ 0x334322e8, "vlan_filter_push_vids" },
	{ 0xc2c05205, "dev_mc_unsync" },
	{ 0x47eda3dd, "vlan_filter_drop_vids" },
	{ 0x13a1343f, "dev_get_flags" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xe07ce67b, "proc_create_single_data" },
	{ 0xe23afa5, "vlan_dev_vlan_id" },
	{ 0xfa259f12, "dev_uc_add" },
	{ 0xeee3c725, "_proc_mkdir" },
	{ 0x5c47b0f8, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x20800625, "vlan_uses_dev" },
	{ 0xbf86db9e, "netif_carrier_on" },
	{ 0x71b0679c, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x128e1bbd, "netif_carrier_off" },
	{ 0xfd47e0b2, "remove_proc_entry" },
	{ 0xbf5b17a2, "dev_set_allmulti" },
	{ 0x740123c4, "vlan_vid_del" },
	{ 0x9af58fab, "call_netdevice_notifiers" },
	{ 0x3ae4e066, "linkwatch_fire_event" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0xa3b5a2e9, "vlan_vid_add" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xcf3fac84, "cpumask_next" },
	{ 0x98aa2807, "proc_remove" },
	{ 0x778b334f, "vlan_ioctl_set" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x1e96f43d, "__cpu_possible_mask" },
	{ 0x1c461321, "unregister_pernet_subsys" },
	{ 0x9fdecc31, "unregister_netdevice_many" },
	{ 0x580b7958, "__ethtool_get_link_ksettings" },
	{ 0xc5850110, "printk" },
	{ 0xe38671, "ethtool_op_get_link" },
	{ 0x2820969, "ns_capable" },
	{ 0xc920b676, "free_netdev" },
	{ 0x328a05f1, "strncpy" },
	{ 0x716b58c8, "nla_put" },
	{ 0xc1428f8c, "netdev_upper_dev_unlink" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xf31456ba, "skb_push" },
	{ 0x275734f1, "netif_stacked_transfer_operstate" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x3edd5b6f, "init_net" },
	{ 0x77dc4d02, "rtnl_link_unregister" },
	{ 0x40e165df, "__dev_get_by_index" },
	{ 0xcef4d5b4, "__alloc_percpu_gfp" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xb75461c3, "eth_header_parse" },
	{ 0x13304146, "alloc_netdev_mqs" },
	{ 0xdbfd7e09, "register_pernet_subsys" },
	{ 0xdc238815, "netdev_upper_dev_link" },
	{ 0x21c75594, "proc_create_net_data" },
	{ 0xde6b63c0, "ether_setup" },
	{ 0xd712bb17, "dev_uc_unsync" },
	{ 0xeecb686e, "__dev_get_by_name" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0xcc60cfb8, "unregister_netdevice_queue" },
	{ 0xd491ae7, "netdev_warn" },
	{ 0x50b13285, "eth_validate_addr" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x5b1435c, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x58b4645c, "dev_close_many" },
	{ 0x84af656c, "rtnl_link_register" },
	{ 0xcf7dde1, "dev_uc_del" },
	{ 0xb2c6056b, "dev_uc_sync" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x6afedad7, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5fe7b9f6, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x1ba07526, "dev_mc_sync" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xbaf6fc92, "dev_get_stats" },
	{ 0xc622e408, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A0898C5C3AD5BF271E93EED");
