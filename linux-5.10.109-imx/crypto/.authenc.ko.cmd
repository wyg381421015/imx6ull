cmd_crypto/authenc.ko := arm-buildroot-linux-uclibcgnueabihf-ld -r  -EL  --build-id=sha1  -T scripts/module.lds -o crypto/authenc.ko crypto/authenc.o crypto/authenc.mod.o;  true
