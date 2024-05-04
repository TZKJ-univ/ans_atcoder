N,K=map(int,input().split())
A=list(map(int,input().split()))
B=[]
for i in range(N):
    if A[i]%K==0:
        B.append(A[i]//K)

for i in range(len(B)):
    if i==len(B)-1:
        print(B[i])
    else:      
      print(B[i],end=" ")