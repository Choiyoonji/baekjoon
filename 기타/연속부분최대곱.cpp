#include<bits/stdc++.h>
using namespace std;
int main(){
    double n, m=0.000, s=1;
    cin >> n;
    for(int i=0;i<n;i++){
        if(s<1) s=1;
        double t;
        cin >> t;
        s*=t;
        if(i==0||m<s) m=s;
    }
    cout << fixed;
    cout.precision(3);
    cout << m;
}
