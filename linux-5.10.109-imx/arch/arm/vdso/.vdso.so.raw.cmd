cmd_arch/arm/vdso/vdso.so.raw := arm-buildroot-linux-uclibcgnueabihf-ld  -EL -Bsymbolic --no-undefined -soname=linux-vdso.so.1 -z max-page-size=4096 -nostdlib -shared  --hash-style=sysv --build-id=sha1 -T   arch/arm/vdso/vdso.lds arch/arm/vdso/vgettimeofday.o arch/arm/vdso/datapage.o arch/arm/vdso/note.o -o arch/arm/vdso/vdso.so.raw; if arm-buildroot-linux-uclibcgnueabihf-objdump -R arch/arm/vdso/vdso.so.raw | egrep -h "R_ARM_JUMP_SLOT|R_ARM_GLOB_DAT|R_ARM_ABS32"; then (echo >&2 "arch/arm/vdso/vdso.so.raw: dynamic relocations are not supported"; rm -f arch/arm/vdso/vdso.so.raw; /bin/false); fi