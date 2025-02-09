#include <assert.h>

#include "two-sum.h"
#include "uthash.h"

typedef struct HashtableEntry {
  int id;
  int value;
  UT_hash_handle hh;
} HashtableEntry;

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
