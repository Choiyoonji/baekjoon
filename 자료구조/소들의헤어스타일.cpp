#include <bits/stdc++.h>
using namespace std;
stack<int> s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long int n, t = 0, tmp;
    cin >> n;
    cin >> tmp;
    s.push(tmp);
    for(int i=1;i<n;i++){
        cin >> tmp;
        if(s.top()>tmp){
            t+=s.size();
            s.push(tmp);
        }
        else{
            while(!s.empty()){
                if(s.top()>tmp){
                    t+=s.size();
                    s.push(tmp);
                    break;
                }
                s.pop();
            }
            if(s.empty()) s.push(tmp);
        }
    }
    cout << t;
}
