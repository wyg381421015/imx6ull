cmd_drivers/tty/serial/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/tty/serial/modules.order
