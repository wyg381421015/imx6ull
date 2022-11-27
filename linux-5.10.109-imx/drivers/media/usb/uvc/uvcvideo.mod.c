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
	{ 0xb8e20835, "vb2_ioctl_reqbufs" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x860ff6e0, "v4l2_event_unsubscribe" },
	{ 0x4be85a03, "memweight" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x10e14fe1, "debugfs_create_dir" },
	{ 0xcf586673, "v4l2_event_queue_fh" },
	{ 0x97255bdf, "strlen" },
	{ 0x52cdf155, "vb2_mmap" },
	{ 0x580711f9, "usb_debug_root" },
	{ 0x66101eb6, "v4l2_device_unregister" },
	{ 0x75a20962, "no_llseek" },
	{ 0xa3fc208a, "vb2_create_bufs" },
	{ 0x164d3793, "vb2_fop_poll" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb5d6481b, "vb2_ioctl_streamon" },
	{ 0x4205ad24, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3cd93022, "usb_kill_urb" },
	{ 0xb1b939e, "kmemdup" },
	{ 0x4ad70b21, "vb2_ops_wait_prepare" },
	{ 0xfb98ac62, "__video_register_device" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x33341078, "usb_autopm_get_interface" },
	{ 0x70d5fa11, "usb_enable_autosuspend" },
	{ 0x68ef3a7d, "debugfs_create_file" },
	{ 0x82737e8, "v4l2_ctrl_merge" },
	{ 0xeea0399, "strscpy" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0x5c70148a, "v4l2_device_register" },
	{ 0xf36a6ce, "input_event" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x5f754e5a, "memset" },
	{ 0x5065b6f1, "vb2_vmalloc_memops" },
	{ 0xc743831c, "usb_string" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa1d10db, "vb2_fop_mmap" },
	{ 0xe27132b1, "vb2_ioctl_qbuf" },
	{ 0x84af2356, "usb_deregister" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0x7f46f70c, "v4l2_event_subscribe" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb77b0159, "v4l2_prio_init" },
	{ 0x71c90087, "memcmp" },
	{ 0x3b24ec0f, "video_unregister_device" },
	{ 0xc6d1b824, "media_entity_pads_init" },
	{ 0xedd9b855, "usb_set_interface" },
	{ 0x3fc3362e, "v4l2_fh_init" },
	{ 0xd9d26ff1, "vb2_plane_vaddr" },
	{ 0x6e0a5f7f, "vb2_buffer_done" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x2a40358b, "usb_poison_urb" },
	{ 0xd5df2720, "_raw_spin_unlock_irq" },
	{ 0xdbac1990, "usb_control_msg" },
	{ 0xf124bffd, "debugfs_remove" },
	{ 0xa431b5f9, "usb_driver_claim_interface" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xa1c8d5f7, "vb2_qbuf" },
	{ 0xa3d9edcb, "vb2_ioctl_prepare_buf" },
	{ 0xde8b4173, "vb2_ioctl_create_bufs" },
	{ 0xfe96b153, "usb_free_coherent" },
	{ 0xae0e0629, "vb2_querybuf" },
	{ 0x5f80fa65, "vb2_ioctl_dqbuf" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x59e5070d, "__do_div64" },
	{ 0x2bcb258e, "media_device_cleanup" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xeb4808ed, "usb_submit_urb" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xf50fecbc, "v4l2_ctrl_replace" },
	{ 0x31701bb6, "vb2_streamon" },
	{ 0x1d5bd0a1, "usb_get_dev" },
	{ 0xc625ee68, "vb2_fop_release" },
	{ 0x612ec223, "video_devdata" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x78a959fc, "vb2_expbuf" },
	{ 0x323e6c9c, "input_register_device" },
	{ 0x6c5fcad2, "usb_put_dev" },
	{ 0x2aa0e4fc, "strncasecmp" },
	{ 0x3bd2110b, "usb_clear_halt" },
	{ 0xd86b61c4, "_raw_spin_lock_irq" },
	{ 0x756f2e6b, "usb_driver_release_interface" },
	{ 0x196f76a1, "input_free_device" },
	{ 0x642d980d, "v4l2_device_register_subdev" },
	{ 0x43e4bf3e, "media_create_pad_link" },
	{ 0x2ad79083, "vb2_reqbufs" },
	{ 0xa3df128, "usb_get_intf" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xe9d41ec3, "v4l2_fh_open" },
	{ 0x4755c9e3, "v4l2_subdev_init" },
	{ 0x8754e1dc, "vb2_ioctl_querybuf" },
	{ 0x8574517f, "__media_device_register" },
	{ 0x667cb4a, "vb2_dqbuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x15515b07, "input_unregister_device" },
	{ 0x409f94dd, "usb_match_one_id" },
	{ 0x314b20c8, "scnprintf" },
	{ 0x465cfd4c, "usb_register_driver" },
	{ 0x51a53df3, "vb2_ops_wait_finish" },
	{ 0xd2dd074d, "v4l2_fh_add" },
	{ 0x6590f0a3, "v4l2_fh_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xe2e8065e, "memdup_user" },
	{ 0xa1367a7d, "usb_ifnum_to_if" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x4eed4b1d, "vb2_poll" },
	{ 0x89d415ca, "media_device_init" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x775d621a, "usb_alloc_coherent" },
	{ 0x1d4fac46, "usb_get_current_frame_number" },
	{ 0x28b12cc9, "v4l2_format_info" },
	{ 0x8af1e93a, "vb2_ioctl_streamoff" },
	{ 0xd8ba1fb6, "vb2_queue_release" },
	{ 0xced4b963, "param_ops_uint" },
	{ 0x442c0c9b, "vb2_streamoff" },
	{ 0x72d6f35f, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xacaa6950, "media_device_unregister" },
	{ 0xe078afc7, "video_ioctl2" },
	{ 0x6395ba8, "usb_autopm_put_interface" },
	{ 0x46a10817, "usb_alloc_urb" },
	{ 0x7bd0f60d, "usb_put_intf" },
	{ 0xe914e41e, "strcpy" },
	{ 0xd9c69d23, "v4l2_fh_exit" },
	{ 0x87204845, "input_allocate_device" },
	{ 0xdc3bf564, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-vmalloc");

MODULE_ALIAS("usb:v0416pA91Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0458p706Ed*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep00F8d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0721d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v045Ep0723d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C1d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C2d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C3d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C5d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C6d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp08C7d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v046Dp082Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v04F2pB071d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v058Fp3820d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2640d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2641d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p2643d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p264Ad*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05A9p7670d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8501d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05ACp8600d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05C8p0403d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v05E3p0505d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v06F8p300Cd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p332Dd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3410d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0AC8p3420d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0BD3p0555d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v0E8Dp0004d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v13D3p5103d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v152Dp0310d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5212d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp5931d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A12d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A31d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A33d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v174Fp8A34d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17DCp0202d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v17EFp480Bd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0306d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1871p0516d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v18CDpCAFEd*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3188d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3288d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v18ECp3290d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v199Ep8102d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d012[0-6]dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d01[0-1]*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v19ABp1000d00*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Bp2951d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1B3Fp2002d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v1C4Fp3000d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0201d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v2833p0211d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v29FEp4D53d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v8086p0B03d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic0Eisc01ip01in*");

MODULE_INFO(srcversion, "E47A6A23F7770184CE233C3");
