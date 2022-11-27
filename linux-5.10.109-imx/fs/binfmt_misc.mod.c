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
	{ 0x3208d1c3, "kill_litter_super" },
	{ 0x1d223c91, "noop_llseek" },
	{ 0xc50bedf1, "default_llseek" },
	{ 0x932e773e, "simple_statfs" },
	{ 0xb77ef22c, "unregister_filesystem" },
	{ 0x7327ac60, "unregister_binfmt" },
	{ 0x88ac33eb, "__register_binfmt" },
	{ 0x8220d90d, "register_filesystem" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xc5850110, "printk" },
	{ 0x86332725, "__stack_chk_fail" },
	{ 0x2b4973a3, "iput" },
	{ 0xf45c9a91, "d_instantiate" },
	{ 0x8e9d1e85, "simple_pin_fs" },
	{ 0x33266aab, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xf25ab2a4, "new_inode" },
	{ 0x7e0ce0c3, "up_write" },
	{ 0x35a5078f, "lookup_one_len" },
	{ 0x4253aa7e, "down_write" },
	{ 0xc8339e24, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0xae353d77, "arm_copy_from_user" },
	{ 0x5f754e5a, "memset" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x97255bdf, "strlen" },
	{ 0xdc1a78c, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x528c709d, "simple_read_from_buffer" },
	{ 0x8b96537c, "simple_release_fs" },
	{ 0x6c7e884c, "d_drop" },
	{ 0x3e1d6006, "drop_nlink" },
	{ 0x858721fe, "_raw_write_unlock" },
	{ 0xa69d151c, "_raw_write_lock" },
	{ 0xd881454a, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xaa3f7404, "clear_inode" },
	{ 0x2802b0f9, "simple_fill_super" },
	{ 0x163d21d6, "get_tree_single" },
	{ 0xc5aa559d, "open_exec" },
	{ 0x9bec4e3e, "remove_arg_zero" },
	{ 0x61e2a07a, "dput" },
	{ 0x510b6c80, "dentry_open" },
	{ 0x60a4c5fa, "bprm_change_interp" },
	{ 0x90a01655, "copy_string_kernel" },
	{ 0xb85192e6, "_raw_read_unlock" },
	{ 0xd32d6c08, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x5bda4214, "_raw_read_lock" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x11089ac7, "_ctype" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2853B8BE1D9077393EEBA66");
