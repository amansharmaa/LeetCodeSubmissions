class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        ans = [1]
        for i in range(1,len(nums)):
            temp = ans[i-1]*nums[i-1]
            ans.append(temp)
        p=1
        for i in range(len(nums)-1,-1,-1):
            ans[i]=ans[i]*p
            p=p*nums[i]
        return ans