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

MODULE    = compile
PROG	  = mumps

SRCS =	dollar.c \
	eval.c \
	localvar.c \
	parse.c \
	routine.c


OBJS =	dollar.o \
	eval.o \
	localvar.o \
	parse.o \
	routine.o


all:	${OBJS}

depend:
	${MAKEDEPEND} ${INCLUDES} ${SRCS}

clean:
	${RM} ${OBJS} Makefile.bak .depend


# DO NOT DELETE

dollar.o: /usr/include/stdio.h /usr/include/features.h
dollar.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
dollar.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
dollar.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
dollar.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
dollar.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
dollar.o: /usr/include/stdarg.h /usr/include/bits/stdio_lim.h
dollar.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
dollar.o: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
dollar.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
dollar.o: /usr/include/sys/select.h /usr/include/bits/select.h
dollar.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
dollar.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
dollar.o: /usr/include/alloca.h /usr/include/string.h /usr/include/xlocale.h
dollar.o: /usr/include/strings.h /usr/include/ctype.h /usr/include/errno.h
dollar.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
dollar.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
dollar.o: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
dollar.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
dollar.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
dollar.o: /usr/include/math.h /usr/include/bits/huge_val.h
dollar.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
dollar.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
dollar.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
dollar.o: ../include/mumps.h ../include/proto.h ../include/error.h
dollar.o: ../include/opcodes.h ../include/compile.h
eval.o: /usr/include/stdio.h /usr/include/features.h
eval.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
eval.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
eval.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
eval.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
eval.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
eval.o: /usr/include/stdarg.h /usr/include/bits/stdio_lim.h
eval.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
eval.o: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
eval.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
eval.o: /usr/include/sys/select.h /usr/include/bits/select.h
eval.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
eval.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
eval.o: /usr/include/alloca.h /usr/include/string.h /usr/include/xlocale.h
eval.o: /usr/include/strings.h /usr/include/ctype.h /usr/include/errno.h
eval.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
eval.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
eval.o: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
eval.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
eval.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
eval.o: /usr/include/math.h /usr/include/bits/huge_val.h
eval.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
eval.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
eval.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
eval.o: ../include/mumps.h ../include/proto.h ../include/error.h
eval.o: ../include/opcodes.h ../include/compile.h
localvar.o: /usr/include/stdio.h /usr/include/features.h
localvar.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
localvar.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
localvar.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
localvar.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
localvar.o: /usr/include/libio.h /usr/include/_G_config.h
localvar.o: /usr/include/wchar.h /usr/include/stdarg.h
localvar.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
localvar.o: /usr/include/stdlib.h /usr/include/sys/types.h
localvar.o: /usr/include/time.h /usr/include/endian.h
localvar.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
localvar.o: /usr/include/sys/select.h /usr/include/bits/select.h
localvar.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
localvar.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
localvar.o: /usr/include/alloca.h /usr/include/string.h
localvar.o: /usr/include/xlocale.h /usr/include/ctype.h /usr/include/errno.h
localvar.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
localvar.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
localvar.o: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
localvar.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
localvar.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
localvar.o: /usr/include/math.h /usr/include/bits/huge_val.h
localvar.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
localvar.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
localvar.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
localvar.o: ../include/mumps.h ../include/proto.h ../include/error.h
localvar.o: ../include/opcodes.h ../include/compile.h
parse.o: /usr/include/stdio.h /usr/include/features.h
parse.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
parse.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
parse.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
parse.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
parse.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
parse.o: /usr/include/stdarg.h /usr/include/bits/stdio_lim.h
parse.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
parse.o: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
parse.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
parse.o: /usr/include/sys/select.h /usr/include/bits/select.h
parse.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
parse.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
parse.o: /usr/include/alloca.h /usr/include/string.h /usr/include/xlocale.h
parse.o: /usr/include/strings.h /usr/include/ctype.h /usr/include/errno.h
parse.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
parse.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
parse.o: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
parse.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
parse.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
parse.o: /usr/include/math.h /usr/include/bits/huge_val.h
parse.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
parse.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
parse.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
parse.o: ../include/mumps.h ../include/proto.h ../include/error.h
parse.o: ../include/opcodes.h ../include/compile.h
routine.o: /usr/include/stdio.h /usr/include/features.h
routine.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
routine.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
routine.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
routine.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
routine.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
routine.o: /usr/include/stdarg.h /usr/include/bits/stdio_lim.h
routine.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
routine.o: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
routine.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
routine.o: /usr/include/sys/select.h /usr/include/bits/select.h
routine.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
routine.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
routine.o: /usr/include/alloca.h /usr/include/string.h /usr/include/xlocale.h
routine.o: /usr/include/strings.h /usr/include/ctype.h /usr/include/errno.h
routine.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
routine.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
routine.o: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
routine.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
routine.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
routine.o: /usr/include/math.h /usr/include/bits/huge_val.h
routine.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
routine.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
routine.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
routine.o: ../include/mumps.h ../include/proto.h ../include/error.h
routine.o: ../include/opcodes.h ../include/compile.h
