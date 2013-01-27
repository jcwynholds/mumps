SHELL=/bin/sh

TOP_SRCDIR= ..
SRCDIR    = .
INCLUDES  = -I${TOP_SRCDIR}/include
MAKEDEPEND= mkdep
RM	  = rm -f
CFLAGS	  = ${INCLUDES} -Wall ${EXTRA}

ifeq ($(OSTYPE),darwin)

CFLAGS  = ${INCLUDES} -Wall ${EXTRA} -arch i386

endif

MODULE    = symbol
PROG	  = mumps

SRCS =	symbol_new.c \
	symbol_util.c

OBJS = 	symbol_new.o \
	symbol_util.o

all:	${OBJS}

depend:
	${MAKEDEPEND} ${INCLUDES} ${SRCS}

clean:
	${RM} ${OBJS} Makefile.bak .depend


# DO NOT DELETE

symbol_new.o: /usr/include/stdio.h /usr/include/features.h
symbol_new.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
symbol_new.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
symbol_new.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
symbol_new.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
symbol_new.o: /usr/include/libio.h /usr/include/_G_config.h
symbol_new.o: /usr/include/wchar.h /usr/include/stdarg.h
symbol_new.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
symbol_new.o: /usr/include/stdlib.h /usr/include/sys/types.h
symbol_new.o: /usr/include/time.h /usr/include/endian.h
symbol_new.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
symbol_new.o: /usr/include/sys/select.h /usr/include/bits/select.h
symbol_new.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
symbol_new.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
symbol_new.o: /usr/include/alloca.h /usr/include/string.h
symbol_new.o: /usr/include/xlocale.h ../include/mumps.h ../include/symbol.h
symbol_new.o: ../include/error.h ../include/init.h ../include/proto.h
symbol_new.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
symbol_new.o: /usr/include/bits/confname.h /usr/include/getopt.h
symbol_util.o: /usr/include/stdio.h /usr/include/features.h
symbol_util.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
symbol_util.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
symbol_util.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
symbol_util.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
symbol_util.o: /usr/include/libio.h /usr/include/_G_config.h
symbol_util.o: /usr/include/wchar.h /usr/include/stdarg.h
symbol_util.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
symbol_util.o: /usr/include/stdlib.h /usr/include/sys/types.h
symbol_util.o: /usr/include/time.h /usr/include/endian.h
symbol_util.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
symbol_util.o: /usr/include/sys/select.h /usr/include/bits/select.h
symbol_util.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
symbol_util.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
symbol_util.o: /usr/include/alloca.h /usr/include/string.h
symbol_util.o: /usr/include/xlocale.h /usr/include/strings.h
symbol_util.o: ../include/mumps.h ../include/symbol.h ../include/error.h
symbol_util.o: ../include/init.h ../include/proto.h ../include/compile.h
