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


init_create.o: ../include/mumps.h ../include/database.h
init_run.o: ../include/mumps.h ../include/proto.h ../include/init.h
init_run.o: ../include/error.h ../include/compile.h ../include/opcodes.h
init_run.o: ../include/database.h
init_start.o: ../include/mumps.h ../include/proto.h ../include/database.h
