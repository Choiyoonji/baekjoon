[n,k] = list(map(int,input().split()))

ans = 0
s = 0
b = 10000
cnt = 0
h = 2 ** k

while True:
    if b <= k:
        break
    if n > h:
        if n % 2:
            b = (n-1) // 2
            b += 1
            if b <= k:
                break
            ans += 2**cnt
        else:
            b = n // 2
    else:
        break
    n = b
    cnt += 1
    
print(ans)