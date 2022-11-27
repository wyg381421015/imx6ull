cmd_lib/crypto/modules.order := {   echo lib/crypto/libdes.ko; :; } | awk '!x[$$0]++' - > lib/crypto/modules.order
