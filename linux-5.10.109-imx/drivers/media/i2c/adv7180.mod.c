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
	{ 0x2d9f9bdf, "v4l2_event_subdev_unsubscribe" },
	{ 0xa8cc57f0, "i2c_del_driver" },
	{ 0x38059b4, "i2c_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xf499f8e9, "v4l2_async_register_subdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x86603d42, "i2c_new_dummy_device" },
	{ 0xc6d1b824, "media_entity_pads_init" },
	{ 0x37176c5, "v4l2_ctrl_handler_setup" },
	{ 0x5aa7ffc, "v4l2_ctrl_new_custom" },
	{ 0x315ebe0d, "v4l2_ctrl_new_std" },
	{ 0xcd14ff4a, "v4l2_ctrl_handler_init_class" },
	{ 0x2758d09a, "v4l2_i2c_subdev_init" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xbb981c00, "devm_gpiod_get_optional" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x5f754e5a, "memset" },
	{ 0xe24fe29c, "v4l2_subdev_notify_event" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1628665e, "gpiod_set_value_cansleep" },
	{ 0x4f7e1123, "i2c_unregister_device" },
	{ 0x42cfbc31, "v4l2_ctrl_handler_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x69d61f88, "v4l2_async_unregister_subdev" },
	{ 0x9058bebf, "i2c_smbus_read_byte_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x87a2f76, "v4l2_ctrl_subdev_subscribe_event" },
	{ 0xb87d4c82, "v4l2_src_change_event_subdev_subscribe" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xa32db62a, "i2c_smbus_write_byte_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cadi,adv7180");
MODULE_ALIAS("of:N*T*Cadi,adv7180C*");
MODULE_ALIAS("of:N*T*Cadi,adv7180cp");
MODULE_ALIAS("of:N*T*Cadi,adv7180cpC*");
MODULE_ALIAS("of:N*T*Cadi,adv7180st");
MODULE_ALIAS("of:N*T*Cadi,adv7180stC*");
MODULE_ALIAS("of:N*T*Cadi,adv7182");
MODULE_ALIAS("of:N*T*Cadi,adv7182C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280");
MODULE_ALIAS("of:N*T*Cadi,adv7280C*");
MODULE_ALIAS("of:N*T*Cadi,adv7280-m");
MODULE_ALIAS("of:N*T*Cadi,adv7280-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281");
MODULE_ALIAS("of:N*T*Cadi,adv7281C*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-m");
MODULE_ALIAS("of:N*T*Cadi,adv7281-mC*");
MODULE_ALIAS("of:N*T*Cadi,adv7281-ma");
MODULE_ALIAS("of:N*T*Cadi,adv7281-maC*");
MODULE_ALIAS("of:N*T*Cadi,adv7282");
MODULE_ALIAS("of:N*T*Cadi,adv7282C*");
MODULE_ALIAS("of:N*T*Cadi,adv7282-m");
MODULE_ALIAS("of:N*T*Cadi,adv7282-mC*");
MODULE_ALIAS("i2c:adv7180");
MODULE_ALIAS("i2c:adv7180cp");
MODULE_ALIAS("i2c:adv7180st");
MODULE_ALIAS("i2c:adv7182");
MODULE_ALIAS("i2c:adv7280");
MODULE_ALIAS("i2c:adv7280-m");
MODULE_ALIAS("i2c:adv7281");
MODULE_ALIAS("i2c:adv7281-m");
MODULE_ALIAS("i2c:adv7281-ma");
MODULE_ALIAS("i2c:adv7282");
MODULE_ALIAS("i2c:adv7282-m");

MODULE_INFO(srcversion, "065D7858E7734BCC139D0C0");
