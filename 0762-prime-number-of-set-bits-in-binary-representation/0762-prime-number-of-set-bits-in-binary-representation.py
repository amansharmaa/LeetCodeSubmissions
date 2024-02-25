class Solution:
    def countPrimeSetBits(self, left: int, right: int) -> int:
        totalPrime = 0
        for i in range(left,right+1):
            setbits = 0
            bitstring = bin(i)
            for i in bitstring:
                if i == "1": setbits += 1
            if setbits > 1:
                for i in range(2, int(setbits/2)+1):
                    if (setbits % i) == 0:
                        break
                else: totalPrime += 1
        return totalPrime