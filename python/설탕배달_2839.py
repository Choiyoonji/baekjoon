n = int(input())
rem = n % 5
n5 = (n - rem) / 5
n3 = 0
ans = -1
temp = rem
while True:
    if n5 < 0:
        ans = -1
        break
    
    rem = temp % 3
    n3 += (temp - rem) / 3
    
    if rem == 0:
        ans = n5 + n3
        break
    
    n5 -= 1
    rem += 5
    temp = rem
    
print(int(ans))