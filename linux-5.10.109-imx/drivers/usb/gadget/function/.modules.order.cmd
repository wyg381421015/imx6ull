cmd_drivers/usb/gadget/function/modules.order := {   echo drivers/usb/gadget/function/usb_f_acm.ko;   echo drivers/usb/gadget/function/usb_f_ss_lb.ko;   echo drivers/usb/gadget/function/u_serial.ko;   echo drivers/usb/gadget/function/usb_f_serial.ko;   echo drivers/usb/gadget/function/usb_f_obex.ko;   echo drivers/usb/gadget/function/u_ether.ko;   echo drivers/usb/gadget/function/usb_f_ncm.ko;   echo drivers/usb/gadget/function/usb_f_ecm.ko;   echo drivers/usb/gadget/function/usb_f_ecm_subset.ko;   echo drivers/usb/gadget/function/usb_f_rndis.ko;   echo drivers/usb/gadget/function/usb_f_mass_storage.ko;   echo drivers/usb/gadget/function/usb_f_fs.ko;   echo drivers/usb/gadget/function/usb_f_hid.ko; :; } | awk '!x[$$0]++' - > drivers/usb/gadget/function/modules.order