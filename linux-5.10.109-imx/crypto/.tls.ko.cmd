cmd_crypto/tls.ko := arm-buildroot-linux-uclibcgnueabihf-ld -r  -EL  --build-id=sha1  -T scripts/module.lds -o crypto/tls.ko crypto/tls.o crypto/tls.mod.o;  true
