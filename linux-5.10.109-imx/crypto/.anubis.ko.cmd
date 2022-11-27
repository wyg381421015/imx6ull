cmd_crypto/anubis.ko := arm-buildroot-linux-uclibcgnueabihf-ld -r  -EL  --build-id=sha1  -T scripts/module.lds -o crypto/anubis.ko crypto/anubis.o crypto/anubis.mod.o;  true
