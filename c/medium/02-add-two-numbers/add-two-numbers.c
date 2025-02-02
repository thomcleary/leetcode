#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "add-two-numbers.h"

typedef struct AdditionResult {
  int value;
  bool carry;
} AdditionResult;

struct ListNode *listnode_new(int value) {
  struct ListNode *node = malloc(sizeof(*node));
  assert(node != NULL && "malloc failed");

  node->val = value;
  node->next = NULL;

  return node;
}

static AdditionResult listnode_add(struct ListNode *l1, struct ListNode *l2,
                                   bool carry) {
  int total = carry ? 1 : 0;

  if (l1 != NULL) {
    total += l1->val;
  }

  if (l2 != NULL) {
    total += l2->val;
  }

  return (AdditionResult){.value = total % 10, .carry = total >= 10};
}

struct ListNode *addTwoNumbers(struct ListNode *l1, struct ListNode *l2) {
  bool carry = false;

  AdditionResult add_result = listnode_add(l1, l2, carry);
  carry = add_result.carry;

  struct ListNode *head = listnode_new(add_result.value);
  struct ListNode *node = head;

  l1 = l1->next;
  l2 = l2->next;

  while (l1 != NULL || l2 != NULL) {
    add_result = listnode_add(l1, l2, carry);
    carry = add_result.carry;

    node->next = listnode_new(add_result.value);
    node = node->next;

    if (l1 != NULL) {
      l1 = l1->next;
    }
    if (l2 != NULL) {
      l2 = l2->next;
    }
  }

  if (carry) {
    node->next = listnode_new(1);
  }

  return head;
}
