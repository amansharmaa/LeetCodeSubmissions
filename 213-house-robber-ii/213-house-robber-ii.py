class Solution:
    def rob(self, nums: List[int]) -> int:
        x=len(nums)
        if x==1:
            return nums[0]
        if x==2:
            return max(nums[0],nums[1])
        t1 = 0
        t2 = 0
        for i in range(x-1):
            rob = max(nums[i] + t1 , t2)
            t1=t2
            t2=rob
        rob1=t2
        t1=0
        t2=0
        for i in range(1,x):
            rob = max(nums[i] + t1 , t2)
            t1=t2
            t2=rob
        
        return max(rob1,t2)