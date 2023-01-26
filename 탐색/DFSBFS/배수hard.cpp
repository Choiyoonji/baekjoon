#include <stdio.h>
unsigned long long int n;
unsigned long long int m=11111111111111111112;
void f(unsigned long long int k){
	if(k%n==0){
		if(m>k) m=k;
		return ;
	}
	if(k>m/10){
		return ;
	}
	f(k*10+1);
	f(k*10);
}
int main(){
	scanf("%llu",&n);
	if(n==11111111111111111111){
		printf("11111111111111111111");
		return 0;
	}
	f(1);
	if(m==11111111111111111112) printf("0");
	else printf("%llu",m);
	return 0;
}
