class Solution:
    def hasAlternatingBits(self, n: int) -> bool:
        prev = -1
        while n:
            remind = n % 2
            if (remind == prev): return False
            prev = remind
            n = n//2
        return True