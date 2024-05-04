import numpy as np
n,m=map(int,input().split())
h,w=map(int,input().split())
a=[0]*(n+1)
b=[0]*(n+1)
c=[0]*(n+1)
d=[0]*(n+1)
e=[0]*(n+1)
tanbo=np.zeros((h+1,w+1),dtype=int)
for i in range(n):
    a[i],b[i],c[i],d[i],e[i]=map(int,input().split())
# print(tanbo)
cnt=[0]*(m+1)
for k in range(n):
    for i in range(1,h+1):
        for j in range(1,w+1):    
            if a[k]<=i and i<=b[k] and c[k]<=j and j<=d[k]:
                if tanbo[i][j]==0:
                    tanbo[i][j]=e[k]
                    # print(tanbo[i][j])
                else:
                    cnt[tanbo[i][j]]+=1
                    # print(cnt[tanbo[i][j]])
                    tanbo[i][j]=e[k]
        # print(tanbo)

for i in range(1,m+1):
    print(cnt[i])

for i in range(1,h+1):
    for j in range(1,w+1):
        if tanbo[i][j]==0:
            print(".",end="")
        else:
            print(tanbo[i][j],end="")
    print()
