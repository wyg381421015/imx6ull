cmd_lib/mpi/modules.order := {   echo lib/mpi/mpi.ko; :; } | awk '!x[$$0]++' - > lib/mpi/modules.order
