class Solution:
    def findPoisonedDuration(self, timeSeries: List[int], duration: int) -> int:
        size = len(timeSeries)
        totaltime = 0
        for i in range(size-1):
            totaltime = totaltime + min(timeSeries[i + 1] - timeSeries[i], duration)
        totaltime = totaltime + duration
        return totaltime
