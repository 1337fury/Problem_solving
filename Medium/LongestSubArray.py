from typing import List

class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        start = 0
        longest = 0
        i = 0
        index = 0
        fZero = True
        
        while i in range(len(nums)):
            if nums[i] == 0 and fZero:
                index = i
                fZero = False
            elif nums[i] == 0 and not fZero:
                start = index + 1
                index = i
                
            longest = max(longest, i - start + 1)
                
            i = i + 1
        return longest - 1