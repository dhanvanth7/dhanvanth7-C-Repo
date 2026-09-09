class Solution:
    def digitFrequencyScore(self, n: int) -> int:
        sum=0
        while(n>0):
            r=n%10
            sum+=r
            n//=10
        return sum