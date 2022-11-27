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
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x38d3dce5, "g_make_token_header" },
	{ 0xff178f6, "__aeabi_idivmod" },
	{ 0x958a241e, "page_address" },
	{ 0x44bb41b2, "write_bytes_to_xdr_buf" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xf54bd49b, "lcm" },
	{ 0x28f467b5, "gss_mech_register" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x90c912cd, "crypto_ahash_final" },
	{ 0x65b76588, "crypto_alloc_sync_skcipher" },
	{ 0xd7673035, "g_verify_token_header" },
	{ 0x472a79fb, "xdr_buf_subsegment" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0xf8e0ade7, "kmap_atomic_high_prot" },
	{ 0xc5850110, "printk" },
	{ 0x71c90087, "memcmp" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x8b50fd75, "crypto_skcipher_decrypt" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0xe11d4016, "gss_mech_unregister" },
	{ 0x7cc548ed, "crypto_skcipher_setkey" },
	{ 0xa9487fae, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0xeb3848ff, "kunmap_atomic_high" },
	{ 0xeec3a2d5, "crypto_ahash_setkey" },
	{ 0x9dc08a71, "pgprot_kernel" },
	{ 0x6c261af6, "read_bytes_from_xdr_buf" },
	{ 0x6478e327, "xdr_process_buf" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x99bb8806, "memmove" },
	{ 0x482ac5a4, "g_token_size" },
	{ 0x374f47d8, "xdr_buf_trim" },
	{ 0xaeb63722, "crypto_alloc_ahash" },
	{ 0x41c18ecf, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "35655CE2551B09A2E12EDBE");
