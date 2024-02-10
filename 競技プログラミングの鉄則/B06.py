N=int(input())
A=list(map(int,input().split()))
B=[0]*N
C=[0]*N
if A[0]==1:
    B[0]=1
    C[0]=0
else:
    B[0]=0
    C[0]=1
for i in range(1,N):
    if A[i]==1:
        B[i]=B[i-1]+1
        C[i]=C[i-1]
    else:
        B[i]=B[i-1]
        C[i]=C[i-1]+1
        
Q=int(input())
l=[0]*Q
r=[0]*Q
for i in range(Q):
    l[i],r[i]=map(int,input().split())
    l[i]-=1
    r[i]-=1
    
for j in range(Q):
    if l[j]==0:
        if B[r[j]]>(C[r[j]]):
            print("win")
        elif B[r[j]]==(C[r[j]]):
            print("draw")
        else:
            print("lose")
    else:
        if (B[r[j]]-B[l[j]-1])>(C[r[j]]-C[l[j]-1]):
            print("win")
        elif (B[r[j]]-B[l[j]-1])==(C[r[j]]-C[l[j]-1]):
            print("draw")
        else:
            print("lose")