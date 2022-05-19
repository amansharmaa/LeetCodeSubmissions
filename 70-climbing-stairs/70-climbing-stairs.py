class Solution:
    def hell(self, n: int , memo) -> int:
        if n in memo:
            return memo[n]
        if n==1:
            return 1
        if n==2:
            return 2
        memo[n] = self.hell(n-1 , memo) + self.hell(n-2 , memo)
        return memo[n]
    def climbStairs(self, n: int) -> int:
        memo = {}
        memo[1] = 1
        memo[2] = 2
        return self.hell(n , memo)    