#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, m;
vector<int> k[1002];
bool v[1002];

void dfs(int now) {
	v[now] = 1;
	for (int i = 0; i < k[now].size(); i++){
		int next = k[now][i];
		if (!v[next]) dfs(next);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		k[u].push_back(v);
		k[v].push_back(u);
	}

	for (int j = 1; j <= n; j++) {
		sort(k[j].begin(), k[j].end());
	}
	
	int cnt = 0;
	for (int k = 1; k <= n; k++) {
		if (v[k]) continue;
		dfs(k);
		cnt++;
	}

	cout << cnt;
}