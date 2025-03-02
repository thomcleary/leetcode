class Solution:
    def longestPalindrome(self, s: str) -> str:
        window_size = len(s)

        while window_size > 1:
            for substr in [
                s[i : i + window_size] for i in range(len(s) - window_size + 1)
            ]:
                if substr == substr[::-1]:
                    return substr
            window_size -= 1

        return "" if window_size == 0 else s[0]
