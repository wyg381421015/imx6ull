cmd_drivers/md/modules.order := {   echo drivers/md/md-mod.ko;   echo drivers/md/dm-mod.ko;   echo drivers/md/dm-crypt.ko; :; } | awk '!x[$$0]++' - > drivers/md/modules.order
