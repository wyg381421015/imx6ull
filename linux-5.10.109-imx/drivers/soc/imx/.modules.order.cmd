cmd_drivers/soc/imx/modules.order := {   cat drivers/soc/imx/mu/modules.order; :; } | awk '!x[$$0]++' - > drivers/soc/imx/modules.order
