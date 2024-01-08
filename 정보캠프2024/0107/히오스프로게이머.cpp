#include<iostream>
#include<algorithm>
using namespace std;

int x[1000001];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, k;

    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> x[i];
    }

    sort(x, x+n);

    long long min = x[0], max = x[0] + k;
    long long mid = (min + max)/2;
    long long t = 0;    

    while(1){
        long long sum = 0;
        if(min > max) break;
        for(int i = 0; i < n; i++){
            if(mid - x[i] > 0)  sum += mid - x[i];
        }
        if(sum == k){
            t = mid;
            break;
        }
        else if(sum < k){
            if(t < mid) t = mid;
            min = mid + 1;
        }
        else max = mid - 1;
        mid = (min + max)/2;
    }
    cout << t;
}