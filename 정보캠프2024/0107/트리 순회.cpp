#include<iostream>
#include<vector>
#include<utility>
using namespace std;

vector<pair<char, char>> v(26);

void pre(char node){
	if(node == '.') return;
	
	cout << node;
	pre(v[node].first);
	pre(v[node].second);
}

void in(char node){
	if(node == '.') return;
	
	in(v[node].first);
	cout << node;
	in(v[node].second);
}

void post(char node){
	if(node == '.') return;
	
	post(v[node].first);
	post(v[node].second);
	cout << node;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int n;
	cin >> n;
	
	char rt, l, r;
	for(int i = 0; i < n; i++){
		cin >> rt >> l >> r;		
		v[rt].first = l;
		v[rt].second = r;
	}
	
	pre('A');
	cout << "\n";
	
	in('A');
	cout << "\n";
	
	post('A');
	
	return 0;
}