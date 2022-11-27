cmd_drivers/input/serio/modules.order := {   echo drivers/input/serio/serport.ko; :; } | awk '!x[$$0]++' - > drivers/input/serio/modules.order
