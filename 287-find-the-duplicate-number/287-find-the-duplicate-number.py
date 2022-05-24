class Solution:
    def findDuplicate(self, nums: List[int]) -> int:
        map={}
        for i in nums:
            if i in map:
                return i
            else:
                map[i] = 1
        return -1