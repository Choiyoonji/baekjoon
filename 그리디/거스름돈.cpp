#include<stdio.h>
int main(){
	int n, a=0;
	scanf("%d",&n);
	a+=n/50000;
	n%=50000;
	a+=n/10000;
	n%=10000;
	a+=n/5000;
	n%=5000;
	a+=n/1000;
	n%=1000;
	a+=n/500;
	n%=500;
	a+=n/100;
	n%=100;
	a+=n/50;
	n%=50;
	a+=n/10;
	printf("%d",a);
	return 0;
}
