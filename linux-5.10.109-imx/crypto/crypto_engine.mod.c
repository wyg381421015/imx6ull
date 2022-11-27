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
	{ 0xf9a482f9, "msleep" },
	{ 0x2d42c300, "sched_set_fifo" },
	{ 0xba2838f2, "crypto_dequeue_request" },
	{ 0x528f9f63, "kthread_destroy_worker" },
	{ 0xd8bcdd93, "_dev_warn" },
	{ 0xf3d0b495, "_raw_spin_unlock_irqrestore" },
	{ 0x499043d3, "crypto_init_queue" },
	{ 0xbc85a7e4, "_dev_err" },
	{ 0x153c7081, "crypto_enqueue_request_head" },
	{ 0xe1fce069, "crypto_enqueue_request" },
	{ 0x7bd687ba, "_dev_info" },
	{ 0xaf398313, "kthread_queue_work" },
	{ 0xde55e795, "_raw_spin_lock_irqsave" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0xc358aaf8, "snprintf" },
	{ 0x135c2961, "devm_kmalloc" },
	{ 0xd7951a2, "kthread_create_worker" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4D34E7FF1E272BDE942403D");
