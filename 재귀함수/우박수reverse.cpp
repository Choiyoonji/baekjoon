#include <stdio.h>
void f(int k)
{
	if(k==1) return ;
	if(k%2==1) {
		f(k*3+1);
		printf("%d\n",3*k+1);
	}
	else {
		f(k/2);
		printf("%d\n",k/2);
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	printf("%d",n);
	return 0;
}
