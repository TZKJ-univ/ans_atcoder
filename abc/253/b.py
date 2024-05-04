import numpy as np
H,W=map(int,input().split())
S=np.full((H+1,W+1),':')
koma=np.zeros((2,2))
cnt=0
for i in range(1,H+1):
    s=input()
    for j in range(1,W+1):
        S[i,j]=s[j-1]
        if S[i,j]=='o' and cnt==0:
            koma[0,0]=i
            koma[0,1]=j
            cnt+=1
        elif S[i,j]=='o' and cnt==1:
            koma[1,0]=i
            koma[1,1]=j
        else:
            continue



print(int(abs(koma[0,0]-koma[1,0])+abs(koma[0,1]-koma[1,1])))


