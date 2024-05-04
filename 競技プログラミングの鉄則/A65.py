N=int(input())
A=[0,N-1]
a=list(map(int,input().split()))
for i in range(N-1):
  A.append(a[i])

print(A)