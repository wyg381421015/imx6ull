cmd_drivers/usb/gadget/legacy/modules.order := {   echo drivers/usb/gadget/legacy/g_zero.ko;   echo drivers/usb/gadget/legacy/g_ether.ko;   echo drivers/usb/gadget/legacy/gadgetfs.ko;   echo drivers/usb/gadget/legacy/g_ffs.ko;   echo drivers/usb/gadget/legacy/g_mass_storage.ko;   echo drivers/usb/gadget/legacy/g_serial.ko;   echo drivers/usb/gadget/legacy/g_hid.ko;   echo drivers/usb/gadget/legacy/g_ncm.ko; :; } | awk '!x[$$0]++' - > drivers/usb/gadget/legacy/modules.order