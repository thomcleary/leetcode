#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "two-sum-ii.h"

int main(void) {
  // Example 1
  int example1Nums[] = {2, 7, 11, 15};
  int target = 9;
  int returnSize;
  int *result = twoSum(example1Nums, 4, target, &returnSize);

  assert(returnSize == 2 && "Example 1 ❌");
  assert(((result[0] == 1 && result[1] == 2) ||
          (result[0] == 2 && result[1] == 1)) &&
         "Example 1 ❌");
  printf("Example 1 ✅\n");
  free(result);

  // Example 2
  int example2Nums[] = {2, 3, 4};
  target = 6;
  result = twoSum(example2Nums, 3, target, &returnSize);

  assert(returnSize == 2 && "Example 2 ❌");
  assert(((result[0] == 1 && result[1] == 3) ||
          (result[0] == 3 && result[1] == 1)) &&
         "Example 2 ❌");
  printf("Example 2 ✅\n");
  free(result);

  // Example 2
  int example3Nums[] = {-1, 0};
  target = -1;
  result = twoSum(example3Nums, 2, target, &returnSize);

  assert(returnSize == 2 && "Example 3 ❌");
  assert(((result[0] == 1 && result[1] == 2) ||
          (result[0] == 2 && result[1] == 1)) &&
         "Example 3 ❌");
  printf("Example 3 ✅\n");
  free(result);

  return 0;
}
