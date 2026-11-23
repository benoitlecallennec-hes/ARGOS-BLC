// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0190_ReverseInplacePtr.h"

// Function definitions
// TODO: implement ex_0190_ReverseInplacePtr
void ex_0190_ReverseInplacePtr(int *array, int size)
{
  int *head = array;
  int *tail = array + size - 1;

  while (head < tail)
  {
    int temp = *head;
    *head = *tail;
    *tail = temp;

    head++;
    tail--;
  }
}
