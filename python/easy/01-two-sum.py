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


def main():
    print("1. Two Sum")
    twoSum = Solution().twoSum

    nums = [2, 7, 11, 15]
    target = 9
    output = twoSum(nums, target)
    test = (output[0] == 0 and output[1] == 1) or (output[0] == 1 and output[1] == 0)
    assert test, "Example 1 ❌"
    print("Example 1 ✅")

    nums = [3, 2, 4]
    target = 6
    output = twoSum(nums, target)
    test = (output[0] == 1 and output[1] == 2) or (output[0] == 2 and output[1] == 1)
    assert test, "Example 2 ❌"
    print("Example 2 ✅")

    nums = [3, 3]
    target = 6
    output = twoSum(nums, target)
    test = (output[0] == 0 and output[1] == 1) or (output[0] == 1 and output[1] == 0)
    assert test, "Example 3 ❌"
    print("Example 3 ✅")

if __name__ == "__main__":
    main()
