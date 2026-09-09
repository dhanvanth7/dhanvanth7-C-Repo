class Solution:
    def mirrorDistance(self, n: int) -> int:
        k=str(n)
        c=k[::-1]
        a=int(c)
        z=abs(n-a)
        return z