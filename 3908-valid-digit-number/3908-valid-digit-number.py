class Solution:
    def validDigit(self, n: int, x: int) -> bool:
        cnt=0
        temp=n
        while(temp>0):
            r=temp%10
            cnt+=1
            temp//=10
        if(cnt==1):
            return False
        k=str(n)
        if(k[0]==str(x)):
            return False
        else:
            f=-1
            while(n>0):
                r=n%10
                if(r==x):
                    f=1
                    break
                n//=10
        if(f==1):
            return True
        return False    