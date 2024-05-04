import numpy as np
s=input()
S=[(x) for x in list(str(s))]


if int(S[3])==1 or int(S[3])==2:
    if 0<=int(S[4])<=9:
        if 0<=int(S[5])<=9:
            print('Yes')
            exit()
if int(S[3])==0:
    if 0<=int(S[4])<=9:
        if 0<int(S[5])<=9:
            print('Yes')
            exit()
if int(S[3])==3:
    if int(S[4])==1:
        if int(S[5])!=6:
            print('Yes')
            exit()
        else:
            print('No')
            exit()
    elif 0<=int(S[4])<=4:
        if 0<=int(S[5])<=9:
            print('Yes')
            exit()

print('No')