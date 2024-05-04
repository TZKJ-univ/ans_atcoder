import numpy as np
import collections
s=input()
S=[(x) for x in list(str(s))]
s_cnt=collections.Counter(S)
ss=list(s_cnt.keys())
s_ans=[0]*(101)
# print(len(ss))
# print(len(s_ans))
# print(s_cnt)
for i in range(len(ss)):
    s_ans[s_cnt[ss[i]]]+=1
    # print(s_cnt)
    # print(s_ans)
    if s_ans[s_cnt[i]]>2:
        print("No")
        exit()

for i in range(len(s_ans)):
    if int(s_ans[i])!=2:
        if int(s_ans[i])!=0:
            # print(s_ans[i])
            print("No")
            exit()
        
# # print(s_cnt)
# print(s_ans)
print("Yes")