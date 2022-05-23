class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        l = 0
        r = len(nums)-1
        i=r
        ans = [0] * len(nums)
        while i>=0:
            if(abs(nums[l]) > abs(nums[r])):
                ans[i]=pow(nums[l] , 2)
                l += 1
            else:
                ans[i]=pow(nums[r] , 2)
                r -= 1
            i -= 1
        return ans
            