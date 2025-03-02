from two_sum import Solution

twoSum = Solution().twoSum


def test_example1():
    assert twoSum([2, 7, 11, 15], 9) == [1, 0]


def test_example2():
    assert twoSum([3, 2, 4], 6) == [2, 1]


def test_example3():
    assert twoSum([3, 3], 6) == [1, 0]
