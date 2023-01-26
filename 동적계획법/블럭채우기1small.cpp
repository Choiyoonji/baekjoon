#include <bits/stdc++.h>
using namespace std;
int n[40];
int k;
int main(){
	n[0]=1;
	n[1]=1;
	n[2]=2;
	cin >> k;
	if(k<=2){
		cout << n[k];
		return 0;
	}
	for(int i=3;i<=k;i++){
		n[i]=n[i-2]+n[i-1];
	}
	cout << n[k];
	return 0;
}
