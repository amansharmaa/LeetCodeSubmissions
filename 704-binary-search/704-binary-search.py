class Solution:
    def bina(self , a , b , mid, nums: List[int], target: int):
        if(mid<a or mid>b):
            return -1
        if(target==nums[mid]):
            return mid
        if target < nums[mid]:
            b = mid-1
            mid = int((a+b)/2)
        else:
            a=mid+1
            mid =int((a+b)/2)
        return self.bina(a , b , mid ,nums , target)
    
    def search(self, nums: List[int], target: int) -> int:
        a=0
        b=len(nums)-1
        mid=int((a+b)/2)
        return self.bina(a , b , mid , nums , target)