cmd_fs/nfs/modules.order := {   cat fs/nfs/filelayout/modules.order;   cat fs/nfs/flexfilelayout/modules.order;   cat fs/nfs/blocklayout/modules.order; :; } | awk '!x[$$0]++' - > fs/nfs/modules.order
