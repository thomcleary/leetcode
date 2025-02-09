#include <assert.h>
#include <stdio.h>

#include "merge-sorted-array.h"

#define NUMS1_SIZE 6
#define NUMS2_SIZE 3

int main(void) {
  int nums1[NUMS1_SIZE] = {0};
  int nums2[NUMS2_SIZE] = {0};

  // Example 1
  int m = 3;
  nums1[0] = 1;
  nums1[1] = 2;
  nums1[2] = 3;

  int n = 3;
  nums2[0] = 2;
  nums2[1] = 5;
  nums2[2] = 6;

  merge(nums1, NUMS1_SIZE, m, nums2, NUMS2_SIZE, n);

  assert(nums1[0] == 1 && nums1[1] == 2 && nums1[2] == 2 && nums1[3] == 3 &&
         nums1[4] == 5 && nums1[5] == 6 && "Example 1 ❌");
  printf("Example 1 ✅\n");

  // Example 2
  m = 1;
  nums1[0] = 1;

  n = 0;

  merge(nums1, NUMS1_SIZE, m, nums2, NUMS2_SIZE, n);

  assert(nums1[0] == 1 && "Example 1 ❌");
  printf("Example 2 ✅\n");

  // Example 3
  m = 0;

  n = 1;
  nums2[0] = 1;

  merge(nums1, NUMS1_SIZE, m, nums2, NUMS2_SIZE, n);

  assert(nums1[0] == 1 && "Example 1 ❌");
  printf("Example 2 ✅\n");

  return 0;
}
