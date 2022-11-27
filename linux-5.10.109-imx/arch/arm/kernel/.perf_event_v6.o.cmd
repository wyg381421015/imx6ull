cmd_arch/arm/kernel/perf_event_v6.o := arm-buildroot-linux-uclibcgnueabihf-gcc -Wp,-MMD,arch/arm/kernel/.perf_event_v6.o.d  -nostdinc -isystem /home/jack/imx6ull/linux/buildroot/output/host/lib/gcc/arm-buildroot-linux-uclibcgnueabihf/10.3.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=1024 -fstack-protector-strong -Wimplicit-fallthrough -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -fplugin=./scripts/gcc-plugins/arm_ssp_per_task_plugin.so -fplugin-arg-arm_ssp_per_task_plugin-tso=1 -fplugin-arg-arm_ssp_per_task_plugin-offset=24    -DKBUILD_MODFILE='"arch/arm/kernel/perf_event_v6"' -DKBUILD_BASENAME='"perf_event_v6"' -DKBUILD_MODNAME='"perf_event_v6"' -c -o arch/arm/kernel/perf_event_v6.o arch/arm/kernel/perf_event_v6.c

source_arch/arm/kernel/perf_event_v6.o := arch/arm/kernel/perf_event_v6.c

deps_arch/arm/kernel/perf_event_v6.o := \
    $(wildcard include/config/cpu/v6.h) \
    $(wildcard include/config/cpu/v6k.h) \
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

arch/arm/kernel/perf_event_v6.o: $(deps_arch/arm/kernel/perf_event_v6.o)

$(deps_arch/arm/kernel/perf_event_v6.o):
