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
	{ 0xc19ec0e2, "tty_port_tty_get" },
	{ 0x6d662533, "_find_first_bit_le" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7b8b4378, "bus_register" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x6b50989d, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x5c47b0f8, "seq_puts" },
	{ 0x895ed7fb, "tty_port_open" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0x71b0679c, "seq_printf" },
	{ 0x52c59263, "tty_port_hangup" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0x3cd93022, "usb_kill_urb" },
	{ 0x60cdf30, "tty_register_driver" },
	{ 0x33341078, "usb_autopm_get_interface" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x991eee78, "put_tty_driver" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xf65df4be, "tty_set_operations" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x3c873381, "__tty_insert_flip_char" },
	{ 0xef3f5322, "tty_port_close" },
	{ 0x2878e15a, "idr_destroy" },
	{ 0x5f74e845, "device_del" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x84af2356, "usb_deregister" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfc0ef2e9, "tty_ldisc_deref" },
	{ 0x928b443f, "tty_port_register_device" },
	{ 0xf662606b, "driver_unregister" },
	{ 0xc51c7039, "usb_unpoison_urb" },
	{ 0x2a40358b, "usb_poison_urb" },
	{ 0x8b8972e2, "seq_putc" },
	{ 0xfed9624a, "tty_port_init" },
	{ 0x91362684, "tty_insert_flip_string_fixed_flag" },
	{ 0x27c82479, "tty_port_destroy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x3d4f4d5c, "tty_vhangup" },
	{ 0xdb2da14d, "tty_ldisc_ref" },
	{ 0x692a4f08, "idr_alloc" },
	{ 0xa10a6221, "device_add" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x5e0cfda4, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9a1f5da5, "usb_store_new_id" },
	{ 0xcec230f7, "usb_match_id" },
	{ 0xa346975c, "idr_remove" },
	{ 0xc7ce6a9b, "tty_port_tty_wakeup" },
	{ 0x258e5df1, "module_put" },
	{ 0x959b16bc, "tty_unregister_device" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0xeb4808ed, "usb_submit_urb" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x1d5bd0a1, "usb_get_dev" },
	{ 0xbfd3dafb, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6c5fcad2, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xa3df128, "usb_get_intf" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3a5c355f, "tty_unregister_driver" },
	{ 0x982e08b5, "tty_hangup" },
	{ 0x845b2069, "usb_show_dynids" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x31fc1140, "tty_standard_install" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xf072d07c, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6c22ac4, "device_initialize" },
	{ 0x409f94dd, "usb_match_one_id" },
	{ 0x465cfd4c, "usb_register_driver" },
	{ 0x1cd1088, "tty_kref_put" },
	{ 0x49970de8, "finish_wait" },
	{ 0xc994a4d1, "driver_attach" },
	{ 0xa92db401, "tty_flip_buffer_push" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8a48d40, "param_ops_ushort" },
	{ 0x8f61ba0d, "dev_set_name" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x47925794, "idr_find" },
	{ 0x72d6f35f, "usb_free_urb" },
	{ 0x825ff9f1, "try_module_get" },
	{ 0x6395ba8, "usb_autopm_put_interface" },
	{ 0x46a10817, "usb_alloc_urb" },
	{ 0x7bd0f60d, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "21A639806C90710A2ED5116");
