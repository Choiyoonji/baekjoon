#include<stdio.h>
#include<string.h>
char t[10000];
char f(int a){
	if(a>=strlen(t));
	else{
		f(a*2+1);
		f(a*2+2);
		printf("%c",t[a]);
	}
}
int main(){
	scanf("%s",t);
	f(0);
	return 0;
}
