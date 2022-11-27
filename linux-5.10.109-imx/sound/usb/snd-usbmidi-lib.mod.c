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
	{ 0xba2deb02, "snd_rawmidi_proceed" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xa7b3181c, "up_read" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x3cd93022, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xc41d31e9, "snd_rawmidi_set_ops" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x31dffa08, "snd_rawmidi_new" },
	{ 0xfb1d7438, "down_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xedd9b855, "usb_set_interface" },
	{ 0xb2415259, "snd_ctl_notify" },
	{ 0xdbac1990, "usb_control_msg" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x7fd589ba, "snd_rawmidi_transmit_peek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfe96b153, "usb_free_coherent" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x4253aa7e, "down_write" },
	{ 0x4440e48, "usb_urb_ep_type_check" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xeb4808ed, "usb_submit_urb" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xf5aeddae, "snd_rawmidi_transmit_ack" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x45c68d8b, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x19fde984, "snd_ctl_new1" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x8bb71628, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6578533e, "prepare_to_wait" },
	{ 0x49970de8, "finish_wait" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x775d621a, "usb_alloc_coherent" },
	{ 0xd87c1f9f, "snd_ctl_add" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x372d0a46, "snd_rawmidi_transmit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x72d6f35f, "usb_free_urb" },
	{ 0x6f013ecd, "__init_rwsem" },
	{ 0x51b5a18c, "snd_rawmidi_receive" },
	{ 0x46a10817, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "7AE300CA7917B0A38E6896E");
