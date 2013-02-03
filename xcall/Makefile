SHELL=/bin/sh

TOP_SRCDIR= ..
SRCDIR    = .
INCLUDES  = -I${TOP_SRCDIR}/include
MAKEDEPEND= mkdep
RM	  = rm -f
CFLAGS	  = ${INCLUDES} -Wall ${EXTRA} -lcrypt

ifeq ($(OSTYPE),darwin)

CFLAGS  = ${INCLUDES} -Wall ${EXTRA} -arch i386 -Wno-deprecated-declarations

endif

MODULE    = xcall
PROG	  = mumps

SRCS = xcall.c

OBJS = xcall.o

all:	${OBJS}

depend:
	${MAKEDEPEND} ${INCLUDES} ${SRCS}

clean:
	${RM} ${OBJS} Makefile.bak .depend


# DO NOT DELETE

xcall.o: ../include/mumps.h ../include/error.h ../include/proto.h
