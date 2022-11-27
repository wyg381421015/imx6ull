cmd_drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta_mmu.o := arm-buildroot-linux-uclibcgnueabihf-gcc -Wp,-MMD,drivers/mxc/gpu-viv/hal/security_v1/.gc_hal_ta_mmu.o.d  -nostdinc -isystem /home/jack/imx6ull/linux/buildroot/output/host/lib/gcc/arm-buildroot-linux-uclibcgnueabihf/10.3.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=1024 -fstack-protector-strong -Wimplicit-fallthrough -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -fplugin=./scripts/gcc-plugins/arm_ssp_per_task_plugin.so -fplugin-arg-arm_ssp_per_task_plugin-tso=1 -fplugin-arg-arm_ssp_per_task_plugin-offset=24 -DgcdDEFAULT_CONTIGUOUS_SIZE=~0U -DgcdFSL_CONTIGUOUS_SIZE=134217728 -DgcdANDROID_NATIVE_FENCE_SYNC=2 -DLINUX_CMA_FSL=1 -DgcdREGISTER_READ_FROM_USER=1 -DgcdREGISTER_WRITE_FROM_USER=1 -DCLASS_NAME=\"gpu_class\" -DgcdGPU_2D_TIMEOUT=20000 -DNO_DMA_COHERENT=1 -DgcdSYS_FREE_MEMORY_LIMIT=51200 -Werror -Wno-implicit-fallthrough -DgcdLINUX_SYNC_FILE=1 -DLINUX -DDRIVER -DDBG=0 -DUSE_PLATFORM_DRIVER=1 -DVIVANTE_PROFILER=1 -DVIVANTE_PROFILER_CONTEXT=1 -DENABLE_GPU_CLOCK_BY_DRIVER=0 -DUSE_NEW_LINUX_SIGNAL=0 -DUSE_LINUX_PCIE=0 -DgcdCACHE_FUNCTION_UNIMPLEMENTED=0 -DgcdENABLE_3D=1 -DgcdENABLE_2D=1 -DgcdENABLE_VG=1 -DgcdENABLE_BANK_ALIGNMENT=1 -DgcdBANK_BIT_START=13 -DgcdBANK_BIT_END=15 -DgcdBANK_CHANNEL_BIT=12 -DgcdFPGA_BUILD=0 -DgcdENABLE_DRM=1 -I./drivers/mxc/gpu-viv/hal/kernel/inc -I./drivers/mxc/gpu-viv/hal/kernel -I./drivers/mxc/gpu-viv/hal/kernel/arch -I./drivers/mxc/gpu-viv/hal/kernel/inc -I./drivers/mxc/gpu-viv/hal/os/linux/kernel -I./drivers/mxc/gpu-viv/hal/os/linux/kernel/allocator/freescale -I./drivers/mxc/gpu-viv/hal/security_v1/ -I./drivers/mxc/gpu-viv/hal/os/linux/kernel/platform/freescale -Iarch/arm/mm -I./drivers/mxc/gpu-viv/hal/kernel/archvg -DHOST=\"ubuntu\" -DgcdENABLE_TRUST_APPLICATION=1    -DKBUILD_MODFILE='"drivers/mxc/gpu-viv/galcore"' -DKBUILD_BASENAME='"gc_hal_ta_mmu"' -DKBUILD_MODNAME='"galcore"' -c -o drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta_mmu.o drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta_mmu.c

source_drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta_mmu.o := drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta_mmu.c

deps_drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta_mmu.o := \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arm64.h) \
    $(wildcard include/config/retpoline.h) \
    $(wildcard include/config/arch/use/builtin/bswap.h) \
    $(wildcard include/config/kcov.h) \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_types.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_version.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_options.h \
    $(wildcard include/config/sync.h) \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_types_shared.h \
  include/generated/uapi/linux/version.h \
  include/linux/types.h \
    $(wildcard include/config/have/uid16.h) \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/types.h \
  arch/arm/include/uapi/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler_types.h \
  arch/arm/include/uapi/asm/posix_types.h \
  include/uapi/asm-generic/posix_types.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_base.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_enum.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_enum_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_types.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_debug_zones.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_base_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_security_interface.h \
  drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_base.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_profiler.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_profiler_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_driver.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_driver_shared.h \
    $(wildcard include/config/android/reserved/memory/account.h) \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_enum_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_types_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_driver_vg.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_driver_vg_shared.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_statistics.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/gc_hal_vg.h \
  drivers/mxc/gpu-viv/hal/kernel/inc/shared/gc_hal_vg_shared.h \

drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta_mmu.o: $(deps_drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta_mmu.o)

$(deps_drivers/mxc/gpu-viv/hal/security_v1/gc_hal_ta_mmu.o):
