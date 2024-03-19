import numpy as np
import collections as cl
s=input()
S=[(x) for x in list(str(s))]
N=int(len(S))

c=cl.Counter(S)
ans=N*(1+N)/2-N
c_val=list(c.values())
ansminus=0
for i in range(len(c_val)):
    ansminus+=(c_val[i]*(1+c_val[i])/2)-c_val[i]

ans-=ansminus
if ansminus==0:
    print(int(ans))
    exit()
else:
    print(int(ans+1))