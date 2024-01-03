from collections import deque
t = int(input())

ind = [[0,1],[1,0],[-1,0],[0,-1]]

for _ in range(t):
    [m, n, k] = list(map(int, input().split()))
    arr = [[0 for i in range(m)] for j in range(n)]
    for i in range(k):
        [y, x] = list(map(int, input().split()))
        arr[x][y] = 1
    
    deq = deque([])
    ans = 0
    while sum(sum(arr,[])):
        for i in range(n):
            for j in range(m):
                if arr[i][j]:
                    arr[i][j] = 0
                    ans += 1
                    for k in range(len(ind)):
                        deq.append([i+ind[k][0],j+ind[k][1]])

                    while True:
                        if len(deq) == 0:
                            break
                        p = deq.popleft()
                        x = p[0]
                        y = p[1]
                        if x < 0 or y < 0 or x >= n or y >= m:
                            continue
                        
                        if arr[x][y]:
                            arr[x][y] = 0
                            for k in range(len(ind)):
                                deq.append([x+ind[k][0],y+ind[k][1]])
                                
        print(ans)
