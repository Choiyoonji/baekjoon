#include<iostream>
using namespace std;

int k[10001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        k[m] += 1;
    }

    for(int i = 1; i <= 10000;i++){
        if(k[i] > 0){
            for(int j = 0; j < k[i]; j++){
                cout << i << '\n';
            }
        }
    }
}