class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxx=0
        temp=0
        for i in range(1,(len(prices))):
            diff = prices[i] - prices[temp]
            if(diff < 0):
                temp = i
                i = temp+1
                continue
            if(maxx<diff):
                maxx=diff
        return maxx