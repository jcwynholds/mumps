# Makefile for MUMPS for OSX, FreeBSD, linux and Solaris (uses gnumake)
# also builds and runs under Cygwin on windows
# Copyright (c) Raymond Douglas Newman, 1999 - 2012
#

SHELL=/bin/sh
TOP_SRCDIR= .
SRCDIR    = .
INCLUDES  = -I${TOP_SRCDIR}/include
PREFIX?=	/usr/local
CC	=	cc

CFLAGS    = ${INCLUDES} -L/usr/lib/ -lcrypt -Wall -lm

ifeq ($(findstring solaris,$(OSTYPE)),solaris)
CFLAGS    = ${INCLUDES} -L/usr/lib/ -lcrypt -lnsl -lsocket -Wall -lm
endif

ifeq ($(OSTYPE),darwin)
CFLAGS  = ${INCLUDES} -L/usr/lib/ -Wall -lm -framework CoreServices -framework DirectoryService -framework Security -mmacosx-version-min=10.5 -arch i386
endif

MAKEALL   = EXTRA='-O3 -fsigned-char'
MAKETEST   = EXTRA='-O0 -g -fsigned-char'

SUBDIRS=compile database init runtime seqio symbol util xcall

RM=rm -f

PROG      = mumps
PROGMAIN  = init/mumps.c

OBJS	= 	compile/dollar.o \
		compile/eval.o \
		compile/localvar.o \
		compile/parse.o \
		compile/routine.o \
 		database/db_buffer.o \
		database/db_daemon.o \
		database/db_get.o \
		database/db_ic.o \
		database/db_kill.o \
		database/db_locate.o \
		database/db_main.o \
		database/db_rekey.o \
		database/db_set.o \
		database/db_uci.o \
		database/db_util.o \
		database/db_view.o \
		init/init_create.o \
		init/init_run.o \
		init/init_start.o \
		runtime/runtime_attn.o \
		runtime/runtime_buildmvar.o \
		runtime/runtime_debug.o \
		runtime/runtime_func.o \
		runtime/runtime_math.o \
		runtime/runtime_pattern.o \
		runtime/runtime_run.o \
		runtime/runtime_ssvn.o \
		runtime/runtime_util.o \
		runtime/runtime_vars.o \
		seqio/SQ_Util.o \
		seqio/SQ_Signal.o \
		seqio/SQ_Device.o \
		seqio/SQ_File.o \
		seqio/SQ_Pipe.o \
		seqio/SQ_Seqio.o \
		seqio/SQ_Socket.o \
		seqio/SQ_Tcpip.o \
		symbol/symbol_new.o \
		symbol/symbol_util.o \
		util/util_key.o \
		util/util_lock.o \
		util/util_memory.o \
		util/util_routine.o \
		util/util_share.o \
		util/util_strerror.o \
		xcall/xcall.o

all:
	@for i in ${SUBDIRS}; do \
		echo Making all in $$i ; \
		(cd $$i; ${MAKE} ${MAKEALL} all) \
	done
	${CC} ${CFLAGS} -O -o ${PROG} ${PROGMAIN} ${OBJS}

test:
	@for i in ${SUBDIRS}; do \
		echo Making WITH DEBUG all in $$i ; \
		(cd $$i; ${MAKE} ${MAKETEST} all) \
	done
	${CC} ${CFLAGS} -O -o ${PROG} ${PROGMAIN} ${OBJS}

depend:
	@for i in ${SUBDIRS}; do \
		echo Depending in $$i ; \
		(cd $$i; ${MAKE} depend) \
	done

clean:
	@for i in ${SUBDIRS}; do \
		echo Cleaning in $$i ; \
		(cd $$i; ${MAKE} clean) \
	done
	@echo Cleaning in top level;
	${RM} ${PROG} ${TEST} mumps.core
