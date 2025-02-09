from longest_substring_without_repeating_characters import Solution

lengthOfLongestSubstring = Solution().lengthOfLongestSubstring

def test_example1():
    assert lengthOfLongestSubstring("abcabcbb") == 3

def test_example2():
    assert lengthOfLongestSubstring("bbbbb") == 1

def test_example3():
    assert lengthOfLongestSubstring("pwwkew") == 3
