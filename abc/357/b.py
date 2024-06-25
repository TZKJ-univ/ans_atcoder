import numpy as np

s = input()
S = [(x) for x in list(str(s))]
komozi=0
omozi=0
for i in range(len(S)):
    if "a" <= str(S[i]) <= "z":
        komozi+=1
    else:
        omozi+=1

if komozi >= omozi:
    print(s.lower())
else:
    print(s.upper())