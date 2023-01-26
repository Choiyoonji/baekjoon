#include <bits/stdc++.h>
using namespace std;
stack< pair<int,int> > s;
bool operator>=(pair<int,int> a, int b){
	return a.first>=b;
}
bool operator<(pair<int,int> a, int b){
	return a.first<b;
}
int m;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	cin >> m;
	s.push(pair<int,int>(m,1));
	cout << "0 ";
	for(int i=1;i<n;i++){
		cin >> m;
		if(s.top()<m){
			while(!s.empty()){
				if(s.top()>=m){
					cout << s.top().second << ' ';
					break; 
				}
				s.pop();
			}
			if(s.empty())cout << "0 ";
		}
		else {
			cout << s.top().second << ' ';
		}
		s.push(pair<int,int>(m,i+1));
	}
}
