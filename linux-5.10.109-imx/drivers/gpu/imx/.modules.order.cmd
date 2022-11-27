cmd_drivers/gpu/imx/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/gpu/imx/modules.order
