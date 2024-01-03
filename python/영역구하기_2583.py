from collections import deque

m, n, k = map(int,input().split())
arr = [[1 for j in range(n)] for i in range(m)]
for _ in range(k):
    co = list(map(int,input().split()))
    for i in range(co[1],co[3]):
        for j in range(co[0],co[2]):
            arr[i][j] = 0

area = []
deq = deque([])
ind = [[0,1],[1,0],[-1,0],[0,-1]]

while sum(sum(arr,[])):
    for i in range(m):
        for j in range(n):
            s = 0
            if arr[i][j]:
                s += 1
                arr[i][j] = 0
                for k in range(len(ind)):
                    deq.append([i+ind[k][0],j+ind[k][1]])
                while True:
                    if len(deq) == 0:
                        break
                    p = deq.popleft()
                    x = p[0]
                    y = p[1]
                    
                    if x < 0 or y < 0 or x >= m or y >= n:
                        continue
                    if arr[x][y]:
                        arr[x][y] = 0
                        s += 1
                        for k in range(len(ind)):
                            deq.append([x+ind[k][0],y+ind[k][1]])
                if s:
                    area.append(s)
        
print(len(area))
print(*sorted(area))