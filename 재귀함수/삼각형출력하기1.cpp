#include <stdio.h>
int i=0, j=1;
void f(int a)
{
	if(i<j){
		printf("*");
		i++;
		f(a);
	}
	else
		if(j<a){
			printf("\n");
			++j;
			i=0;
			f(a);
		}
}
int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}
