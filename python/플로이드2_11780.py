from math import inf

n = int(input())
m = int(input())

arr = [[-1 for i in range(n)] for j in range(n)]
arr1 = [[[] for i in range(n)] for j in range(n)]

for i in range(m):
    [a,b,c] = list(map(int, input().split()))
    if arr[a-1][b-1] == -1 or arr[a-1][b-1] > c:
        arr[a-1][b-1] = c
        arr1[a-1][b-1].append(a-1)
    


for i in range(n):
    for j in range(n):
        for k in range(n):
            if i == j:
                break
            if j == k:
                arr[j][k] = 0
            if arr[j][i] > 0 and arr[i][k] > 0:
                if arr[j][k] == -1 or arr[j][k] > arr[i][j]+arr[i][k]:
                    arr[j][k] = arr[j][i] + arr[i][k]
                    arr1[j][k] = arr1[j][i] + arr1[i][k]
                
for i in range(n):
    for j in range(n):
        if arr[i][j] == -1:
            arr[i][j] = 0
        print(arr[i][j], end = ' ')
    print('')

for i in range(n):
    for j in range(n):
        if arr[i][j] == 0:
            print("0")
        else:
            print(len(arr1[i][j])+1, end = ' ')
            for p in arr1[i][j]:
                print(p+1, end = ' ')
            print(j+1)