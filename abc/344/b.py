import time

start_time = time.time()
timeout = 0.000015# 応答時間の上限（秒）
A=[]

while True:
    a=input()
    if a!='0':
        A.append(a)
    else:
        A.append(a)
        break

for i in range(len(A)-1,-1,-1):
    print(A[i])