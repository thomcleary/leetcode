#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "two-sum-ii.h"

int *twoSum(int *numbers, int numbersSize, int target, int *returnSize) {
  int left = 0;
  int right = numbersSize - 1;
  int sum;

  while ((sum = numbers[left] + numbers[right]) != target) {
    if (sum > target) {
      right--;
    } else {
      left++;
    }
  }

  *returnSize = 2;
  int *indicies = malloc(sizeof(*indicies) * 2);
  assert(indicies != NULL && "malloc failed");

  // Return 1-indexed array indicies (+1)
  indicies[0] = left + 1;
  indicies[1] = right + 1;

  return indicies;
}
