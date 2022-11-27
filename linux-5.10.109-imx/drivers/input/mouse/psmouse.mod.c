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
	{ 0x4b946720, "device_remove_file" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x97255bdf, "strlen" },
	{ 0x20ee093f, "device_add_groups" },
	{ 0xfd229c0c, "dev_printk" },
	{ 0x6f602116, "serio_unregister_driver" },
	{ 0xbd2f04c1, "ps2_handle_ack" },
	{ 0xc144d45a, "ps2_sendbyte" },
	{ 0xc2ad672f, "ps2_handle_response" },
	{ 0x4b76da14, "input_mt_report_finger_count" },
	{ 0xcb333379, "input_alloc_absinfo" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbec706ea, "ps2_end_command" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x5ba58492, "i2c_for_each_dev" },
	{ 0xbaa65f43, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x19b35e69, "i2c_verify_adapter" },
	{ 0x85df9b6c, "strsep" },
	{ 0x42af52f2, "serio_interrupt" },
	{ 0x66ed8480, "_dev_notice" },
	{ 0x827be250, "ps2_drain" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xde72a604, "sysfs_remove_group" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe91ae976, "input_mt_report_pointer_emulation" },
	{ 0x8ebb72b, "input_set_abs_params" },
	{ 0xf36a6ce, "input_event" },
	{ 0x9970d467, "serio_unregister_child_port" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xddec5308, "__serio_register_driver" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xa3990874, "i2c_bus_type" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x7370e808, "sysfs_create_group" },
	{ 0x71c90087, "memcmp" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0x84b183ae, "strncmp" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x961f704d, "input_set_capability" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcb99bd3a, "input_mt_init_slots" },
	{ 0x7cba5270, "serio_close" },
	{ 0x4f7e1123, "i2c_unregister_device" },
	{ 0xb108153c, "serio_open" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x49f26466, "kstrndup" },
	{ 0x1d46f1f9, "device_create_file" },
	{ 0xce096310, "i2c_adapter_type" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x5c880c5c, "bus_register_notifier" },
	{ 0x12a38747, "usleep_range" },
	{ 0x48f341d0, "i2c_new_scanned_device" },
	{ 0x3a3051eb, "ps2_command" },
	{ 0xcf86cdac, "queue_delayed_work_on" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x323e6c9c, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x39d1f76d, "pm_wakeup_dev_event" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x2a1bcca3, "ps2_sliced_command" },
	{ 0x196f76a1, "input_free_device" },
	{ 0xf56380c3, "input_mt_drop_unused" },
	{ 0x39ed1e26, "ps2_init" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xf61ff184, "serio_reconnect" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x7fff1b7e, "__serio_register_port" },
	{ 0xa6a7cfd0, "device_remove_groups" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9d669763, "memcpy" },
	{ 0x15515b07, "input_unregister_device" },
	{ 0x57290765, "serio_rescan" },
	{ 0x810a7f3a, "input_mt_report_slot_state" },
	{ 0xb2a1dca0, "ps2_cmd_aborted" },
	{ 0x49970de8, "finish_wait" },
	{ 0xce2ca93, "input_mt_sync_frame" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x29dcc55c, "i2c_client_type" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xeaabc887, "bus_unregister_notifier" },
	{ 0xced4b963, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x62dafe6c, "ps2_begin_command" },
	{ 0xdf1ce255, "input_mt_assign_slots" },
	{ 0x87204845, "input_allocate_device" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty05pr*id*ex*");

MODULE_INFO(srcversion, "1E93EACEC3A0F8C7643A7A4");
