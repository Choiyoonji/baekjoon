n = int(input())
k = int(input())

arr = [0 for _ in range(n*n+1)]

for i in range(n):
    for j in range(n):
        arr[(i+1)*(j+1)] += 1

m = 1
cnt = 0
ans = 0
while True:
    if cnt >= k:
        break
    ans = m
    cnt += arr[m]
    m += 1
    
print(ans)