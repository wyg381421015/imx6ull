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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x92b57248, "flush_work" },
	{ 0xb96cb08d, "v4l2_m2m_ioctl_prepare_buf" },
	{ 0x213bd809, "gen_pool_get" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x860ff6e0, "v4l2_event_unsubscribe" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x3155d9e, "__pm_runtime_idle" },
	{ 0x943ae957, "v4l2_m2m_buf_copy_metadata" },
	{ 0x815588a6, "clk_enable" },
	{ 0xfdcb1891, "video_device_release_empty" },
	{ 0xa0439cbc, "_raw_spin_unlock" },
	{ 0x10e14fe1, "debugfs_create_dir" },
	{ 0xac4c96bd, "__pm_runtime_disable" },
	{ 0xfdee439e, "v4l2_m2m_qbuf" },
	{ 0xcf586673, "v4l2_event_queue_fh" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0xea124bd1, "gcd" },
	{ 0x89a6c1ac, "v4l2_m2m_try_schedule" },
	{ 0x6273a81b, "v4l2_m2m_ctx_init" },
	{ 0xcf33f401, "v4l2_m2m_ioctl_try_encoder_cmd" },
	{ 0xd96c63ec, "vdoa_wait_for_completion" },
	{ 0x66101eb6, "v4l2_device_unregister" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x42cfbc31, "v4l2_ctrl_handler_free" },
	{ 0x161b22cc, "v4l2_jpeg_parse_header" },
	{ 0xf784dae7, "__v4l2_ctrl_modify_range" },
	{ 0x315ebe0d, "v4l2_ctrl_new_std" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0x8cece9fd, "of_gen_pool_get" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x787fe8a8, "vdoa_device_run" },
	{ 0x4ad70b21, "vb2_ops_wait_prepare" },
	{ 0xf705fa49, "gen_pool_free_owner" },
	{ 0xc6fca5ad, "v4l2_m2m_release" },
	{ 0xfb98ac62, "__video_register_device" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xf922d8a7, "v4l2_m2m_fop_mmap" },
	{ 0x276c28a0, "__pm_runtime_resume" },
	{ 0x801abe00, "dma_free_attrs" },
	{ 0xeea0399, "strscpy" },
	{ 0x4c88ce70, "__devm_reset_control_get" },
	{ 0xb5683e95, "__platform_driver_register" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xb48677a, "__kfifo_init" },
	{ 0xfc58eef7, "vdoa_context_destroy" },
	{ 0x1abc5936, "v4l2_m2m_ioctl_streamon" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x5c70148a, "v4l2_device_register" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x9051e3be, "v4l2_ctrl_new_std_menu" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x79a3cca6, "v4l2_m2m_ioctl_create_bufs" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0x5f754e5a, "memset" },
	{ 0x5065b6f1, "vb2_vmalloc_memops" },
	{ 0xcc2ca4cf, "v4l2_m2m_last_buf" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x7f46f70c, "v4l2_event_subscribe" },
	{ 0xcf81df5e, "v4l2_m2m_ioctl_streamoff" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x3b24ec0f, "video_unregister_device" },
	{ 0x3fc3362e, "v4l2_fh_init" },
	{ 0x1e3d8004, "v4l2_ctrl_subscribe_event" },
	{ 0xd9d26ff1, "vb2_plane_vaddr" },
	{ 0x6e0a5f7f, "vb2_buffer_done" },
	{ 0xa24491bf, "ida_free" },
	{ 0xf124bffd, "debugfs_remove" },
	{ 0x12cd5ec3, "dma_alloc_attrs" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0xb41bf6fe, "request_firmware_nowait" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0xc41320e0, "of_match_device" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xf34c2864, "vb2_plane_cookie" },
	{ 0x91ce51d9, "__v4l2_ctrl_s_ctrl" },
	{ 0x123959a1, "v4l2_type_names" },
	{ 0xa9bad1dc, "v4l2_m2m_get_vq" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xf5ef842e, "v4l_bound_align_image" },
	{ 0x3100361e, "v4l2_m2m_fop_poll" },
	{ 0xceee092d, "pm_runtime_enable" },
	{ 0x3b125a42, "v4l2_m2m_ioctl_try_decoder_cmd" },
	{ 0x459e133f, "v4l2_m2m_get_curr_priv" },
	{ 0x612ec223, "video_devdata" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6ce9b9d2, "v4l2_m2m_buf_queue" },
	{ 0xe60bc259, "platform_get_irq_byname" },
	{ 0x37176c5, "v4l2_ctrl_handler_setup" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x7fe3d6f9, "vdoa_context_create" },
	{ 0x9dbe01c3, "__pm_runtime_set_status" },
	{ 0xc812f53f, "v4l2_m2m_ioctl_querybuf" },
	{ 0x7ade9187, "gen_pool_dma_alloc" },
	{ 0x208f139f, "of_find_compatible_node" },
	{ 0xb3b9943b, "v4l2_m2m_reqbufs" },
	{ 0x306718b4, "devm_clk_get" },
	{ 0x63370c1c, "v4l2_m2m_ioctl_expbuf" },
	{ 0xae577d60, "_raw_spin_lock" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0x822137e2, "arm_heavy_mb" },
	{ 0xc70402c, "vb2_dma_contig_memops" },
	{ 0x37a0cba, "kfree" },
	{ 0x9d669763, "memcpy" },
	{ 0x36fbba1b, "debugfs_create_blob" },
	{ 0xcd14ff4a, "v4l2_ctrl_handler_init_class" },
	{ 0x6671c6ea, "vdoa_context_configure" },
	{ 0xa488c7cc, "v4l2_m2m_dqbuf" },
	{ 0x76d4b7f, "v4l2_m2m_buf_remove" },
	{ 0x51a53df3, "vb2_ops_wait_finish" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xd2dd074d, "v4l2_fh_add" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xd2b9b596, "v4l2_m2m_ctx_release" },
	{ 0x6590f0a3, "v4l2_fh_del" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xb2d48a2e, "queue_work_on" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xe5b127b5, "platform_get_irq" },
	{ 0xb00b15da, "of_find_device_by_node" },
	{ 0xfdf6e0dd, "platform_driver_unregister" },
	{ 0xae05e287, "of_node_put" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0xa16b21fb, "wait_for_completion_timeout" },
	{ 0xa81f8c13, "devm_request_threaded_irq" },
	{ 0x601bed8c, "v4l2_m2m_next_buf" },
	{ 0x4756260d, "ida_destroy" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xd0e9fb09, "release_firmware" },
	{ 0xe078afc7, "video_ioctl2" },
	{ 0xbf0f574b, "devm_platform_ioremap_resource" },
	{ 0x99765584, "v4l2_m2m_job_finish" },
	{ 0xa5684076, "ida_alloc_range" },
	{ 0xd9c69d23, "v4l2_fh_exit" },
	{ 0xdc3bf564, "vb2_queue_init" },
	{ 0x730f2eae, "v4l2_m2m_init" },
};

MODULE_INFO(depends, "imx-vdoa,v4l2-jpeg,videobuf2-vmalloc");

MODULE_ALIAS("of:N*T*Cfsl,imx27-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx27-vpuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx51-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx51-vpuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx53-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx53-vpuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-vpuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6dl-vpu");
MODULE_ALIAS("of:N*T*Cfsl,imx6dl-vpuC*");
MODULE_ALIAS("platform:coda-imx27");

MODULE_INFO(srcversion, "C5FD6242FEDF747978098CF");
