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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcfe5891d, "module_layout" },
	{ 0xb8983b24, "dma_map_sg_attrs" },
	{ 0xc5e5573a, "frame_vector_to_pages" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x3fd2571, "vm_unmap_ram" },
	{ 0xccd197c7, "vb2_destroy_framevec" },
	{ 0x92038110, "remap_vmalloc_range" },
	{ 0xad5c966b, "dma_unmap_sg_attrs" },
	{ 0xf85c56a2, "set_page_dirty_lock" },
	{ 0xfffa3100, "sg_next" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xa21fa765, "vb2_create_framevec" },
	{ 0xa3c75b7a, "dma_buf_vunmap" },
	{ 0xc5850110, "printk" },
	{ 0xe97c4103, "ioremap" },
	{ 0x70d2a511, "vm_map_ram" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0xa5afb676, "sg_alloc_table" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x2cc8cb02, "dma_buf_export" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xdffb744b, "frame_vector_to_pfns" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0xcb2a474d, "vb2_common_vm_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xba5f3cda, "sg_free_table" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x807c3a, "vmalloc_to_page" },
	{ 0x369bfcdb, "dma_buf_vmap" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8CC6F9C7179ABD3719BD19D");
