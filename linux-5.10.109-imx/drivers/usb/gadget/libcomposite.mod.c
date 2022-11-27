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
	{ 0xa24f23d8, "__request_module" },
	{ 0x4b946720, "device_remove_file" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x349cba85, "strchr" },
	{ 0x192dcdae, "usb_gadget_deactivate" },
	{ 0x97255bdf, "strlen" },
	{ 0x493356e, "usb_ep_queue" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x3433902e, "config_item_put" },
	{ 0xaca2f705, "config_item_init_type_name" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xd9d08b68, "usb_gadget_unregister_driver" },
	{ 0xfc2362bb, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x714a0d12, "usb_gadget_set_state" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x2057195a, "usb_gadget_clear_selfpowered" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x84b183ae, "strncmp" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8187e47f, "usb_gadget_activate" },
	{ 0x3fa6edcb, "config_group_init_type_name" },
	{ 0x8b861091, "init_uts_ns" },
	{ 0xb8ea980f, "configfs_register_subsystem" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x1d46f1f9, "device_create_file" },
	{ 0xfaca3c54, "usb_ep_dequeue" },
	{ 0x258e5df1, "module_put" },
	{ 0x4d4b97be, "config_item_set_name" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x8cc6ebb, "usb_gadget_vbus_draw" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x1e7fc0b0, "usb_gadget_set_selfpowered" },
	{ 0x6a0db5f7, "configfs_unregister_subsystem" },
	{ 0x1e6d9161, "usb_ep_free_request" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x7d7384ac, "usb_gadget_ep_match_desc" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x8abfac2f, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x90f907f8, "config_group_init" },
	{ 0x825ff9f1, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3CF11A3598723F73B196879");
