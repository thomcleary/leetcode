/*
🐳 > gcc 01-two-sum.c -o two-sum
*/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  *returnSize = 2;
  int *indices = malloc(sizeof(*indices) * (size_t)(*returnSize));
  assert(indices != NULL && "malloc failed");

  for (int left = 0; left < numsSize - 1; left++) {
    for (int right = left + 1; right < numsSize; right++) {
      if (nums[left] + nums[right] == target) {
        indices[0] = left;
        indices[1] = right;
        return indices;
      }
    }
  }

  assert(0 && "You may assume that each input would have exactly one solution");
}

int main(void) {
  // Example 1
  int nums[] = {2, 7, 11, 15};
  int target = 9;
  int returnSize;
  int *output = twoSum(nums, 4, target, &returnSize);
  assert((output[0] == 0 && output[1] == 1) ||
         (output[0] == 1 && output[1] == 0));

  // Example 2
  nums[0] = 3;
  nums[1] = 2;
  nums[2] = 4;
  target = 6;
  output = twoSum(nums, 3, target, &returnSize);
  assert((output[0] == 1 && output[1] == 2) ||
         (output[0] == 2 && output[1] == 1));

  // Example 3
  nums[0] = 3;
  nums[1] = 3;
  target = 6;
  output = twoSum(nums, 2, target, &returnSize);
  assert((output[0] == 0 && output[1] == 1) ||
         (output[0] == 1 && output[1] == 0));

  return 0;
}
