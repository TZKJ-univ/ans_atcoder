N=int(input())
cnt=-1
i=0
if N%2!=0:
    print(0)
else:
    bin_N=bin(N)
    while(bin_N[-i]=='0'):
        cnt+=1
        i+=1
    print(cnt)

