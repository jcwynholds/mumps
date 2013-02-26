SHELL=/bin/sh

TOP_SRCDIR= ..
SRCDIR    = .
INCLUDES  = -I${TOP_SRCDIR}/include
MAKEDEPEND= mkdep
RM	  = rm -f
CFLAGS	  = ${INCLUDES} -Wall ${EXTRA}
CPPFLAGS  = ${INCLUDES} ${EXTRA} -std=c++0x -D__GXX_EXPERIMENTAL_CXX0X__

ifeq ($(OSTYPE),darwin)

CFLAGS  = ${INCLUDES} -Wall ${EXTRA} -arch i386

endif

MODULE    = database
PROG	  = mumps

SRCS = 	db_buffer.c \
	db_daemon.c \
	db_get.c \
	db_ic.c \
	db_kill.c \
	db_locate.c \
	db_main.c \
	db_rekey.c \
	db_set.c \
	db_uci.c \
	db_util.c \
	db_view.c \
    db_btree.cpp

OBJS = 	db_buffer.o \
	db_daemon.o \
	db_btree.o \
	db_get.o \
	db_ic.o \
	db_kill.o \
	db_locate.o \
	db_main.o \
	db_rekey.o \
	db_set.o \
	db_uci.o \
	db_util.o \
	db_view.o

all:	${OBJS}

depend:
	${MAKEDEPEND} ${INCLUDES} ${SRCS}

clean:
	${RM} ${OBJS} Makefile.bak .depend


# DO NOT DELETE
db_btree.o: ../include/btree-extern.h

db_buffer.o: ../include/mumps.h ../include/database.h ../include/proto.h
db_buffer.o: ../include/error.h

db_daemon.o: /usr/include/bits/sem.h ../include/mumps.h ../include/database.h
db_daemon.o: ../include/proto.h ../include/error.h

db_get.o: /usr/include/sys/sem.h /usr/include/bits/sem.h ../include/mumps.h
db_get.o: ../include/database.h ../include/proto.h ../include/error.h

db_ic.o: ../include/mumps.h
db_ic.o: ../include/database.h ../include/proto.h ../include/error.h

db_kill.o: ../include/mumps.h
db_kill.o: ../include/database.h ../include/proto.h ../include/error.h

db_locate.o: ../include/mumps.h ../include/database.h ../include/proto.h
db_locate.o: ../include/error.h

db_main.o: ../include/mumps.h
db_main.o: ../include/database.h ../include/proto.h ../include/error.h

db_rekey.o: ../include/mumps.h
db_rekey.o: ../include/database.h ../include/proto.h ../include/error.h

db_set.o: ../include/mumps.h
db_set.o: ../include/database.h ../include/proto.h ../include/error.h

db_uci.o: ../include/mumps.h
db_uci.o: ../include/database.h ../include/proto.h ../include/error.h

db_util.o: ../include/mumps.h ../include/database.h
db_util.o: ../include/proto.h ../include/error.h

db_view.o: ../include/mumps.h
db_view.o: ../include/database.h ../include/proto.h ../include/error.h
