// http://www.edm2.com/index.php/DosCreateThread_(OS/2_1.x)
// requires -mt -ml -zu in watcom

#define INCL_DOSPROCESS

#include <os2.h>
#include <stdio.h>

#define   SEGSIZE       4000   /* Number of bytes requested in segment */
#define   ALLOCFLAGS    0      /* Segment allocation flags - no sharing */
#define   SLEEPSHORT    5L     /* Sleep interval - 5 milliseconds */
#define   SLEEPLONG     75L    /* Sleep interval - 75 milliseconds */
#define   RETURN_CODE   0      /* Return code for DosExit() */

VOID APIENTRY Thread2()
{
  USHORT     i;

  /* Loop with four iterations */
  for(i=1; i<5; i++)
  {
    printf("In Thread2, i is now %d\n", i);
    /* Sleep to relinquish time slice to main thread */
    DosSleep(SLEEPSHORT);          /* Sleep interval */
  }
  DosExit(EXIT_THREAD,             /* Action code - end a thread */
          RETURN_CODE);            /* Return code */
}


int main()
{
  TID        ThreadID;             /* Thread identification */
  SEL        ThreadStackSel;       /* Segment selector for thread stack */
  PBYTE      StackEnd;             /* Ptr. to end of thread stack */
  USHORT     rc;

  /** Allocate segment for thread stack; make pointer to **/
  /**  end of stack. **/
  /** We must allocate a segment in order to preserve **/
  /**  segment protection for the thread. **/

  rc = DosAllocSeg(SEGSIZE,             /* Number of bytes requested */
                   &ThreadStackSel,     /* Segment selector (returned) */
                   ALLOCFLAGS);         /* Allocation flags - no sharing */
  StackEnd = MAKEP(ThreadStackSel, SEGSIZE-1);

  /** Start Thread2 **/
  if(!(rc=DosCreateThread((PFNTHREAD) Thread2,    /* Thread address */
                       &ThreadID,                 /* Thread ID (returned) */
                       StackEnd)))   /* End of thread stack */
    printf("Thread2 created.\n");

  /* Sleep to relinquish time slice to Thread2 */
  if(!(DosSleep(SLEEPSHORT)))                  /* Sleep interval */
    printf("Slept a little to let Thread2 execute.\n");

  /***** Suspend Thread2, do some work, then resume Thread2 *****/
  if(!(rc=DosSuspendThread(ThreadID)))         /* Thread ID */
    printf("Thread2 SUSPENDED.\n");
  printf("Perform work that will not be interrupted by Thread2.\n");
  if(!(rc=DosResumeThread(ThreadID)))          /* Thread ID */
    printf("Thread2 RESUMED.\n");
  printf("Now we may be interrupted by Thread2.\n");

  /* Sleep to allow Thread2 to complete */
  DosSleep(SLEEPLONG);                         /* Sleep interval */
  return 0;
}
