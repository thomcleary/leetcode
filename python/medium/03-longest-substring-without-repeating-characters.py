class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max = len(set(s))

        while max > 2:
            for substr in [s[i:i+max] for i in range(len(s) - max + 1)]:
                if (len(set(substr)) == max):
                    return max
            max -= 1

        return max

def main():
    print("2. Longest Substring Without Repeating Characters")
    lengthOfLongestSubstring = Solution().lengthOfLongestSubstring

    input = "abcabcbb"
    expected = 3
    assert lengthOfLongestSubstring(input) == expected, "Example 1 ❌"
    print("Example 1 ✅")

    input = "bbbbb"
    expected = 1
    assert lengthOfLongestSubstring(input) == expected, "Example 2 ❌"
    print("Example 2 ✅")

    input = "pwwkew"
    expected = 3
    assert lengthOfLongestSubstring(input) == expected, "Example 3 ❌"
    print("Example 3 ✅")

if __name__ == "__main__":
    main()
