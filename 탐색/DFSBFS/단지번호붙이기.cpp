#include <bits/stdc++.h>
using namespace std;
int n, o=1, mx;
int m[26][26];
int v[26][26];
int a[1000];
bool cmp(int a, int b){
	return a<b;
}
int dfs(int x, int y){
	if(y==-1||x==n||y==n){
		return 0;
	}
	if(m[x][y]==0||v[x][y]) return 0;
	v[x][y]=1;
	if(m[x][y]==1){
		m[x][y]=o;
		return dfs(x-1,y)+dfs(x+1,y)+dfs(x,y-1)+dfs(x,y+1);
	}
}
int main(){
	cin >> n;
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		for(int j=0;j<n;j++){
			m[i][j]=(int)s[j]-48;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(v[i][j]!=1){
				if(m[i][j]!=0){
					dfs(i,j);
					o++;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[m[i][j]]++;
			if(mx<m[i][j]) mx=m[i][j];
		}
	}
	cout << mx << '\n';
	sort(a+1,a+mx+1,cmp);
	for(int i=1;i<=mx;i++){
		cout << a[i] << '\n';
	}
}
