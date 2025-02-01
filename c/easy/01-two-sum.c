/*
🐳 > gcc 01-two-sum.c -o two-sum
*/

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "uthash.h"

typedef struct HashtableEntry {
  int id;
  int value;
  UT_hash_handle hh;
} HashtableEntry;

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  *returnSize = 2;
  int *indices = malloc(sizeof(*indices) * (size_t)(*returnSize));
  assert(indices != NULL && "malloc failed");

  HashtableEntry *hashtable = NULL;

  for (int left = 0; left < numsSize; left++) {
    int remaining = target - nums[left];

    HashtableEntry *right;
    HASH_FIND_INT(hashtable, &remaining, right);

    if (right != NULL) {
      indices[0] = left;
      indices[1] = right->value;

      for (int i = 0; i < left; i++) {
        HashtableEntry *entry;
        int key = nums[i];

        HASH_FIND_INT(hashtable, &key, entry);
        assert(entry != NULL && "where did the entry go???");
        HASH_DEL(hashtable, entry);
        free(entry);
      }

      return indices;
    }

    HashtableEntry *entry = malloc(sizeof(*entry));
    assert(entry != NULL && "malloc failed");

    entry->id = nums[left];
    entry->value = left;
    HASH_ADD_INT(hashtable, id, entry);
  }

  assert(0 && "You may assume that each input would have exactly one solution");
}

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
