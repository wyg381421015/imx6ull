cmd_drivers/gpio/modules.order := {   echo drivers/gpio/gpio-siox.ko; :; } | awk '!x[$$0]++' - > drivers/gpio/modules.order
