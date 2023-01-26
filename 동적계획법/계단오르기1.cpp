#include <stdio.h>
int n, m;
void f(int a){
	if(a<=m){
		if(m==a) n++;
		return ;
	}
	f(a-1);
	f(a-2);
}
int main(){
	int k;
	scanf("%d",&k);
	f(k);
	printf("%d",n);
	return 0;
}
