#include<iostream>
#include<vector>
using namespace std;

int n;
vector<int> k[100001];
bool v[100001];
int arr[100001];

void dfs(int now) {
	v[now] = 1;
	for (int i = 0; i < k[now].size(); i++){
		int next = k[now][i];
		if (!v[next]){
            arr[next] = now;
            dfs(next);
        }
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for(int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;
        k[u].push_back(v);
        k[v].push_back(u);
    }

    dfs(1);

    for(int i = 2; i <= n;i++) cout << arr[i] << "\n";
}