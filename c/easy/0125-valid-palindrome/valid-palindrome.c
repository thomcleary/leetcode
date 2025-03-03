#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#include "valid-palindrome.h"

bool isPalindrome(char *s) {
  size_t s_len = strlen(s);
  char *left = s;
  char *right = s + (s_len - 1);

  while (left < right) {
    while (left < right && !isalnum(*left)) {
      left++;
    }
    while (right > left && !isalnum(*right)) {
      right--;
    }

    if (tolower(*left) != tolower(*right)) {
      return false;
    }

    left++;
    right--;
  }

  return true;
}
