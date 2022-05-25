class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        map={}
        ans = []
        for i in nums:
            if i in map:
                ans.append(i)
            else:
                map[i]=1
        return ans