#include<bits/stdc++.h>
using namespace std;
int n[22];
int ff(int a){
    if(a==1) return 1;
    return ff(a-1)*2+1;
}
void f(char a, char b, char c, int n){
    if(n==1)
        cout << "move disk " << n << ' ' << a << "->" << c << '\n';
    else{
        f(a,c,b,n-1);
        cout << "move disk " << n << ' ' << a << "->" << c << '\n';
        f(b,a,c,n-1);
    }
}
int main(){
    int k;
    cin >> k;
    cout << ff(k) << '\n';
    f('A','B','C',k);
    return 0;
}
