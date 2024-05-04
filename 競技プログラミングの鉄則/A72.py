import numpy as np
import bisect
H,W,K=map(int,input().split())
c=np.full((H+1,W+1),'@')
c_h_blacknum=np.zeros(H+1)
c_w_blacknum=np.zeros(W+1)
ans=0
Max=0
for i in range(1,H+1):
    s=input()
    S=[(x) for x in list(str(s))]
    for j in range(1,W+1):
        c[i][j]=S[j-1]
        if c[i][j]=='.':
            c_h_blacknum[i]+=1
            c_w_blacknum[j]+=1
        else:
            Max+=1
c_hw_blacknum=np.sort(np.concatenate([c_h_blacknum,c_w_blacknum]))
# print(c_hw_blacknum)
# print(c_h_blacknum)
# print(c_w_blacknum)
# print(c)
max_pattern=[0]*(2**H)
# print(Max)
for i in range(2**H):
    c_copy=c.copy()
    max_copy=Max
    c_w_blacknum_copy=c_w_blacknum.copy()
    kaisu=0
    I=(bin(i))[2:]
    II=list(map(int,(format(int(I),'0'+str(H)))))
    # print(II)
    for j in range(1,H+1):
        # print(j)
        if II[j-1]==1:
            kaisu+=1
            for k in range(1,W+1):
                if c_copy[j][k]=='.':
                    c_w_blacknum_copy[k]-=1
                    c_copy[j][k]='#'
                    max_copy+=1
    nokori=K-kaisu
    if nokori<0:
        max_pattern[i]=0
    elif nokori==0:
        max_pattern[i]=max_copy
    else:
        c_w_sorted=np.sort(c_w_blacknum_copy)
        max_pattern[i]=max_copy+np.sum(c_w_sorted[-nokori:])
        
# print(max_pattern)
print(max(max_pattern))
# print(c)ans=0
