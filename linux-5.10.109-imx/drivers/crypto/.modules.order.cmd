cmd_drivers/crypto/modules.order := {   cat drivers/crypto/hisilicon/modules.order;   cat drivers/crypto/caam/modules.order; :; } | awk '!x[$$0]++' - > drivers/crypto/modules.order
