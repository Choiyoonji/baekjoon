#include<bits/stdc++.h>
using namespace std;
void f(char a, char b, char c, int n){
    if(n==1) cout << "Disk " << n << " : " << a << " to " << c << '\n';
    else{
        f(a,c,b,n-1);
        cout << "Disk " << n << " : " << a << " to " << c << '\n';
        f(b,a,c,n-1);
    }
}
int main(){
    int k;
    cin >> k;
    f('A','B','C',k);
    return 0;
}
