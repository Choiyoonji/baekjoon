#include <stdio.h>
int m[11][11];
char v[11][11];
int c[11][11];
int x,y;
int dx[8]={-1, 1, -1, 0, 1, -1, 0, 1};
int dy[8]={0, 0, 1, 1, 1, -1, -1, -1};
int f(int a, int b){
	int c=0;
	for(int i=0;i<8;i++){
		if(m[a+dy[i]][b+dx[i]]==1) c++;
	}
	return c;
}
void dfs(int a, int b){
	if(a==0||b==0||a==10||b==10||c[a][b]==1){
		return ;
	}
	c[a][b]=1;
	int r=f(a,b);
	if(r==0){
		v[a][b] = '0';
		for(int i=0;i<8;i++){
			dfs(a+dy[i],b+dx[i]);
		}
	}
	else{
		v[a][b]=r+'0';
	}
}
int main(){
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			scanf("%d",&m[i][j]);
			v[i][j]='_';
		}
	}
	scanf("%d %d",&x,&y);
	if(m[x][y]==1){
		for(int i=1;i<10;i++){
			for(int j=1;j<10;j++){
				if(i==x&&j==y) printf("-1 ");
				else printf("_ ");
			}
			printf("\n");
		}
		return 0;
	}
	dfs(x,y);
	for(int i=1;i<10;i++){
		for(int j=1;j<10;j++){
			printf("%c ",v[i][j]);
		}
		printf("\n");
	}
	return 0;
}

