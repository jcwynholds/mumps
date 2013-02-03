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

util_key.o: ../include/mumps.h
util_key.o: ../include/proto.h ../include/error.h ../include/compile.h
util_lock.o: ../include/mumps.h
util_lock.o: ../include/proto.h ../include/error.h ../include/compile.h
util_memory.o: ../include/mumps.h ../include/proto.h
util_memory.o: ../include/error.h ../include/compile.h ../include/symbol.h
util_routine.o: ../include/mumps.h ../include/compile.h ../include/proto.h
util_share.o: ../include/mumps.h ../include/error.h ../include/proto.h
util_strerror.o: ../include/mumps.h
util_strerror.o: ../include/proto.h ../include/error.h
