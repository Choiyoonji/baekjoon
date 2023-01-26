#include <stdio.h>
int n[201];
int f(int a){
	if(n[a]!=0) return n[a];
	n[a]=(f(a-2)+f(a-1))%10009;
	return n[a];
}
int main(){
	int k;
	n[1]=1;
	n[2]=1;
	scanf("%d",&k);
	printf("%d",f(k));
}
