cmd_drivers/spi/built-in.a := rm -f drivers/spi/built-in.a; arm-buildroot-linux-uclibcgnueabihf-ar cDPrST drivers/spi/built-in.a drivers/spi/spi.o drivers/spi/spi-mem.o drivers/spi/spidev.o drivers/spi/spi-bitbang.o drivers/spi/spi-fsl-lpspi.o drivers/spi/spi-fsl-qspi.o drivers/spi/spi-gpio.o drivers/spi/spi-imx.o drivers/spi/spi-slave-time.o drivers/spi/spi-slave-system-control.o