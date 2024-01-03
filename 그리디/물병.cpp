#include <bits/stdc++.h>
using namespace std; 
queue<int> s;
int main(){
    int n, k;
    int e = 1;
    int cnt= 0, b = 0;
    cin >> n >> k;

    while(n > 0){
        if(n % 2){
            s.push(e);
            cnt += 1;
        }
        n /= 2;
        e *= 2;
    }

    if(cnt > k){
        int f = s.front();
        s.pop();
        while(!s.empty()){
            int c = s.front();
            s.pop();
            cnt -= 1;
            b += c - f;
            f = c * 2;
            if(cnt <= k){
                break;
            }
        }
    }
    if(cnt > k){
        cout << -1;
    }
    else{
        cout << b;
    }
}
