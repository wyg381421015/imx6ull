cmd_arch/arm/boot/dts/imx6sll-evk-btwifi.dtb := gcc -E -Wp,-MMD,arch/arm/boot/dts/.imx6sll-evk-btwifi.dtb.d.pre.tmp -nostdinc -I./scripts/dtc/include-prefixes -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/.imx6sll-evk-btwifi.dtb.dts.tmp arch/arm/boot/dts/imx6sll-evk-btwifi.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/imx6sll-evk-btwifi.dtb -b 0 -iarch/arm/boot/dts/ -i./scripts/dtc/include-prefixes -Wno-interrupt_provider -Wno-unit_address_vs_reg -Wno-unit_address_format -Wno-avoid_unnecessary_addr_size -Wno-alias_paths -Wno-graph_child_address -Wno-simple_bus_reg -Wno-unique_unit_address -Wno-pci_device_reg  -d arch/arm/boot/dts/.imx6sll-evk-btwifi.dtb.d.dtc.tmp arch/arm/boot/dts/.imx6sll-evk-btwifi.dtb.dts.tmp ; cat arch/arm/boot/dts/.imx6sll-evk-btwifi.dtb.d.pre.tmp arch/arm/boot/dts/.imx6sll-evk-btwifi.dtb.d.dtc.tmp > arch/arm/boot/dts/.imx6sll-evk-btwifi.dtb.d

source_arch/arm/boot/dts/imx6sll-evk-btwifi.dtb := arch/arm/boot/dts/imx6sll-evk-btwifi.dts

deps_arch/arm/boot/dts/imx6sll-evk-btwifi.dtb := \
  arch/arm/boot/dts/imx6sll-evk.dts \
  scripts/dtc/include-prefixes/dt-bindings/gpio/gpio.h \
  scripts/dtc/include-prefixes/dt-bindings/input/input.h \
  scripts/dtc/include-prefixes/dt-bindings/input/linux-event-codes.h \
  arch/arm/boot/dts/imx6sll.dtsi \
  scripts/dtc/include-prefixes/dt-bindings/clock/imx6sll-clock.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/arm-gic.h \
  scripts/dtc/include-prefixes/dt-bindings/interrupt-controller/irq.h \
  arch/arm/boot/dts/imx6sll-pinfunc.h \

arch/arm/boot/dts/imx6sll-evk-btwifi.dtb: $(deps_arch/arm/boot/dts/imx6sll-evk-btwifi.dtb)

$(deps_arch/arm/boot/dts/imx6sll-evk-btwifi.dtb):
