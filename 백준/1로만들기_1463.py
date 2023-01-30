n = int(input())
arr = [0, 0, 1, 1]
k = 4
while True:
    can = []
    if len(arr)-1 >= n:
        break
    if k % 3 == 0: 
        can.append(arr[k//3])
    if k % 2 == 0:
        can.append(arr[k//2])
    can.append(arr[k-1])
    can.sort()
    arr.append(can[0]+1)
    k += 1

print(arr[n])