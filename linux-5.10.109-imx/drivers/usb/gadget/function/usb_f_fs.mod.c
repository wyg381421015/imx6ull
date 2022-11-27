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
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x97255bdf, "strlen" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xec7f721a, "kthread_unuse_mm" },
	{ 0x795e9e2c, "__fs_parse" },
	{ 0xfdab1c0e, "stream_open" },
	{ 0x75a20962, "no_llseek" },
	{ 0x34f2b8df, "generic_delete_inode" },
	{ 0x61e2a07a, "dput" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xd3686762, "dup_iter" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1ffb28cb, "d_add" },
	{ 0xd947a192, "usb_ep_set_halt" },
	{ 0x999e8297, "vfree" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2646e395, "usb_function_unregister" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xdd4ffa9b, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x31fe9eab, "d_delete" },
	{ 0xf3160544, "make_kgid" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0x5f754e5a, "memset" },
	{ 0x3208d1c3, "kill_litter_super" },
	{ 0xff13f6d, "usb_put_function_instance" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x28656905, "unregister_gadget_item" },
	{ 0xc5850110, "printk" },
	{ 0xcd233e05, "usb_ep_autoconfig" },
	{ 0xd67364f7, "eventfd_ctx_fdget" },
	{ 0x30745185, "wait_for_completion_interruptible" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb7362c90, "do_wait_intr_irq" },
	{ 0x3fa6edcb, "config_group_init_type_name" },
	{ 0x62d0e2a6, "__wake_up_locked" },
	{ 0xf9a46dd1, "usb_ep_clear_halt" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6c1840d7, "usb_function_register" },
	{ 0x8dfefc0d, "kvmalloc_node" },
	{ 0xfaca3c54, "usb_ep_dequeue" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd9ce8f0c, "strnlen" },
	{ 0x8055863a, "simple_dir_operations" },
	{ 0xad3a5819, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x5886c45, "_copy_from_iter_full" },
	{ 0x147bbcb0, "fs_param_is_u32" },
	{ 0xacd423d0, "config_ep_by_speed" },
	{ 0x1ee03875, "get_tree_nodev" },
	{ 0xbf05ad55, "kthread_use_mm" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x68bf8357, "kiocb_set_cancel_fn" },
	{ 0x8220d90d, "register_filesystem" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x49aa4117, "fs_param_is_bool" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0xbb5e3da7, "logfc" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x889a98c5, "usb_ep_fifo_status" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x33266aab, "current_time" },
	{ 0x4517656f, "d_make_root" },
	{ 0x932e773e, "simple_statfs" },
	{ 0x83f9ae28, "sg_alloc_table_from_pages" },
	{ 0xa59b87af, "d_alloc_name" },
	{ 0x49970de8, "finish_wait" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xd48ad87a, "usb_interface_id" },
	{ 0xb77ef22c, "unregister_filesystem" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xf25ab2a4, "new_inode" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x941f2aaa, "eventfd_ctx_put" },
	{ 0x99bb8806, "memmove" },
	{ 0x807c3a, "vmalloc_to_page" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xebf568ca, "usb_ep_fifo_flush" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3bf99d27, "simple_dir_inode_operations" },
	{ 0xf4111079, "usb_string_ids_n" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x8637b5f2, "_copy_to_iter" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "31EEDBF384F7E97C92F894E");
