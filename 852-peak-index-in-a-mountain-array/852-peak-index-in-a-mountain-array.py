class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        for i in range(len(arr)):
            if(arr[i]-arr[i+1] > 0):
                return i
        return -1