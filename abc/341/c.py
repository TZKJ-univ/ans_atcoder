import numpy as np  
H,W,N=map(int,input().split())
t=input()
T=[x for x in list(str(t))]
S=np.full((H,W),"#",dtype=str)
for i in range(H):
    s=input()
    S[i]=[(x) for x in list(str(s))]
# print(S)
# print(T)
cnt=0
for i in range(0,H):
    for j in range(0,W-1):
        if S[i][j] == ".":
            kensaku_i = i
            kensaku_j = j
            ok=0
            for k in range(len(T)):
                if T[k] == "L":
                    if S[kensaku_i][kensaku_j+1] =="#":
                        break
                    else:
                        kensaku_j = kensaku_j+1
                elif T[k] == "R":
                    if S[kensaku_i][kensaku_j-1] =="#":
                        break
                    else:
                        kensaku_j = kensaku_j-1
                elif T[k] == "U":
                    if S[kensaku_i+1][kensaku_j] =="#":
                        break
                    else:
                        kensaku_i = kensaku_i+1
                elif T[k] == "D":
                    if S[kensaku_i-1][kensaku_j] =="#":
                        break
                    else:
                        kensaku_i = kensaku_i-1
                if k == 0:
                    cnt += 1
                    #print(i,j)

print(cnt)