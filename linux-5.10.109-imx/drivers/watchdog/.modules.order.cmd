cmd_drivers/watchdog/modules.order := {   echo drivers/watchdog/da9063_wdt.ko; :; } | awk '!x[$$0]++' - > drivers/watchdog/modules.order
