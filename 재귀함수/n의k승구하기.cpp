#include<stdio.h>
long long int f(int a, int b){
	if(a==1) return 1;
	if(a==-1){
		if(b%2==0) return 1;
		else return -1;
	}
	if(b==0) return 1;
	if(b%2==0)
	return f(a,b/2)*f(a,b/2);
	else
	return f(a,b/2)*f(a,b/2)*a;
}
int main(){
	int n, k;
	scanf("%d%d",&n,&k);
	printf("%lld",f(n,k));
	return 0;
}
