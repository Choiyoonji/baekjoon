#include <bits/stdc++.h>
using namespace std;
int c[16];
int n; 
int ans = 0;

bool f(int r){
	for(int i = 0; i < r; i++){ 
		if(c[r] == c[i] || r == abs(c[r] - c[i]) + i){
			return false; 
		}
	}
	return true; 
}

void DFS(int r){
	if(r == n){
		ans += 1; 
		return; 
	}

	for(int i = 0; i < n; i++){
		c[r] = i; 
		if(f(r)){ 
			DFS(r + 1); 
		}
	}
}

int main(){
    cin >> n;  

	DFS(0);

	cout << ans; 
}