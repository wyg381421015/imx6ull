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
	{ 0x6f5b000d, "kernel_write" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc69ded7c, "usb_gstrings_attach" },
	{ 0xc207ee07, "complete_and_exit" },
	{ 0xa7b3181c, "up_read" },
	{ 0x67db4acc, "usb_free_all_descriptors" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xa6c66b87, "dequeue_signal" },
	{ 0x349cba85, "strchr" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0x97255bdf, "strlen" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x1cc317ef, "usb_ep_set_wedge" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x3433902e, "config_item_put" },
	{ 0x1019fcef, "file_path" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x7ba10d67, "vfs_fsync" },
	{ 0xd947a192, "usb_ep_set_halt" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2646e395, "usb_function_unregister" },
	{ 0xdb4c9a5d, "kthread_create_on_node" },
	{ 0xfb1d7438, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x4783090f, "kernel_read" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xe035a4b4, "device_register" },
	{ 0xff13f6d, "usb_put_function_instance" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x2eda0cfa, "freezing_slow_path" },
	{ 0x66657274, "kmalloc_order" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x28656905, "unregister_gadget_item" },
	{ 0xc5850110, "printk" },
	{ 0xcd233e05, "usb_ep_autoconfig" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3fa6edcb, "config_group_init_type_name" },
	{ 0xf9a46dd1, "usb_ep_clear_halt" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x4253aa7e, "down_write" },
	{ 0xcce371a0, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6c1840d7, "usb_function_register" },
	{ 0xed57aa6f, "usb_composite_setup_continue" },
	{ 0xfaca3c54, "usb_ep_dequeue" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xbfd3dafb, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xacd423d0, "config_ep_by_speed" },
	{ 0x39eb0287, "wake_up_process" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x248b40f0, "send_sig_info" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0x9781394d, "invalidate_mapping_pages" },
	{ 0x10aa45d, "usb_assign_descriptors" },
	{ 0x49970de8, "finish_wait" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xd48ad87a, "usb_interface_id" },
	{ 0x6fa0f753, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x99bb8806, "memmove" },
	{ 0x8f61ba0d, "dev_set_name" },
	{ 0xebf568ca, "usb_ep_fifo_flush" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x39f9b1bc, "filp_open" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "6C9A6814E037F256B106868");
