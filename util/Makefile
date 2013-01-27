SHELL=/bin/sh

TOP_SRCDIR= ..
SRCDIR    = .
INCLUDES  = -I${TOP_SRCDIR}/include
ifeq ($(OSTYPE),darwin)
INCLUDES  = -I${TOP_SRCDIR}/include -fnested-functions
endif

MAKEDEPEND= mkdep
RM	  = rm -f
CFLAGS	  = ${INCLUDES} -Wall ${EXTRA}

ifeq ($(OSTYPE),darwin)

CFLAGS  = ${INCLUDES} -Wall ${EXTRA} -arch i386

endif

MODULE    = util
PROG	  = mumps

SRCS = 	util_key.c \
	util_lock.c \
	util_memory.c \
	util_routine.c \
	util_share.c \
	util_strerror.c

OBJS = 	util_key.o \
	util_lock.o \
	util_memory.o \
	util_routine.o \
	util_share.o \
	util_strerror.o

all:	${OBJS}

depend:
	${MAKEDEPEND} ${INCLUDES} ${SRCS}

clean:
	${RM} ${OBJS} Makefile.bak .depend


# DO NOT DELETE

util_key.o: /usr/include/stdio.h /usr/include/features.h
util_key.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
util_key.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
util_key.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
util_key.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
util_key.o: /usr/include/libio.h /usr/include/_G_config.h
util_key.o: /usr/include/wchar.h /usr/include/stdarg.h
util_key.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
util_key.o: /usr/include/stdlib.h /usr/include/sys/types.h
util_key.o: /usr/include/time.h /usr/include/endian.h
util_key.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
util_key.o: /usr/include/sys/select.h /usr/include/bits/select.h
util_key.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
util_key.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
util_key.o: /usr/include/alloca.h /usr/include/string.h
util_key.o: /usr/include/xlocale.h /usr/include/strings.h ../include/mumps.h
util_key.o: ../include/proto.h ../include/error.h ../include/compile.h
util_lock.o: /usr/include/stdio.h /usr/include/features.h
util_lock.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
util_lock.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
util_lock.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
util_lock.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
util_lock.o: /usr/include/libio.h /usr/include/_G_config.h
util_lock.o: /usr/include/wchar.h /usr/include/stdarg.h
util_lock.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
util_lock.o: /usr/include/stdlib.h /usr/include/sys/types.h
util_lock.o: /usr/include/time.h /usr/include/endian.h
util_lock.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
util_lock.o: /usr/include/sys/select.h /usr/include/bits/select.h
util_lock.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
util_lock.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
util_lock.o: /usr/include/alloca.h /usr/include/string.h
util_lock.o: /usr/include/xlocale.h /usr/include/strings.h ../include/mumps.h
util_lock.o: ../include/proto.h ../include/error.h ../include/compile.h
util_lock.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
util_lock.o: /usr/include/bits/confname.h /usr/include/getopt.h
util_lock.o: /usr/include/sys/ipc.h /usr/include/bits/ipctypes.h
util_lock.o: /usr/include/bits/ipc.h /usr/include/sys/sem.h
util_lock.o: /usr/include/bits/sem.h
util_memory.o: /usr/include/stdio.h /usr/include/features.h
util_memory.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
util_memory.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
util_memory.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
util_memory.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
util_memory.o: /usr/include/libio.h /usr/include/_G_config.h
util_memory.o: /usr/include/wchar.h /usr/include/stdarg.h
util_memory.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
util_memory.o: /usr/include/stdlib.h /usr/include/sys/types.h
util_memory.o: /usr/include/time.h /usr/include/endian.h
util_memory.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
util_memory.o: /usr/include/sys/select.h /usr/include/bits/select.h
util_memory.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
util_memory.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
util_memory.o: /usr/include/alloca.h /usr/include/string.h
util_memory.o: /usr/include/xlocale.h /usr/include/strings.h
util_memory.o: /usr/include/ctype.h ../include/mumps.h ../include/proto.h
util_memory.o: ../include/error.h ../include/compile.h ../include/symbol.h
util_routine.o: /usr/include/stdio.h /usr/include/features.h
util_routine.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
util_routine.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
util_routine.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
util_routine.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
util_routine.o: /usr/include/libio.h /usr/include/_G_config.h
util_routine.o: /usr/include/wchar.h /usr/include/stdarg.h
util_routine.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
util_routine.o: /usr/include/stdlib.h /usr/include/sys/types.h
util_routine.o: /usr/include/time.h /usr/include/endian.h
util_routine.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
util_routine.o: /usr/include/sys/select.h /usr/include/bits/select.h
util_routine.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
util_routine.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
util_routine.o: /usr/include/alloca.h /usr/include/errno.h
util_routine.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
util_routine.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
util_routine.o: /usr/include/asm-generic/errno-base.h /usr/include/string.h
util_routine.o: /usr/include/xlocale.h /usr/include/strings.h
util_routine.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
util_routine.o: /usr/include/bits/confname.h /usr/include/getopt.h
util_routine.o: ../include/mumps.h ../include/compile.h ../include/proto.h
util_share.o: /usr/include/stdio.h /usr/include/features.h
util_share.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
util_share.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
util_share.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
util_share.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
util_share.o: /usr/include/libio.h /usr/include/_G_config.h
util_share.o: /usr/include/wchar.h /usr/include/stdarg.h
util_share.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
util_share.o: /usr/include/stdlib.h /usr/include/sys/types.h
util_share.o: /usr/include/time.h /usr/include/endian.h
util_share.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
util_share.o: /usr/include/sys/select.h /usr/include/bits/select.h
util_share.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
util_share.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
util_share.o: /usr/include/alloca.h /usr/include/errno.h
util_share.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
util_share.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
util_share.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/ipc.h
util_share.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
util_share.o: /usr/include/sys/shm.h /usr/include/bits/shm.h
util_share.o: /usr/include/sys/sem.h /usr/include/bits/sem.h
util_share.o: ../include/mumps.h ../include/error.h ../include/proto.h
util_strerror.o: /usr/include/stdio.h /usr/include/features.h
util_strerror.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
util_strerror.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
util_strerror.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
util_strerror.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
util_strerror.o: /usr/include/libio.h /usr/include/_G_config.h
util_strerror.o: /usr/include/wchar.h /usr/include/stdarg.h
util_strerror.o: /usr/include/bits/stdio_lim.h
util_strerror.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
util_strerror.o: /usr/include/sys/types.h /usr/include/time.h
util_strerror.o: /usr/include/endian.h /usr/include/bits/endian.h
util_strerror.o: /usr/include/bits/byteswap.h /usr/include/sys/select.h
util_strerror.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
util_strerror.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
util_strerror.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
util_strerror.o: /usr/include/string.h /usr/include/xlocale.h
util_strerror.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
util_strerror.o: /usr/include/bits/confname.h /usr/include/getopt.h
util_strerror.o: /usr/include/errno.h /usr/include/bits/errno.h
util_strerror.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
util_strerror.o: /usr/include/asm-generic/errno.h
util_strerror.o: /usr/include/asm-generic/errno-base.h ../include/mumps.h
util_strerror.o: ../include/proto.h ../include/error.h
