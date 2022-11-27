cmd_drivers/net/wireless/intersil/modules.order := {   cat drivers/net/wireless/intersil/hostap/modules.order; :; } | awk '!x[$$0]++' - > drivers/net/wireless/intersil/modules.order
