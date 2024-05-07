A,B=map(int,input().split())

def gcd(a,b):
    while b:
        a,b=b,a%b
    return a

print(gcd(A,B))