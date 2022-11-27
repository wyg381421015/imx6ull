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
	{ 0xddd73f70, "ipu_init_channel" },
	{ 0x9730acb8, "ipu_uninit_channel" },
	{ 0xa6c13453, "ipu_init_channel_buffer" },
	{ 0x5f754e5a, "memset" },
	{ 0x3c170803, "ipu_disable_channel" },
	{ 0x316f802b, "ipu_enable_channel" },
	{ 0xc5850110, "printk" },
	{ 0x7e8c8b34, "ipu_disable_csi" },
	{ 0x693937d, "ipu_clear_irq" },
	{ 0x964a9d98, "ipu_free_irq" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x57a42599, "ipu_enable_csi" },
	{ 0xc9eb41aa, "ipu_select_buffer" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xd86a2374, "ipu_request_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ABD8C24DF9618B3187F80C0");
