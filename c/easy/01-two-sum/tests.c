#include <assert.h>
#include <stdio.h>

#include "two-sum.h"

int main(void) {
  printf("1. Two Sum\n");

  // Example 1
  int nums[] = {2, 7, 11, 15};
  int target = 9;
  int returnSize;
  int *output = twoSum(nums, 4, target, &returnSize);
  assert(((output[0] == 0 && output[1] == 1) ||
          (output[0] == 1 && output[1] == 0)) &&
         "Example 1 ❌");
  printf("Example 1 ✅\n");

  // Example 2
  nums[0] = 3;
  nums[1] = 2;
  nums[2] = 4;
  target = 6;
  output = twoSum(nums, 3, target, &returnSize);
  assert(((output[0] == 1 && output[1] == 2) ||
          (output[0] == 2 && output[1] == 1)) &&
         "Example 2 ❌");
  printf("Example 2 ✅\n");

  // Example 3
  nums[0] = 3;
  nums[1] = 3;
  target = 6;
  output = twoSum(nums, 2, target, &returnSize);
  assert(((output[0] == 0 && output[1] == 1) ||
          (output[0] == 1 && output[1] == 0)) &&
         "Example 3 ❌");
  printf("Example 3 ✅\n");

  return 0;
}
