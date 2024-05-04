import numpy as np
N,Q=map(int,input().split())
T=[0]
a=list(map(int,input().split()))
for i in range(len(a)):
  T.append(a[i])
# print(T)
ha=[1]*(N+1)
for i in range(1,Q+1):
    # print(T[i])
    if ha[T[i]]==1:
        ha[T[i]]=0
    else:
        ha[T[i]]=1
ans=0
for i in range(1,N+1):
    if ha[i]==1:
        ans+=1
        
print(ans)