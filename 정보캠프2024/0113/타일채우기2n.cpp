#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int num;
int n[1010];

int calc(int num){
    if(n[num] != 0) return n[num];
    n[num] = (calc(num-1)+ (calc(num-2)))%10007;
    return n[num];
}

int main() {
    n[0] = 1;
    n[1] = 1;
	cin >> num;
	cout << calc(num) << endl;
    return 0;
}