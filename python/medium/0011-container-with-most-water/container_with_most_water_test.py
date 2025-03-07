from container_with_most_water import Solution

maxArea = Solution().maxArea


def test_example1():
    assert maxArea([1, 8, 6, 2, 5, 4, 8, 3, 7]) == 49


def test_example2():
    assert maxArea([1, 1]) == 1
