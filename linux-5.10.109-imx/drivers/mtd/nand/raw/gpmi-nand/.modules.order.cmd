cmd_drivers/mtd/nand/raw/gpmi-nand/modules.order := {  :; } | awk '!x[$$0]++' - > drivers/mtd/nand/raw/gpmi-nand/modules.order
