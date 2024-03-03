import math
N,M,K=map(int,input().split())
min_koubaisu = math.lcm(N,M)


if N>M:
    N,M = M,N # N<Mにする
# if K==1:
#     print(N)
#     exit()
ans=0
def check(x):
    if (x//N + x//M - (x//min_koubaisu)*2) > K:
        return 1
    elif ((x//N + x//M - (x//min_koubaisu)*2) == K) and (x%N==0 or x%M==0):
        return 2
    elif ((x//N + x//M - (x//min_koubaisu)*2) == K):
        return 1
    else:
        return 3
 
L=N-1
saidai = M*K
#print(saidai)
# print(min_koubaisu)
R=saidai
while R-L>1:
    x = (L+R)//2
    # print(L,R,x)
    if check(x)==1:
        R = x
    elif check(x)==2:
        print(x)
        exit()
    else:
        L = x     
# print(saidai)
# print(min_koubaisu)
# print(x)
