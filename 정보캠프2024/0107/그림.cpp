#include <iostream>
using namespace std;

int visit[505][505], n, m, arr[505][505], vc;

void dfs(int y, int x){
    if(y >= 1 && y <= n && x >= 1 && x <= m){
        visit[y][x] = 1;
        vc++;

        int d[4][2] = {{1,0},{0,1},{-1,0},{0,-1}};
        for(int i=0; i<4; i++){
            int ny = y + d[i][0];
            int nx = x + d[i][1];
            if(arr[ny][nx] == 1 && !visit[ny][nx])
                dfs(ny,nx);
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> arr[i][j];
        }
    }

    int cnt = 0, ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(arr[i][j] == 1 && !visit[i][j]){
                vc = 0;
                dfs(i,j);
                cnt++;
                ans = max(ans, vc);
            }
        }
    }

    cout << cnt << '\n' << ans;
}
