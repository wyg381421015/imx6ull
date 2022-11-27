cmd_vmlinux := sh scripts/link-vmlinux.sh "arm-buildroot-linux-uclibcgnueabihf-ld" " -EL" "--no-undefined -X --pic-veneer --build-id=sha1 --orphan-handling=warn";  true
