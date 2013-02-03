// File: mumps/xcall/xcall.c
//
// module xcall - Supplied XCALLs
//

/*      Copyright (c) 1999 - 2012
 *      Raymond Douglas Newman.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the name of Raymond Douglas Newman nor the names of the
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDER AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
 * THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


//
//
//  SYSTEM INCLUDE FILES
//
//

#include <stdio.h>                              // always include
#include <stdlib.h>                             // these two
#include <sys/types.h>                          // for u_char def
#include <sys/stat.h>				// $&%FILE
#include <string.h>
#include <strings.h>
#include <netdb.h>				// $&%HOST
#include <netinet/in.h>				// $&%HOST
#include <arpa/inet.h>				// $&%HOST
#include <sys/socket.h>				// $&%HOST
#include <signal.h>				// $&%SIGNAL
#include <ctype.h>
#include <errno.h>                              // error stuf
#include <syslog.h>				// for syslog()
#include <termios.h>				// terminal settings
#include <dirent.h>
#include <sys/ipc.h>				// for semctl
#include <sys/sem.h>				// for semctl
#include <sys/wait.h>                           // $&%WAIT


#include "mumps.h"                              // standard includes
#include "error.h"                              // errors
#include "proto.h"                              // standard prototypes

#include <unistd.h>				// crypt et al

#define TRIM_PARITY  0x1 /* 'P' */
#define DISCARD_SPACES  0x2 /* 'D' */
#define DISCARD_CONTROLS 0x4 /* 'C' */
#define DISCARD_LEADING  0x8 /* 'B' */
#define COMPRESS_SPACES  0x10 /* 'R' */
#define CONVERT_TO_UPPER 0x20 /* 'U' */
#define CONVERT_TO_LOWER 0x40 /* 'L' */
#define DISCARD_TRAILING 0x80 /* 'T' */
#define PRESERVE_QUOTED  0x100 /* 'Q' */

//***********************************************************************

static unsigned long crcTable[256];		// used by Buffcrc

void crcgen(void)				// build the crcTable
{ static int blnitDone = FALSE;
  unsigned long crc, poly;
  int i, j;

  if (blnitDone == TRUE)
  { return;					// only do it once
  }

  blnitDone = TRUE;
  poly = 0xEDB88320L;
  for (i=0; i<256; i++)
  { crc = i;
    for (j=8; j>0; j--)
    { if (crc & 1)
      { crc = (crc>>1) ^ poly;
      }
      else
      { crc >>= 1;
      }
    }
    crcTable[i] = crc;
  }
}
 
//***********************************************************************

//
//  CALLING RULES
//  -------------
//  1. All XCALL functions are of type short.
//  2. The first argument is of type *char and is the destination
//     for the value returned by the function (max size is 32767).
//  3. The subsequent two arguments are read only *cstring and are
//     the passed in values.
//  4. The function returns a count of characters in the return string
//     or a negative error number.
//  5. The function name is Xcall_name where the call is $&name().
//
//  eg. short Xcall_name(char *ret_buffer, cstring *arg1, cstring *arg2)
//

//
//
//  FUNCTION DEFINITIONS
//
//

//***********************************************************************
// DEBUG() - Dump info on console
//
short Xcall_debug(char *ret_buffer, cstring *arg1, cstring *arg2)
{ if (strcmp((char *)arg1->buf, "RBD") == 0)		// Routine Buf Desc
    Dump_rbd();					// do it
  else if (strcmp((char *)arg1->buf, "LTD") == 0)
    Dump_lt();
  else if (strcmp((char *)arg1->buf, "SEMS") == 0)	// semaphores
  { int i,val,sempid;
    for (i=0; i<SEM_MAX; i++)
    { val = semctl(systab->sem_id, i, GETVAL, 0);
      sempid = semctl(systab->sem_id, i, GETPID, 0);
      fprintf( stderr,"%d) %s",i,( i==SEM_SYS ? "SEM_SYS" :
                                 ( i==SEM_ROU ? "SEM_ROU" :
                                 ( i==SEM_LOCK ? "SEM_LOCK" :
                                 ( i==SEM_GLOBAL ? "SEM_GLOBAL" :
                                 ( i==SEM_WD ? "SEM_WD" : "?"))))) );
      fprintf(stderr,"\t= %d \t(last pid %d)\r\n",val,sempid);
    }
    fprintf(stderr,"(maxjobs = %d)\r\n",systab->maxjob);
  }
  else return -(ERRMLAST+ERRZ18);		// no such

  ret_buffer[0] = '\0';
  return 0;
}

