cmd_drivers/media/v4l2-core/modules.order := {   echo drivers/media/v4l2-core/v4l2-jpeg.ko; :; } | awk '!x[$$0]++' - > drivers/media/v4l2-core/modules.order
