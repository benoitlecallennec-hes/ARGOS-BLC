// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0114_AccumulateStats.h"

// Function definitions
// TODO: implement ex_0114_AccumulateStats
void ex_0114_AccumulateStats(int values[], int count, int *sum, double *mean)
{  
  int total = 0;

  for (int i = 0; i < count; ++i)
  {
    total += values[i];
  }

  *sum = total;
  *mean = total / (double)count;
}
