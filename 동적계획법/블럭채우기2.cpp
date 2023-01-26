#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    long long int n=1;
    cin >> k;
    if(k%3!=0) cout << "0";
    else{
        for(int i=0;i<k/3;i++){
            n*=2;
            n%=100000007;
        }
        cout << n;
    }
    return 0;
}
