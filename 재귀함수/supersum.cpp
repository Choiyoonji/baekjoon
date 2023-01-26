#include<stdio.h>
long long int m[15][15];
long long int s(int a, int b){
	if(a==0) m[a][b]=b; 
	if(m[a][b]!=0) return m[a][b];
	else for(int i=1;i<=b;i++) {
		m[a][b]+=s(a-1,i);
	}
	return m[a][b];
}
int main(){
	int k, n;
	while(scanf("%d %d",&k,&n) != EOF){
		printf("%d\n",s(k,n));
	}
	return 0;
}
