from longest_consecutive_sequence import Solution

longestConsecutive = Solution().longestConsecutive


def test_example1():
    assert longestConsecutive([100, 4, 200, 1, 3, 2]) == 4


def test_example2():
    assert longestConsecutive([0, 3, 7, 2, 5, 8, 4, 6, 0, 1]) == 9


def test_example3():
    assert longestConsecutive([1, 0, 1, 2]) == 3
