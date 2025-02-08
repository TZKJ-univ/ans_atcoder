import numpy as np

a = list(map(int, input().split(' ')))
A1 = a[0]
A2 = a[1]
A3 = a[2]

for i in range (3):
    if A1 * A2 == A3:
        print("Yes")
        exit()
    elif A1 * A3 == A2:
        print("Yes")
        exit()
    elif A2 * A3 == A1:
        print("Yes")
        exit()
print("No")
