cmd_arch/arm/cpu/armv7/sctlr.o := arm-buildroot-linux-uclibcgnueabihf-gcc -Wp,-MD,arch/arm/cpu/armv7/.sctlr.o.d  -nostdinc -isystem /home/jack/imx6ull/buildroot/output/host/lib/gcc/arm-buildroot-linux-uclibcgnueabihf/10.3.0/include -Iinclude    -I./arch/arm/include -include ./include/linux/kconfig.h -D__KERNEL__ -D__UBOOT__ -D__ASSEMBLY__ -fno-PIE -g -D__ARM__ -Wa,-mimplicit-it=always -mthumb -mthumb-interwork -mabi=aapcs-linux -mword-relocations -fno-pic -mno-unaligned-access -ffunction-sections -fdata-sections -fno-common -ffixed-r9 -msoft-float -pipe -march=armv7-a -D__LINUX_ARM_ARCH__=7 -mtune=generic-armv7-a   -c -o arch/arm/cpu/armv7/sctlr.o arch/arm/cpu/armv7/sctlr.S

source_arch/arm/cpu/armv7/sctlr.o := arch/arm/cpu/armv7/sctlr.S

deps_arch/arm/cpu/armv7/sctlr.o := \
  include/linux/linkage.h \
  arch/arm/include/asm/linkage.h \

arch/arm/cpu/armv7/sctlr.o: $(deps_arch/arm/cpu/armv7/sctlr.o)

$(deps_arch/arm/cpu/armv7/sctlr.o):
