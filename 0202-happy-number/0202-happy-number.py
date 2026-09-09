class Solution:
    def isHappy(self, n: int) -> bool:
        while n!=1 and n!=4:
            sum=0
            while(n>0):
                r=n%10
                sum+=r*r
                n//=10
            n=sum
        return n==1
        