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
	{ 0xbaa65f43, "param_ops_bool" },
	{ 0x860ff6e0, "v4l2_event_unsubscribe" },
	{ 0x1e3d8004, "v4l2_ctrl_subscribe_event" },
	{ 0xa410920d, "v4l2_ctrl_log_status" },
	{ 0x8af1e93a, "vb2_ioctl_streamoff" },
	{ 0xb5d6481b, "vb2_ioctl_streamon" },
	{ 0xa3d9edcb, "vb2_ioctl_prepare_buf" },
	{ 0xde8b4173, "vb2_ioctl_create_bufs" },
	{ 0x5f80fa65, "vb2_ioctl_dqbuf" },
	{ 0xe27132b1, "vb2_ioctl_qbuf" },
	{ 0x8754e1dc, "vb2_ioctl_querybuf" },
	{ 0xb8e20835, "vb2_ioctl_reqbufs" },
	{ 0xc625ee68, "vb2_fop_release" },
	{ 0xe9d41ec3, "v4l2_fh_open" },
	{ 0xa1d10db, "vb2_fop_mmap" },
	{ 0xe078afc7, "video_ioctl2" },
	{ 0x164d3793, "vb2_fop_poll" },
	{ 0xc3b6aae4, "vb2_fop_read" },
	{ 0xfdcb1891, "video_device_release_empty" },
	{ 0x51a53df3, "vb2_ops_wait_finish" },
	{ 0x4ad70b21, "vb2_ops_wait_prepare" },
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x54a2c424, "v4l2_ctrl_add_handler" },
	{ 0xfb98ac62, "__video_register_device" },
	{ 0x5c70148a, "v4l2_device_register" },
	{ 0x148e9eb7, "v4l2_ctrl_auto_cluster" },
	{ 0x315ebe0d, "v4l2_ctrl_new_std" },
	{ 0xcd14ff4a, "v4l2_ctrl_handler_init_class" },
	{ 0xdc3bf564, "vb2_queue_init" },
	{ 0x5065b6f1, "vb2_vmalloc_memops" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x825ff9f1, "try_module_get" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x3cd93022, "usb_kill_urb" },
	{ 0x72d6f35f, "usb_free_urb" },
	{ 0x46a10817, "usb_alloc_urb" },
	{ 0x775d621a, "usb_alloc_coherent" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9d669763, "memcpy" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xee43fd9b, "___ratelimit" },
	{ 0xeb4808ed, "usb_submit_urb" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd9d26ff1, "vb2_plane_vaddr" },
	{ 0xfe96b153, "usb_free_coherent" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x6e0a5f7f, "vb2_buffer_done" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xeea0399, "strscpy" },
	{ 0x91ce51d9, "__v4l2_ctrl_s_ctrl" },
	{ 0xdd46ce12, "v4l2_ctrl_g_ctrl" },
	{ 0xe796c9a6, "v4l2_ctrl_find" },
	{ 0x66ed8480, "_dev_notice" },
	{ 0xc95f68ee, "regmap_update_bits_base" },
	{ 0x323f531f, "regmap_write" },
	{ 0x252ecea3, "regmap_bulk_write" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5f754e5a, "memset" },
	{ 0x137d1fd9, "v4l2_subdev_call_wrappers" },
	{ 0x612ec223, "video_devdata" },
	{ 0x37a0cba, "kfree" },
	{ 0x66101eb6, "v4l2_device_unregister" },
	{ 0x42cfbc31, "v4l2_ctrl_handler_free" },
	{ 0x258e5df1, "module_put" },
	{ 0x8c2eb99c, "v4l2_device_put" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3b24ec0f, "video_unregister_device" },
	{ 0xaf24f53a, "v4l2_device_disconnect" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "videobuf2-vmalloc");


MODULE_INFO(srcversion, "F01C72B4C6E527446F6B4F1");
