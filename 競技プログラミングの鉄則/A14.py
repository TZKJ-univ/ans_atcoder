import bisect
def index(a, x):     # 探索したい数値のindexを探索
    'Locate the leftmost value exactly equal to x'
    i = bisect.bisect_left(a, x)
    if i != len(a) and a[i] == x:
        return i
    return -1.1

N,K=map(int,input().split())
A=list(map(int,input().split()))
B=list(map(int,input().split()))
C=list(map(int,input().split()))
D=list(map(int,input().split()))

P=[0]*(N*N)
Q=[0]*(N*N)

for i in range(N):
    for j in range(N):
        P[i*N+j]=A[i]+B[j]
        Q[i*N+j]=C[i]+D[j]

P.sort()
Q.sort()
for i in range(N*N):
    if index(Q,K-P[i])!=-1.1:
        print("Yes")
        break
    elif i==N*N-1:
        print("No")
        break
# print(P)
# print(Q)

