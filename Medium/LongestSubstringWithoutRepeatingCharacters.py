class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        start = 0
        char_map = {}
        longest = 0
        for end in range(len(s)):
            if s[end] in char_map:
                start = max(start, char_map[s[end]] + 1)
            char_map[s[end]] = end
            longest = max(longest, end - start + 1)
        return longest