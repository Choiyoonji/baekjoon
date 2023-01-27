from collections import deque

def parr(ar):
    for i in ar:
        print(*i)
m, n, k = map(int,input().split())
arr = [[1]*n]*m
for _ in range(k):
    co = list(map(int,input().split()))
    for j in range(co[0],co[2]):
        for i in range(co[1],co[3]):
            arr[i][j] = 0
    parr(arr)

area = []

while sum(sum(arr,[])):
    s = 0
    for i in range(n):
        for j in range(m):
            if arr[i][j]:
                s += 1
                arr[i][j] = 0
            else:
                break
    if s:
        area.append(s)
        
print(len(area))
print(*sorted(area))