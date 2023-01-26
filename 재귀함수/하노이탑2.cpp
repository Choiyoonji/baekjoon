#include<bits/stdc++.h>
using namespace std;
int n[22];
long long int f(int a){
    if(a==1) return 1;
    return f(a-1)*2+1;
}
int main(){
    int k;
    cin >> k;
    n[1]=1;
    cout << f(k);
    return 0;
}
