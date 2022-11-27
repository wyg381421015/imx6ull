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
	{ 0x46e40860, "ipu_get_soc" },
	{ 0x1bbdb1d3, "ipu_unlink_channels" },
	{ 0xddd73f70, "ipu_init_channel" },
	{ 0x89929e32, "ipu_clear_buffer_ready" },
	{ 0x9730acb8, "ipu_uninit_channel" },
	{ 0x801abe00, "dma_free_attrs" },
	{ 0xa6c13453, "ipu_init_channel_buffer" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f8ec9a2, "bytes_per_pixel" },
	{ 0x3c170803, "ipu_disable_channel" },
	{ 0x316f802b, "ipu_enable_channel" },
	{ 0xc5850110, "printk" },
	{ 0x35d04e5e, "mipi_csi2_get_bind_csi" },
	{ 0x7e8c8b34, "ipu_disable_csi" },
	{ 0x12cd5ec3, "dma_alloc_attrs" },
	{ 0x78656445, "ipu_update_channel_buffer" },
	{ 0x964a9d98, "ipu_free_irq" },
	{ 0x1c63b5ca, "mipi_csi2_get_bind_ipu" },
	{ 0x2767eb0e, "mipi_csi2_pixelclk_enable" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x3d7d21ae, "mipi_csi2_get_status" },
	{ 0xbb67fd7e, "ipu_csi_get_window_size" },
	{ 0x6080cf00, "mipi_csi2_get_info" },
	{ 0x57a42599, "ipu_enable_csi" },
	{ 0x19519597, "mipi_csi2_pixelclk_disable" },
	{ 0xc9eb41aa, "ipu_select_buffer" },
	{ 0x9515ead3, "mipi_csi2_get_virtual_channel" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x32bd82cc, "ipu_link_channels" },
	{ 0xd86a2374, "ipu_request_irq" },
	{ 0xeb052119, "mipi_csi2_get_datatype" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F20D4EEDDCCE018A97BA693");
