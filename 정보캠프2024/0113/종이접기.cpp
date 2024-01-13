#include<iostream>
using namespace std;

bool check(string s, int f, int l){
    if(f >= l) return true;
    int first = f, last = l;
    while(first < last){
        if(s[first] == s[last]) return false;
        first += 1;
        last -= 1;
    }
    return check(s, f, last - 1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        bool tf = check(s, 0, s.length()-1);
        
        if(tf) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    
    return 0;
}