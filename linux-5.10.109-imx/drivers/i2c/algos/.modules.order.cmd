cmd_drivers/i2c/algos/modules.order := {   echo drivers/i2c/algos/i2c-algo-pcf.ko;   echo drivers/i2c/algos/i2c-algo-pca.ko; :; } | awk '!x[$$0]++' - > drivers/i2c/algos/modules.order
