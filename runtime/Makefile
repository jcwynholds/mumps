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

runtime_attn.o: ../include/mumps.h
runtime_attn.o: ../include/proto.h ../include/error.h ../include/opcodes.h
runtime_attn.o: ../include/compile.h ../include/seqio.h
runtime_buildmvar.o: ../include/mumps.h
runtime_buildmvar.o: ../include/proto.h ../include/error.h
runtime_buildmvar.o: ../include/opcodes.h ../include/compile.h
runtime_debug.o: ../include/mumps.h
runtime_debug.o: ../include/proto.h ../include/error.h ../include/opcodes.h
runtime_debug.o: ../include/compile.h
runtime_func.o: ../include/mumps.h ../include/proto.h ../include/error.h
runtime_func.o: ../include/database.h
runtime_math.o:  ../include/opcodes.h ../include/mumps.h
runtime_math.o: ../include/proto.h ../include/error.h
runtime_pattern.o: ../include/mumps.h ../include/error.h ../include/init.h
runtime_pattern.o: ../include/proto.h ../include/compile.h
runtime_run.o: ../include/mumps.h
runtime_run.o: ../include/proto.h ../include/error.h ../include/opcodes.h
runtime_run.o: ../include/compile.h ../include/symbol.h ../include/database.h
runtime_ssvn.o: ../include/mumps.h ../include/proto.h ../include/error.h
runtime_util.o: ../include/mumps.h
runtime_util.o: ../include/proto.h ../include/error.h
runtime_vars.o: ../include/mumps.h
runtime_vars.o: ../include/proto.h ../include/error.h
