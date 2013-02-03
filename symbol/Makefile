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

symbol_new.o: ../include/mumps.h ../include/symbol.h
symbol_new.o: ../include/error.h ../include/init.h ../include/proto.h
symbol_util.o: ../include/mumps.h ../include/symbol.h ../include/error.h
symbol_util.o: ../include/init.h ../include/proto.h ../include/compile.h
