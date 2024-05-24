import numpy as np
from collections import deque

N, Q = map(int, input().split())
s = input()
S = [(x) for x in list(str(s))]

Query = deque()

start=0
end=len(S)-1

# print(start, end)

for i in range(Q):
    Query.append(list(map(int, input().split(' '))))
    if Query[i][0] == 1:
        idou = Query[i][1] % N
        if idou == 0:
            continue
        else:
            if start < idou:
                start = N - idou + start
                if idou > end:
                    end = N - idou + end
                else:
                    end = end - idou
            else:
                start = start - idou
                if idou > end:
                    end = N - idou + end
                else:
                    end = end - idou
        # print('start, end', start, end) 
    else:
        syuturyoku = ((Query[i][1] + start) % N) -1
        print(S[syuturyoku])
        
    # if Query[i][0] == 1:
    #     for j in range(Query[i][1]):
    #         S.appendleft(S.pop())
    # else:
    #     print(S[Query[i][1]-1])

# print(S)
# print(Query)


