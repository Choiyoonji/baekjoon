#include<bits/stdc++.h>
using namespace std;
int m[110][110];
int main(){
    int a, b, c, d, n=0;
    for(int i=0;i<4;i++){
        cin >> a >> b >> c >> d;
        for(int j=a;j<c;j++){
            for(int k=b;k<d;k++){
                m[j][k]=1;
            }
        }
    }
    for(int i=0;i<105;i++){
        for(int j=0;j<105;j++){
            n+=m[i][j];
        }
    }
    cout << n;
}
