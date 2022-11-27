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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x4ff1eb12, "tty_register_ldisc" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xce2d8386, "serio_unregister_port" },
	{ 0xc5850110, "printk" },
	{ 0x7fff1b7e, "__serio_register_port" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x9a3022f6, "tty_name" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x42af52f2, "serio_interrupt" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x353e3fa5, "__get_user_4" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FF63137611ED6D27FFCDC2A");
