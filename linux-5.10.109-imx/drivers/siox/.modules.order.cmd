cmd_drivers/siox/modules.order := {   echo drivers/siox/siox-core.ko;   echo drivers/siox/siox-bus-gpio.ko; :; } | awk '!x[$$0]++' - > drivers/siox/modules.order
