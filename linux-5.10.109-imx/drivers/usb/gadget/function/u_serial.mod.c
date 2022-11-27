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
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x8a28d847, "usb_ep_disable" },
	{ 0x5043d255, "usb_ep_enable" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x60cdf30, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x29d9f26e, "cancel_delayed_work_sync" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x991eee78, "put_tty_driver" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0xf65df4be, "tty_set_operations" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x928b443f, "tty_port_register_device" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xfed9624a, "tty_port_init" },
	{ 0x91362684, "tty_insert_flip_string_fixed_flag" },
	{ 0x27c82479, "tty_port_destroy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x959b16bc, "tty_unregister_device" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3a5c355f, "tty_unregister_driver" },
	{ 0x982e08b5, "tty_hangup" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xf072d07c, "__tty_alloc_driver" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x49970de8, "finish_wait" },
	{ 0xa92db401, "tty_flip_buffer_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x4940ed11, "tty_wakeup" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F736DB83BF4FF367E242CED");
