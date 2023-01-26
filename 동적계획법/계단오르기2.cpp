#include <stdio.h>
int n[100001];
int f(int a){
	if(n[a]!=0) return n[a]%1000;
	n[a]=(f(a-3)%1000+f(a-2)%1000+f(a-1)%1000)%1000;
	return n[a]%1000;
}
int main(){
	int k;
	n[0]=0;
	n[1]=1;
	n[2]=2;
	n[3]=4;
	scanf("%d",&k);
	printf("%d",f(k));
}
