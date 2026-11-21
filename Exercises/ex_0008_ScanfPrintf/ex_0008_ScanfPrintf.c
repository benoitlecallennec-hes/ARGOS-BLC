// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0008_ScanfPrintf.h"

// Function definitions
void ex_0008_ScanfPrintf(void)
{
  // TODO: read 3 letters with scanf, then print their ASCII codes
    char letter1 = 0, letter2 = 0, letter3 = 0;

  int status = 0;
  int nbExpectedValues = 3;
  do
  {
    printf("\n\nPlease enter 3 letters:\n");
    status = scanf("%c %c %c", &letter1, &letter2, &letter3);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (status != nbExpectedValues && status != EOF);

  printf("\nHere are the corresponding ASCII codes:\n");
  printf("%c--------->%d\n%c--------->%d\n%c--------->%d\n",
             letter1, letter1, letter2, letter2, letter3, letter3);
}
