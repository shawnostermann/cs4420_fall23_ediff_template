/*************************************************************
 *
 * ediff - ediff - "Easy Diff"
 *   simple text comparison using only system calls
 *
 * PUT OTHER INFORMATION ABOUT YOU AND ETC...
 * this is the version to start with...
 *
 ************************************************************/

/* include all of the header files that the manual pages say we need */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <ctype.h>

// forward declarations for local routines 
// these are just suggestions, but organizing your programing using
// these functions will save you a LOT of time
static void Usage(const char error[]);
static void Process(void);
static int ReadChar(int df, unsigned pos);
static int SameLine(int fd1, int pos1, int fd2, int pos2);
static void PrintLine(int fd, unsigned pos);
static int NextLinePos(int fd, unsigned pos);

/* global variables */
static int debug = 0;
char *progname;

int fd1, fd2; /* file descriptors for the files to compare */
char *filename1 = NULL; /* file argument1 */
char *filename2 = NULL; /* file argument2 */


/*************************************************************
 **
 ** Main program, usage "ediff file1 file2"
 **
 *************************************************************/
int main(
    int argc,
    char *argv[])
{
    progname = argv[0];

    for (int i = 1; i < argc; ++i)
    { 
        printf("Argv[%d] = '%s'\n", i, argv[i]);
    }

    // argument error checking...
    
    if (debug)
        printf("Debug is set to %d\n", debug);

    // open the files specified and check for errors, etc...

    Process(); /* do the real work */

    exit(0); /* everything must have worked */

    // call the recommended subroutines so this will compile...
    // your code will be very different than these calls...
    Usage("wrong files");
    (void) ReadChar(5,15);
    (void) SameLine(1,2,3,4);
    (void) PrintLine(1,2);
    (void) NextLinePos(0,1);
}

/*************************************************************
 **
 ** Process: do the work
 **
 *************************************************************/
static void
Process()
{
    int line_number = 0;
    int diffs = 0;

    while (1)
    {
        ++line_number;

        // do all the work required...


        break;  // just as a headstart...
       
    }
    if (!diffs)
        printf("Files %s and %s are identical\n", filename1, filename2);
}

/*************************************************************
 **
 ** SameLine: are two lines the same??
 **
 *************************************************************/
static int
SameLine(
    int fd1,    int pos1,
    int fd2,    int pos2)
{

    if (debug)
        printf("Comparing lines at pos %d and %d\n", pos1, pos2);

    // compare the current lines to see if they are the same
    

    return (false); /* no match */
}

/*************************************************************
 **
 ** NextLinePos: what is the file offset of the next 
 **    character beyond the newline, starting at "pos"
 ** returns EOF if there are no characters after the current line
 **
 *************************************************************/
static int
NextLinePos(
    int fd,
    unsigned pos)
{

    if (debug > 1)
        printf("NextLinePos(%d, %u) called\n", fd, pos);

    // do the work...

    return (pos);
}

/*************************************************************
 **
 ** PrintLine: print the line starting at pos
 **
 *************************************************************/
static void
PrintLine(int fd, unsigned pos)
{

    if (debug)
        printf("Printing line from fd %d at position %u\n", fd, pos);

    // do the work
    
}


/*************************************************************
 **
 ** ReadChar: read and return the char at position pos
 **    from the given descriptor given
 ** returns constant EOF on end of file
 **
 *************************************************************/
static int
ReadChar(
    int fd,
    unsigned pos)
{
   // do a seek, read that character, check for EOF, then return
   // the character read (or EOF if appropriate)

   return('A');
}


/*************************************************************
 **
 ** Usage: bad argument, tell how to call the program
 **
 *************************************************************/
static void
Usage(
    const char error[])
{
    if (error) printf("%s\n", error);
    printf("usage: %s [-d] filename1 filename2\n", progname);
    exit(-1);
}
