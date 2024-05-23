class Solution:
    def maxArea(self, height: List[int]) -> int:
        left = 0
        right = len(height) - 1
        initial_area = min(height[left], height[right]) * (right - left)
        
        while left != right:
            if height[left] < height[right]:
                left = left + 1
            else:
                right = right - 1
            
            new_area = min(height[left], height[right]) * (right - left)
            
            if new_area > initial_area:
                initial_area = new_area

        return initial_area