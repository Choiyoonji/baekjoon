n = int(input())
p = list(map(int,input().split()))
p.sort(reverse=True)
ans = 0
for i in range(n):
    ans += (i+1)*p[i]
print(ans)