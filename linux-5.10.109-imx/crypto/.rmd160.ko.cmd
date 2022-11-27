cmd_crypto/rmd160.ko := arm-buildroot-linux-uclibcgnueabihf-ld -r  -EL  --build-id=sha1  -T scripts/module.lds -o crypto/rmd160.ko crypto/rmd160.o crypto/rmd160.mod.o;  true
