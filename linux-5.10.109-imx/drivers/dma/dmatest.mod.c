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
	{ 0xd9943bb, "param_ops_string" },
	{ 0x799c1de5, "param_ops_int" },
	{ 0xced4b963, "param_ops_uint" },
	{ 0xbaa65f43, "param_ops_bool" },
	{ 0xf9a482f9, "msleep" },
	{ 0x29aa6b84, "dma_sync_wait" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x2eda0cfa, "freezing_slow_path" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x13ce23fb, "dmaengine_unmap_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf5b81a7b, "dma_map_page_attrs" },
	{ 0x3892fa63, "mem_map" },
	{ 0xd43d1c21, "dmaengine_get_unmap_data" },
	{ 0x5e866d85, "prandom_bytes" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5f754e5a, "memset" },
	{ 0x4fe3f85d, "set_user_nice" },
	{ 0x9e61bb05, "set_freezable" },
	{ 0xf7802486, "__aeabi_uidivmod" },
	{ 0xa571ca54, "param_set_copystring" },
	{ 0xbaa5c3ae, "param_get_string" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x67ea780, "mutex_unlock" },
	{ 0x1818b869, "param_set_bool" },
	{ 0xc271c3be, "mutex_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x49970de8, "finish_wait" },
	{ 0x647af474, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x977645e8, "param_get_bool" },
	{ 0x59e5070d, "__do_div64" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xe60eb21d, "__put_task_struct" },
	{ 0x846049de, "kthread_stop" },
	{ 0x73e20c1c, "strlcpy" },
	{ 0x77bc13a0, "strim" },
	{ 0xd03ab124, "dma_release_channel" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0xa0112fe7, "__dma_request_channel" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x37a0cba, "kfree" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdb4c9a5d, "kthread_create_on_node" },
	{ 0x5bbe49f4, "__init_waitqueue_head" },
	{ 0x5da5bc77, "kmem_cache_alloc" },
	{ 0xd3d26447, "kmalloc_caches" },
	{ 0x39eb0287, "wake_up_process" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x3dcf1ffa, "__wake_up" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc5850110, "printk" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "AAE12A868716C655E4E4608");
