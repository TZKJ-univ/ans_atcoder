
N=int(input())
S=[]
T=[]
I=[]
ST={}
SI={}
max_key = ""
max_value = 0
for i in range(N):
    s,t = input().split()
    I.append(i)
    S.append(s)
    T.append(t)
    T[i] = int(T[i])
    if ST.setdefault(S[i],T[i]) > max_value:
        max_key = S[i]
        max_value = T[i]
    SI.setdefault(S[i],I[i])


#print(max_key)
print(SI[max_key]+1)