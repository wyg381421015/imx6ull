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
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x8b9edc32, "snd_register_device" },
	{ 0x4ec64488, "snd_card_file_remove" },
	{ 0x983ac031, "remove_wait_queue" },
	{ 0x1ab97f1a, "snd_device_initialize" },
	{ 0xb2e5ae4a, "snd_lookup_minor_data" },
	{ 0x71b0679c, "seq_printf" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xff3d24c6, "snd_ctl_unregister_ioctl" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x5f754e5a, "memset" },
	{ 0x450c65b1, "snd_device_new" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xd5a73d25, "snd_unregister_device" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8f595b11, "snd_major" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x258e5df1, "module_put" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xbc10dd97, "__put_user_4" },
	{ 0xd495f048, "snd_card_file_add" },
	{ 0x88592e7f, "snd_ctl_register_ioctl" },
	{ 0xbfd3dafb, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xa17bd3fc, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0xa32cdd12, "snd_info_free_entry" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f61ba0d, "dev_set_name" },
	{ 0x4d93739a, "snd_info_create_module_entry" },
	{ 0x1216a8b, "snd_info_register" },
	{ 0x825ff9f1, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "386E6ACA3950DE4D76544BE");
