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
	{ 0x3474a07c, "crypto_alloc_skcipher" },
	{ 0x92b57248, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xb8983b24, "dma_map_sg_attrs" },
	{ 0x6e618a5d, "devm_hwrng_register" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee4d1bfd, "sg_init_table" },
	{ 0x23b0577a, "scatterwalk_ffwd" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x8f1a8cf9, "rsa_parse_pub_key" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x3892fa63, "mem_map" },
	{ 0x4dba7bb3, "crypto_register_akcipher" },
	{ 0x97255bdf, "strlen" },
	{ 0xd39fa6ab, "__kfifo_alloc" },
	{ 0x95a29f92, "irq_of_parse_and_map" },
	{ 0x958a241e, "page_address" },
	{ 0x5ab9214, "cnstr_shdsc_sk_hash" },
	{ 0xed688da0, "cnstr_desc_blob_encap" },
	{ 0xad5c966b, "dma_unmap_sg_attrs" },
	{ 0x2061cfaf, "cnstr_shdsc_rfc4106_encap" },
	{ 0x308aa754, "dma_set_mask" },
	{ 0xa51f16c7, "caam_little_end" },
	{ 0x5b597fdc, "crypto_transfer_skcipher_request_to_engine" },
	{ 0x7073fdad, "cnstr_shdsc_aead_null_decap" },
	{ 0xcafae113, "cnstr_shdsc_skcipher_encap" },
	{ 0x93747c78, "cnstr_shdsc_gcm_encap" },
	{ 0xe7e4d52a, "_raw_spin_lock_bh" },
	{ 0x3b4c6478, "caam_strstatus" },
	{ 0xe2439be1, "cnstr_shdsc_aead_null_encap" },
	{ 0x9fca7329, "crypto_engine_alloc_init" },
	{ 0xb1b939e, "kmemdup" },
	{ 0xfffa3100, "sg_next" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x753a96a7, "of_device_unregister" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x2e1199d5, "cnstr_shdsc_gcm_decap" },
	{ 0xa5d674a2, "of_device_is_compatible" },
	{ 0x542d7efb, "crypto_finalize_aead_request" },
	{ 0x4f4a3988, "scatterwalk_map_and_copy" },
	{ 0xa8fb743d, "des_expand_key" },
	{ 0x8b1e32e4, "dma_set_coherent_mask" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4c6b4c3, "__crypto_memneq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x70a98dd8, "cnstr_desc_random_black_key" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xb6916873, "crypto_transfer_aead_request_to_engine" },
	{ 0x2ba71c1b, "misc_register" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0xf66b0320, "dma_sync_single_for_cpu" },
	{ 0xba698cb6, "sg_miter_start" },
	{ 0xb6a4ccaa, "cnstr_desc_black_key" },
	{ 0xc5850110, "printk" },
	{ 0x48815494, "devres_open_group" },
	{ 0xf40363b4, "cnstr_desc_blob_decap" },
	{ 0x2689e094, "crypto_unregister_skcipher" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x2b2a7853, "crypto_engine_start" },
	{ 0x95060894, "sg_miter_stop" },
	{ 0x4389d61a, "sg_nents_for_len" },
	{ 0xc9e32fa4, "crypto_register_ahash" },
	{ 0xb90a1fcd, "rsa_parse_priv_key" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x21110dbf, "mmioset" },
	{ 0xbb9c87e6, "platform_get_resource" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0xa10e55aa, "cnstr_shdsc_aead_givencap" },
	{ 0x3d92dea8, "crypto_unregister_akcipher" },
	{ 0x724cbdaf, "cnstr_shdsc_xts_skcipher_encap" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x6bd2e6ed, "device_init_wakeup" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xf9995030, "crypto_register_skcipher" },
	{ 0x309adf78, "cnstr_shdsc_aead_decap" },
	{ 0xc9f090d0, "sg_miter_next" },
	{ 0x37e30a59, "crypto_transfer_hash_request_to_engine" },
	{ 0x9d042a02, "cnstr_shdsc_rfc4106_decap" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xb4518284, "devm_add_action" },
	{ 0xa9535c27, "cnstr_shdsc_aead_encap" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x8b50fd75, "crypto_skcipher_decrypt" },
	{ 0x3ec80fa0, "_raw_spin_unlock_bh" },
	{ 0x37734e06, "caam_dpaa2" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3cbe954c, "crypto_finalize_hash_request" },
	{ 0x3589038e, "cnstr_shdsc_chachapoly" },
	{ 0x95693b94, "crypto_transfer_akcipher_request_to_engine" },
	{ 0x2479193e, "crypto_authenc_extractkeys" },
	{ 0xf5b81a7b, "dma_map_page_attrs" },
	{ 0x2eed504a, "caam_ptr_sz" },
	{ 0x4ac1d125, "crypto_destroy_tfm" },
	{ 0x583dd3a2, "crypto_unregister_ahash" },
	{ 0x208f139f, "of_find_compatible_node" },
	{ 0xbf88c30e, "dev_driver_string" },
	{ 0xa49dea70, "cnstr_shdsc_ahash" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x7cc548ed, "crypto_skcipher_setkey" },
	{ 0x8a043407, "cnstr_shdsc_skcipher_decap" },
	{ 0xa13f9339, "crypto_engine_exit" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x37a0cba, "kfree" },
	{ 0x483994b3, "crypto_finalize_skcipher_request" },
	{ 0xe0f9eba6, "crypto_unregister_aead" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x824b21ca, "crypto_register_aead" },
	{ 0x9d669763, "memcpy" },
	{ 0x5cb23c6e, "dma_sync_single_for_device" },
	{ 0xa0df00ff, "devm_ioremap" },
	{ 0x40bb60a0, "cnstr_shdsc_rfc4543_decap" },
	{ 0x2c7db649, "irq_dispose_mapping" },
	{ 0xf437fe3, "dma_unmap_page_attrs" },
	{ 0xfdde850d, "cnstr_shdsc_rfc4543_encap" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0x216d759a, "mmiocpy" },
	{ 0xa980c660, "caam_dump_sg" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x9639dce, "dmam_alloc_attrs" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xca54fee, "_test_and_set_bit" },
	{ 0x99bb8806, "memmove" },
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0x9d96f5f5, "__kfifo_dma_in_prepare" },
	{ 0x1189e3a6, "cnstr_shdsc_xts_skcipher_decap" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0xf34c00d0, "devres_close_group" },
	{ 0x5abc043f, "of_platform_device_create" },
	{ 0xa81f8c13, "devm_request_threaded_irq" },
	{ 0xf989f583, "devres_release_group" },
	{ 0xac04ed3, "misc_deregister" },
	{ 0xccc4e4c0, "device_set_wakeup_enable" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xbd67c092, "caam_imx" },
	{ 0x67c19d98, "crypto_finalize_akcipher_request" },
	{ 0x41c18ecf, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "rng-core,rsa_generic,caamhash_desc,caamkeyblob_desc,caamalg_desc,error,crypto_engine,libdes,caam,authenc");

MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0-job-ringC*");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0-job-ringC*");

MODULE_INFO(srcversion, "19A76300A3FB73D770EB160");
