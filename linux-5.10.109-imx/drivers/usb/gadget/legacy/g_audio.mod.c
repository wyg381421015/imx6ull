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
	{ 0x19567c87, "usb_add_config" },
	{ 0x33a3d298, "param_ops_charp" },
	{ 0xff13f6d, "usb_put_function_instance" },
	{ 0x27005319, "usb_composite_overwrite_options" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0xd07f33f0, "usb_composite_probe" },
	{ 0x2eef8863, "usb_add_function" },
	{ 0x112acb86, "usb_put_function" },
	{ 0xa91a2166, "usb_composite_unregister" },
	{ 0xe65fe9c5, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x89b637fb, "usb_string_ids_tab" },
	{ 0xa245602, "usb_get_function_instance" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8a48d40, "param_ops_ushort" },
	{ 0xced4b963, "param_ops_uint" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6132878E973B20B6BE7DADD");
