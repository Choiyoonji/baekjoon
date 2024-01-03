from math import inf
[n,m] = list(map(int,input().split()))
arr = [[-1 for i in range(n)] for j in range(n)]

for i in range(m):
    [a,b] = list(map(int, input().split()))
    arr[a-1][b-1] = 1
    arr[b-1][a-1] = 1


for i in range(n):
    for j in range(n):
        for k in range(j,n):
            if i == j:
                break
            if j == k:
                arr[j][k] = 0
            if arr[i][j] > 0 and arr[i][k] > 0:
                if arr[j][k] == -1 or arr[j][k] > arr[i][j]+arr[i][k]:
                    arr[j][k] = arr[i][j]+arr[i][k]
                    arr[k][j] = arr[i][j]+arr[i][k]
                
minn = inf
ans = 0
for i in range(n):
    su = sum(arr[i][:])
    if su < minn:
        minn = su
        ans = i+1
print(ans)