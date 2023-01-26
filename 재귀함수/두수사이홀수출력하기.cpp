#include<stdio.h>
void f(int a, int b){
	if(a<=b){
		if(a%2==1){
			printf("%d\n",a);
			f(a+2,b);
		} 
		else f(a+1,b);
	}
	else return ;
}
int main(){
	int n, m;
	scanf("%d%d",&n,&m);
	f(n, m);
	return 0;
}
