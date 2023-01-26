from collections import deque

x = 0
y = 0

find = []
ind = [[0,1],[1,0],[-1,0],[0,-1]]

n, m = map(int,input().split())

arr = [list(input()) for _ in range(n)]
arr = [list(map(int,arr[i])) for i in range(n)]
num = 0

while True:
    if x == n-1 and y == m-1:
        break
    
    find = [[x+ind[0][0],y+ind[0][1]]]


print(num)
