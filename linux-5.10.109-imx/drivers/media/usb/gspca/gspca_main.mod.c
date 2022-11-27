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
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x860ff6e0, "v4l2_event_unsubscribe" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfdcb1891, "video_device_release_empty" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0x66101eb6, "v4l2_device_unregister" },
	{ 0x42cfbc31, "v4l2_ctrl_handler_free" },
	{ 0xdd46ce12, "v4l2_ctrl_g_ctrl" },
	{ 0x164d3793, "vb2_fop_poll" },
	{ 0xb5d6481b, "vb2_ioctl_streamon" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x3cd93022, "usb_kill_urb" },
	{ 0x4ad70b21, "vb2_ops_wait_prepare" },
	{ 0xfb98ac62, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xeea0399, "strscpy" },
	{ 0x5c70148a, "v4l2_device_register" },
	{ 0xc3b6aae4, "vb2_fop_read" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0xaf24f53a, "v4l2_device_disconnect" },
	{ 0x5f754e5a, "memset" },
	{ 0x5065b6f1, "vb2_vmalloc_memops" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0xa1d10db, "vb2_fop_mmap" },
	{ 0xe27132b1, "vb2_ioctl_qbuf" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3b24ec0f, "video_unregister_device" },
	{ 0xedd9b855, "usb_set_interface" },
	{ 0x1e3d8004, "v4l2_ctrl_subscribe_event" },
	{ 0xd9d26ff1, "vb2_plane_vaddr" },
	{ 0x6e0a5f7f, "vb2_buffer_done" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xde8b4173, "vb2_ioctl_create_bufs" },
	{ 0xfe96b153, "usb_free_coherent" },
	{ 0x5f80fa65, "vb2_ioctl_dqbuf" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x91ce51d9, "__v4l2_ctrl_s_ctrl" },
	{ 0xeb4808ed, "usb_submit_urb" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xc625ee68, "vb2_fop_release" },
	{ 0x47c66e0e, "vb2_queue_error" },
	{ 0x612ec223, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x323e6c9c, "input_register_device" },
	{ 0x37176c5, "v4l2_ctrl_handler_setup" },
	{ 0x3bd2110b, "usb_clear_halt" },
	{ 0x196f76a1, "input_free_device" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xe9d41ec3, "v4l2_fh_open" },
	{ 0x8754e1dc, "vb2_ioctl_querybuf" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x15515b07, "input_unregister_device" },
	{ 0x51a53df3, "vb2_ops_wait_finish" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xa1367a7d, "usb_ifnum_to_if" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xce449613, "vb2_ioctl_expbuf" },
	{ 0x775d621a, "usb_alloc_coherent" },
	{ 0x8af1e93a, "vb2_ioctl_streamoff" },
	{ 0x8c2eb99c, "v4l2_device_put" },
	{ 0x72d6f35f, "usb_free_urb" },
	{ 0xe078afc7, "video_ioctl2" },
	{ 0x46a10817, "usb_alloc_urb" },
	{ 0x87204845, "input_allocate_device" },
	{ 0xdc3bf564, "vb2_queue_init" },
};

MODULE_INFO(depends, "videobuf2-vmalloc");


MODULE_INFO(srcversion, "143F432372A05CDEB2F420B");
