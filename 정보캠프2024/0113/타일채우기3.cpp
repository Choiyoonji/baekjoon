#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n[31];
int calc(int num){
    if(n[num] != 0) return n[num];
    n[num] = calc(num-2) * 3 + calc(num - 4) * 2;
    return n[num];
}   

int main() {
    n[0] = 1;
    n[1] = 1;
    n[2] = 3;
    n[3] = 1;
    n[4] = 11;
    int num;
	cin >> num;

    if(num%2 == 0) cout << calc(num) << endl;
	else cout << 0;
    return 0;
}