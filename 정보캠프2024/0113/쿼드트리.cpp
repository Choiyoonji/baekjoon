#include <iostream>
using namespace std;

int n;
string map[64];

void qt(int x, int y, int size){

    for (int i = y; i < y+size; i++){
        for (int j = x; j < x + size; j++){
            if(map[i][j] != map[y][x]){
                cout << '(';
                qt(x, y, size / 2);
                qt(x+size/2, y, size / 2);
                qt(x, y+size/2, size / 2);
                qt(x+size/2, y+size/2, size / 2);
                cout << ')';
                return;
            }
        }
    }

    cout << map[y][x];
    
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(); cout.tie();

    cin >> n;

    for (int i = 0; i < n;i++){
        cin >> map[i];
    }

    qt(0, 0, n);

    return 0;
}