//***********************************************************************
// %DIRECTORY() - Perform host directory list
//

#define	MAXFILENAME	256			// Maximum filename length
#define PATHSEP		47			// Integer value of path
						//  seperator

char * findNextChar ( char ch, char *filename );
int isPatternMatch ( char *pattern, char *filename );

static DIR * dirp;				// Directory pointer
static char pattern[MAXFILENAME];		// Pattern

//
// Get current directory by looking in the environment variable...
//
//

//
// This function finds the first occurence of the character "ch" in the
// array "filename".  If "ch" is found, a pointer to "ch" in "filename"
// is returned.  Otherwise, a NULL pointer is returned.
//

char *findNextChar (char ch, char *filename)
{ while ( *filename != '\0' )
  { if ( *filename == ch ) return filename;
    else filename += 1;
  }
  return ( filename );				// "ch" not found
}

//
// This function determines if the file "filename" matches the pattern
// "pattern".  A pattern can contain the following wildcards:
//
//	*	0 or more times
//	?	exactly once
//
// It returns 1 ( true ) if it does match, otherwise 0.
//

int isPatternMatch (char *pattern, char *filename)
{ int   flag;					// Flag

  flag = 0;
  while ( *pattern != '\0' )
  { if ( *pattern == '*' )			// Get next character to match
    { flag = 1;
      pattern += 1;
    }
    else if ( *pattern == '?' )			// Wildcard
    { if ( *filename == '\0' ) return 0;
      else
      { filename += 1;
        pattern += 1;
      }
    }
    else if ( flag == 1 )			// Find first occurence
    { filename = findNextChar ( *pattern, filename );
      if ( *filename == '\0' ) return 0;
      else
      {
        filename += 1;
        pattern += 1;
        flag = 0;
      }
    }
    else					// Match character
    { if ( *filename == '\0' ) return 0;
      else if ( *filename != *pattern ) return 0;
      else
      {
        filename += 1;
        pattern += 1;
      }
    }
  }
  return ( 1 );					// Pattern match
}

short Xcall_directory(char *ret_buffer, cstring *file, cstring *dummy)
{ struct dirent	*dent;				// Directory entry
  char		path[MAXFILENAME];		// Directory
  int		ret;				// Return value
  int		len;				// Filename length
  char		*patptr;			// Pointer to pattern
  cstring	env;				// Current directory

// If file is empty, then return the next matching directory entry or NULL

  if ( ( file == NULL ) || ( ret_buffer == NULL ) )
  { return -(ERRM11);
  }

  if ( file->buf[0] == '\0' )
  { while ( 1 )
    { dent = readdir ( dirp );
      if ( dent == NULL )			// No more matching directory
      {						//  entries
        ret_buffer = NULL;
	return ( 0 );
      }
      ret = isPatternMatch ( pattern, dent->d_name );
      if ( ret == 1 )				// Found next matching
      {						//  directory entry
	(void) sprintf ( ret_buffer, "%s", dent->d_name );
	return ( strlen ( ret_buffer ) );
      }
    }
  }

// Otherwise, open the directory and return the first matching directory
// entry or NULL

  else
  { (void) sprintf ( path, "%s", file->buf );	// Make a local copy of the
    len = strlen ( path );			//  filename
    patptr = path;				// Move pointer to the
    patptr += len;				//  filenames NULL terminator

    // Moving back to front, find the first occurence of PATHSEP in "path",
    // and replace it with a NULL terminator; and hence, giving us the
    // directory to open and the pattern of desired filenames.

    while ( len >= 0 )
    { if ( *patptr == (char)PATHSEP )
      { *patptr = '\0';
	
	// If the first occurence of PATHSEP is the first character in "path",
	// then we want to search the root directory.
	
	if ( len == 0 ) (void) sprintf ( path, "%c", (char)PATHSEP );
	else (void) sprintf ( path, "%s", path );
	patptr += 1;
	len = -2;
      }
      else
      { if ( len != 0 ) patptr -= 1;
	len--;
      }
    }

    (void) sprintf ( pattern, "%s", patptr );	// Record pattern for
						//  subsequent calls

    // If path is empty, then assume current directory

    if (len == -1)
    { (void) sprintf ( (char *)env.buf, "%s", "PWD" );
      env.len = strlen ( (char *)env.buf ); 
      ret = Xcall_getenv ( path, &env, NULL);
      if ( ret < 0 ) return ( ret );
      (void) sprintf ( path, "%s%c", path, (char)PATHSEP );
    }

    dirp = opendir ( path );			// Open the directory
    if ( dirp == NULL )				// Failed to open directory
    { ret_buffer = NULL;
      return ( 0 );
    }
    while ( 1 )					// Get first matching entry
    { dent = readdir ( dirp );
      if ( dent == NULL )			// No more matching directory
      {						//  entries
	ret_buffer = NULL;
	return ( 0 );
      }
      ret = isPatternMatch ( pattern, dent->d_name );
      if ( ret == 1 )				// Found next matching
      {						//  directory entry
	(void) sprintf ( ret_buffer, "%s", dent->d_name );
	return ( strlen ( ret_buffer ) );
      }
    }
  }
}

