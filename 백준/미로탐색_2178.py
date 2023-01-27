from collections import deque


ind = [[0,1],[1,0],[-1,0],[0,-1]]

n, m = map(int,input().split())

arr = [list(input()) for _ in range(n)]
arr = [list(map(int,arr[i])) for i in range(n)]

xy = deque([[0,0,1]])
path = {}
for i in range(n):
    for j in range(m):
        path[(i,j)] = 999999

    
while True:
    p = xy.popleft()
    x = p[0]
    y = p[1]
    
    if x < 0 or y < 0 or x >= n or y >= m:
        continue
    
    if arr[x][y] == 1:
        arr[x][y] = -1
        if path[(x,y)] > p[2]:
            path[(x,y)] = p[2]
        if x == n-1 and y == m-1:
            break
        for i in range(len(ind)):
            xy.append([x+ind[i][0],y+ind[i][1],p[2]+1])
            

print(path[(n-1,m-1)])