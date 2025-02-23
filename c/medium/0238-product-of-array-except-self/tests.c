#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "product-of-array-except-self.h"

int main(void) {
  // Example 1
  int example1Nums[] = {1, 2, 3, 4};
  int returnSize;
  int *result = productExceptSelf(example1Nums, 4, &returnSize);

  assert(returnSize == 4 && "Example 1 ❌");
  assert(result[0] == 24 && result[1] == 12 && result[2] == 8 &&
         result[3] == 6 && "Example 1 ❌");
  printf("Example 1 ✅\n");
  free(result);

  // Example 2
  int example2Nums[] = {-1, 1, 0, -3, 3};
  result = productExceptSelf(example2Nums, 5, &returnSize);

  assert(returnSize == 5 && "Example 2 ❌");
  assert(result[0] == 0 && result[1] == 0 && result[2] == 9 && result[3] == 0 &&
         result[4] == 0 && "Example 2 ❌");
  printf("Example 2 ✅\n");
  free(result);

  return 0;
}