//***********************************************************************
// %ERRMSG - Return error text
//

short Xcall_errmsg(char *ret_buffer, cstring *err, cstring *dummy)
{ int errnum = 0;				// init error number
  if (err->len < 1) return -(ERRM11);		// they gota pass something
  if (err->buf[0] == 'U')			// user error ?
  { bcopy("User error: ", ret_buffer, 12);
    bcopy(err->buf, &ret_buffer[12], err->len);
    return (err->len + 12);
  }
  if (err->len < 2) return -(ERRM11);		// they gota pass something
  if (err->buf[0] == 'Z')
    errnum = errnum + ERRMLAST;			// point at Z errors
  else if (err->buf[0] != 'M')
    return -(ERRM99);				// that's junk
  errnum = errnum + atoi((char *)&err->buf[1]);		// add the number to it
  return UTIL_strerror(errnum, (u_char *)ret_buffer);	// do it
}

//***********************************************************************
// %OPCOM - Message control
//

short Xcall_opcom(char *ret_buffer, cstring *msg, cstring *device)
{ ret_buffer[0] = '\0';				// null terminate nothing
  if (device->len == 0)				// if no device specified
  { syslog(LOG_INFO, "%s", &msg->buf[0]);	// give it to the system
    return 0;					// all OK
  }
  return SQ_Force(device, msg);			// do it in seqio
}

//***********************************************************************
// %SIGNAL - Send signal to PID
//

short Xcall_signal(char *ret_buffer, cstring *pid, cstring *sig)
{ int i;					// PID
  int j;					// Signal

  i = cstringtoi(pid);				// get pid
  if (i < 1)					// must be positive
  { return -ERRM99;				// error
  }
  j = cstringtoi(sig);				// get signal#
  if ((j > 31) || (j < 0))			// if out of range
  { return -ERRM99;				// error
  }
  i = kill(i, j);				// doit
  if ((!i) || ((!j) && (errno != ESRCH)))	// if ok
  { ret_buffer[0] = '1';			// say ok
  }
  else
  { ret_buffer[0] = '0';			// say failed
  }
  ret_buffer[1] = '\0';				// null terminated
  return 1;					// and return
}

//***********************************************************************
// %SPAWN - Create subprocess
//

short Xcall_spawn(char *ret_buffer, cstring *cmd, cstring *dummy)
{
  int			ret, tmp, chk;
  struct termios	t;

  // Store current settings
  chk = tcgetattr ( 0, &t );

  // ret_buffer unused
  ret_buffer[0] = '\0';

  // Do command
  ret = system ( (char *)cmd->buf );

  if (chk != -1)
  { // Restore original settings
    tmp = tcsetattr ( 0, TCSANOW, &t );
    if ( tmp == -1 ) return ( - ( ERRMLAST + ERRZLAST + errno ) );
  }

  // Return 0 or error
  if ( ret == -1 ) return ( - ( ERRMLAST + ERRZLAST + errno ) );
  else return ( 0 );
}

