x = 0
y = 0

find = []
ind = [[0,1],[1,0],[-1,0],[0,-1]]

def bfs(x,y,n,m):
    global num
    if x == n-1 and y == m-1:
        return num
    if x < 0 or x >= n or y < 0 or y >= m:
        return num
    print(x,y)
    if arr[x][y]:
        arr[x][y] = 0
        _ = bfs(x+ind[0][0],y+ind[0][1],n,m)+bfs(x+ind[1][0],y+ind[1][1],n,m)+bfs(x+ind[2][0],y+ind[2][1],n,m)+bfs(x+ind[3][0],y+ind[3][1],n,m)
        num += 1

    return num

n, m = map(int,input().split())

arr = [list(input()) for _ in range(n)]
arr = [list(map(int,arr[i])) for i in range(n)]
num = 0
print(n,m)
print(arr)
print(bfs(0,0,n,m))




