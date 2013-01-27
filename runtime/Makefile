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

MODULE    = runtime
PROG	  = mumps

SRCS = runtime_attn.c \
       runtime_buildmvar.c \
       runtime_debug.c \
       runtime_func.c \
       runtime_math.c \
       runtime_pattern.c \
       runtime_run.c \
       runtime_ssvn.c \
       runtime_util.c \
       runtime_vars.c


OBJS = runtime_attn.o \
       runtime_buildmvar.o \
       runtime_debug.o \
       runtime_func.o \
       runtime_math.o \
       runtime_pattern.o \
       runtime_run.o \
       runtime_ssvn.o \
       runtime_util.o \
       runtime_vars.o

all:	${OBJS}

depend:
	${MAKEDEPEND} ${INCLUDES} ${SRCS}

clean:
	${RM} ${OBJS} Makefile.bak .depend


# DO NOT DELETE

runtime_attn.o: /usr/include/stdio.h /usr/include/features.h
runtime_attn.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_attn.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_attn.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_attn.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_attn.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_attn.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_attn.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
runtime_attn.o: /usr/include/stdlib.h /usr/include/sys/types.h
runtime_attn.o: /usr/include/time.h /usr/include/endian.h
runtime_attn.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
runtime_attn.o: /usr/include/sys/select.h /usr/include/bits/select.h
runtime_attn.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
runtime_attn.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
runtime_attn.o: /usr/include/alloca.h /usr/include/string.h
runtime_attn.o: /usr/include/xlocale.h /usr/include/strings.h
runtime_attn.o: /usr/include/ctype.h /usr/include/signal.h
runtime_attn.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
runtime_attn.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
runtime_attn.o: /usr/include/bits/sigstack.h /usr/include/bits/sigthread.h
runtime_attn.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
runtime_attn.o: /usr/include/bits/confname.h /usr/include/getopt.h
runtime_attn.o: /usr/include/sched.h /usr/include/bits/sched.h
runtime_attn.o: /usr/include/sysexits.h /usr/include/errno.h
runtime_attn.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
runtime_attn.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
runtime_attn.o: /usr/include/asm-generic/errno-base.h ../include/mumps.h
runtime_attn.o: ../include/proto.h ../include/error.h ../include/opcodes.h
runtime_attn.o: ../include/compile.h ../include/seqio.h
runtime_buildmvar.o: /usr/include/stdio.h /usr/include/features.h
runtime_buildmvar.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_buildmvar.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_buildmvar.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_buildmvar.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_buildmvar.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_buildmvar.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_buildmvar.o: /usr/include/bits/stdio_lim.h
runtime_buildmvar.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
runtime_buildmvar.o: /usr/include/sys/types.h /usr/include/time.h
runtime_buildmvar.o: /usr/include/endian.h /usr/include/bits/endian.h
runtime_buildmvar.o: /usr/include/bits/byteswap.h /usr/include/sys/select.h
runtime_buildmvar.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
runtime_buildmvar.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
runtime_buildmvar.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
runtime_buildmvar.o: /usr/include/string.h /usr/include/xlocale.h
runtime_buildmvar.o: /usr/include/strings.h /usr/include/ctype.h
runtime_buildmvar.o: /usr/include/errno.h /usr/include/bits/errno.h
runtime_buildmvar.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
runtime_buildmvar.o: /usr/include/asm-generic/errno.h
runtime_buildmvar.o: /usr/include/asm-generic/errno-base.h ../include/mumps.h
runtime_buildmvar.o: ../include/proto.h ../include/error.h
runtime_buildmvar.o: ../include/opcodes.h ../include/compile.h
runtime_debug.o: /usr/include/stdio.h /usr/include/features.h
runtime_debug.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_debug.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_debug.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_debug.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_debug.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_debug.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_debug.o: /usr/include/bits/stdio_lim.h
runtime_debug.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
runtime_debug.o: /usr/include/sys/types.h /usr/include/time.h
runtime_debug.o: /usr/include/endian.h /usr/include/bits/endian.h
runtime_debug.o: /usr/include/bits/byteswap.h /usr/include/sys/select.h
runtime_debug.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
runtime_debug.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
runtime_debug.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
runtime_debug.o: /usr/include/string.h /usr/include/xlocale.h
runtime_debug.o: /usr/include/strings.h /usr/include/ctype.h
runtime_debug.o: /usr/include/errno.h /usr/include/bits/errno.h
runtime_debug.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
runtime_debug.o: /usr/include/asm-generic/errno.h
runtime_debug.o: /usr/include/asm-generic/errno-base.h ../include/mumps.h
runtime_debug.o: ../include/proto.h ../include/error.h ../include/opcodes.h
runtime_debug.o: ../include/compile.h
runtime_func.o: /usr/include/stdio.h /usr/include/features.h
runtime_func.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_func.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_func.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_func.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_func.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_func.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_func.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
runtime_func.o: /usr/include/stdlib.h /usr/include/sys/types.h
runtime_func.o: /usr/include/time.h /usr/include/endian.h
runtime_func.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
runtime_func.o: /usr/include/sys/select.h /usr/include/bits/select.h
runtime_func.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
runtime_func.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
runtime_func.o: /usr/include/alloca.h /usr/include/string.h
runtime_func.o: /usr/include/xlocale.h /usr/include/strings.h
runtime_func.o: /usr/include/ctype.h /usr/include/errno.h
runtime_func.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
runtime_func.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
runtime_func.o: /usr/include/asm-generic/errno-base.h /usr/include/limits.h
runtime_func.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
runtime_func.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
runtime_func.o: /usr/include/math.h /usr/include/bits/huge_val.h
runtime_func.o: /usr/include/bits/huge_valf.h /usr/include/bits/huge_vall.h
runtime_func.o: /usr/include/bits/inf.h /usr/include/bits/nan.h
runtime_func.o: /usr/include/bits/mathdef.h /usr/include/bits/mathcalls.h
runtime_func.o: ../include/mumps.h ../include/proto.h ../include/error.h
runtime_func.o: ../include/database.h
runtime_math.o: /usr/include/stdio.h /usr/include/features.h
runtime_math.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_math.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_math.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_math.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_math.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_math.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_math.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
runtime_math.o: /usr/include/stdlib.h /usr/include/sys/types.h
runtime_math.o: /usr/include/time.h /usr/include/endian.h
runtime_math.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
runtime_math.o: /usr/include/sys/select.h /usr/include/bits/select.h
runtime_math.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
runtime_math.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
runtime_math.o: /usr/include/alloca.h /usr/include/limits.h
runtime_math.o: /usr/include/bits/posix1_lim.h /usr/include/bits/local_lim.h
runtime_math.o: /usr/include/linux/limits.h /usr/include/bits/posix2_lim.h
runtime_math.o: /usr/include/string.h /usr/include/xlocale.h
runtime_math.o: /usr/include/ctype.h ../include/opcodes.h ../include/mumps.h
runtime_math.o: ../include/proto.h ../include/error.h
runtime_pattern.o: /usr/include/stdio.h /usr/include/features.h
runtime_pattern.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_pattern.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_pattern.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_pattern.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_pattern.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_pattern.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_pattern.o: /usr/include/bits/stdio_lim.h
runtime_pattern.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
runtime_pattern.o: /usr/include/sys/types.h /usr/include/time.h
runtime_pattern.o: /usr/include/endian.h /usr/include/bits/endian.h
runtime_pattern.o: /usr/include/bits/byteswap.h /usr/include/sys/select.h
runtime_pattern.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
runtime_pattern.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
runtime_pattern.o: /usr/include/bits/pthreadtypes.h /usr/include/alloca.h
runtime_pattern.o: /usr/include/string.h /usr/include/xlocale.h
runtime_pattern.o: ../include/mumps.h ../include/error.h ../include/init.h
runtime_pattern.o: ../include/proto.h ../include/compile.h
runtime_run.o: /usr/include/stdio.h /usr/include/features.h
runtime_run.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_run.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_run.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_run.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_run.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_run.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_run.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
runtime_run.o: /usr/include/stdlib.h /usr/include/sys/types.h
runtime_run.o: /usr/include/time.h /usr/include/endian.h
runtime_run.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
runtime_run.o: /usr/include/sys/select.h /usr/include/bits/select.h
runtime_run.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
runtime_run.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
runtime_run.o: /usr/include/alloca.h /usr/include/string.h
runtime_run.o: /usr/include/xlocale.h /usr/include/strings.h
runtime_run.o: /usr/include/ctype.h /usr/include/unistd.h
runtime_run.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
runtime_run.o: /usr/include/getopt.h /usr/include/errno.h
runtime_run.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
runtime_run.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
runtime_run.o: /usr/include/asm-generic/errno-base.h /usr/include/math.h
runtime_run.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
runtime_run.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
runtime_run.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
runtime_run.o: /usr/include/bits/mathcalls.h ../include/mumps.h
runtime_run.o: ../include/proto.h ../include/error.h ../include/opcodes.h
runtime_run.o: ../include/compile.h ../include/symbol.h ../include/database.h
runtime_ssvn.o: /usr/include/stdio.h /usr/include/features.h
runtime_ssvn.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_ssvn.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_ssvn.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_ssvn.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_ssvn.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_ssvn.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_ssvn.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
runtime_ssvn.o: /usr/include/stdlib.h /usr/include/sys/types.h
runtime_ssvn.o: /usr/include/time.h /usr/include/endian.h
runtime_ssvn.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
runtime_ssvn.o: /usr/include/sys/select.h /usr/include/bits/select.h
runtime_ssvn.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
runtime_ssvn.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
runtime_ssvn.o: /usr/include/alloca.h /usr/include/unistd.h
runtime_ssvn.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
runtime_ssvn.o: /usr/include/getopt.h /usr/include/sys/ipc.h
runtime_ssvn.o: /usr/include/bits/ipctypes.h /usr/include/bits/ipc.h
runtime_ssvn.o: /usr/include/sys/shm.h /usr/include/bits/shm.h
runtime_ssvn.o: /usr/include/sys/sem.h /usr/include/bits/sem.h
runtime_ssvn.o: /usr/include/signal.h /usr/include/bits/signum.h
runtime_ssvn.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
runtime_ssvn.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
runtime_ssvn.o: /usr/include/bits/sigthread.h /usr/include/pwd.h
runtime_ssvn.o: /usr/include/string.h /usr/include/xlocale.h
runtime_ssvn.o: /usr/include/strings.h /usr/include/ctype.h
runtime_ssvn.o: /usr/include/errno.h /usr/include/bits/errno.h
runtime_ssvn.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
runtime_ssvn.o: /usr/include/asm-generic/errno.h
runtime_ssvn.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/time.h
runtime_ssvn.o: /usr/include/sys/resource.h /usr/include/bits/resource.h
runtime_ssvn.o: ../include/mumps.h ../include/proto.h ../include/error.h
runtime_util.o: /usr/include/stdio.h /usr/include/features.h
runtime_util.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_util.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_util.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_util.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_util.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_util.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_util.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
runtime_util.o: /usr/include/stdlib.h /usr/include/sys/types.h
runtime_util.o: /usr/include/time.h /usr/include/endian.h
runtime_util.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
runtime_util.o: /usr/include/sys/select.h /usr/include/bits/select.h
runtime_util.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
runtime_util.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
runtime_util.o: /usr/include/alloca.h /usr/include/string.h
runtime_util.o: /usr/include/xlocale.h /usr/include/strings.h
runtime_util.o: /usr/include/ctype.h /usr/include/errno.h
runtime_util.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
runtime_util.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
runtime_util.o: /usr/include/asm-generic/errno-base.h
runtime_util.o: /usr/include/sys/utsname.h /usr/include/bits/utsname.h
runtime_util.o: /usr/include/limits.h /usr/include/bits/posix1_lim.h
runtime_util.o: /usr/include/bits/local_lim.h /usr/include/linux/limits.h
runtime_util.o: /usr/include/bits/posix2_lim.h /usr/include/math.h
runtime_util.o: /usr/include/bits/huge_val.h /usr/include/bits/huge_valf.h
runtime_util.o: /usr/include/bits/huge_vall.h /usr/include/bits/inf.h
runtime_util.o: /usr/include/bits/nan.h /usr/include/bits/mathdef.h
runtime_util.o: /usr/include/bits/mathcalls.h ../include/mumps.h
runtime_util.o: ../include/proto.h ../include/error.h
runtime_vars.o: /usr/include/stdio.h /usr/include/features.h
runtime_vars.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
runtime_vars.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
runtime_vars.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
runtime_vars.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
runtime_vars.o: /usr/include/libio.h /usr/include/_G_config.h
runtime_vars.o: /usr/include/wchar.h /usr/include/stdarg.h
runtime_vars.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
runtime_vars.o: /usr/include/stdlib.h /usr/include/sys/types.h
runtime_vars.o: /usr/include/time.h /usr/include/endian.h
runtime_vars.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
runtime_vars.o: /usr/include/sys/select.h /usr/include/bits/select.h
runtime_vars.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
runtime_vars.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
runtime_vars.o: /usr/include/alloca.h /usr/include/string.h
runtime_vars.o: /usr/include/xlocale.h /usr/include/strings.h
runtime_vars.o: /usr/include/ctype.h /usr/include/errno.h
runtime_vars.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
runtime_vars.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
runtime_vars.o: /usr/include/asm-generic/errno-base.h ../include/mumps.h
runtime_vars.o: ../include/proto.h ../include/error.h
