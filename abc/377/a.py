import numpy as np
S = input()
a = 0
b = 0
c = 0

for i in range(len(S)):
    if S[i] == "A":
        a += 1
    elif S[i] == "B":
        b += 1
    elif S[i] == "C":
        c += 1
    else:
        pass

if a == 1 and b == 1 and c == 1:
    print("Yes")
else:
    print("No")
        
    