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
	{ 0x23196124, "sg_pcopy_to_buffer" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x938f99c5, "sg_copy_to_buffer" },
	{ 0x3892fa63, "mem_map" },
	{ 0x4934bdd0, "crypto_check_attr_type" },
	{ 0xb9176155, "asn1_ber_decoder" },
	{ 0x4dba7bb3, "crypto_register_akcipher" },
	{ 0xdc2efbeb, "crypto_grab_akcipher" },
	{ 0x6039b599, "sg_copy_from_buffer" },
	{ 0x9a11a0fc, "crypto_attr_alg_name" },
	{ 0x7471d7ef, "crypto_unregister_template" },
	{ 0x80d5e57a, "mpi_free" },
	{ 0xae7c231d, "mpi_cmp" },
	{ 0x9bece81b, "mpi_cmp_ui" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0x5f754e5a, "memset" },
	{ 0x7bfbbfb7, "mpi_write_to_sgl" },
	{ 0x71c90087, "memcmp" },
	{ 0x6517c37c, "crypto_register_template" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0x3d92dea8, "crypto_unregister_akcipher" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x1e395b09, "mpi_read_raw_from_sgl" },
	{ 0xa9f7535a, "crypto_drop_spawn" },
	{ 0x98503a63, "mpi_alloc" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0x9fe939e1, "mpi_powm" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x13ba1a9f, "crypto_spawn_tfm2" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x6945725e, "mpi_read_raw_data" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8a31a7d4, "akcipher_register_instance" },
};

MODULE_INFO(depends, "asn1_decoder,mpi");


MODULE_INFO(srcversion, "9DF6D8CA2BD0DF9CEC52AE7");
