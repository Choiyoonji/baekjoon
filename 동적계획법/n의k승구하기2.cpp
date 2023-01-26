#include<stdio.h>
long long int f(int a, int b){
	if(a==1) return 1;
	if(b==0) return 1;
	if(b%2==0)
	return f(a,b/2)%1000000007*f(a,b/2)%1000000007;
	else
	return f(a,b/2)%1000000007*f(a,b/2)%1000000007*a%1000000007;
}
int main(){
	int n, k;
	scanf("%d%d",&n,&k);
	printf("%lld",f(n,k));
	return 0;
}
