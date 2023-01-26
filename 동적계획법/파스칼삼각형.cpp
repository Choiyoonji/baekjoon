#include <stdio.h>
long long int a[52][52]={0,};
int main(){
	int n, i, j, k;
	scanf("%d",&n);
	a[1][1]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%lld ",a[i][j]);
			a[i+1][j]+=a[i][j];
			a[i+1][j+1]+=a[i][j];
		}
		printf("\n");
	}
	return 0;
}
