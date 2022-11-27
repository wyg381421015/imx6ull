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
	{ 0x97255bdf, "strlen" },
	{ 0xe93e49c3, "devres_free" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0xaa640b29, "devres_alloc_node" },
	{ 0xdb4c9a5d, "kthread_create_on_node" },
	{ 0x51a910c0, "arm_copy_to_user" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x11d7589e, "add_hwgenerator_randomness" },
	{ 0xf64bf255, "wait_for_completion" },
	{ 0xdd0a2ba2, "strlcat" },
	{ 0x2ba71c1b, "misc_register" },
	{ 0x3375510b, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x846049de, "kthread_stop" },
	{ 0x735f33b0, "mutex_is_locked" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1d223c91, "noop_llseek" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0x8c02f576, "devres_release" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2fb6de5d, "add_device_randomness" },
	{ 0x39eb0287, "wake_up_process" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xf783da25, "devres_add" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x870d5a1c, "__init_swait_queue_head" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0xc37335b0, "complete" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x8a48d40, "param_ops_ushort" },
	{ 0xac04ed3, "misc_deregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E7C968E595CC8E30332D961");
