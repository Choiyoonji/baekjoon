#include <stdio.h>
int i=0, a[50];
void f(int k)
{
	if(k<1) return ;
	a[i]=k%2;
	i++;
	return f(k/2);
}
void p(){
	if(i==-1) return ;
	printf("%d", a[i]);
	i--;
	p();
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=1)
	{
		printf("%d",n);
		return 0;
	}
	f(n);
	i--;
	p();
	return 0;
}
