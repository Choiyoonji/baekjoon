#include<iostream>
#include<algorithm>
using namespace std;

int n[100001], m;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

	int k, l;
	cin >> k;

	for(int i=0;i<k;i++){
		cin>>n[i];
	}

	sort(n,n+k);

	cin >> l;

	for(int i=0;i<l;i++){
		cin>>m;
		int mx=k-1;
		int mid;
		int mn=0;
		while(1){
			mid=(mx+mn)/2;
			if(mn>mx){
				cout << "0" << '\n';
				break;
			}
			else{
				if(n[mid]==m) {
					cout << "1" << '\n';
					break;
				}
				else{
					if(n[mid]>m) mx=mid-1;
					else mn=mid+1;
				}	
			}
		}
	}

	return 0;
}