//***********************************************************************
// %VERSION - Supply version information - arg1 must be "NAME"
// returns "MUMPS V1.0 for FreeBSD Intel"

short Xcall_version(char *ret_buffer, cstring *name, cstring *dummy)
{ return mumps_version((u_char *)ret_buffer);             // do it elsewhere
}

//***********************************************************************
// %ZWRITE - Dump local symbol table (arg1 must be "0")
// returns null string

short Xcall_zwrite(char *ret_buffer, cstring *tmp, cstring *dummy)
{ mvar var;					// JIC
  short s;					// for functions
  ret_buffer[0] = '\0';				// for returns
  if (tmp->len < 2)				// 'normal' call?
    return ST_Dump();				// do it in symbol
  s = UTIL_MvarFromCStr(tmp, &var);		// make an mvar from it
  if (s < 0) return s;				// complain on error
  if ((var.uci == UCI_IS_LOCALVAR) ||		// must be global
      (var.name.var_cu[0] == '$'))		// and not ssvn
    return -(ERRMLAST+ERRZ12);			// junk
  return ST_DumpV(&var);			// doit
}

//***********************************************************************
// Edit - Perform string editing functions (two arguments)
//

short Xcall_e(char *ret_buffer, cstring *istr, cstring *STR_mask)
{ int i;
  int in_quotes = FALSE;
  char *ostr = &ret_buffer[0];
  char c;
  int mask = 445;                               // bit mask for edit
  if (STR_mask->len != 0)                       // if we have a mask
  { if ( STR_mask->buf[0] < 'A' )               // If it's a numeric arg
    { mask = 0;                                 // clear mask
      for (i = 0; i != (int)STR_mask->len; i++) // For all characters
        mask = ( mask * 10 ) + ( (int)STR_mask->buf[i] - 48 ); // Cvt to int
    }
    else                                        // It's the string type
    { mask = 0;					// clear the mask
      for (i = 0; i != (int)STR_mask->len; i++) // For all characters
      { switch ( toupper(STR_mask->buf[i]) )
        { case 'P':
             mask |= TRIM_PARITY;
             break;
          case 'D':
             mask |= DISCARD_SPACES;
             break;
          case 'C':
             mask |= DISCARD_CONTROLS;
             break;
          case 'B':
             mask |= DISCARD_LEADING;
             break;
          case 'R':
             mask |= COMPRESS_SPACES;
             break;
          case 'U':
             mask |= CONVERT_TO_UPPER;
             break;
          case 'L':
             mask |= CONVERT_TO_LOWER;
             break;
          case 'T':
             mask |= DISCARD_TRAILING;
             break;
          case 'Q':
             mask |= PRESERVE_QUOTED;
             break;
        }     
      }
    }
  }                                             // end mask decode
  for (i = 0; i != (int)istr->len; i++)
  { c = istr->buf[i];                           // get next char
    if (mask & TRIM_PARITY) c &= 0x7f;          // NO parity!
    if ((c == '"') && (mask & PRESERVE_QUOTED))
    { in_quotes = !in_quotes;                   // toggle flag if quote
    }
    if (in_quotes)
    { *ostr++ = c;                              // store output char
      mask &= ~DISCARD_LEADING;                 // clear leading flag
    }
    else
    { if ( islower(c) && (mask & CONVERT_TO_UPPER))
      { c &= ~0x20;                             // lower to upper
      }
      if ( isupper(c) && (mask & CONVERT_TO_LOWER))
      { c |= 0x20;                              // upper to lower
      }
      if (c > ' ')
      { *ostr++ = c;                            // store output char
        mask &= ~DISCARD_LEADING;               // clear leading flag
      }
      else
      { while (TRUE)
        { if (((mask & DISCARD_LEADING)  ||
               (mask & DISCARD_SPACES )) &&
               ((c == ' '   )      ||
               (c == '\011'))) break;
          if ((mask & DISCARD_CONTROLS) &&
              (c < ' ')  &&
              (c != '\011')) break;
          if (mask & COMPRESS_SPACES)
          { if (c == '\011') c = ' ';
            if ((ostr != &ret_buffer[0]) && (ostr[-1] == ' ')) break;
          }
          *ostr++ = c;                          // store output char
          mask &= ~DISCARD_LEADING;             // clear leading flag
          break;                                // remember the WHILE()
        }
      }
    }
  }
  //
  //   now handle Trailing spaces and tabs...
  //
  if (mask & DISCARD_TRAILING )
  { while ( ostr != &ret_buffer[0] )
    { if ( ((c = ostr[-1]) != ' ') && (c != '\011') ) break;
      ostr--;
    }
  }
  //
  //  return the result string (if any!)
  //
  i = (short)(ostr - &ret_buffer[0]);           // set length
  ret_buffer[i] = '\0';				// ensure nulll terminated
  return i;                                     // return the length
}



