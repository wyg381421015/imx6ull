cmd_modules.order := awk '!x[$$0]++' init/modules.order usr/modules.order arch/arm/modules.order arch/arm/mach-imx/modules.order kernel/modules.order certs/modules.order mm/modules.order fs/modules.order ipc/modules.order security/modules.order crypto/modules.order block/modules.order arch/arm/lib/modules.order lib/modules.order drivers/modules.order sound/modules.order net/modules.order virt/modules.order > modules.order