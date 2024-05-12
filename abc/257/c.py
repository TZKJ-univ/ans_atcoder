import numpy as np
import bisect
def find_ge(a, x):   # 探索したい数値以上のうち最小の数値を探索
    'Find leftmost item greater than or equal to x'
    i = bisect.bisect_left(a, x)
    if i != len(a):
        return i
    return -1
def find_le(a, x):   # 探索したい数値以下のうち最大の数値を探索
    'Find rightmost value less than or equal to x'
    i = bisect.bisect_right(a, x)
    if i:
        return i
    return -1
N = int(input())
s = input()
ss=[int(x) for x in list(str(s))]
S=[]
for i in range(len(ss)):
    S.append(ss[i])
W=[]
# print(S)
w=list(map(int,input().split()))
W_S=[]
W_1=[] 
W_0=[]
if N==1:
    print(1)
    exit()
for i in range(len(w)):
    W.append(w[i])
    W_S.append([w[i],S[i]])
    if S[i]==1:
        W_1.append(w[i])
    else:
        W_0.append(w[i])
        
# print(W_S)
sorted_W_1=sorted(W_1)
sorted_W_0=sorted(W_0,reverse=True)
sorted_W_0_gyaku=sorted(W_0)
# print(sorted_W_1)
sorted_W_0_1=[]
sorted_W_00=sorted_W_0.copy()
sorted_W_11=sorted_W_1.copy()
# for i in range(1,len(sorted_W_0)+len(sorted_W_1)+1):
#     if i%2==0:
#         sorted_W_0_1.append(sorted_W_0.pop(0))
#     else:
#         sorted_W_0_1.append(sorted_W_1.pop(0))
    
# print(sorted_W_0_1)
ans_final=2*(10**5)+1
# print(sorted_W_00)
# print(sorted_W_11)
if len(sorted_W_00)==0:
    print(N)
    exit()
if len(sorted_W_11)==0:
    print(N)
    exit()

# print(sorted_W_00)

# aa=find_ge(sorted_W_11,sorted_W_00[0]+1)
# if aa != -1:
#     ans_final=min(aa,ans_final)
# else:
#     ans_final=len(sorted_W_11)

i=0

while i<len(sorted_W_00):
    # print(i)
    j=sorted_W_00[i]+1
    ans=i
    pin=find_ge(sorted_W_11,j)
    if pin==-1:
        ans+=len(sorted_W_11)
        # print(len(sorted_W_11))
    else:
        ans+=pin
    ans_final=min(ans,ans_final)
    # print(pin)
    i+=1
    # print(ans)

print(N-ans_final)