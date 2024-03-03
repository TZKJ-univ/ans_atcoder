N = int(input())
L=0
R=100
def check(x):
    if (x**3)+x > N:
        return True
    else:
        return False
    
while R-L>0.001:
    m=(L+R)/2
    if check(m):
        R=m
    else:
        L=m

print(R)