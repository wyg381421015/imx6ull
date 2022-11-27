cmd_crypto/rmd256.ko := arm-buildroot-linux-uclibcgnueabihf-ld -r  -EL  --build-id=sha1  -T scripts/module.lds -o crypto/rmd256.ko crypto/rmd256.o crypto/rmd256.mod.o;  true
