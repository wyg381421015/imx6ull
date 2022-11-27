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
	{ 0x51a53df3, "vb2_ops_wait_finish" },
	{ 0x4ad70b21, "vb2_ops_wait_prepare" },
	{ 0xa1d10db, "vb2_fop_mmap" },
	{ 0xe078afc7, "video_ioctl2" },
	{ 0x164d3793, "vb2_fop_poll" },
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0x3f59d6dd, "request_bus_freq" },
	{ 0x276c28a0, "__pm_runtime_resume" },
	{ 0xdc3bf564, "vb2_queue_init" },
	{ 0xc70402c, "vb2_dma_contig_memops" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb0034a78, "__pm_runtime_suspend" },
	{ 0x13bec41d, "release_bus_freq" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd8ba1fb6, "vb2_queue_release" },
	{ 0x5f754e5a, "memset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12cd5ec3, "dma_alloc_attrs" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xceee092d, "pm_runtime_enable" },
	{ 0x3b2af73e, "v4l2_async_notifier_register" },
	{ 0x7065d277, "v4l2_async_notifier_add_subdev" },
	{ 0xdd33fee1, "of_graph_get_remote_port_parent" },
	{ 0xbf0586f, "of_get_next_child" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x3e95d66, "of_get_next_available_child" },
	{ 0xedab338f, "v4l2_async_notifier_init" },
	{ 0xa81f8c13, "devm_request_threaded_irq" },
	{ 0xfb98ac62, "__video_register_device" },
	{ 0xa401c91f, "video_device_release" },
	{ 0x27ccead0, "video_device_alloc" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5c70148a, "v4l2_device_register" },
	{ 0xe914e41e, "strcpy" },
	{ 0x538c0c7d, "of_match_node" },
	{ 0xc95f68ee, "regmap_update_bits_base" },
	{ 0xae05e287, "of_node_put" },
	{ 0xf70ba6d4, "syscon_node_to_regmap" },
	{ 0x23bb2f04, "of_find_node_by_phandle" },
	{ 0x9d6f0c6b, "of_property_read_variable_u32_array" },
	{ 0xa3a5c11a, "of_get_property" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0x65cdb64d, "devm_ioremap_resource" },
	{ 0xe5b127b5, "platform_get_irq" },
	{ 0xbb9c87e6, "platform_get_resource" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xc5850110, "printk" },
	{ 0xec2ffebf, "dev_fwnode" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x5c0184d3, "vb2_read" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xd9d26ff1, "vb2_plane_vaddr" },
	{ 0x801abe00, "dma_free_attrs" },
	{ 0x6e0a5f7f, "vb2_buffer_done" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x2ad79083, "vb2_reqbufs" },
	{ 0xf34c2864, "vb2_plane_cookie" },
	{ 0xae0e0629, "vb2_querybuf" },
	{ 0xa1c8d5f7, "vb2_qbuf" },
	{ 0x78a959fc, "vb2_expbuf" },
	{ 0x667cb4a, "vb2_dqbuf" },
	{ 0x31701bb6, "vb2_streamon" },
	{ 0x442c0c9b, "vb2_streamoff" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x137d1fd9, "v4l2_subdev_call_wrappers" },
	{ 0x612ec223, "video_devdata" },
	{ 0xac4c96bd, "__pm_runtime_disable" },
	{ 0x66101eb6, "v4l2_device_unregister" },
	{ 0x3b24ec0f, "video_unregister_device" },
	{ 0x76c874ea, "v4l2_async_notifier_unregister" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx6s-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx6s-csiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sl-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx6sl-csiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-csi");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-csiC*");

MODULE_INFO(srcversion, "67C45303A259B39CB987F47");
