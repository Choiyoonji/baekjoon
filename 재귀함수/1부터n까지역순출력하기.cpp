#include<stdio.h>
void f(int a){
	if(a>0){
		printf("%d\n",a);
		f(a-1);
	} 
	else return ;
}
int main(){
	int n, m=1;
	scanf("%d",&n);
	f(n);
	return 0;
}