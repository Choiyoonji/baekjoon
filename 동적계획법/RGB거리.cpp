#include <bits/stdc++.h>
#define MIN(a, b) (((a) < (b)) ? (a) : (b))
using namespace std;
int m[1010][4], w[1010][4], mn=1000000;
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&m[i][j]);
			if(i==0){
				w[i][j]=m[i][j];
			}
			else{
				switch(j){
					case 0:
						w[i][j]=m[i][j]+MIN(w[i-1][1],w[i-1][2]);
						break;
					case 1:
						w[i][j]=m[i][j]+MIN(w[i-1][0],w[i-1][2]);
						break;
					case 2:
						w[i][j]=m[i][j]+MIN(w[i-1][0],w[i-1][1]);
						break;
				}
			}
		}
	}
	for(int i=0;i<3;i++){
		if(mn>w[n-1][i]) mn=w[n-1][i];
	}
	printf("%d",mn);
}
