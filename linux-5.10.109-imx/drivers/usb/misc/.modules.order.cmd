cmd_drivers/usb/misc/modules.order := {   echo drivers/usb/misc/usbtest.ko;   echo drivers/usb/misc/ehset.ko; :; } | awk '!x[$$0]++' - > drivers/usb/misc/modules.order
