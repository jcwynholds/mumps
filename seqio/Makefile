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

MODULE    = seqio
PROG	  = mumps

SRCS =	SQ_Util.c \
	SQ_Signal.c \
	SQ_File.c \
	SQ_Device.c \
	SQ_Pipe.c \
	SQ_Socket.c \
	SQ_Tcpip.c \
	SQ_Seqio.c

OBJS =	SQ_Util.o \
	SQ_Signal.o \
	SQ_File.o \
	SQ_Device.o \
	SQ_Pipe.o \
	SQ_Socket.o \
	SQ_Tcpip.o \
	SQ_Seqio.o

all:	${OBJS}

depend:
	${MAKEDEPEND} ${INCLUDES} ${SRCS}

clean:
	${RM} ${OBJS} Makefile.bak .depend


# DO NOT DELETE

SQ_Util.o: /usr/include/stdio.h /usr/include/features.h
SQ_Util.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
SQ_Util.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
SQ_Util.o: /usr/include/gnu/stubs-32.h /usr/include/stddef.h
SQ_Util.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
SQ_Util.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
SQ_Util.o: /usr/include/stdarg.h /usr/include/bits/stdio_lim.h
SQ_Util.o: /usr/include/bits/sys_errlist.h /usr/include/stdlib.h
SQ_Util.o: /usr/include/sys/types.h /usr/include/time.h /usr/include/endian.h
SQ_Util.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
SQ_Util.o: /usr/include/sys/select.h /usr/include/bits/select.h
SQ_Util.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
SQ_Util.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
SQ_Util.o: /usr/include/alloca.h /usr/include/errno.h
SQ_Util.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
SQ_Util.o: /usr/include/asm/errno.h /usr/include/asm-generic/errno.h
SQ_Util.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/time.h
SQ_Util.o: /usr/include/signal.h /usr/include/bits/signum.h
SQ_Util.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
SQ_Util.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
SQ_Util.o: /usr/include/bits/sigthread.h /usr/include/string.h
SQ_Util.o: /usr/include/xlocale.h /usr/include/unistd.h
SQ_Util.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
SQ_Util.o: /usr/include/getopt.h ../include/mumps.h ../include/error.h
SQ_Util.o: ../include/proto.h ../include/seqio.h
SQ_Signal.o: /usr/include/errno.h /usr/include/features.h
SQ_Signal.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
SQ_Signal.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
SQ_Signal.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
SQ_Signal.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
SQ_Signal.o: /usr/include/asm-generic/errno.h
SQ_Signal.o: /usr/include/asm-generic/errno-base.h /usr/include/signal.h
SQ_Signal.o: /usr/include/bits/sigset.h /usr/include/bits/types.h
SQ_Signal.o: /usr/include/bits/typesizes.h /usr/include/bits/signum.h
SQ_Signal.o: /usr/include/time.h /usr/include/bits/siginfo.h
SQ_Signal.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
SQ_Signal.o: /usr/include/stddef.h /usr/include/bits/sigstack.h
SQ_Signal.o: /usr/include/bits/pthreadtypes.h /usr/include/bits/sigthread.h
SQ_Signal.o: /usr/include/stdio.h /usr/include/libio.h
SQ_Signal.o: /usr/include/_G_config.h /usr/include/wchar.h
SQ_Signal.o: /usr/include/stdarg.h /usr/include/bits/stdio_lim.h
SQ_Signal.o: /usr/include/bits/sys_errlist.h ../include/seqio.h
SQ_Signal.o: /usr/include/sys/types.h /usr/include/endian.h
SQ_Signal.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
SQ_Signal.o: /usr/include/sys/select.h /usr/include/bits/select.h
SQ_Signal.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
SQ_Signal.o: ../include/mumps.h
SQ_File.o: /usr/include/errno.h /usr/include/features.h
SQ_File.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
SQ_File.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
SQ_File.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
SQ_File.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
SQ_File.o: /usr/include/asm-generic/errno.h
SQ_File.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/stat.h
SQ_File.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
SQ_File.o: /usr/include/time.h /usr/include/bits/stat.h
SQ_File.o: /usr/include/sys/types.h /usr/include/stddef.h
SQ_File.o: /usr/include/endian.h /usr/include/bits/endian.h
SQ_File.o: /usr/include/bits/byteswap.h /usr/include/sys/select.h
SQ_File.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
SQ_File.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
SQ_File.o: /usr/include/bits/pthreadtypes.h /usr/include/sys/uio.h
SQ_File.o: /usr/include/bits/uio.h /usr/include/fcntl.h
SQ_File.o: /usr/include/bits/fcntl.h /usr/include/stdio.h
SQ_File.o: /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h
SQ_File.o: /usr/include/stdarg.h /usr/include/bits/stdio_lim.h
SQ_File.o: /usr/include/bits/sys_errlist.h /usr/include/unistd.h
SQ_File.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
SQ_File.o: /usr/include/getopt.h ../include/error.h ../include/seqio.h
SQ_File.o: ../include/mumps.h
SQ_Device.o: /usr/include/errno.h /usr/include/features.h
SQ_Device.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
SQ_Device.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
SQ_Device.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
SQ_Device.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
SQ_Device.o: /usr/include/asm-generic/errno.h
SQ_Device.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/types.h
SQ_Device.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
SQ_Device.o: /usr/include/time.h /usr/include/stddef.h /usr/include/endian.h
SQ_Device.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
SQ_Device.o: /usr/include/sys/select.h /usr/include/bits/select.h
SQ_Device.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
SQ_Device.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
SQ_Device.o: /usr/include/sys/uio.h /usr/include/bits/uio.h
SQ_Device.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
SQ_Device.o: /usr/include/signal.h /usr/include/bits/signum.h
SQ_Device.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
SQ_Device.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
SQ_Device.o: /usr/include/bits/sigthread.h /usr/include/termios.h
SQ_Device.o: /usr/include/bits/termios.h /usr/include/sys/ttydefaults.h
SQ_Device.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
SQ_Device.o: /usr/include/bits/confname.h /usr/include/getopt.h
SQ_Device.o: ../include/error.h ../include/seqio.h ../include/mumps.h
SQ_Pipe.o: /usr/include/errno.h /usr/include/features.h
SQ_Pipe.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
SQ_Pipe.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
SQ_Pipe.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
SQ_Pipe.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
SQ_Pipe.o: /usr/include/asm-generic/errno.h
SQ_Pipe.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/stat.h
SQ_Pipe.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
SQ_Pipe.o: /usr/include/time.h /usr/include/bits/stat.h
SQ_Pipe.o: /usr/include/sys/types.h /usr/include/stddef.h
SQ_Pipe.o: /usr/include/endian.h /usr/include/bits/endian.h
SQ_Pipe.o: /usr/include/bits/byteswap.h /usr/include/sys/select.h
SQ_Pipe.o: /usr/include/bits/select.h /usr/include/bits/sigset.h
SQ_Pipe.o: /usr/include/bits/time.h /usr/include/sys/sysmacros.h
SQ_Pipe.o: /usr/include/bits/pthreadtypes.h /usr/include/sys/uio.h
SQ_Pipe.o: /usr/include/bits/uio.h /usr/include/fcntl.h
SQ_Pipe.o: /usr/include/bits/fcntl.h /usr/include/signal.h
SQ_Pipe.o: /usr/include/bits/signum.h /usr/include/bits/siginfo.h
SQ_Pipe.o: /usr/include/bits/sigaction.h /usr/include/bits/sigcontext.h
SQ_Pipe.o: /usr/include/bits/sigstack.h /usr/include/bits/sigthread.h
SQ_Pipe.o: /usr/include/string.h /usr/include/xlocale.h /usr/include/unistd.h
SQ_Pipe.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
SQ_Pipe.o: /usr/include/getopt.h ../include/error.h ../include/seqio.h
SQ_Pipe.o: ../include/mumps.h
SQ_Socket.o: /usr/include/errno.h /usr/include/features.h
SQ_Socket.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
SQ_Socket.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
SQ_Socket.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
SQ_Socket.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
SQ_Socket.o: /usr/include/asm-generic/errno.h
SQ_Socket.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/time.h
SQ_Socket.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
SQ_Socket.o: /usr/include/time.h /usr/include/bits/time.h
SQ_Socket.o: /usr/include/sys/select.h /usr/include/bits/select.h
SQ_Socket.o: /usr/include/bits/sigset.h /usr/include/sys/types.h
SQ_Socket.o: /usr/include/stddef.h /usr/include/endian.h
SQ_Socket.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
SQ_Socket.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
SQ_Socket.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
SQ_Socket.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
SQ_Socket.o: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
SQ_Socket.o: /usr/include/asm-generic/socket.h /usr/include/asm/sockios.h
SQ_Socket.o: /usr/include/asm-generic/sockios.h /usr/include/netinet/in.h
SQ_Socket.o: /usr/include/stdint.h /usr/include/bits/wchar.h
SQ_Socket.o: /usr/include/bits/in.h /usr/include/arpa/inet.h
SQ_Socket.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
SQ_Socket.o: /usr/include/signal.h /usr/include/bits/signum.h
SQ_Socket.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
SQ_Socket.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
SQ_Socket.o: /usr/include/bits/sigthread.h /usr/include/string.h
SQ_Socket.o: /usr/include/xlocale.h /usr/include/unistd.h
SQ_Socket.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
SQ_Socket.o: /usr/include/getopt.h ../include/error.h ../include/seqio.h
SQ_Socket.o: ../include/mumps.h
SQ_Tcpip.o: /usr/include/errno.h /usr/include/features.h
SQ_Tcpip.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
SQ_Tcpip.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
SQ_Tcpip.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
SQ_Tcpip.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
SQ_Tcpip.o: /usr/include/asm-generic/errno.h
SQ_Tcpip.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/types.h
SQ_Tcpip.o: /usr/include/bits/types.h /usr/include/bits/typesizes.h
SQ_Tcpip.o: /usr/include/time.h /usr/include/stddef.h /usr/include/endian.h
SQ_Tcpip.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
SQ_Tcpip.o: /usr/include/sys/select.h /usr/include/bits/select.h
SQ_Tcpip.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
SQ_Tcpip.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
SQ_Tcpip.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/string.h
SQ_Tcpip.o: /usr/include/xlocale.h /usr/include/unistd.h
SQ_Tcpip.o: /usr/include/bits/posix_opt.h /usr/include/bits/confname.h
SQ_Tcpip.o: /usr/include/getopt.h ../include/error.h ../include/seqio.h
SQ_Tcpip.o: ../include/mumps.h
SQ_Seqio.o: /usr/include/errno.h /usr/include/features.h
SQ_Seqio.o: /usr/include/bits/predefs.h /usr/include/sys/cdefs.h
SQ_Seqio.o: /usr/include/bits/wordsize.h /usr/include/gnu/stubs.h
SQ_Seqio.o: /usr/include/gnu/stubs-32.h /usr/include/bits/errno.h
SQ_Seqio.o: /usr/include/linux/errno.h /usr/include/asm/errno.h
SQ_Seqio.o: /usr/include/asm-generic/errno.h
SQ_Seqio.o: /usr/include/asm-generic/errno-base.h /usr/include/sys/file.h
SQ_Seqio.o: /usr/include/fcntl.h /usr/include/bits/fcntl.h
SQ_Seqio.o: /usr/include/sys/types.h /usr/include/bits/types.h
SQ_Seqio.o: /usr/include/bits/typesizes.h /usr/include/time.h
SQ_Seqio.o: /usr/include/stddef.h /usr/include/endian.h
SQ_Seqio.o: /usr/include/bits/endian.h /usr/include/bits/byteswap.h
SQ_Seqio.o: /usr/include/sys/select.h /usr/include/bits/select.h
SQ_Seqio.o: /usr/include/bits/sigset.h /usr/include/bits/time.h
SQ_Seqio.o: /usr/include/sys/sysmacros.h /usr/include/bits/pthreadtypes.h
SQ_Seqio.o: /usr/include/sys/stat.h /usr/include/bits/stat.h
SQ_Seqio.o: /usr/include/sys/socket.h /usr/include/sys/uio.h
SQ_Seqio.o: /usr/include/bits/uio.h /usr/include/bits/socket.h
SQ_Seqio.o: /usr/include/bits/sockaddr.h /usr/include/asm/socket.h
SQ_Seqio.o: /usr/include/asm-generic/socket.h /usr/include/asm/sockios.h
SQ_Seqio.o: /usr/include/asm-generic/sockios.h /usr/include/netinet/in.h
SQ_Seqio.o: /usr/include/stdint.h /usr/include/bits/wchar.h
SQ_Seqio.o: /usr/include/bits/in.h /usr/include/arpa/inet.h
SQ_Seqio.o: /usr/include/ctype.h /usr/include/xlocale.h /usr/include/netdb.h
SQ_Seqio.o: /usr/include/rpc/netdb.h /usr/include/bits/netdb.h
SQ_Seqio.o: /usr/include/signal.h /usr/include/bits/signum.h
SQ_Seqio.o: /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h
SQ_Seqio.o: /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h
SQ_Seqio.o: /usr/include/bits/sigthread.h /usr/include/stdio.h
SQ_Seqio.o: /usr/include/libio.h /usr/include/_G_config.h
SQ_Seqio.o: /usr/include/wchar.h /usr/include/stdarg.h
SQ_Seqio.o: /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h
SQ_Seqio.o: /usr/include/stdlib.h /usr/include/alloca.h /usr/include/string.h
SQ_Seqio.o: /usr/include/strings.h /usr/include/termios.h
SQ_Seqio.o: /usr/include/bits/termios.h /usr/include/sys/ttydefaults.h
SQ_Seqio.o: /usr/include/unistd.h /usr/include/bits/posix_opt.h
SQ_Seqio.o: /usr/include/bits/confname.h /usr/include/getopt.h
SQ_Seqio.o: ../include/error.h ../include/mumps.h ../include/proto.h
SQ_Seqio.o: ../include/seqio.h
