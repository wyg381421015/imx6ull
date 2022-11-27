#!/bin/bash
#make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- distclean
#make ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- imx_v7_defconfig
#make V=0  ARCH=arm CROSS_COMPILE=arm-linux-gnueabihf- -j16

make ARCH=arm CROSS_COMPILE=arm-buildroot-linux-uclibcgnueabihf- distclean
make ARCH=arm CROSS_COMPILE=arm-buildroot-linux-uclibcgnueabihf- imx_ygst_defconfig
make V=0  ARCH=arm CROSS_COMPILE=arm-buildroot-linux-uclibcgnueabihf- -j8

