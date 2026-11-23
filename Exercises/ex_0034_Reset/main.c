// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0034_Reset.h"

int main(void)
{
  int a = 99;

  printf("Before reset: a = %d\n", a);

  ex_0034_Reset(&a);

  printf("After reset: a = %d\n", a);

  return 0;
}
