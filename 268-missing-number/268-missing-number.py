class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        ans = {num: 0 for num in range(len(nums))}
        for num in nums:
            ans[num] =+ 1
        for num in  range(len(nums)):
            if ans[num] == 0:
                return num
        return len(nums)
            
        