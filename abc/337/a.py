N=int(input())
XY=[list(map(int,input().split())) for _ in range(N)]

X_win=0
Y_win=0

for i in range(N):
        X_win+=XY[i][0]
        Y_win+=XY[i][1]
if X_win>Y_win:
    print('Takahashi')
elif X_win<Y_win:
    print('Aoki')
else:
    print('Draw')

