class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        hashmap = {}
        for left, num in enumerate(nums):
            right = hashmap.get(target - num)
            if right is not None:
                return [left, right]
            hashmap[num] = left

        raise AssertionError("You may assume that each input would have exactly one solution")
