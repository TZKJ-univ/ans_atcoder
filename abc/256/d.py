import numpy as np

N=int(input())
L=[0]
R=[0]
ruisekiwa=[0]*(2*10**5+1)
for i in range(N):
    l,r=map(int,input().split())
    L.append(l)
    R.append(r)
    ruisekiwa[l]+=1
    ruisekiwa[r]-=1

for j in range(1,2*(10**5)+1):
    ruisekiwa[j]+=ruisekiwa[j-1]

cnt=0
ans_list=[]
# print(ruisekiwa[9:50])
for i in range(1,2*(10**5)+1):
    if ruisekiwa[i-1]==0 and ruisekiwa[i]!=0:
        cnt==1
        ans_0=i
    elif ruisekiwa[i-1]!=0 and ruisekiwa[i]==0:
        cnt=0
        ans_list.append([ans_0,i])

# print(ans_list)
for ans in ans_list:
    print(ans[0],ans[1])