cmd_crypto/crypto_engine.ko := arm-buildroot-linux-uclibcgnueabihf-ld -r  -EL  --build-id=sha1  -T scripts/module.lds -o crypto/crypto_engine.ko crypto/crypto_engine.o crypto/crypto_engine.mod.o;  true