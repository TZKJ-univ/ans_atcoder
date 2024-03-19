s=input()
S=[(x) for x in list(str(s))]
if len(S)<3:
    print('No')
    exit()
if S[0]=='<':
    if S[1]=='=':
        for i in range(2,len(S)-1):
            if S[i]!='=':
                print('No')
                exit()
            else:
                continue
    else:
        print('No')
        exit()
else:
    print('No')
    exit()

if S[len(S)-1]=='>':
    print('Yes')
else:
    print('No')