import numpy as np

s=input()
S=[(x) for x in list(str(s))]
t=input()
T=[(x) for x in list(str(t))]

ans=[]
cnt=0
for j in range(len(T)):
    if S[cnt]==T[j]:
        ans.append(j+1)
        cnt+=1
        if cnt==len(S):
            break

for i in range(len(ans)):
    if i!=len(ans)-1:
        print(ans[i],end=' ')
    else:
        print(ans[i])