//***********************************************************************
// Video - Generate an Escape sequence for (X,Y) positioning

short Xcall_v(char *ret_buffer, cstring *lin, cstring *col)
{ int i;
  int len = 0;                                  // length of it
  ret_buffer[len++] = 27;                       // Store the ESC
  ret_buffer[len++] = 91;                       // Store the '['
  for (i = 0; i != (int)lin->len; i++)          // for all char in lin
    ret_buffer[len++] = lin->buf[i];            // copy one char
  ret_buffer[len++] = 59;                       // Then the ';'
  for (i = 0; i != (int)col->len; i++)          // for all char in col
    ret_buffer[len++] = col->buf[i];            // copy one char
  ret_buffer[len++] = 72;                       // Finally the 'H'
  ret_buffer[len] = '\0';                       // nul terminate
  return len;                                   // and return the length
}

//***********************************************************************
// Xsum - Checksum a string of characters (normal)
//

short Xcall_x(char *ret_buffer, cstring *str, cstring *flag)
{ unsigned long crc, ulldx;
  int c;

  if (flag->len == 0)				// check for the old type
  { int tmp;
    int xx = 0;                                 // for the result
    for (tmp = 0; tmp != (int)str->len; tmp++)
    { xx = xx + (int)str->buf[tmp];
    }
    tmp = sprintf( ret_buffer, "%d", xx);       // convert to ascii
    return tmp;                                 // and return length
  }						// end standard $&X()

  crcgen();					// ensure table built
  crc = 0xFFFFFFFF;
  for (ulldx = 0; ulldx<str->len; ulldx++)
  { c = *(str->buf + ulldx);
    crc = ((crc>>8) & 0x00FFFFFF) ^ crcTable[(crc^c) & 0xFF];
  }
  crc = crc^0xFFFFFFFF;
  bcopy(&crc, ret_buffer, 4);
  return sizeof(unsigned long);
}

//***********************************************************************
// XRSM - Checksum a string of characters (RSM type)
//
//      Three-byte checksum. chk(3).
//      This code uses the global variable "crc" to accumulate a 16 bit
//      CCITT Cyclic Redundancy Check on the string pointed to by "str"
//      of length "len".  Note the magic number 0x1081 (or 010201 octal)
//      which is required for the algorithm.
//

short Xcall_xrsm(char *ret_buffer, cstring *str, cstring *dummy)
{ int tmp;
  unsigned char *chp = &str->buf[0];
  unsigned short c, q;                          // (or unsigned char)
  unsigned short crc = 0;                       // CRC result number
  for (tmp = (int)str->len; tmp > 0; tmp--)
  { c = *chp++ & 0xFF;
    q = (crc ^ c) & 0x0F;                       // low nibble
    crc = (crc >> 4) ^ (q * 0x1081);
    q = (crc ^ (c >> 4)) & 0x0F;                // high nibble
    crc = (crc >> 4) ^ (q * 0x1081);
  }

  // store into ASCII string, high byte first
  ret_buffer[0] = ((crc & 0xF000) >> 12) + 0x20;
  ret_buffer[1] = ((crc & 0x0FC0) >> 6) + 0x20;
  ret_buffer[2] = (crc & 0x003F) + 0x20;
  return 3;                                     // return length (always 3)
}

//***********************************************************************
// GETENV - Returns the value of an environment variable

short Xcall_getenv(char *ret_buffer, cstring *env, cstring *dummy)
{ char *p;					// ptr for getenv
  p = getenv((char *)env->buf);				// get the variable
  ret_buffer[0] = '\0';				// null terminate return
  if (p == NULL) return 0;			// nothing there
  return mcopy((u_char *)p, (u_char *)ret_buffer, strlen(p));	// return it
}

