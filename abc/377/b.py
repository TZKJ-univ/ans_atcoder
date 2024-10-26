import numpy as np

HW = np.full((8, 8), dtype=str, fill_value='.')
ans = 64
checkx = np.full(8, dtype=bool, fill_value=False)
checky = np.full(8, dtype=bool, fill_value=False)

for i in range (8):
    HW[i] = list(input())
    for j in range(8):
        if HW[i][j] == '#':
            if checkx[j] == False:
                checkx[j] = True
            if checky[i] == False:
                checky[i] = True
                
checky_sum = np.sum(checky)
checkx_sum = np.sum(checkx)

ans -= checky_sum * 8
ans -= checkx_sum * 8
ans += checky_sum * checkx_sum

# print(checky)
# print(checkx)
print(ans)