class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        ans = {num: 0 for num in range(1,len(nums)+1)}
        sol = []
        for num in nums:
            ans[num] =+ 1
        for num in  range(1,len(nums)+1):
            if ans[num] == 0:
                sol.append(num)
        return sol