//***********************************************************************
// SETENV - Sets an environment variable ( where it overwrites an
//	    existing environment variable ), or unsets an existing
//	    environment variable if "value" == NULL

short Xcall_setenv(char *ret_buffer, cstring *env, cstring *value)
{
  int	ret;					// Return value

  ret_buffer[0] = '\0';				// Always return NULL
  if ( value == NULL )				// Unset environment variable
  {
    unsetenv ( (char *)env->buf );
    return 0;
  }
  else						// Set environment variable
  {
    ret = setenv ( (char *)env->buf, (char *)value->buf, 1 );
    if ( ret == -1 )				// Error has occured
      return ( - ( ERRMLAST + ERRZLAST + errno ) );
    else return ( 0 );
  }
}

//***********************************************************************
// FORK - Create a copy of this process
// Returns: Fail: 0
//	    Parent: Child MUMPS job number
//	    Child:  Minus Parent MUMPS job number
//

short Xcall_fork(char *ret_buffer, cstring *dum1, cstring *dum2)
{ short s;					// for returns
  s = ForkIt(1);				// do it, copy file table
  return itocstring((u_char *)ret_buffer, s);		// return result
}

//***********************************************************************
// FILE - Obtains information about a file.
//
// Arguments:
//   Filename		File to obtain information about
//   Attribute		File attribute.  The following information can
//			be obtained for a file:
//
//			  SIZE		File size, in bytes
//			  EXISTS	1:true ; 0:false
//
// Returns:
//    Fail		<0
//    Success		Number of bytes in ret_buffer ( which contains
//			the newly acquired information )
//

short Xcall_file ( char *ret_buffer, cstring *file, cstring *attr )
{
  struct stat	sb;				// File attributes
  int		ret;				// Return value
  int		exists;				// 1:true ; 0:false

// Get all the file's attributes

  ret = stat ( (char *)file->buf, &sb );

// Check if stat() failed.  Ignore ( at this stage ), if the attribute is
// EXISTS, and stat() fails with either:
//
//	ENOENT		The named file does not exist
//	ENOTDIR		A component of the path prefix is not a directory

  if ( ret == -1 )				// stat() failed
  {
    if (
       ( strcasecmp ( "exists", (char *)attr->buf ) == 0 ) &&
         (
         ( errno == ENOENT ) ||
         ( errno == ENOTDIR )
         )
       )
    {
      exists = 0;
    }
    else
    {
      ret_buffer[0] = '\0';
      return ( - ( ERRMLAST + ERRZLAST + errno ) );
    }
  }
  else exists = 1;


// Get desired attribute

  if ( strcasecmp ( "size", (char *)attr->buf ) == 0 )
  {
    ret = sprintf ( ret_buffer, "%d", (int)(sb.st_size) );
    return ( ret );				// Size of ret_buffer ( SIZE )
  }
						// File exists
  else if ( strcasecmp ( "exists", (char *)attr->buf ) == 0 )
  {
    ret = sprintf ( ret_buffer, "%d", exists );
    return ( ret );				// Size of ret_buffer ( EXISTS )
  }
  else						// Invalid attribute name
  {
    ret_buffer[0] = '\0';
    return ( - ( ERRM46 ) );
  }

// Unreachable

}

//***********************************************************************
// HOST - Resolves a host's IP address
//
// Arguments:
//   Name		Name of host to resolve.
//			"IP" return ip
//		    or  "NAME" return name of current host
//
// Returns:
//    Fail		<0
//    Success		Number of bytes in ret_buffer ( which contains
//			the resolved host's IP address )
//

