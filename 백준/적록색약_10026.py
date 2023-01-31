from collections import deque

n = int(input())

arr = [list(input()) for _ in range(n)]
arr = [arr[i] for i in range(n)]

arrb = [[arr[j][i] == 'B' for i in range(n)] for j in range(n)]
arrr = [[arr[j][i] == 'R' for i in range(n)] for j in range(n)]
arrg = [[arr[j][i] == 'G' for i in range(n)] for j in range(n)]
arrrg = [[arr[j][i] == 'R' or arr[j][i] == 'G' for i in range(n)] for j in range(n)]
areas = []
areas.append(arrb)
areas.append(arrr)
areas.append(arrg)
areas.append(arrrg)

ans = [0,0,0,0]

deq = deque([])
ind = [[0,1],[1,0],[-1,0],[0,-1]]

for q in range(4):
    arry = areas[q]
    while any(sum(arry,[])):
        for i in range(n):
            for j in range(n):
                if arry[i][j]:
                    ans[q] += 1
                    arry[i][j] = False
                    for k in range(len(ind)):
                            deq.append([i+ind[k][0],j+ind[k][1]])
                    while True:
                            if len(deq) == 0:
                                break
                            p = deq.popleft()
                            x = p[0]
                            y = p[1]
                            if x < 0 or y < 0 or x >= n or y >= n:
                                continue
                            if arry[x][y]:
                                arry[x][y] = 0
                                for k in range(len(ind)):
                                    deq.append([x+ind[k][0],y+ind[k][1]])
                                    
print(ans[0]+ans[1]+ans[2],ans[0]+ans[3])