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
	{ 0xc5cf78a8, "usbnet_resume" },
	{ 0x41dcad75, "usbnet_suspend" },
	{ 0x6169d87, "usbnet_disconnect" },
	{ 0xef07c828, "usbnet_probe" },
	{ 0x84af2356, "usb_deregister" },
	{ 0x465cfd4c, "usb_register_driver" },
	{ 0x29ba675d, "usbnet_get_endpoints" },
	{ 0x4002f7fd, "usbnet_device_suggests_idle" },
	{ 0xd491ae7, "netdev_warn" },
	{ 0x63dccd14, "kfree_skb" },
	{ 0x72d6f35f, "usb_free_urb" },
	{ 0xeb4808ed, "usb_submit_urb" },
	{ 0x46a10817, "usb_alloc_urb" },
	{ 0xf8ba5d95, "skb_pull" },
	{ 0x265b96dd, "usbnet_skb_return" },
	{ 0x10960ce9, "skb_trim" },
	{ 0xb3554e87, "skb_clone" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0xf31456ba, "skb_push" },
	{ 0xb5ace906, "skb_put" },
	{ 0x80c4c319, "crc32_le" },
	{ 0x5985da7d, "__dev_kfree_skb_any" },
	{ 0xef306d30, "skb_copy_expand" },
	{ 0xf7802486, "__aeabi_uidivmod" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "6E94BB6D70A70DE46C39C66");
