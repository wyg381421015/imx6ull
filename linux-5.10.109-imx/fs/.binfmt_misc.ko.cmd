cmd_fs/binfmt_misc.ko := arm-buildroot-linux-uclibcgnueabihf-ld -r  -EL  --build-id=sha1  -T scripts/module.lds -o fs/binfmt_misc.ko fs/binfmt_misc.o fs/binfmt_misc.mod.o;  true
