from remove_duplicates_from_sorted_array import Solution

remove_duplicates = Solution().removeDuplicates

def test_example1():
    nums = [1,1,2]

    result = remove_duplicates(nums)

    assert result == 2
    assert len(set(nums[:result])) == 2

def test_example2():
    nums = [0,0,1,1,1,2,2,3,3,4]

    result = remove_duplicates(nums)

    assert result == 5
    assert len(set(nums[:result])) == 5