short Xcall_host ( char *ret_buffer, cstring *name, cstring *arg2 )
{
  struct hostent *h;				// Host's attributes
  int		 i;
  short		 s;
  u_char	a[8];

  if (strcasecmp((char *)arg2->buf, "ip") == 0)
  {
  
// Acquire host's attributes
//  struct  hostent {
//		   char    *h_name;        // official name of host
//		   char    **h_aliases;    // alias list
//		   int     h_addrtype;     // host address type
//		   int     h_length;       // length of address
//		   char    **h_addr_list;  // list of addr from name server
//		    };
//  #define h_addr  h_addr_list[0]	   // address, for backward compat

    h = gethostbyname ( (char *)name->buf );
    if ( h == NULL )				// gethostname() failed
    {
      ret_buffer[0] = '\0';
      if ( h_errno == HOST_NOT_FOUND ) return ( - ( ERRMLAST+ERRZ71 ) );
      else return ( - ( ERRMLAST+ERRZ72 ) );
    }
    s = 0;					// clear char count
    for (i = 0; i < 4; i++)			// for each byte
    { s += uitocstring((u_char *)&ret_buffer[s], (u_char) (h->h_addr_list[0][i]));
      ret_buffer[s++] = '.';			// and a dot
    }
    s--;					// ignore last dot
    ret_buffer[s] = '\0';			// null terminate
    return s;

  }						// end of "IP"

  if (strcasecmp((char *)arg2->buf, "name") == 0)
  { if (name->len == 0)
    { i = gethostname(ret_buffer, 1023);	// get it
      if (i < 0) return -(ERRMLAST+ERRZLAST+errno); // die on error
      ret_buffer[1023] = '\0';			// JIC
      return strlen(ret_buffer);
    }
    s = 0;
    i = 0;
    a[0] = 0;
    while (TRUE)
    { if (i >= name->len) break;
      if (name->buf[i] == '.')
      { s++;
        a[s] = 0;
        i++;
      }
      else
      { a[s] = a[s] * 10 + name->buf[i++] - '0';
      }
    }
    h = gethostbyaddr (a, 4, AF_INET );
    if ( h == NULL )				// gethostname() failed
    {
      ret_buffer[0] = '\0';
      if ( h_errno == HOST_NOT_FOUND ) return ( - ( ERRMLAST+ERRZ71 ) );
      else return ( - ( ERRMLAST+ERRZ72 ) );
    }
    strcpy(ret_buffer, h->h_name);
    return strlen(ret_buffer);
  }
  ret_buffer[0] = '\0';
  return -(ERRMLAST+ERRZ18);			// error
}

//***********************************************************************
// WAIT() - Wait on a child
// 
// Author: Martin Kula <mkula@users.sourceforge.net>
//                
// Arguments:
// 1st:
//      none - wait's on a pid
//      PID  - wait on the PID
// 2st:
//      "BLOCK" - blocked waiting
//      none - non blocked waiting
// Returns:
//      <0     - failed
//      0      - none pid exit
//      num_bytes in ret_buffer which contains 
//                         "pid number#error_code#terminate signal number"
//
//
short Xcall_wait(char *ret_buffer, cstring *arg1, cstring *arg2)
{ 
  int pid;                      // PID number
  int status;                   // Exit status
  short s;                      // length of the returned string
  int blocked = WNOHANG;        // blocked flag
          
  ret_buffer[0] = '\0';
  if (arg2->len) {              // blocked waiting
    if (!strncmp((char *)arg2->buf, "BLOCK", 5))
      blocked = 0;
    else if (strncmp((char *) arg2->buf, "NOBLOCK", 7))
      return -ERRM99;
  }

  if (arg1->len) {              // call with an arguments (PID)
    pid = cstringtoi(arg1);	// get pid number
    if (pid < 1)
      return -ERRM99;
    pid = wait4(pid, &status, blocked, NULL);
  }
  else {                        // call without an arguments
    pid = wait3(&status, blocked, NULL);
    if (pid < 0 && blocked && errno == ECHILD)
      pid = 0;                  // no error if non blocked
  }
  if (pid < 0)
    return -(errno+ERRMLAST+ERRZLAST);
  if (!pid) return 0;       // none pid exit
  s = itocstring((u_char *)ret_buffer, pid);
  ret_buffer[s++] = '#';
  ret_buffer[s++] = '\0';
  if (WIFEXITED(status))
    s += itocstring((u_char *)&ret_buffer[s], WEXITSTATUS(status));
  ret_buffer[s++] = '#';
  ret_buffer[s++] = '\0';
  if (WIFSIGNALED(status)) {
    s += itocstring((u_char *)&ret_buffer[s], WTERMSIG(status));
  }


  return s;
}
