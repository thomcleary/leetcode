from typing import List

class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        return [freq[0] for freq in sorted({num: nums.count(num) for num in set(nums)}.items(), key=lambda freq: freq[1], reverse=True)][:k]
