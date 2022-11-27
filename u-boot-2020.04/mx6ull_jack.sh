#!/bin/bash
make ARCH=arm CROSS_COMPILE=arm-buildroot-linux-uclibcgnueabihf- distclean
make ARCH=arm CROSS_COMPILE=arm-buildroot-linux-uclibcgnueabihf- mx6ull_ygst_emmc_defconfig
make V=0  ARCH=arm CROSS_COMPILE=arm-buildroot-linux-uclibcgnueabihf- -j16
