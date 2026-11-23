// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0110_Minmax.h"

// Function definitions
// TODO: implement ex_0110_Minmax
void ex_0110_Minmax(int a, int b, int c, int *min, int *max)
{
  *min = a;
  *max = a;

  if (b < *min)
  {
    *min = b;
  }
  if (b > *max)
  {
    *max = b;
  }

  if (c < *min)
  {
    *min = c;
  }
  if (c > *max)
  {
    *max = c;
  }
}
