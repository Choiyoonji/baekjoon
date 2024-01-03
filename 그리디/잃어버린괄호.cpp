#include <bits/stdc++.h>
using namespace std; 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    int result = 0;
    int n = 0;
    bool m = false;

    cin >> s;

    for(int i = 0; i < s.length(); i++){
        int c = int(s[i]);
        if(c >= 48 && c <= 57){
            n *= 10;
            n += (c - 48);
        }
        else{
            if(m){
                result -= n;
            }
            else{
                result += n;
            }
            if(c == 45){
                m = true;
            }
            n = 0;
        }
    }

    if(m){
        result -= n;
    }
    else{
        result += n;
    }

    cout << result;
}
