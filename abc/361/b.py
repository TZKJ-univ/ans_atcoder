import numpy as np
a, b, c, d, e, f = map(int, input().split())
g, h, i, j, k, l = map(int, input().split())

first_max_x = max(a,d)
first_min_x = min(a,d)
first_max_y = max(b,e)
first_min_y = min(b,e)
first_max_z = max(c,f)
first_min_z = min(c,f)

second_max_x = max(g,j)
second_min_x = min(g,j)
second_max_y = max(h,k)
second_min_y = min(h,k)
second_max_z = max(i,l)
second_min_z = min(i,l)

if (first_max_x <= second_min_x or first_min_x >= second_max_x) or(first_max_y <= second_min_y or first_min_y >= second_max_y) or(first_max_z <= second_min_z or first_min_z >= second_max_z):
    print("No")
else:
    print("Yes")
