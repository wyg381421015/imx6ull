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
	{ 0x2d3385d3, "system_wq" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0x163d21d6, "get_tree_single" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0xec7f721a, "kthread_unuse_mm" },
	{ 0x75a20962, "no_llseek" },
	{ 0x34f2b8df, "generic_delete_inode" },
	{ 0x61e2a07a, "dput" },
	{ 0xd3686762, "dup_iter" },
	{ 0xf42cd2e4, "init_user_ns" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1ffb28cb, "d_add" },
	{ 0xd947a192, "usb_ep_set_halt" },
	{ 0xd9d08b68, "usb_gadget_unregister_driver" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0x50b88f41, "usb_get_gadget_udc_name" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x714a0d12, "usb_gadget_set_state" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x31fe9eab, "d_delete" },
	{ 0xf3160544, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x3208d1c3, "kill_litter_super" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0x328a05f1, "strncpy" },
	{ 0xfa5a0990, "fasync_helper" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xf9a46dd1, "usb_ep_clear_halt" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x4253aa7e, "down_write" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xfaca3c54, "usb_ep_dequeue" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x8cc6ebb, "usb_gadget_vbus_draw" },
	{ 0x8055863a, "simple_dir_operations" },
	{ 0x12a38747, "usleep_range" },
	{ 0xad3a5819, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x5886c45, "_copy_from_iter_full" },
	{ 0xbf05ad55, "kthread_use_mm" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x68bf8357, "kiocb_set_cancel_fn" },
	{ 0x8220d90d, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8abfac2f, "usb_gadget_probe_driver" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x889a98c5, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x33266aab, "current_time" },
	{ 0x4517656f, "d_make_root" },
	{ 0xce4ad7ab, "kill_fasync" },
	{ 0x932e773e, "simple_statfs" },
	{ 0xa59b87af, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0xb77ef22c, "unregister_filesystem" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xf25ab2a4, "new_inode" },
	{ 0x99bb8806, "memmove" },
	{ 0xebf568ca, "usb_ep_fifo_flush" },
	{ 0x3bf99d27, "simple_dir_inode_operations" },
	{ 0xced4b963, "param_ops_uint" },
	{ 0x8637b5f2, "_copy_to_iter" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C7C1E167982E00195BBDFB4");
