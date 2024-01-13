#include <iostream>
#include<queue>
using namespace std;

queue<int> x, y;
int a[1001][1001];
int m, n, d;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
            cin >> a[i][j];
			if(a[i][j] == 1) x.push(i), y.push(j);
		}
	}

	if(x.size() == m*n){
        cout << '0';
		return 0;
	}

	while(!x.empty() && !y.empty()){
		if(a[x.front()-1][y.front()]==0 && x.front()!=1){
			a[x.front()-1][y.front()] = a[x.front()][y.front()] + 1;
			x.push(x.front() - 1), y.push(y.front());
		}
		if(a[x.front()][y.front()-1]==0 && y.front()!=1){
			a[x.front()][y.front()-1] = a[x.front()][y.front()] + 1;
			x.push(x.front()), y.push(y.front() - 1);
		}
		if(a[x.front()+1][y.front()]==0 && x.front()!=m){
			a[x.front()+1][y.front()] = a[x.front()][y.front()] + 1;
			x.push(x.front()+1), y.push(y.front());
		}
		if(a[x.front()][y.front()+1]==0 && y.front()!=n){
			a[x.front()][y.front()+1] = a[x.front()][y.front()] + 1;
			x.push(x.front()), y.push(y.front() + 1);
		}
		x.pop(), y.pop();
	}

	for(int i=1; i<=m; i++){
		for(int j=1; j<=n; j++){
			if(a[i][j] == 0){
				cout << '-1';

				return 0;
			}
			else{
				if(a[i][j] > d) d = a[i][j];
			}
		}
	}

    cout << d-1;

    return 0;
}
