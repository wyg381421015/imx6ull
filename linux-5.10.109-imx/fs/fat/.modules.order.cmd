cmd_fs/fat/modules.order := {   echo fs/fat/msdos.ko; :; } | awk '!x[$$0]++' - > fs/fat/modules.order
