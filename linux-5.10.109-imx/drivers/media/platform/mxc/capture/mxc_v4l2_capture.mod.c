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
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0xa401c91f, "video_device_release" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x1d46f1f9, "device_create_file" },
	{ 0xfb98ac62, "__video_register_device" },
	{ 0xf123e3cd, "v4l2_int_device_register" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5c70148a, "v4l2_device_register" },
	{ 0x27ccead0, "video_device_alloc" },
	{ 0x46e40860, "ipu_get_soc" },
	{ 0x9d6f0c6b, "of_property_read_variable_u32_array" },
	{ 0xc41320e0, "of_match_device" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0x5f754e5a, "memset" },
	{ 0x84b183ae, "strncmp" },
	{ 0x52cce85c, "registered_fb" },
	{ 0x9d669763, "memcpy" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x631cb49f, "csi_enc_deselect" },
	{ 0xc77a97a, "prp_enc_deselect" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x761b20eb, "prp_still_deselect" },
	{ 0xca55481b, "prp_still_select" },
	{ 0x12cd5ec3, "dma_alloc_attrs" },
	{ 0xe914e41e, "strcpy" },
	{ 0x578c2de3, "video_usercopy" },
	{ 0x462280b4, "remap_pfn_range" },
	{ 0xca5a7528, "down_interruptible" },
	{ 0xafd9dc5e, "prp_enc_select" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7e14dc74, "csi_enc_select" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x612ec223, "video_devdata" },
	{ 0x834dd085, "ipu_csi_init_interface" },
	{ 0xef488f5b, "ipu_csi_set_window_pos" },
	{ 0xa84f56c9, "ipu_csi_set_window_size" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x86371bef, "v4l2_int_ioctl_0" },
	{ 0x66101eb6, "v4l2_device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b24ec0f, "video_unregister_device" },
	{ 0xf3216677, "v4l2_int_device_unregister" },
	{ 0xc5850110, "printk" },
	{ 0x4b946720, "device_remove_file" },
	{ 0x801abe00, "dma_free_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf0aa37df, "bg_overlay_sdc_deselect" },
	{ 0xb9729003, "foreground_sdc_deselect" },
	{ 0x339dc724, "ipu_csi_enable_mclk" },
	{ 0x8323f523, "v4l2_int_ioctl_1" },
	{ 0x581cde4e, "up" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xf0ef52e8, "down" },
	{ 0xd2a84747, "bg_overlay_sdc_select" },
	{ 0x39d0857c, "foreground_sdc_select" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "v4l2-int-device,ipu_csi_enc,ipu_prp_enc,ipu_still,ipu_bg_overlay_sdc,ipu_fg_overlay_sdc");

MODULE_ALIAS("of:N*T*Cfsl,imx6q-v4l2-capture");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-v4l2-captureC*");
MODULE_ALIAS("platform:v4l2-capture-imx5");
MODULE_ALIAS("platform:v4l2-capture-imx6");

MODULE_INFO(srcversion, "183EF92C0475634DB3783CF");
