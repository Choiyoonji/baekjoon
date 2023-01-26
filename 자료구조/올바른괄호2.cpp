#include <bits/stdc++.h>
using namespace std;
stack<int> a;
int main(){
	string s;
	cin >> s;int i=0;
	for(;i<s.size();i++){
		if(s[i]=='(') a.push(1);
		else{
			if(!a.empty()) a.pop();
			else{
				cout << "bad";
				return 0;
			}
		}
	}
	if(a.empty()) cout << "good";
	else cout << "bad";
	return 0;
} 

