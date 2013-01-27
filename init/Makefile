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

MODULE    = init
PROG	  = mumps

SRCS = init_create.c init_run.c init_start.c

OBJS = init_create.o init_run.o init_start.o

all:	${OBJS}

depend:
	${MAKEDEPEND} ${INCLUDES} ${SRCS}

clean:
	${RM} ${OBJS} Makefile.bak .depend


# DO NOT DELETE

init_create.o: /usr/include/stdio.h /usr/include/features.h
init_create.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
init_create.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
init_create.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
init_create.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
init_create.o: /usr/include/libio.h /usr/include/_G_config.h
init_create.o: /usr/include/wchar.h /usr/include/stdarg.h
init_create.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
init_create.o: /usr/include/stdlib.h /usr/include/sys/types.h
init_create.o: /usr/include/time.h /usr/include/endian.h
init_create.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
init_create.o: /usr/include/sys/select.h /usr/include/bits/select.h
init_create.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
init_create.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
init_create.o: /usr/include/alloca.h /usr/include/string.h
init_create.o: /usr/include/xlocale.h /usr/include/strings.h
init_create.o: /usr/include/ctype.h /usr/include/errno.h
init_create.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
init_create.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
init_create.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
init_create.o: /usr/include/bits/fcntl.h /usr/include/unistd.h
init_create.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
init_create.o: /usr/include/getopt.h /usr/include/sys/ipc.h
init_create.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
init_create.o: /usr/include/sys/shm.h /usr/include/bits/shm.h
init_create.o: ../include/mumps.h ../include/database.h
init_run.o: /usr/include/stdio.h /usr/include/features.h
init_run.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
init_run.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
init_run.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
init_run.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
init_run.o: /usr/include/libio.h /usr/include/_G_config.h
init_run.o: /usr/include/wchar.h /usr/include/stdarg.h
init_run.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
init_run.o: /usr/include/stdlib.h /usr/include/sys/types.h
init_run.o: /usr/include/time.h /usr/include/endian.h
init_run.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
init_run.o: /usr/include/sys/select.h /usr/include/bits/select.h
init_run.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
init_run.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
init_run.o: /usr/include/alloca.h /usr/include/signal.h
init_run.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
init_run.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
init_run.o: /usr/include/bits/sigstack.h /usr/include/bits/sigthread.h
init_run.o: /usr/include/errno.h /usr/include/bits/errno.h
init_run.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
init_run.o: /usr/include/asm-generic/errno.h
init_run.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
init_run.o: /usr/include/bits/fcntl.h /usr/include/string.h
init_run.o: /usr/include/xlocale.h /usr/include/strings.h
init_run.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
init_run.o: /usr/include/bits/confname.h /usr/include/getopt.h
init_run.o: /usr/include/sys/ipc.h /usr/include/bits/ipctypes.h
init_run.o: /usr/include/bits/ipc.h /usr/include/sys/shm.h
init_run.o: /usr/include/bits/shm.h /usr/include/sys/sem.h
init_run.o: /usr/include/bits/sem.h /usr/include/termios.h
init_run.o: /usr/include/bits/termios.h /usr/include/sys/ttydefaults.h
init_run.o: ../include/mumps.h ../include/proto.h ../include/init.h
init_run.o: ../include/error.h ../include/compile.h ../include/opcodes.h
init_run.o: ../include/database.h
init_start.o: /usr/include/stdio.h /usr/include/features.h
init_start.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
init_start.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
init_start.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
init_start.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
init_start.o: /usr/include/libio.h /usr/include/_G_config.h
init_start.o: /usr/include/wchar.h /usr/include/stdarg.h
init_start.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
init_start.o: /usr/include/stdlib.h /usr/include/sys/types.h
init_start.o: /usr/include/time.h /usr/include/endian.h
init_start.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
init_start.o: /usr/include/sys/select.h /usr/include/bits/select.h
init_start.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
init_start.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
init_start.o: /usr/include/alloca.h /usr/include/string.h
init_start.o: /usr/include/xlocale.h /usr/include/strings.h
init_start.o: /usr/include/ctype.h /usr/include/sys/param.h
init_start.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
init_start.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
init_start.o: /usr/include/bits/posix2_lim.h /usr/include/linux/param.h
init_start.o: /usr/include/asm/param.h /usr/include/asm-generic/param.h
init_start.o: /usr/include/errno.h /usr/include/bits/errno.h
init_start.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
init_start.o: /usr/include/asm-generic/errno.h
init_start.o: /usr/include/asm-generic/errno-base.h /usr/include/fcntl.h
init_start.o: /usr/include/bits/fcntl.h /usr/include/unistd.h
init_start.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
init_start.o: /usr/include/getopt.h /usr/include/sys/ipc.h
init_start.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
init_start.o: /usr/include/sys/shm.h /usr/include/bits/shm.h
init_start.o: /usr/include/sys/sem.h /usr/include/bits/sem.h
init_start.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
init_start.o: ../include/mumps.h ../include/proto.h ../include/database.h
