cmd_crypto/modules.order := {   echo crypto/crypto_engine.ko;   echo crypto/echainiv.ko;   echo crypto/rsa_generic.ko;   echo crypto/vmac.ko;   echo crypto/xcbc.ko;   echo crypto/md4.ko;   echo crypto/md5.ko;   echo crypto/rmd128.ko;   echo crypto/rmd160.ko;   echo crypto/rmd256.ko;   echo crypto/rmd320.ko;   echo crypto/sha512_generic.ko;   echo crypto/sha3_generic.ko;   echo crypto/sm3_generic.ko;   echo crypto/streebog_generic.ko;   echo crypto/wp512.ko;   echo crypto/tgr192.ko;   echo crypto/gf128mul.ko;   echo crypto/cfb.ko;   echo crypto/pcbc.ko;   echo crypto/cts.ko;   echo crypto/lrw.ko;   echo crypto/xts.ko;   echo crypto/des_generic.ko;   echo crypto/fcrypt.ko;   echo crypto/blowfish_generic.ko;   echo crypto/blowfish_common.ko;   echo crypto/twofish_generic.ko;   echo crypto/twofish_common.ko;   echo crypto/serpent_generic.ko;   echo crypto/sm4_generic.ko;   echo crypto/camellia_generic.ko;   echo crypto/cast_common.ko;   echo crypto/cast5_generic.ko;   echo crypto/cast6_generic.ko;   echo crypto/arc4.ko;   echo crypto/tea.ko;   echo crypto/khazad.ko;   echo crypto/anubis.ko;   echo crypto/seed.ko;   echo crypto/salsa20_generic.ko;   echo crypto/authenc.ko;   echo crypto/authencesn.ko;   echo crypto/tls.ko;   echo crypto/ansi_cprng.ko;   echo crypto/tcrypt.ko;   echo crypto/af_alg.ko;   echo crypto/algif_rng.ko;   echo crypto/ofb.ko;   echo crypto/essiv.ko; :; } | awk '!x[$$0]++' - > crypto/modules.order