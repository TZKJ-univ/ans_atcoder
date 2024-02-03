import numpy as np
import bisect
import collections

S=input()
s=collections.Counter(S)

s_sorted=s.most_common()
a=int(s_sorted[0][1])
#print(a)
ans=s_sorted[0][0]
if len(S)==1:
    print(S)
    exit()
for i in range(1,len(S)):
    if s_sorted[i][1]==a:
        if ord(s_sorted[i][0])<ord(ans):
            ans=s_sorted[i][0]
        else:
            continue
    else:
        print(ans)
        exit()

print(ans)