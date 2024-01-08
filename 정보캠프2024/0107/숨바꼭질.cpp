#include<iostream>
#include<queue>
using namespace std;

int n, k;
bool v[20000001];
queue<> q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> k;
    
    q.push();

    while (!q.empty()){
        int num = q.front();
        q.pop();
        b[num] = 1;
        cout << num;

        for (int i = 1; i <= n; i++){
            if (a[num][i] == 1 && b[i] != 1){
                q.push(i);
                b[i]=1;
            }
        }
    }
  
}




from collections import deque

[n,k] = list(map(int,input().split()))
flag = [True for _ in range(20000000)]

t = 0
x = deque([[n+1,1],[n-1,1],[n*2,1]])
while True:
    if n == k:
        break
    if len(x) == 0:
        break
    p = x.popleft()
    n = p[0]
    t = p[1]
    if n < 0 or n > 2000000:
        continue
    if flag[n+1]:
        x.append([n+1,t+1])
        flag[n+1] = False
    if flag[n-1]:
        x.append([n-1,t+1])
        flag[n-1] = False
    if flag[n*2]:
        x.append([n*2,t+1])
        flag[n*2] = False

print(t)