cmd_libbb/perror_nomsg.o := arm-linux-musleabihf-gcc -Wp,-MD,libbb/.perror_nomsg.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -D"BB_VER=KBUILD_STR(1.22.1)" -DBB_BT=AUTOCONF_TIMESTAMP  -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes  -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -fno-builtin-strlen -finline-limit=0 -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -g -O0     -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(perror_nomsg)"  -D"KBUILD_MODNAME=KBUILD_STR(perror_nomsg)" -c -o libbb/perror_nomsg.o libbb/perror_nomsg.c

deps_libbb/perror_nomsg.o := \
  libbb/perror_nomsg.c \
  include/platform.h \
    $(wildcard include/config/werror.h) \
    $(wildcard include/config/big/endian.h) \
    $(wildcard include/config/little/endian.h) \
    $(wildcard include/config/nommu.h) \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/limits.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/features.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/bits/limits.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/byteswap.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/stdint.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/bits/alltypes.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/bits/stdint.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/endian.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/stdbool.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/unistd.h \
  /Volumes/ELFSOSX/tools/lib/gcc/arm-linux-musleabihf/4.7.3/../../../../arm-linux-musleabihf/include/bits/posix.h \

libbb/perror_nomsg.o: $(deps_libbb/perror_nomsg.o)

$(deps_libbb/perror_nomsg.o):
