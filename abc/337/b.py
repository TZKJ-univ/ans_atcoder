S=input()
S_list=list(S)
S_len=len(S)

cnt=0
No_flag=0

for i in range(S_len):
    if cnt==0:
        if S_list[i]=='A':
            continue
        elif S_list[i]=='B':
            cnt+=1
        elif S_list[i]=='C':
            cnt+=2
        else:
            print('No')
            No_flag=1
            exit()
    elif cnt==1:
        if S_list[i]=='A':
            print('No')
            exit()
            No_flag=1
        elif S_list[i]=='B':
            continue
        elif S_list[i]=='C':
            cnt+=1
        else:
            print('No')
            No_flag=1
            exit()
    elif cnt==2:
        if S_list[i]=='A':
            print('No')
            No_flag=1
            exit()
        elif S_list[i]=='B':
            print('No')
            No_flag=1
            exit()
        elif S_list[i]=='C':
            continue
        else:
            print('No')
            No_flag=1
            exit()
    else:
        print('No')
        No_flag=1
        exit()

if No_flag==0:
    print('Yes')