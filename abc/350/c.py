import numpy as np

N=int(input())
A=[0]
a=list(map(int,input().split()))
for i in range(N):
  A.append(a[i])

def irekae(i,j,B):
    b=B[i]
    B[i]=B[j]
    B[j]=b
sousa=np.zeros((N+1,2),dtype=int)
kaisu=0
while True:
    for i in range(1,N+1):
        if i==A[i]:
            continue
        else:
            sousa[kaisu][0]=i
            sousa[kaisu][1]=A[i]
            irekae(i,A[i],A)
            kaisu+=1
            # print(A)
    if np.all(A==np.arange(N+1)):
        break
    else:
        continue

if kaisu==0:
    print(0)
    exit()
else:
    print(kaisu)
    for i in range(0,kaisu):
        if sousa[i][0]<sousa[i][1]:
            print(sousa[i][0],sousa[i][1])
        else:
            print(sousa[i][1],sousa[i][0])
        

# print(sousa)
# print(A)