class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max = len(set(s))

        while max > 2:
            for substr in [s[i : i + max] for i in range(len(s) - max + 1)]:
                if len(set(substr)) == max:
                    return max
            max -= 1

        return max
