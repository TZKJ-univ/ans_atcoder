
T=int(input())

N=int(input())
L=[0]*(N)
R=[0]*(N)
zenzituhi=[0]*(T+1)
for i in range(0,N):
    L[i],R[i]=map(int,input().split())
    zenzituhi[L[i]]+=1
    zenzituhi[R[i]]-=1

sankasya=[0]*(T)
sankasya[0]=zenzituhi[0]

for i in range(1,T):
    sankasya[i]=sankasya[i-1]+zenzituhi[i]
    
for i in range(T):
    print(sankasya[i]) 