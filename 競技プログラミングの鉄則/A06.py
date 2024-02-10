N,Q=map(int,input().split())
A=list(map(int,input().split()))
B=[0]*N
B[0]=A[0]
for i in range(1,N):
    B[i]=B[i-1]+A[i]
l=[0]*Q
r=[0]*Q
for i in range(Q):
    l[i],r[i]=map(int,input().split())
    l[i]-=1
    r[i]-=1
# print(B)
# print(l)
# print(r)
for j in range(Q):
    if l[j]==0:
        print(B[r[j]])
    else:
        print(B[r[j]]-B[l[j]-1])
