SHELL=/bin/sh

TOP_SRCDIR= ..
SRCDIR    = .
INCLUDES  = -I${TOP_SRCDIR}/include -I/usr/include
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


dollar.o: ../include/mumps.h ../include/proto.h ../include/error.h
dollar.o: ../include/opcodes.h ../include/compile.h

eval.o: ../include/mumps.h ../include/proto.h ../include/error.h
eval.o: ../include/opcodes.h ../include/compile.h

localvar.o: ../include/mumps.h ../include/proto.h ../include/error.h
localvar.o: ../include/opcodes.h ../include/compile.h

parse.o: ../include/mumps.h ../include/proto.h ../include/error.h
parse.o: ../include/opcodes.h ../include/compile.h

routine.o: ../include/mumps.h ../include/proto.h ../include/error.h
routine.o: ../include/opcodes.h ../include/compile.h
