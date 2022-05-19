class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        sum=0
        max=-9999999
        for i in nums:
            sum += i
            if max < sum:
                max=sum
            if sum<0:
                sum=0
            
        return max