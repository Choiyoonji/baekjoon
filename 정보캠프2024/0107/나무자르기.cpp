#include<iostream>
#include<algorithm>
using namespace std;

int k[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n, m;

    cin >> n >> m;

    for(int i = 0; i < n; i++){
        cin >> k[i];
    }

    sort(k,k+n);

    int f = 0, l = k[n-1], mid, ans = 0;
    long long int min = 1000000000000000;

    while(1){
        long long int s = 0;
        mid = (f + l)/2;
        
        if(f > l) break;

        for(int i = 0; i < n; i++){
            if(k[i] - mid > 0){
                s += k[i] - mid;
            }
        }

        if(s == m){
            ans = mid;
            break;
        }
        else{
            if(min > s - m && s > m){
                min = s - m;
                ans = mid;
            }

            if(s < m) l = mid-1;
            else f = mid+1;
        }

    }

    cout << ans;
}
