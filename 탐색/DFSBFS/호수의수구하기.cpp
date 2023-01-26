#include <stdio.h>
#include <string.h>
int m[101][101];
int x, y;
char t[202];
int f(int a, int b){
	if(a==-1||b==-1||a==x||b==y){
		return 0;
	}
	if(m[a][b]!=1) return 0;
	if(m[a][b]==1){
		m[a][b]=2;
		return f(a-1,b)+f(a+1,b)+f(a,b-1)+f(a,b+1)+f(a-1,b-1)+f(a-1,b+1)+f(a+1,b-1)+f(a+1,b+1);
	}
}
int main(){
	scanf("%d %d",&y,&x);
	for(int i=0;i<=x;i++){
		fgets(t,201,stdin);
		for(int j=0;j<strlen(t);j++){
			if(t[j]=='L') m[i-1][j/2]=1;
			if(t[j]=='.') m[i-1][j/2]=0;
		}
	}
	int na=0;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(m[i][j]!=2){
				if(m[i][j]==1) na++;
				f(i,j);
			}
		}
	}
	printf("%d",na);
}
