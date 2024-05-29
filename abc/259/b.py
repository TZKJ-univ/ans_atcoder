import numpy as np

a, b, c = map(int, input().split())

x = a
y = b

rr = x**2 + y**2
# print(rr)
if rr == 0:
    r = 0
else:
    r = np.sqrt(rr)
    
if r == 0:
    print(0, 0)
    exit()

sita = np.arcsin(y / r)


# print(sita*180/np.pi, r, x, y)

ans = r*(np.cos(np.radians((sita*180/np.pi+c))) + np.sin(np.radians((sita*180/np.pi+c)))*1j)
# print(ans)

print(ans.real, (ans.imag))