cmd_fs/udf/udf.ko := arm-buildroot-linux-uclibcgnueabihf-ld -r  -EL  --build-id=sha1  -T scripts/module.lds -o fs/udf/udf.ko fs/udf/udf.o fs/udf/udf.mod.o;  true
