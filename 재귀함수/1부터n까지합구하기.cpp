#include<stdio.h>
int n, s=0;
int f(int b){
	if(b>=n){
		s+=b;
		return s;
	}
	s+=b;
	f(b+1);
}
int main(){
	scanf("%d",&n);
	printf("%d",f(1));
	return 0;
}
