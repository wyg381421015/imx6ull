cmd_crypto/seed.ko := arm-buildroot-linux-uclibcgnueabihf-ld -r  -EL  --build-id=sha1  -T scripts/module.lds -o crypto/seed.ko crypto/seed.o crypto/seed.mod.o;  true
