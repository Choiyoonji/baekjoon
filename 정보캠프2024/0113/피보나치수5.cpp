#include<iostream>
using namespace std;

long long n[92];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num;
    cin >> num;

    n[0] = 0LL;
    n[1] = 1LL;

    for(int i = 2; i <= num; i++){
        n[i] = n[i-2] + n[i-1];
    }

    cout << n[num];
    return 0;
}