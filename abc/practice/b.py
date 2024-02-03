s=input()
S=[int(x) for x in list(str(s))]
cnt=0
for _ in range(len(S)):
    if S[_]==1:
        cnt+=1

print(cnt)
