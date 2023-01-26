#include <stdio.h>
int m[101][101];
int x, y;
int f(int a, int b, int k){
	if(a==-1||b==-1||a==x||b==y){
		return 0;
	}
	if(m[a][b]!=k) return 0;
	if(m[a][b]==k){
		m[a][b]=2;
		return f(a-1,b,k)+f(a+1,b,k)+f(a,b-1,k)+f(a,b+1,k);
	}
}
int main(){
	scanf("%d %d",&x,&y);
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf("%d",&m[i][j]);
		}
	}
	int na=0, nb=0;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(m[i][j]!=2){
				if(m[i][j]==1) na++;
				if(m[i][j]==0) nb++;
				f(i,j,m[i][j]);
			}
		}
	}
	printf("%d %d",nb,na);
}
