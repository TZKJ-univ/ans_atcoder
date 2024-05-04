s=input()
S=[(x) for x in list(str(s))]
A=[]
for i in range(len(S)):
    for j in range(len(S)-1,-1,-1):
        A.append(S[i:j+1])
print(A)
a=list(set(A))
print(len(a))