#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "product-of-array-except-self.h"

int *productExceptSelf(int *nums, int numsSize, int *returnSize) {
  int prefixProducts[numsSize];
  prefixProducts[0] = 1;
  for (int i = 1; i < numsSize; i++) {
    prefixProducts[i] = prefixProducts[i - 1] * nums[i - 1];
  }

  int suffixProducts[numsSize];
  suffixProducts[numsSize - 1] = 1;
  for (int i = numsSize - 2; i >= 0; i--) {
    suffixProducts[i] = suffixProducts[i + 1] * nums[i + 1];
  }

  *returnSize = numsSize;
  int *products = malloc(sizeof(*products) * (size_t)numsSize);
  assert(products != NULL && "malloc failed");

  for (int i = 0; i < numsSize; i++) {
    products[i] = prefixProducts[i] * suffixProducts[i];
  }

  return products;
}
