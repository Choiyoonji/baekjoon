#include <stdio.h>
void f(int a){
	printf("%d\n",a);
	if(a==1) return ;
	if(a%2==1) f(a*3+1);
	else f(a/2);
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
}

