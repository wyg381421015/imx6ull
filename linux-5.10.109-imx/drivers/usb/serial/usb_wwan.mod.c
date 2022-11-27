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
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x75d221b0, "usb_get_from_anchor" },
	{ 0x3cd93022, "usb_kill_urb" },
	{ 0x33341078, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x728b051b, "usb_unlink_urb" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5f754e5a, "memset" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x842ba783, "usb_autopm_put_interface_async" },
	{ 0xdbac1990, "usb_control_msg" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x91362684, "tty_insert_flip_string_fixed_flag" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xc6cbbc89, "capable" },
	{ 0xeb4808ed, "usb_submit_urb" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x69fc2d52, "usb_autopm_get_interface_async" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8bb71628, "usb_autopm_get_interface_no_resume" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xa92db401, "tty_flip_buffer_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x90c544a4, "usb_serial_port_softint" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x72d6f35f, "usb_free_urb" },
	{ 0x6395ba8, "usb_autopm_put_interface" },
	{ 0x27c8ffed, "usb_anchor_urb" },
	{ 0x46a10817, "usb_alloc_urb" },
};

MODULE_INFO(depends, "usbserial");


MODULE_INFO(srcversion, "D58B9C157F88684EF5D4069");
