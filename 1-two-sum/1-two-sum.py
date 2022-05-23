class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}
        for j,i in enumerate(nums):
            if i in map:
                return [j , map[i]]
            else:
                map[target-i] = j
        return [-1,-1]