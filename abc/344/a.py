s=input()
S=[(x) for x in list(str(s))]
ans=[0]*len(S)
flag=0
for i in range(len(S)):
    if flag==0:
        if S[i]=='|':
            ans[i]=1
            flag=1
        else:
            ans[i]=0
    else:
        if S[i]=='|':
            ans[i]=1
            flag=0
        else:
            ans[i]=1

for i in range(len(S)):
    if i==len(S)-1:
        if ans[i]==0:
            print(S[i])
        else:
            print('')
    elif ans[i]==0:
        print(S[i],end="")
    