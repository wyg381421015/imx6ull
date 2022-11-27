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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcfe5891d, "module_layout" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x97255bdf, "strlen" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x5f754e5a, "memset" },
	{ 0xba698cb6, "sg_miter_start" },
	{ 0xc5850110, "printk" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x95060894, "sg_miter_stop" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0xc9f090d0, "sg_miter_next" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "796C86699E7EE864E69B0F2");
