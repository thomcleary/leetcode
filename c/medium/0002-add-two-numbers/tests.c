#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "add-two-numbers.h"

typedef struct TestCase {
  char *name;
  struct ListNode *list1;
  struct ListNode *list2;
  struct ListNode *expected;
} TestCase;

static void listnode_free(struct ListNode *node) {
  while (node != NULL) {
    struct ListNode *parent = node;
    node = parent->next;
    free(parent);
  }
}

static void listnode_print(struct ListNode *node) {
  while (node != NULL) {
    printf("%d", node->val);
    node = node->next;
    if (node != NULL) {
      printf("->");
    }
  }
}

static void testcase_free(TestCase testcase) {
  listnode_free(testcase.list1);
  listnode_free(testcase.list2);
  listnode_free(testcase.expected);
}

static struct ListNode *get_test_list(int digits[], size_t digits_length) {
  struct ListNode *head = malloc(sizeof(*head));
  assert(head != NULL && "malloc failed");
  head->val = digits[0];
  head->next = NULL;

  struct ListNode *node = head;

  for (size_t i = 1; i < digits_length; i++) {
    node->next = malloc(sizeof(*node));
    assert(node != NULL && "malloc failed");

    node = node->next;
    node->val = digits[i];
    node->next = NULL;
  }

  return head;
}

static bool lists_are_equal(struct ListNode *actual,
                            struct ListNode *expected) {
  while (actual != NULL && expected != NULL) {
    if (actual->val != expected->val) {
      return false;
    }

    actual = actual->next;
    expected = expected->next;
  }

  return actual == expected;
}

static void test(TestCase testcase) {
  struct ListNode *actual = addTwoNumbers(testcase.list1, testcase.list2);
  bool passed = lists_are_equal(actual, testcase.expected);

  printf("-----------------------\n");
  printf("%s - %s\n", testcase.name, passed ? "Pass ✅" : "Fail ❌");
  printf("-----------------------\n");

  printf("Input: l1 = [");
  listnode_print(testcase.list1);
  printf("], l2 = [");
  listnode_print(testcase.list2);
  printf("]\n");

  printf("Expected: [");
  listnode_print(testcase.expected);
  printf("]\n");

  printf("Actual: [");
  listnode_print(actual);
  printf("]\n");

  printf("\n");

  listnode_free(actual);
}

int main(void) {
  TestCase example1 = {.name = "Example 1",
                       .list1 = get_test_list((int[]){2, 4, 3}, 3),
                       .list2 = get_test_list((int[]){5, 6, 4}, 3),
                       .expected = get_test_list((int[]){7, 0, 8}, 3)};

  TestCase example2 = {.name = "Example 2",
                       .list1 = get_test_list((int[]){0}, 1),
                       .list2 = get_test_list((int[]){0}, 1),
                       .expected = get_test_list((int[]){0}, 1)};

  TestCase example3 = {.name = "Example 3",
                       .list1 = get_test_list((int[]){9, 9, 9, 9, 9, 9, 9}, 7),
                       .list2 = get_test_list((int[]){9, 9, 9, 9}, 4),
                       .expected =
                           get_test_list((int[]){8, 9, 9, 9, 0, 0, 0, 1}, 8)};

  test(example1);
  test(example2);
  test(example3);

  testcase_free(example1);
  testcase_free(example2);
  testcase_free(example3);

  return 0;
}
