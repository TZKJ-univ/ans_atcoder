import numpy as np
s=input()
S=[(x) for x in list(str(s))]
t=input()
T=[(x) for x in list(str(t))]

T_komoji=list(t.lower())
# print(T_komoji)
cnt=0
for i in range(len(S)):
    if cnt==3:
        print('Yes')
        exit()
    elif S[i]==T_komoji[cnt]:
        cnt+=1
        # print(cnt)
        if cnt==2:
            if T[2]=='X':
                print('Yes')
                exit()
            else:
                continue
    else:
        continue

if cnt==3:
    print('Yes')
elif cnt==2:
    if T[2]=='X':
        print('Yes')
    else:
        print('No')
else:
    print('No')
# print(cnt)