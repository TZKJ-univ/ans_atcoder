import bisect
import math
def find_le(a, x):   # 探索したい数値以下のうち最大の数値を探索
    'Find rightmost value less than or equal to x'
    i = bisect.bisect_right(a, x)
    if i:
        return (i-1)
    raise ValueError

N=int(input())
if N==1 or N==0:
    print(0)
    exit()

if N<1000001:
    MAX=N
else:
    MAX=(10**18)
def primeNumberCreate():
    primeList = [2]  # 2以下の素数リストを作成
    maxNumber = int(math.pow(MAX,1/3)) # MAX以下の数字をチェック
    #print(maxNumber)
    for x in range(3, maxNumber):
        for y in primeList:
            if x % y == 0:
                break
        else:
            primeList.append(x)  # 割り切れるものがなければリストに追加
    return primeList
primeNumbers = primeNumberCreate()
#print(primeNumbers)
sum_num=0
k=[0]*len(primeNumbers)
for i in range(len(primeNumbers)):
    k[i] = primeNumbers[i]**3

#print(k)

for i in range(len(primeNumbers)-1):
    p = primeNumbers[i]
    K=[k*p for k in k]
    #print(K)
    max_k = find_le(K, N)
    if max_k<i:
        max_k=i
    sum_num+=(max_k-(i))
    
print(sum_num)