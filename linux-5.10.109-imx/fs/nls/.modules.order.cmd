cmd_fs/nls/modules.order := {   echo fs/nls/nls_iso8859-15.ko; :; } | awk '!x[$$0]++' - > fs/nls/modules.order
