#include <bits/stdc++.h>
using namespace std;
int m[21]={0,1,2,2,4,4,4,8,8,8,8,16,16,16,16,16,32,32,32,32,32};
int n=0;
int main()
{
    int k;
    cin >> k;
    for(int i=1;i<=k;i++){
        n+=m[i];
    }
    cout << n;
    return 0;
}
