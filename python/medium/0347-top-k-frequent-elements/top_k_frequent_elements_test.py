from collections import Counter
from top_k_frequent_elements import Solution

topKFrequent = Solution().topKFrequent

def test_example1():
    result = topKFrequent([1,1,1,2,2,3], 2)
    assert Counter(result) == Counter([1, 2])

def test_example2():
    result = topKFrequent([1], 1)
    assert result == [1]
