from longest_palindromic_substring import Solution

longestPalindrome = Solution().longestPalindrome


def test_example1():
    result = longestPalindrome("babad")
    assert result == "bab" or result == "aba"


def test_example2():
    assert longestPalindrome("cbbd") == "bb"
