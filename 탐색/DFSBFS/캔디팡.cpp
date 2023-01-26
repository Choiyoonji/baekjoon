#include <stdio.h>
int m[7][7];
int dfs(int a, int b, int k){
	if(a==-1||b==-1||a==7||b==7){
		return 0;
	}
	if(m[a][b]!=k) return 0;
	if(m[a][b]==k) m[a][b]=0;
	return 1+dfs(a-1,b,k)+dfs(a+1,b,k)+dfs(a,b-1,k)+dfs(a,b+1,k);
}
int main(){
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			scanf("%d",&m[i][j]);
		}
	}
	int n=0, d;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			d=0;
			if(m[i][j]!=0) d=dfs(i,j,m[i][j]);
			if(d>=3) n++;
		}
	}
	printf("%d",n);
}
