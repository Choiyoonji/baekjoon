import sys
sys.setrecursionlimit(100000)

memo={1:1,2:2}

def f(x) :
    if x in memo :
        return memo[x]
    if x<0 :
        return 0
    memo[x]=(f(x-1)+f(x-2))%10007
    return memo[x]
    

n=int(input())
print(f(n))
