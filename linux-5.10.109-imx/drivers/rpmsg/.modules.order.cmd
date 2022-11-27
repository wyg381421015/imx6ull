cmd_drivers/rpmsg/modules.order := {   echo drivers/rpmsg/imx_rpmsg_pingpong.ko;   echo drivers/rpmsg/imx_rpmsg_tty.ko; :; } | awk '!x[$$0]++' - > drivers/rpmsg/modules.order
