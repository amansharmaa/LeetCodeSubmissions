class Solution:
    def countBits(self, n: int) -> List[int]:
        ans = []
        for i in range(n+1):
            temp = bin(i)
            count = 0
            for j in temp:
                if j == "1":
                    count+=1
            ans.append(count)
        return ans