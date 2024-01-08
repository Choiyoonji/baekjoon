#include <iostream>
#include <queue>
using namespace std;

int a[1010][1010], b[1010], d[1010];
int n, m, v;
queue<int> q;

void dfs(int k){
    cout << k << ' ';
    d[k] = 1;
    for (int i = 1; i <= n; i++){
        if (a[k][i] == 1 && d[i] != 1){
            dfs(i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> v;

    for (int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;

        a[x][y] = 1;
        a[y][x] = 1;
    }

    dfs(v);
    cout << '\n';
    q.push(v);

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

    return 0;
}