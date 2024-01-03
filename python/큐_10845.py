from collections import deque
import sys

n = int(sys.stdin.readline().rstrip())
deq = deque([])

for i in range(n):
    com = sys.stdin.readline().rstrip()
    com = com.split()
    if len(com) == 2:
        if com[0] == "push":
            deq.append(com[1])
    else:
        co = com[0]
        if co == "pop":
            if len(deq):
                print(deq.popleft())
            else:
                print(-1)
        elif co == "size":
            print(len(deq))
        elif co == "empty":
            if len(deq):
                print(0)
            else:
                print(1)
        elif co == "front":
            if len(deq):
                k = deq.popleft()
                print(k)
                deq.appendleft(k)
            else:
                print(-1)
        elif co == "back":
            if len(deq):
                k = deq.pop()
                print(k)
                deq.append(k)
            else:
                print(-1)