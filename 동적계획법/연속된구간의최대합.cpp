#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m=0, s=0;
    cin >> n;
    for(int i=0;i<n;i++){
        if(s<0) s=0;
        int t;
        cin >> t;
        s+=t;
        if(i==0||m<s) m=s;
    }
    cout << m;
}
