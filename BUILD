
          Copyright (c) 1999 - 2012
          Raymond Douglas Newman.  All rights reserved.
   
     Redistribution and use in source and binary forms, with or without
     modification, are permitted provided that the following conditions
     are met:
   
     1. Redistributions of source code must retain the above copyright
        notice, this list of conditions and the following disclaimer.
     2. Redistributions in binary form must reproduce the above copyright
        notice, this list of conditions and the following disclaimer in the
        documentation and/or other materials provided with the distribution.
     3. Neither the name of Raymond Douglas Newman nor the names of the
        contributors may be used to endorse or promote products derived from
        this software without specific prior written permission.
   
     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER AND CONTRIBUTORS "AS IS"
     AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
     IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
     ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
     LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
     CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
     SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
     INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
     CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
     ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
     THE POSSIBILITY OF SUCH DAMAGE.

  This version runs on all FreeBSD Versions 3 through 9, many linux
  versions, OSX 10.4, 10.5, 10.6 and 10.7 in 32 bit mode (intel), Solaris
  and Cygwin on windows.

  To get the code using cvs, enter the following:

 cvs -z3 -d:pserver:anonymous@mumps.cvs.sf.net:/cvsroot/mumps checkout -P mumps 

  For Cygwin under windows:
    edit /usr/include/cygwin/shm.h
       add near end 
       #define SHM_R       (IPC_R)
       #define SHM_W       (IPC_W)
    edit /usr/include/cygwin/ipc.h
       move second last #endif 3 lines up

  To build MUMPS from source, in the top level directory:

	make clean
	make depend
	make all

    to build a debug version, use test instead of all.

  On FreeBSD and Solaris use gmake instead of make.

  NOTE: Don't compile on FreeBSD 9 as the result doesn't run.  It appears
        the FreeBSD team have introduced a bug into the malloc() code.

             Read the file README for usage instructions.
