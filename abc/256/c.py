import numpy as np
h=[0]*3
w=[0]*3
h[0],h[1],h[2],w[0],w[1],w[2]=map(int,input().split())

masu_=np.zeros((3,3))

ans=0
a=np.zeros((3,3))
for i in range(1,h[0]-1):
    for j in range(1,h[1]-1):
        # print(i,j)
        for k in range(1,h[0]-i):
            # print(k)
            for l in range(1,h[1]-j):
                a[0][0]=i
                a[1][0]=j
                a[0][1]=k
                a[1][1]=l
                a[0][2]=h[0]-a[0][0]-a[0][1]
                a[1][2]=h[1]-a[1][0]-a[1][1]
                a[2][0]=w[0]-a[0][0]-a[1][0]
                a[2][1]=w[1]-a[0][1]-a[1][1]
                a[2][2]=w[2]-a[0][2]-a[1][2]
                if a[0][2]<=0 or a[1][2]<=0 or a[2][2]<=0 or a[2][0]<=0 or a[2][1]<=0:
                    continue
                else:
                    if (a[0][0]+a[0][1]+a[0][2]==h[0]) and (a[1][0]+a[1][1]+a[1][2]==h[1]) and (a[2][0]+a[2][1]+a[2][2]==h[2]) and (a[0][0]+a[1][0]+a[2][0]==w[0]) and (a[0][1]+a[1][1]+a[2][1]==w[1]) and (a[0][2]+a[1][2]+a[2][2]==w[2]):
                        ans+=1
                        # print(a)    
            # print(a)
print(ans)
# print(a)
        