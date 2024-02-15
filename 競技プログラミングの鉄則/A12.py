N,K=map(int,input().split())
A=list(map(int,input().split()))

def check(x):
    sum=0
    for i in range(N):
        sum += x//A[i]
    if sum >= K:
        return True
    else:
        return False

L=1
R=(10**9)
while R-L>1:
    m=(L+R)//2
    if check(m):
        R=m
    else:
        L=m

print(R)