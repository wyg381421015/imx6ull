cmd_arch/arm/mach-imx/lpddr2_freq_imx6q.o := arm-buildroot-linux-uclibcgnueabihf-gcc -Wp,-MMD,arch/arm/mach-imx/.lpddr2_freq_imx6q.o.d  -nostdinc -isystem /home/jack/imx6ull/linux/buildroot/output/host/lib/gcc/arm-buildroot-linux-uclibcgnueabihf/10.3.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./= -D__ASSEMBLY__ -fno-PIE -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=7 -march=armv7-a -include asm/unified.h -msoft-float -Wa,-march=armv7-a    -c -o arch/arm/mach-imx/lpddr2_freq_imx6q.o arch/arm/mach-imx/lpddr2_freq_imx6q.S

source_arch/arm/mach-imx/lpddr2_freq_imx6q.o := arch/arm/mach-imx/lpddr2_freq_imx6q.S

deps_arch/arm/mach-imx/lpddr2_freq_imx6q.o := \
    $(wildcard include/config/cache/l2x0.h) \
  include/linux/kconfig.h \
    $(wildcard include/config/cc/version/text.h) \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
  arch/arm/include/asm/unified.h \
    $(wildcard include/config/cpu/v7m.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
    $(wildcard include/config/arch/use/sym/annotations.h) \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/modversions.h) \
    $(wildcard include/config/module/rel/crcs.h) \
    $(wildcard include/config/have/arch/prel32/relocations.h) \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/trim/unused/ksyms.h) \
    $(wildcard include/config/unused/symbols.h) \
  arch/arm/include/asm/linkage.h \
  arch/arm/include/asm/smp_scu.h \
    $(wildcard include/config/have/arm/scu.h) \
    $(wildcard include/config/smp.h) \
  arch/arm/mach-imx/hardware.h \
  include/linux/sizes.h \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  arch/arm/mach-imx/mxc.h \
    $(wildcard include/config/soc/imx6sl.h) \
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
  include/soc/imx/cpu.h \
  arch/arm/mach-imx/mx3x.h \
  arch/arm/include/asm/irq.h \
    $(wildcard include/config/sparse/irq.h) \
  arch/arm/mach-imx/mx31.h \
  arch/arm/mach-imx/mx35.h \
  arch/arm/mach-imx/mx2x.h \
  arch/arm/mach-imx/mx27.h \
  arch/arm/mach-imx/mx6.h \
  arch/arm/mach-imx/mx7.h \
  arch/arm/mach-imx/mx7ulp.h \

arch/arm/mach-imx/lpddr2_freq_imx6q.o: $(deps_arch/arm/mach-imx/lpddr2_freq_imx6q.o)

$(deps_arch/arm/mach-imx/lpddr2_freq_imx6q.o):
