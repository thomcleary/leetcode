from typing import List


class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        maximum = 0

        while left < right:
            leftHeight = height[left]
            rightHeight = height[right]

            area = (right - left) * min(leftHeight, rightHeight)
            maximum = max(area, maximum)

            if leftHeight < rightHeight:
                left += 1
            else:
                right -= 1

        return maximum
