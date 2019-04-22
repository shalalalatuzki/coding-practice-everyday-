
from collections import deque
def Conversion(n):
    bns=deque()
    bns.append("1")
    while n>0:
        n=n-1
        s1=bns.popleft()
        print(s1)
        s2=s1
        bns.append(s1+"0")
        bns.append(s2+"1")

n=int(input("请输入一个数字："))
Conversion(n)



