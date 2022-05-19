class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        ans = {num: 0 for num in nums}
        for i in nums:
            ans[i] = ans[i] + 1
            if ans[i] > 1:
                return True
        return False