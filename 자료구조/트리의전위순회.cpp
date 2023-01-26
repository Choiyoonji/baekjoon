#include<stdio.h>
#include<string.h>
char t[10000];
char f(int a){
	if(a>=strlen(t));
	else{
		printf("%c",t[a]);
		f(a*2+1);
		f(a*2+2);
	}
}
int main(){
	scanf("%s",t);
	f(0);
	return 0;
}
