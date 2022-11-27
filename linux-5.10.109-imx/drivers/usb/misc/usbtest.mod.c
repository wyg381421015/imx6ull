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
	{ 0x799c1de5, "param_ops_int" },
	{ 0xced4b963, "param_ops_uint" },
	{ 0x8a48d40, "param_ops_ushort" },
	{ 0x84af2356, "usb_deregister" },
	{ 0x465cfd4c, "usb_register_driver" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0xedd9b855, "usb_set_interface" },
	{ 0x2e6cfae4, "usb_get_descriptor" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x3892fa63, "mem_map" },
	{ 0x3bd2110b, "usb_clear_halt" },
	{ 0x958a241e, "page_address" },
	{ 0xcc58cc9, "usb_get_status" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x3cd93022, "usb_kill_urb" },
	{ 0x4fef3ef4, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xfe96b153, "usb_free_coherent" },
	{ 0x72d6f35f, "usb_free_urb" },
	{ 0x775d621a, "usb_alloc_coherent" },
	{ 0x46a10817, "usb_alloc_urb" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x728b051b, "usb_unlink_urb" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xeb4808ed, "usb_submit_urb" },
	{ 0xc37335b0, "complete" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xdbac1990, "usb_control_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x807b1f1, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb24574ba, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5f754e5a, "memset" },
	{ 0x526c3a6c, "jiffies" },
	{ 0x8aa73e63, "usb_sg_cancel" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B3AB7D80A3376517FC594B0");
