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

SQ_Util.o: ../include/mumps.h ../include/error.h
SQ_Util.o: ../include/proto.h ../include/seqio.h
SQ_Signal.o: ../include/mumps.h
SQ_File.o: ../include/error.h ../include/seqio.h
SQ_File.o: ../include/mumps.h
SQ_Device.o: ../include/error.h ../include/seqio.h ../include/mumps.h
SQ_Pipe.o: ../include/error.h ../include/seqio.h
SQ_Pipe.o: ../include/mumps.h
SQ_Socket.o: ../include/error.h ../include/seqio.h
SQ_Socket.o: ../include/mumps.h
SQ_Tcpip.o: ../include/error.h ../include/seqio.h
SQ_Tcpip.o: ../include/mumps.h
SQ_Seqio.o: ../include/error.h ../include/mumps.h ../include/proto.h
SQ_Seqio.o: ../include/seqio.h
