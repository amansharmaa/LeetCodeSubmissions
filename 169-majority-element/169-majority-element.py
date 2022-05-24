class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count = 0
        temp=9999999999
        for i in nums:
            if temp == i:
                count+=1
                continue
            if count<=0:
                temp = i
                count+=1
                continue
            if count > 0:
                count-=1
        return temp