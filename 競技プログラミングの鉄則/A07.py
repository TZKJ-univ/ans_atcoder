D=int(input())
N=int(input())
L=[]
R=[]
zenzituhi=[0]*(D+1)
sankasya=[0]*(D+1)
for i in range(N):
    l,r=map(int,input().split())
    l=l-1
    L.append(l)
    R.append(r)

for i in range(N):
    #print(L[i],R[i])
    zenzituhi[L[i]]+=1
    zenzituhi[R[i]]-=1

sankasya[0]=zenzituhi[0]
for i in range(1,D):
    sankasya[i]=sankasya[i-1]+zenzituhi[i]

for i in range(D):
    print(sankasya[i])
