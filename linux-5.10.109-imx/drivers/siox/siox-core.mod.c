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
	{ 0x7b8b4378, "bus_register" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x6b50989d, "driver_register" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdb4c9a5d, "kthread_create_on_node" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x5f754e5a, "memset" },
	{ 0x5f74e845, "device_del" },
	{ 0xe035a4b4, "device_register" },
	{ 0xe346f67a, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x846049de, "kthread_stop" },
	{ 0xcb2532ee, "kernfs_find_and_get_ns" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xa10a6221, "device_add" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x5e0cfda4, "bus_unregister" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xbfd3dafb, "put_device" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x39eb0287, "wake_up_process" },
	{ 0x8ae3f227, "kernfs_notify" },
	{ 0x5efb59d9, "get_device" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xf6c22ac4, "device_initialize" },
	{ 0x6fa0f753, "device_unregister" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x8f61ba0d, "dev_set_name" },
	{ 0x421d4dcf, "krealloc" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A1EBE2204A6AD7DE9FEC885");
