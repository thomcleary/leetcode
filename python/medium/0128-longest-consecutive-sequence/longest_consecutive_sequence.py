from typing import List


class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        nums_set = set(nums)
        longest = 0

        for num in nums_set:
            if num - 1 in nums_set:
                continue

            consecutive = 1
            curr = num + 1

            while curr in nums_set:
                consecutive += 1
                curr += 1

            if consecutive > longest:
                longest = consecutive

        return longest
