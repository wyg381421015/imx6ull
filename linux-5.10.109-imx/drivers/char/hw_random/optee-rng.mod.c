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
	{ 0xd1c386b3, "tee_bus_type" },
	{ 0xf662606b, "driver_unregister" },
	{ 0x6b50989d, "driver_register" },
	{ 0xc9aa1203, "hwrng_register" },
	{ 0x2e4a03bf, "tee_client_open_session" },
	{ 0x2df381c6, "tee_client_open_context" },
	{ 0xf7388de7, "tee_shm_alloc" },
	{ 0x1ee9349e, "tee_shm_free" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x9d669763, "memcpy" },
	{ 0xc9a92504, "tee_shm_get_va" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x6a34c1ef, "tee_client_invoke_func" },
	{ 0x5f754e5a, "memset" },
	{ 0xa9dc77af, "tee_client_close_context" },
	{ 0x7333703f, "tee_client_close_session" },
	{ 0xda8cc3b9, "hwrng_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
};

MODULE_INFO(depends, "rng-core");

MODULE_ALIAS("tee:ab7a617c-b8e7-4d8f-8301-d09b61036b64*");

MODULE_INFO(srcversion, "9F5B7E4E2263AD9999D4CDE");
