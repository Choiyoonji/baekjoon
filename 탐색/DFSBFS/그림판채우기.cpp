#include <stdio.h>
int m[11][11];
int v[11][11];
char t[11];
int x, y;
void dfs(int a, int b){
	if(a<0||b<0||a==10||b==10||m[a][b]==2||v[a][b]==1){
		return ;
	}
	v[a][b]=1;
	if(m[a][b]==0) m[a][b]=1;
	dfs(a-1,b);
	dfs(a,b-1);
	dfs(a+1,b);
	dfs(a,b+1);
}
int main(){
	for(int i=0;i<10;i++){
		scanf("%s",t);
		for(int j=0;j<10;j++){
			if(t[j]=='_') m[i][j]=0;
			else m[i][j]=2;
		}
	}
	scanf("%d %d",&y,&x);
	dfs(x,y);
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(m[i][j]==0) printf("_");
			else printf("*");
		}
		printf("\n");
	}	
}
