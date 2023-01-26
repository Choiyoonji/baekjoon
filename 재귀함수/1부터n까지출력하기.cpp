#include<stdio.h>
void f(int a, int b){
	if(a>=b){
		printf("%d\n",b);
		return f(a, b+1);
	}
	else return ;
}
int main(){
	int n, m=1;
	scanf("%d",&n);
	f(n, m);
	return 0;
}