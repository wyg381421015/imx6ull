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
	{ 0x9c9a6487, "v4l2_ctrl_subdev_log_status" },
	{ 0xa8cc57f0, "i2c_del_driver" },
	{ 0x38059b4, "i2c_register_driver" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc3249c74, "au8522_readreg" },
	{ 0x2df12e8e, "au8522_writereg" },
	{ 0x315ebe0d, "v4l2_ctrl_new_std" },
	{ 0xcd14ff4a, "v4l2_ctrl_handler_init_class" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xc6d1b824, "media_entity_pads_init" },
	{ 0x2758d09a, "v4l2_i2c_subdev_init" },
	{ 0xc5850110, "printk" },
	{ 0xa2352936, "au8522_get_state" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x992e0b3f, "au8522_release_state" },
	{ 0x42cfbc31, "v4l2_ctrl_handler_free" },
	{ 0xe9c1741e, "v4l2_device_unregister_subdev" },
};

MODULE_INFO(depends, "au8522_common");

MODULE_ALIAS("i2c:au8522");

MODULE_INFO(srcversion, "23150F46184763180E1D7C2");
