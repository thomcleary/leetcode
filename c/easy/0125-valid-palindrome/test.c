#include <assert.h>
#include <stdio.h>

#include "valid-palindrome.h"

int main(void) {
  printf("Example 1 ");
  assert(isPalindrome("A man, a plan, a canal: Panama") && "❌");
  printf("✅\n");

  printf("Example 2 ");
  assert(!isPalindrome("race a car") && "❌");
  printf("✅\n");

  printf("Example 3 ");
  assert(isPalindrome(" ") && "❌");
  printf("✅\n");

  printf("Example 4 ");
  assert(!isPalindrome("0P") && "❌");
  printf("✅\n");

  return 0;
}
